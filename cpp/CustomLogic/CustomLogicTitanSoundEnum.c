// Type: CustomLogic.CustomLogicTitanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanSoundEnum_o* CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41a7c30

CustomLogic_CustomLogicTitanSoundEnum_o *
CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicTitanSoundEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad483 == '\0') {
    pSStack_20 = (System_String_o *)0x41a7c4c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanSoundEnum);
    g_data_057ad483 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41a7cc7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41a7c76;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanSoundEnum);
    if (g_data_057ad456 == '\0') {
      pSStack_20 = (System_String_o *)0x41a7c8e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad456 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41a7cad;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41a7cb7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTitanSoundEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41a7ccf;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41a7ce2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41a7cf1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTitanSoundEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41a7d00;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41a7d10;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41a7d1f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41a7d27;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41a7d37;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41a7d43;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTitanSoundEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41a7d4e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad484 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Hurt2");
    il2cpp_runtime_helper_023445d0(&"Huff2");
    il2cpp_runtime_helper_023445d0(&"Swing3");
    il2cpp_runtime_helper_023445d0(&"Huff4");
    il2cpp_runtime_helper_023445d0(&"DeathNoFall");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"RockThrow2");
    il2cpp_runtime_helper_023445d0(&"Huff1");
    il2cpp_runtime_helper_023445d0(&"Grunt1");
    il2cpp_runtime_helper_023445d0(&"TitanJump");
    il2cpp_runtime_helper_023445d0(&"Laugh2");
    il2cpp_runtime_helper_023445d0(&"Hurt3");
    il2cpp_runtime_helper_023445d0(&"Bite1");
    il2cpp_runtime_helper_023445d0(&"Huff6");
    il2cpp_runtime_helper_023445d0(&"Grunt4");
    il2cpp_runtime_helper_023445d0(&"Hurt5");
    il2cpp_runtime_helper_023445d0(&"Footstep3");
    il2cpp_runtime_helper_023445d0(&"Grunt2");
    il2cpp_runtime_helper_023445d0(&"Grunt6");
    il2cpp_runtime_helper_023445d0(&"Grunt10");
    il2cpp_runtime_helper_023445d0(&"Swing1");
    il2cpp_runtime_helper_023445d0(&"Hurt4");
    il2cpp_runtime_helper_023445d0(&"Hurt8");
    il2cpp_runtime_helper_023445d0(&"Huff5");
    il2cpp_runtime_helper_023445d0(&"Hit");
    il2cpp_runtime_helper_023445d0(&"Hurt1");
    il2cpp_runtime_helper_023445d0(&"Hurt6");
    il2cpp_runtime_helper_023445d0(&"Bite2");
    il2cpp_runtime_helper_023445d0(&"Swing2");
    il2cpp_runtime_helper_023445d0(&"DeathFall");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"RockPickup");
    il2cpp_runtime_helper_023445d0(&"Grunt5");
    il2cpp_runtime_helper_023445d0(&"Grunt7");
    il2cpp_runtime_helper_023445d0(&"Grunt9");
    il2cpp_runtime_helper_023445d0(&"Roar2");
    il2cpp_runtime_helper_023445d0(&"Grunt8");
    il2cpp_runtime_helper_023445d0(&"Laugh1");
    il2cpp_runtime_helper_023445d0(&"Grunt3");
    il2cpp_runtime_helper_023445d0(&"Hurt7");
    il2cpp_runtime_helper_023445d0(&"Roar1");
    il2cpp_runtime_helper_023445d0(&"Huff3");
    il2cpp_runtime_helper_023445d0(&"RockThrow1");
    g_data_057ad484 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x44d927e0) {
    if (uVar1 < 0x21d25cf2) {
      if (uVar1 < 0x1ae90931) {
        if (uVar1 < 0xfb1ddde) {
          if (uVar1 == 0xcb1d924) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Roar1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad49e == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar1_g____getter_27_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
                g_data_057ad49e = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xfb1dddd) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Roar2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad49f == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar2_g____getter_28_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
                g_data_057ad49f = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x15c63468) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DeathFall",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad4a0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathFall_g____getter_29);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad4a0 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x16d24ba0) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad492 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt8_g____getter_15_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad492 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1ae90930) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Footstep3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad487 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep3_g____getter_4);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad487 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x1ce90c57) {
        if (uVar1 == 0x1be90ac3) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Footstep2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad486 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_3);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad486 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1ce90c56) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Footstep1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            ppuVar10 = (undefined8 **)&uStack_18;
            pSVar7 = pSStack_28;
            pSVar3 = pSStack_20;
            goto CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1;
          }
        }
      }
      else if (uVar1 == 0x1fd259cb) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad48b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt1_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x20d25b5e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad48c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt2_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x21d25cf1) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad48d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt3_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48d = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x25d2633e) {
      if (uVar1 < 0x23d26018) {
        if (uVar1 == 0x22d25e84) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad48e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt4_g____getter_11_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad48e = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x23d26017) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt5",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad48f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt5_g____getter_12_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad48f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x24389c31) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TitanJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4ac == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanJump_g____getter_41);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ac = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x24d261aa) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad490 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt6_g____getter_13_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad490 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x25d2633d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hurt7",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad491 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt7_g____getter_14_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad491 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x41d92327) {
      if (uVar1 == 0x26b48368) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockPickup",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4ad == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockPickup_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ad = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x3fd92000) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad493 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt1_g____getter_16_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad493 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x41d92326) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad495 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt3_g____getter_18_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad495 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x42d924b9) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad494 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt2_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad494 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x43d9264c) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad497 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt5_g____getter_20_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad497 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x44d927df) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt4",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad496 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt4_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad496 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0x916e2c5a) {
    if (uVar1 < 0x655d504b) {
      if (uVar1 < 0x46d92b06) {
        if (uVar1 == 0x45d92972) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt7",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad499 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt7_g____getter_22_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad499 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x46d92b05) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt6",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad498 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt6_g____getter_21_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad498 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x47d92c98) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt9",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad49b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt9_g____getter_24_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad49b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x48d92e2b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt8",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad49a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt8_g____getter_23_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad49a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x655d504a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Hit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad49d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hit_g____getter_26_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad49d = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x8b2852c2) {
      if (uVar1 == 0x88284e08) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Swing1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad488 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing1_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad488 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x8a28512e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Swing3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad48a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing3_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x8b2852c1) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Swing2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad489 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing2_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad489 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x8e6e27a0) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff2_g____getter_36_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a7 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x8f6e2933) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff3_g____getter_37_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a8 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x916e2c59) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff1_g____getter_35_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a6 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xa109122b) {
    if (uVar1 < 0x946e3113) {
      if (uVar1 == 0x926e2dec) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4ab == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff6_g____getter_40_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ab = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x946e3112) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff4",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4a9 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff4_g____getter_38_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4a9 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x956e32a5) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Huff5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4aa == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff5_g____getter_39_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4aa = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa0091097) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockThrow1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4ae == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow1_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4ae = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa109122a) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockThrow2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4af == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow2_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4af = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xad6b6e7b) {
    if (uVar1 == 0xac6b6ce7) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Bite2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite2_g____getter_32_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a3 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xad627477) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DeathNoFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathNoFall_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a1 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xad6b6e7a) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Bite1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4a2 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite1_g____getter_31_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a2 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xb2cdab90) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grunt10",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad49c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt10_g____getter_25_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad49c = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xc25fad04) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Laugh2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh2_g____getter_34_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4a5 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xc55fb1bd) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Laugh1",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4a4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh1_g____getter_33_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4a4 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanSoundEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad485 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d39;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_2);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad485 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d73;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d8c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8d9b;
  pCVar9 = (CustomLogic_CustomLogicTitanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a8db5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41a7d50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad484 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Hurt2");
    il2cpp_runtime_helper_023445d0(&"Huff2");
    il2cpp_runtime_helper_023445d0(&"Swing3");
    il2cpp_runtime_helper_023445d0(&"Huff4");
    il2cpp_runtime_helper_023445d0(&"DeathNoFall");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"RockThrow2");
    il2cpp_runtime_helper_023445d0(&"Huff1");
    il2cpp_runtime_helper_023445d0(&"Grunt1");
    il2cpp_runtime_helper_023445d0(&"TitanJump");
    il2cpp_runtime_helper_023445d0(&"Laugh2");
    il2cpp_runtime_helper_023445d0(&"Hurt3");
    il2cpp_runtime_helper_023445d0(&"Bite1");
    il2cpp_runtime_helper_023445d0(&"Huff6");
    il2cpp_runtime_helper_023445d0(&"Grunt4");
    il2cpp_runtime_helper_023445d0(&"Hurt5");
    il2cpp_runtime_helper_023445d0(&"Footstep3");
    il2cpp_runtime_helper_023445d0(&"Grunt2");
    il2cpp_runtime_helper_023445d0(&"Grunt6");
    il2cpp_runtime_helper_023445d0(&"Grunt10");
    il2cpp_runtime_helper_023445d0(&"Swing1");
    il2cpp_runtime_helper_023445d0(&"Hurt4");
    il2cpp_runtime_helper_023445d0(&"Hurt8");
    il2cpp_runtime_helper_023445d0(&"Huff5");
    il2cpp_runtime_helper_023445d0(&"Hit");
    il2cpp_runtime_helper_023445d0(&"Hurt1");
    il2cpp_runtime_helper_023445d0(&"Hurt6");
    il2cpp_runtime_helper_023445d0(&"Bite2");
    il2cpp_runtime_helper_023445d0(&"Swing2");
    il2cpp_runtime_helper_023445d0(&"DeathFall");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"RockPickup");
    il2cpp_runtime_helper_023445d0(&"Grunt5");
    il2cpp_runtime_helper_023445d0(&"Grunt7");
    il2cpp_runtime_helper_023445d0(&"Grunt9");
    il2cpp_runtime_helper_023445d0(&"Roar2");
    il2cpp_runtime_helper_023445d0(&"Grunt8");
    il2cpp_runtime_helper_023445d0(&"Laugh1");
    il2cpp_runtime_helper_023445d0(&"Grunt3");
    il2cpp_runtime_helper_023445d0(&"Hurt7");
    il2cpp_runtime_helper_023445d0(&"Roar1");
    il2cpp_runtime_helper_023445d0(&"Huff3");
    il2cpp_runtime_helper_023445d0(&"RockThrow1");
    g_data_057ad484 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x44d927e0) {
    if (uVar1 < 0x21d25cf2) {
      if (uVar1 < 0x1ae90931) {
        if (uVar1 < 0xfb1ddde) {
          if (uVar1 == 0xcb1d924) {
            bVar2 = System_String__op_Equality(name,"Roar1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad49e == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar1_g____getter_27_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
                g_data_057ad49e = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0xfb1dddd) &&
                  (bVar2 = System_String__op_Equality(name,"Roar2",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad49f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar2_g____getter_28_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad49f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x15c63468) {
          bVar2 = System_String__op_Equality(name,"DeathFall",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad4a0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathFall_g____getter_29);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad4a0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x16d24ba0) {
          bVar2 = System_String__op_Equality(name,"Hurt8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad492 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt8_g____getter_15_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad492 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1ae90930) &&
                (bVar2 = System_String__op_Equality(name,"Footstep3",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad487 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep3_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad487 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x1ce90c57) {
        if (uVar1 == 0x1be90ac3) {
          bVar2 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad486 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_3);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad486 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1ce90c56) &&
                (bVar2 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1;
        }
      }
      else if (uVar1 == 0x1fd259cb) {
        bVar2 = System_String__op_Equality(name,"Hurt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad48b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt1_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x20d25b5e) {
        bVar2 = System_String__op_Equality(name,"Hurt2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad48c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt2_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x21d25cf1) &&
              (bVar2 = System_String__op_Equality(name,"Hurt3",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad48d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt3_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad48d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x25d2633e) {
      if (uVar1 < 0x23d26018) {
        if (uVar1 == 0x22d25e84) {
          bVar2 = System_String__op_Equality(name,"Hurt4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad48e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt4_g____getter_11_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad48e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x23d26017) &&
                (bVar2 = System_String__op_Equality(name,"Hurt5",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad48f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt5_g____getter_12_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x24389c31) {
        bVar2 = System_String__op_Equality(name,"TitanJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad4ac == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanJump_g____getter_41);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ac = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x24d261aa) {
        bVar2 = System_String__op_Equality(name,"Hurt6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad490 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt6_g____getter_13_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad490 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x25d2633d) &&
              (bVar2 = System_String__op_Equality(name,"Hurt7",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad491 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt7_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad491 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x41d92327) {
      if (uVar1 == 0x26b48368) {
        bVar2 = System_String__op_Equality(name,"RockPickup",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad4ad == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockPickup_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ad = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3fd92000) {
        bVar2 = System_String__op_Equality(name,"Grunt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad493 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt1_g____getter_16_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad493 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x41d92326) &&
              (bVar2 = System_String__op_Equality(name,"Grunt3",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad495 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt3_g____getter_18_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad495 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x42d924b9) {
      bVar2 = System_String__op_Equality(name,"Grunt2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad494 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt2_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad494 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x43d9264c) {
      bVar2 = System_String__op_Equality(name,"Grunt5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad497 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt5_g____getter_20_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad497 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x44d927df) &&
            (bVar2 = System_String__op_Equality(name,"Grunt4",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad496 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt4_g____getter_19_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad496 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x916e2c5a) {
    if (uVar1 < 0x655d504b) {
      if (uVar1 < 0x46d92b06) {
        if (uVar1 == 0x45d92972) {
          bVar2 = System_String__op_Equality(name,"Grunt7",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad499 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt7_g____getter_22_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
              g_data_057ad499 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x46d92b05) &&
                (bVar2 = System_String__op_Equality(name,"Grunt6",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad498 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt6_g____getter_21_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad498 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x47d92c98) {
        bVar2 = System_String__op_Equality(name,"Grunt9",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad49b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt9_g____getter_24_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad49b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x48d92e2b) {
        bVar2 = System_String__op_Equality(name,"Grunt8",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad49a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt8_g____getter_23_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad49a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x655d504a) &&
              (bVar2 = System_String__op_Equality(name,"Hit",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad49d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hit_g____getter_26_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad49d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x8b2852c2) {
      if (uVar1 == 0x88284e08) {
        bVar2 = System_String__op_Equality(name,"Swing1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad488 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing1_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad488 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8a28512e) {
        bVar2 = System_String__op_Equality(name,"Swing3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad48a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing3_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad48a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x8b2852c1) &&
              (bVar2 = System_String__op_Equality(name,"Swing2",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad489 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing2_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad489 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8e6e27a0) {
      bVar2 = System_String__op_Equality(name,"Huff2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff2_g____getter_36_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8f6e2933) {
      bVar2 = System_String__op_Equality(name,"Huff3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4a8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff3_g____getter_37_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x916e2c59) &&
            (bVar2 = System_String__op_Equality(name,"Huff1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff1_g____getter_35_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4a6 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xa109122b) {
    if (uVar1 < 0x946e3113) {
      if (uVar1 == 0x926e2dec) {
        bVar2 = System_String__op_Equality(name,"Huff6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad4ab == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff6_g____getter_40_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
            g_data_057ad4ab = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x946e3112) &&
              (bVar2 = System_String__op_Equality(name,"Huff4",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4a9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff4_g____getter_38_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x956e32a5) {
      bVar2 = System_String__op_Equality(name,"Huff5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4aa == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff5_g____getter_39_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4aa = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa0091097) {
      bVar2 = System_String__op_Equality(name,"RockThrow1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4ae == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow1_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4ae = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xa109122a) &&
            (bVar2 = System_String__op_Equality(name,"RockThrow2",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4af == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow2_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4af = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xad6b6e7b) {
    if (uVar1 == 0xac6b6ce7) {
      bVar2 = System_String__op_Equality(name,"Bite2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite2_g____getter_32_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xad627477) {
      bVar2 = System_String__op_Equality(name,"DeathNoFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4a1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathNoFall_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
          g_data_057ad4a1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xad6b6e7a) &&
            (bVar2 = System_String__op_Equality(name,"Bite1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite1_g____getter_31_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4a2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xb2cdab90) {
    bVar2 = System_String__op_Equality(name,"Grunt10",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad49c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt10_g____getter_25_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad49c = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xc25fad04) {
    bVar2 = System_String__op_Equality(name,"Laugh2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh2_g____getter_34_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
        g_data_057ad4a5 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xc55fb1bd) &&
          (bVar2 = System_String__op_Equality(name,"Laugh1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad4a4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh1_g____getter_33_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
      g_data_057ad4a4 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanSoundEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad485 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d39;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad485 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d73;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d8c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8d9b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a8db5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x41a8d20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad485 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad485 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x41a8dc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad486 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad486 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3 (const MethodInfo* method);
// 0x41a8e60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad487 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep3_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad487 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1 (const MethodInfo* method);
// 0x41a8f00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad488 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing1_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad488 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2 (const MethodInfo* method);
// 0x41a8fa0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad489 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing2_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad489 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3 (const MethodInfo* method);
// 0x41a9040

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Swing3_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1 (const MethodInfo* method);
// 0x41a90e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt1_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2 (const MethodInfo* method);
// 0x41a9180

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt2_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3 (const MethodInfo* method);
// 0x41a9220

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt3_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4 (const MethodInfo* method);
// 0x41a92c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt4_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5 (const MethodInfo* method);
// 0x41a9360

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad48f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt5_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad48f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6 (const MethodInfo* method);
// 0x41a9400

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad490 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt6_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad490 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7 (const MethodInfo* method);
// 0x41a94a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad491 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt7_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad491 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8 (const MethodInfo* method);
// 0x41a9540

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad492 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hurt8_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad492 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1 (const MethodInfo* method);
// 0x41a95e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad493 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt1_g____getter_16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad493 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2 (const MethodInfo* method);
// 0x41a9680

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad494 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt2_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad494 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3 (const MethodInfo* method);
// 0x41a9720

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad495 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt3_g____getter_18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad495 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4 (const MethodInfo* method);
// 0x41a97c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad496 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt4_g____getter_19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad496 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5 (const MethodInfo* method);
// 0x41a9860

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad497 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt5_g____getter_20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad497 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6 (const MethodInfo* method);
// 0x41a9900

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad498 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt6_g____getter_21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad498 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7 (const MethodInfo* method);
// 0x41a99a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad499 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt7_g____getter_22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad499 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8 (const MethodInfo* method);
// 0x41a9a40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt8_g____getter_23_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9 (const MethodInfo* method);
// 0x41a9ae0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt9_g____getter_24_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10 (const MethodInfo* method);
// 0x41a9b80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grunt10_g____getter_25_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit (const MethodInfo* method);
// 0x41a9c20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Hit_g____getter_26_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1 (const MethodInfo* method);
// 0x41a9cc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar1_g____getter_27_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2 (const MethodInfo* method);
// 0x41a9d60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Roar2_g____getter_28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad49f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall (const MethodInfo* method);
// 0x41a9e00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathFall_g____getter_29);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathNoFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall (const MethodInfo* method);
// 0x41a9ea0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DeathNoFall_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1 (const MethodInfo* method);
// 0x41a9f40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite1_g____getter_31_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2 (const MethodInfo* method);
// 0x41a9fe0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bite2_g____getter_32_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1 (const MethodInfo* method);
// 0x41aa080

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh1_g____getter_33_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2 (const MethodInfo* method);
// 0x41aa120

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Laugh2_g____getter_34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1 (const MethodInfo* method);
// 0x41aa1c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff1_g____getter_35_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2 (const MethodInfo* method);
// 0x41aa260

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff2_g____getter_36_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3 (const MethodInfo* method);
// 0x41aa300

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff3_g____getter_37_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4 (const MethodInfo* method);
// 0x41aa3a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff4_g____getter_38_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4a9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5 (const MethodInfo* method);
// 0x41aa440

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff5_g____getter_39_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4aa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6 (const MethodInfo* method);
// 0x41aa4e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Huff6_g____getter_40_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4ab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__TitanJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump (const MethodInfo* method);
// 0x41aa580

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanJump_g____getter_41);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4ac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockPickup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup (const MethodInfo* method);
// 0x41aa620

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockPickup_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4ad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1 (const MethodInfo* method);
// 0x41aa6c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow1_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4ae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2 (const MethodInfo* method);
// 0x41aa760

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (g_data_057ad4af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockThrow2_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanSoundEnum_object);
    g_data_057ad4af = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x41aa800

void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Hurt2");
    il2cpp_runtime_helper_023445d0(&"Huff2");
    il2cpp_runtime_helper_023445d0(&"Swing3");
    il2cpp_runtime_helper_023445d0(&"Huff4");
    il2cpp_runtime_helper_023445d0(&"DeathNoFall");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"RockThrow2");
    il2cpp_runtime_helper_023445d0(&"Huff1");
    il2cpp_runtime_helper_023445d0(&"Grunt1");
    il2cpp_runtime_helper_023445d0(&"TitanJump");
    il2cpp_runtime_helper_023445d0(&"Laugh2");
    il2cpp_runtime_helper_023445d0(&"Hurt3");
    il2cpp_runtime_helper_023445d0(&"Bite1");
    il2cpp_runtime_helper_023445d0(&"Huff6");
    il2cpp_runtime_helper_023445d0(&"Grunt4");
    il2cpp_runtime_helper_023445d0(&"Hurt5");
    il2cpp_runtime_helper_023445d0(&"Footstep3");
    il2cpp_runtime_helper_023445d0(&"Grunt2");
    il2cpp_runtime_helper_023445d0(&"Grunt6");
    il2cpp_runtime_helper_023445d0(&"Grunt10");
    il2cpp_runtime_helper_023445d0(&"Swing1");
    il2cpp_runtime_helper_023445d0(&"Hurt4");
    il2cpp_runtime_helper_023445d0(&"Hurt8");
    il2cpp_runtime_helper_023445d0(&"Huff5");
    il2cpp_runtime_helper_023445d0(&"Hit");
    il2cpp_runtime_helper_023445d0(&"Hurt1");
    il2cpp_runtime_helper_023445d0(&"Hurt6");
    il2cpp_runtime_helper_023445d0(&"Bite2");
    il2cpp_runtime_helper_023445d0(&"Swing2");
    il2cpp_runtime_helper_023445d0(&"DeathFall");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"RockPickup");
    il2cpp_runtime_helper_023445d0(&"Grunt5");
    il2cpp_runtime_helper_023445d0(&"Grunt7");
    il2cpp_runtime_helper_023445d0(&"Grunt9");
    il2cpp_runtime_helper_023445d0(&"Roar2");
    il2cpp_runtime_helper_023445d0(&"Grunt8");
    il2cpp_runtime_helper_023445d0(&"Laugh1");
    il2cpp_runtime_helper_023445d0(&"Grunt3");
    il2cpp_runtime_helper_023445d0(&"Hurt7");
    il2cpp_runtime_helper_023445d0(&"Roar1");
    il2cpp_runtime_helper_023445d0(&"Huff3");
    il2cpp_runtime_helper_023445d0(&"RockThrow1");
    g_data_057ad4b0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Footstep1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Footstep2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Footstep3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Swing1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Swing2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Swing3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hurt8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt9",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grunt10",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Hit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Roar1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Roar2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DeathFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DeathNoFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Bite1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Bite2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Laugh1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Laugh2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Huff6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockPickup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockThrow1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockThrow2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad660 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad660 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aae40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad660 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad660 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aaeb0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad661 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad661 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aaf20

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad662 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad662 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aaf90

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad663 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad663 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab000

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad664 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad664 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing3>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab070

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad665 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad665 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab0e0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad666 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad666 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab150

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad667 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad667 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab1c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad668 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad668 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab230

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad669 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad669 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab2a0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab310

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab380

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab3f0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab460

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab4d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad66f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad66f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab540

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad670 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad670 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab5b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad671 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad671 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt5>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab620

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad672 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad672 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt6>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab690

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad673 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad673 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt7>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab700

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad674 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad674 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt8>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab770

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad675 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad675 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt9>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab7e0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad676 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad676 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt10>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab850

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad677 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad677 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hit>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab8c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad678 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad678 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab930

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad679 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad679 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ab9a0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathFall>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aba10

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathNoFall>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41aba80

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite1>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_31_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abaf0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_31_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite2>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_32_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abb60

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_32_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh1>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_33_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abbd0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_33_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad67f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad67f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh2>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_34_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abc40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_34_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad680 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad680 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff1>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_35_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abcb0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_35_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad681 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad681 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff2>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_36_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abd20

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_36_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad682 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad682 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff3>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_37_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abd90

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_37_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad683 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad683 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff4>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_38_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abe00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_38_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad684 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad684 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff5>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_39_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abe70

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_39_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad685 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad685 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff6>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_40_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abee0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_40_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad686 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad686 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__TitanJump>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_41_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abf50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_41_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad687 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad687 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockPickup>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_42_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41abfc0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_42_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad688 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad688 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow1>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_43_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ac030

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_43_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad689 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad689 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow2>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_44_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x41ac0a0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_44_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad68a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad68a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum___ctor (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x41a6890

void CustomLogic_CustomLogicTitanSoundEnum___ctor
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad456 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad456 = '\x01';
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


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x41a6900

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad457 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad457 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x41a6970

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad458 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad458 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3 (const MethodInfo* method);
// 0x41a69e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad459 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad459 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing1 (const MethodInfo* method);
// 0x41a6a50

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing2 (const MethodInfo* method);
// 0x41a6ac0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing3 (const MethodInfo* method);
// 0x41a6b30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1 (const MethodInfo* method);
// 0x41a6ba0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2 (const MethodInfo* method);
// 0x41a6c10

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3 (const MethodInfo* method);
// 0x41a6c80

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad45f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad45f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4 (const MethodInfo* method);
// 0x41a6cf0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad460 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad460 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5 (const MethodInfo* method);
// 0x41a6d60

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad461 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad461 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6 (const MethodInfo* method);
// 0x41a6dd0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad462 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad462 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7 (const MethodInfo* method);
// 0x41a6e40

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad463 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad463 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8 (const MethodInfo* method);
// 0x41a6eb0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad464 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1 (const MethodInfo* method);
// 0x41a6f20

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad465 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2 (const MethodInfo* method);
// 0x41a6f90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad466 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad466 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3 (const MethodInfo* method);
// 0x41a7000

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad467 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad467 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4 (const MethodInfo* method);
// 0x41a7070

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad468 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad468 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5 (const MethodInfo* method);
// 0x41a70e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad469 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad469 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6 (const MethodInfo* method);
// 0x41a7150

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7 (const MethodInfo* method);
// 0x41a71c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8 (const MethodInfo* method);
// 0x41a7230

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt9
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9 (const MethodInfo* method);
// 0x41a72a0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt10
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10 (const MethodInfo* method);
// 0x41a7310

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hit (const MethodInfo* method);
// 0x41a7380

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad46f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad46f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar1 (const MethodInfo* method);
// 0x41a73f0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad470 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad470 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar2 (const MethodInfo* method);
// 0x41a7460

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad471 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad471 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall (const MethodInfo* method);
// 0x41a74d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad472 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathNoFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall (const MethodInfo* method);
// 0x41a7540

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad473 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite1 (const MethodInfo* method);
// 0x41a75b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad474 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad474 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite2 (const MethodInfo* method);
// 0x41a7620

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad475 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad475 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1 (const MethodInfo* method);
// 0x41a7690

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad476 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad476 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2 (const MethodInfo* method);
// 0x41a7700

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad477 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad477 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff1 (const MethodInfo* method);
// 0x41a7770

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad478 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad478 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff2 (const MethodInfo* method);
// 0x41a77e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad479 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad479 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff3 (const MethodInfo* method);
// 0x41a7850

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff4 (const MethodInfo* method);
// 0x41a78c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff5 (const MethodInfo* method);
// 0x41a7930

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff6 (const MethodInfo* method);
// 0x41a79a0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff6(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_TitanJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump (const MethodInfo* method);
// 0x41a7a10

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockPickup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup (const MethodInfo* method);
// 0x41a7a80

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad47f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad47f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1 (const MethodInfo* method);
// 0x41a7af0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad480 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad480 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2 (const MethodInfo* method);
// 0x41a7b60

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad481 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ad481 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_ClassName (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x41a7bd0

System_String_o *
CustomLogic_CustomLogicTitanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad482 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TitanSoundEnum");
    g_data_057ad482 = '\x01';
  }
  return "TitanSoundEnum";
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x41a7c00

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x41a7c10

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x41a7c20

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


