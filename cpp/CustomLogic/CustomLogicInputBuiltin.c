// Type: CustomLogic.CustomLogicInputBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicInputBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicInputBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputBuiltin_o* CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41cb930

CustomLogic_CustomLogicInputBuiltin_o *
CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CustomLogicInputBuiltin_o *pCVar10;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad64d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputBuiltin);
    g_data_057ad64d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputBuiltin);
    if (g_data_057ad638 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad638 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicInputBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad64e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetGeneralKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetScreenDimensions");
    il2cpp_runtime_helper_023445d0(&"GetKeyHold");
    il2cpp_runtime_helper_023445d0(&"SetCategoryKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetHumanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetKeyName");
    il2cpp_runtime_helper_023445d0(&"GetMouseAim");
    il2cpp_runtime_helper_023445d0(&"GetKeyDown");
    il2cpp_runtime_helper_023445d0(&"SetKeyDefaultEnabled");
    il2cpp_runtime_helper_023445d0(&"GetCursorAimDirection");
    il2cpp_runtime_helper_023445d0(&"GetMouseSpeed");
    il2cpp_runtime_helper_023445d0(&"SetInteractionKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetMousePosition");
    il2cpp_runtime_helper_023445d0(&"GetKeyUp");
    il2cpp_runtime_helper_023445d0(&"SetTitanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetKeyHold");
    g_data_057ad64e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x8b47cad3) {
    if (uVar3 < 0x299fa333) {
      if (uVar3 < 0x1fca2dcc) {
        if (uVar3 == 0x2888963) {
          bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetKeyUp",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_30 = pSStack_28;
            if (g_data_057ad652 == '\0') {
              pSStack_28 = (System_ArgumentException_o *)pSVar5;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyUp_b__5_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057ad652 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
              pSStack_28 = (System_ArgumentException_o *)pSVar5;
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
            }
            pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            return pCVar10;
          }
        }
        else if ((uVar3 == 0x1fca2dcb) &&
                (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetCursorAimDirection",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad654 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCursorAimDirection_b__7);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad654 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return pCVar10;
        }
      }
      else if (uVar3 == 0x230f7b6c) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetTitanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad65d == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTitanKeysEnabled_b__16);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad65d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0x299fa332) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetGeneralKeysEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad65b == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetGeneralKeysEnabled_b__1);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad65b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 < 0x423fef7d) {
      if (uVar3 == 0x3ce5bffd) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetHumanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad65e == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetHumanKeysEnabled_b__17);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad65e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0x423fef7c) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetKeyDefaultEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad658 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyDefaultEnabled_b__11);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad658 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 == 0x8b47cad2) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetInteractionKeysEnabled",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad65c == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetInteractionKeysEnabled);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad65c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0x779ad7dd) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetMousePosition",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad656 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMousePosition_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad656 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 < 0xbd218aad) {
    if (uVar3 < 0xa3a3c236) {
      if (uVar3 == 0xa17036af) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetKeyHold",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad650 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyHold_b__3_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad650 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0xa3a3c235) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetMouseSpeed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad655 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseSpeed_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad655 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 == 0xa4899163) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetKeyHold",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad659 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyHold_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad659 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0xbd218aac) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetCategoryKeysEnabled",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad65a == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCategoryKeysEnabled_b);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad65a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 < 0xca5c42a8) {
    if (uVar3 == 0xc37a5fcd) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetKeyName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppSVar11 = (System_ArgumentException_o **)&uStack_18;
        pSVar8 = pSStack_28;
        goto CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName;
      }
    }
    else if ((uVar3 == 0xca5c42a7) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetMouseAim",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad653 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseAim_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad653 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 == 0xd098c4f6) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetKeyDown",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad651 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyDown_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad651 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return pCVar10;
    }
  }
  else if ((uVar3 == 0xd6be4d6a) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetScreenDimensions",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ad657 == '\0') {
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetScreenDimensions_b__10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad657 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar9);
    }
    pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    return pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName:
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar11 + -0x10) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar8;
  if (g_data_057ad64f == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc149;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc155;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc161;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc16d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyName_b__2_0);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc179;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad64f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc19c;
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc0eb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc107;
    pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc121;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc13b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc1c2;
  pCVar10 = (CustomLogic_CustomLogicInputBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41cc1da;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41cd860

void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad699 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad699 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41cd8d0

void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyName>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cd8e0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  undefined1 uStack_41;
  long lStack_40;
  undefined1 uStack_29;
  long lStack_28;
  undefined1 uStack_11;
  System_Object_array *pSStack_10;
  
  if (g_data_057ad69a == '\0') {
    pSStack_10 = (System_Object_array *)0x41cd8f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_10 = (System_Object_array *)0x41cd905;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    pSStack_10 = (System_Object_array *)0x41cd955;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_10 = (System_Object_array *)0x41cd933;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_10 = (System_Object_array *)0x41cd945;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    pSVar2 = CustomLogic_CustomLogicInputBuiltin__GetKeyName(pSVar2,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar2;
  }
  pSStack_10 = (System_Object_array *)0x41cd95a;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_10 = __a;
  if (g_data_057ad69b == '\0') {
    lStack_28 = 0x41cd97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_28 = 0x41cd989;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69b = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_28 = 0x41cd9f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_28 = 0x41cd9b7;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_28 = 0x41cd9c9;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    lStack_28 = 0x41cd9d3;
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyHold(pSVar2,(MethodInfo *)0x0);
    uStack_11 = (undefined1)bVar1;
    lStack_28 = 0x41cd9ec;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_11);
    return pIVar3;
  }
  lStack_28 = 0x41cd9fc;
  il2cpp_runtime_helper_022b2ca0();
  lStack_28 = extraout_RDX;
  if (g_data_057ad69c == '\0') {
    lStack_40 = 0x41cda1d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_40 = 0x41cda29;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69c = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    lStack_40 = 0x41cda97;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_40 = 0x41cda57;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_40 = 0x41cda69;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    lStack_40 = 0x41cda73;
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyDown(pSVar2,(MethodInfo *)0x0);
    uStack_29 = (undefined1)bVar1;
    lStack_40 = 0x41cda8c;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
    return pIVar3;
  }
  lStack_40 = 0x41cda9c;
  il2cpp_runtime_helper_022b2ca0();
  lStack_40 = extraout_RDX_00;
  if (g_data_057ad69d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69d = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(pSVar2,(MethodInfo *)0x0);
    uStack_41 = (undefined1)bVar1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar4 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar4;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyHold>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cd960

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined1 uStack_39;
  long lStack_38;
  undefined1 uStack_21;
  System_Object_array *pSStack_20;
  undefined1 local_9;
  
  if (g_data_057ad69b == '\0') {
    pSStack_20 = (System_Object_array *)0x41cd97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41cd989;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    pSStack_20 = (System_Object_array *)0x41cd9f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41cd9b7;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41cd9c9;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41cd9d3;
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyHold(pSVar2,(MethodInfo *)0x0);
    local_9 = (undefined1)bVar1;
    pSStack_20 = (System_Object_array *)0x41cd9ec;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
    return pIVar3;
  }
  pSStack_20 = (System_Object_array *)0x41cd9fc;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = __a;
  if (g_data_057ad69c == '\0') {
    lStack_38 = 0x41cda1d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_38 = 0x41cda29;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69c = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_38 = 0x41cda97;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_38 = 0x41cda57;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_38 = 0x41cda69;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    lStack_38 = 0x41cda73;
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyDown(pSVar2,(MethodInfo *)0x0);
    uStack_21 = (undefined1)bVar1;
    lStack_38 = 0x41cda8c;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar3;
  }
  lStack_38 = 0x41cda9c;
  il2cpp_runtime_helper_022b2ca0();
  lStack_38 = extraout_RDX;
  if (g_data_057ad69d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69d = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(pSVar2,(MethodInfo *)0x0);
    uStack_39 = (undefined1)bVar1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_39);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar4 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar4;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyDown>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cda00

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  long extraout_RDX;
  undefined1 uStack_21;
  System_Object_array *pSStack_20;
  undefined1 local_9;
  
  if (g_data_057ad69c == '\0') {
    pSStack_20 = (System_Object_array *)0x41cda1d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41cda29;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    pSStack_20 = (System_Object_array *)0x41cda97;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41cda57;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41cda69;
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41cda73;
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyDown(pSVar2,(MethodInfo *)0x0);
    local_9 = (undefined1)bVar1;
    pSStack_20 = (System_Object_array *)0x41cda8c;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
    return pIVar3;
  }
  pSStack_20 = (System_Object_array *)0x41cda9c;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = __a;
  if (g_data_057ad69d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69d = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(pSVar2,(MethodInfo *)0x0);
    uStack_21 = (undefined1)bVar1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar4 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar4;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyUp>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdaa0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  undefined1 local_9;
  
  if (g_data_057ad69d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(key,(MethodInfo *)0x0);
    local_9 = (undefined1)bVar1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar3 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseAim>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb40

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCursorAimDirection>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb60

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMousePosition>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb70

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMousePosition((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetScreenDimensions>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb80

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdb90

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  
  if (g_data_057ad69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad69f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69f = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetKeyHold(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a0 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a1 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a2 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar6);
    pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
      pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyHold>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdc50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  
  if (g_data_057ad69f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad69f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetKeyHold(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a0 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicInputBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a1 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a2 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar6);
    pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
      pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdd10

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  
  if (g_data_057ad6a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(pSVar6,uVar5 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a1 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a2 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar6);
    pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
      pSVar7 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar7,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cddd0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *value;
  System_String_o *pSVar6;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  
  if (g_data_057ad6a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a2 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,value);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    value = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      value = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cde50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *value;
  System_String_o *pSVar6;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  
  if (g_data_057ad6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,value);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    value = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      value = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cded0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  uint uVar5;
  System_String_o *value;
  System_String_o *pSVar6;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  
  if (g_data_057ad6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar5 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar3 + 0x10) = value;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,value);
    pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    value = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      pSVar6 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      value = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41cdf50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  uint uVar4;
  System_String_o *value;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  
  if (g_data_057ad6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6a4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(uVar4 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar2 + 0x10) = value;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,value);
    pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    value = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      value = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41cba50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object____object__o *pSVar6;
  CustomLogic_CLMethodBinding_T__o *pCVar7;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad64e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetGeneralKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetScreenDimensions");
    il2cpp_runtime_helper_023445d0(&"GetKeyHold");
    il2cpp_runtime_helper_023445d0(&"SetCategoryKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetHumanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetKeyName");
    il2cpp_runtime_helper_023445d0(&"GetMouseAim");
    il2cpp_runtime_helper_023445d0(&"GetKeyDown");
    il2cpp_runtime_helper_023445d0(&"SetKeyDefaultEnabled");
    il2cpp_runtime_helper_023445d0(&"GetCursorAimDirection");
    il2cpp_runtime_helper_023445d0(&"GetMouseSpeed");
    il2cpp_runtime_helper_023445d0(&"SetInteractionKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetMousePosition");
    il2cpp_runtime_helper_023445d0(&"GetKeyUp");
    il2cpp_runtime_helper_023445d0(&"SetTitanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetKeyHold");
    g_data_057ad64e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8b47cad3) {
    if (uVar3 < 0x299fa333) {
      if (uVar3 < 0x1fca2dcc) {
        if (uVar3 == 0x2888963) {
          bVar4 = System_String__op_Equality(name,"GetKeyUp",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad652 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyUp_b__5_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057ad652 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar6);
            }
            pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar7;
          }
        }
        else if ((uVar3 == 0x1fca2dcb) &&
                (bVar4 = System_String__op_Equality(name,"GetCursorAimDirection",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad654 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCursorAimDirection_b__7);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad654 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if (uVar3 == 0x230f7b6c) {
        bVar4 = System_String__op_Equality(name,"SetTitanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad65d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTitanKeysEnabled_b__16);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad65d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
          }
          else {
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
          }
          if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x299fa332) &&
              (bVar4 = System_String__op_Equality(name,"SetGeneralKeysEnabled",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad65b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetGeneralKeysEnabled_b__1);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad65b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 < 0x423fef7d) {
      if (uVar3 == 0x3ce5bffd) {
        bVar4 = System_String__op_Equality(name,"SetHumanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad65e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetHumanKeysEnabled_b__17);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad65e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
          }
          else {
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
          }
          if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x423fef7c) &&
              (bVar4 = System_String__op_Equality(name,"SetKeyDefaultEnabled",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad658 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyDefaultEnabled_b__11);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad658 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x8b47cad2) {
      bVar4 = System_String__op_Equality(name,"SetInteractionKeysEnabled",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad65c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetInteractionKeysEnabled);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad65c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x779ad7dd) &&
            (bVar4 = System_String__op_Equality(name,"GetMousePosition",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad656 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMousePosition_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad656 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0xbd218aad) {
    if (uVar3 < 0xa3a3c236) {
      if (uVar3 == 0xa17036af) {
        bVar4 = System_String__op_Equality(name,"GetKeyHold",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad650 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyHold_b__3_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad650 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0xa3a3c235) &&
              (bVar4 = System_String__op_Equality(name,"GetMouseSpeed",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad655 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseSpeed_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad655 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0xa4899163) {
      bVar4 = System_String__op_Equality(name,"SetKeyHold",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad659 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyHold_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad659 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0xbd218aac) &&
            (bVar4 = System_String__op_Equality(name,"SetCategoryKeysEnabled",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad65a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCategoryKeysEnabled_b);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad65a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0xca5c42a8) {
    if (uVar3 == 0xc37a5fcd) {
      bVar4 = System_String__op_Equality(name,"GetKeyName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName;
      }
    }
    else if ((uVar3 == 0xca5c42a7) &&
            (bVar4 = System_String__op_Equality(name,"GetMouseAim",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad653 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseAim_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad653 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xd098c4f6) {
    bVar4 = System_String__op_Equality(name,"GetKeyDown",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad651 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyDown_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad651 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xd6be4d6a) &&
          (bVar4 = System_String__op_Equality(name,"GetScreenDimensions",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad657 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetScreenDimensions_b__10);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad657 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    else {
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad64f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc149;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc155;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc161;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc16d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyName_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc179;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad64f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc19c;
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc0eb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc107;
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc121;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc13b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc1c2;
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cc1da;
  CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName (const MethodInfo* method);
// 0x41cc0a0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad64f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyName_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad64f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold (const MethodInfo* method);
// 0x41cc1f0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad650 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyHold_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad650 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyDown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown (const MethodInfo* method);
// 0x41cc340

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad651 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyDown_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad651 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyUp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp (const MethodInfo* method);
// 0x41cc490

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad652 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetKeyUp_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad652 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseAim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim (const MethodInfo* method);
// 0x41cc5e0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad653 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseAim_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad653 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetCursorAimDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection (const MethodInfo* method);
// 0x41cc730

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad654 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetCursorAimDirection_b__7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad654 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed (const MethodInfo* method);
// 0x41cc880

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad655 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMouseSpeed_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad655 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMousePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition (const MethodInfo* method);
// 0x41cc9d0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad656 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetMousePosition_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad656 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetScreenDimensions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions (const MethodInfo* method);
// 0x41ccb20

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad657 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetScreenDimensions_b__10);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad657 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyDefaultEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled (const MethodInfo* method);
// 0x41ccc70

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad658 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyDefaultEnabled_b__11);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad658 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold (const MethodInfo* method);
// 0x41ccdc0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad659 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetKeyHold_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad659 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetCategoryKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled (const MethodInfo* method);
// 0x41ccf10

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad65a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCategoryKeysEnabled_b);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad65a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetGeneralKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled (const MethodInfo* method);
// 0x41cd060

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad65b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetGeneralKeysEnabled_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad65b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetInteractionKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled (const MethodInfo* method);
// 0x41cd1b0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad65c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetInteractionKeysEnabled);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad65c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetTitanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled (const MethodInfo* method);
// 0x41cd300

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad65d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTitanKeysEnabled_b__16);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad65d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetHumanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled (const MethodInfo* method);
// 0x41cd450

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (g_data_057ad65e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetHumanKeysEnabled_b__17);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad65e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41cd5a0

void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor(MethodInfo *method)

{
  code *pcVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad65f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"SetGeneralKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetScreenDimensions");
    il2cpp_runtime_helper_023445d0(&"GetKeyHold");
    il2cpp_runtime_helper_023445d0(&"SetCategoryKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetHumanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetKeyName");
    il2cpp_runtime_helper_023445d0(&"GetMouseAim");
    il2cpp_runtime_helper_023445d0(&"GetKeyDown");
    il2cpp_runtime_helper_023445d0(&"SetKeyDefaultEnabled");
    il2cpp_runtime_helper_023445d0(&"GetCursorAimDirection");
    il2cpp_runtime_helper_023445d0(&"GetMouseSpeed");
    il2cpp_runtime_helper_023445d0(&"SetInteractionKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"GetMousePosition");
    il2cpp_runtime_helper_023445d0(&"GetKeyUp");
    il2cpp_runtime_helper_023445d0(&"SetTitanKeysEnabled");
    il2cpp_runtime_helper_023445d0(&"SetKeyHold");
    g_data_057ad65f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"GetKeyName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetKeyHold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetKeyDown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetKeyUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetMouseAim",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetCursorAimDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetMouseSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetMousePosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetScreenDimensions",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetKeyDefaultEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetKeyHold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetCategoryKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetGeneralKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetInteractionKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetTitanKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetHumanKeysEnabled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin___ctor (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x41ca380

void CustomLogic_CustomLogicInputBuiltin___ctor
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad638 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad638 = '\x01';
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


// CustomLogic.CustomLogicInputBuiltin$$GetKeybind
// il2cpp: Settings_KeybindSetting_o* CustomLogic_CustomLogicInputBuiltin__GetKeybind (System_String_o* key, const MethodInfo* method);
// 0x41ca3f0

Settings_KeybindSetting_o *
CustomLogic_CustomLogicInputBuiltin__GetKeybind(System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  int32_t layerMask;
  System_String_array *pSVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  System_String_o *pSVar9;
  Settings_KeybindSetting_o *pSVar10;
  MethodInfo *pMVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  System_String_o *pSVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_170;
  System_String_o *pSStackY_158;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  int32_t iVar22;
  float fStack_114;
  float fStack_110;
  UnityEngine_Ray_o UStack_108;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [32];
  float fStack_c0;
  undefined8 uStack_bc;
  System_String_o *pSStack_b0;
  _union_14 _Stack_a0;
  System_String_o *pSStack_98;
  System_Nullable_KeyCode__Fields SStack_88;
  System_String_o *pSStack_80;
  System_Nullable_KeyCode__Fields SStack_70;
  System_String_o *pSStack_68;
  System_Nullable_KeyCode__Fields SStack_60;
  System_Enum_o SStack_58;
  int32_t iStack_48;
  System_Collections_Specialized_OrderedDictionary_o *pSStack_40;
  System_Collections_Specialized_OrderedDictionary_o *pSStack_38;
  int32_t iStack_24;
  Settings_KeybindSetting_o *pSStack_20;
  System_String_array *pSStack_18;
  
  if (g_data_057ad639 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad639 = '\x01';
  }
  pSVar7 = (System_String_array *)0x0;
  if (key == (System_String_o *)0x0) {
label_041ca508:
    pSVar8 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_022b2c90();
label_041ca50d:
    il2cpp_runtime_helper_022b2fd0();
    key = (System_String_o *)pSVar8;
  }
  else {
    method = (MethodInfo *)0x2f;
    pSVar7 = System_String__Split(key,0x2f,0,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if ((lVar2 == 0) || (pSVar7 == (System_String_array *)0x0)) goto label_041ca508;
    if ((int)pSVar7->max_length != 0) {
      key = *(System_String_o **)(lVar2 + 0x10);
      if ((System_Collections_Specialized_OrderedDictionary_o *)key ==
          (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041ca508;
      method = (MethodInfo *)pSVar7->m_Items[0];
      pSVar8 = (System_Collections_Specialized_OrderedDictionary_o *)
               System_Collections_Specialized_OrderedDictionary__get_Item
                         ((System_Collections_Specialized_OrderedDictionary_o *)key,(Il2CppObject *)method,
                          (MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041ca508;
      bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_SaveableSettingsContainer;
      if ((bVar1 <= (pSVar8->klass->_2).naturalAligment) &&
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SaveableSettingsContainer)) {
        if ((uint)pSVar7->max_length < 2) goto label_041ca515;
        pSVar8 = (System_Collections_Specialized_OrderedDictionary_o *)(pSVar8->fields)._objectsArray;
        if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041ca508;
        pSVar8 = (System_Collections_Specialized_OrderedDictionary_o *)
                 System_Collections_Specialized_OrderedDictionary__get_Item
                           (pSVar8,(Il2CppObject *)pSVar7->m_Items[1],(MethodInfo *)0x0);
        if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          return (Settings_KeybindSetting_o *)0x0;
        }
        bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        method = (MethodInfo *)TypeInfo_KeybindSetting;
        if ((bVar1 <= (pSVar8->klass->_2).naturalAligment) &&
           ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_KeybindSetting)) {
          return (Settings_KeybindSetting_o *)pSVar8;
        }
      }
      goto label_041ca50d;
    }
  }
label_041ca515:
  il2cpp_runtime_helper_022b2ca0();
  pSStack_18 = pSVar7;
  if (g_data_057ad63a == '\0') {
    pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca53f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_KeyCode);
    pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca54b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_KeyCode);
    pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca557;
    il2cpp_runtime_helper_023445d0(&"CustomKey/");
    g_data_057ad63a = '\x01';
  }
  iStack_24 = 0;
  if ((System_Collections_Specialized_OrderedDictionary_o *)key !=
      (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca583;
    method = (MethodInfo *)"CustomKey/";
    bVar5 = System_String__StartsWith(key,(System_String_o *)"CustomKey/",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if ("CustomKey/" == (Il2CppClass *)0x0) goto label_041ca61f;
      pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca5a4;
      pSVar9 = System_String__Substring(key,*(int32_t *)&("CustomKey/"->_1).name,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca5c3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca5da;
      bVar5 = System_Enum__TryParse_Int32Enum_(pSVar9,&iStack_24,MethodInfo_Boolean_TryParse_KeyCode);
      if ((char)bVar5 != '\0') {
        pSStack_20 = (Settings_KeybindSetting_o *)0x0;
        pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca5ff;
        System_Nullable_Int32Enum____ctor((System_Nullable_Int32Enum__o)&pSStack_20,iStack_24,MethodInfo_Nullable_1_UnityEngine_KeyCode);
        return pSStack_20;
      }
    }
    return (Settings_KeybindSetting_o *)0x0;
  }
label_041ca61f:
  pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca624;
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = (System_Collections_Specialized_OrderedDictionary_o *)key;
  if (g_data_057ad63b == '\0') {
    pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca646;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca652;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca65e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca66a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad63b = '\x01';
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar9 != (System_String_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pSVar9->klass->_2).naturalAligment) &&
       ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      if (*(char *)((long)&pSVar9[5].klass + 2) == '\0') {
        pSVar10 = (Settings_KeybindSetting_o *)0x0;
        pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca6ce;
        bVar5 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca6ea;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (Settings_KeybindSetting_o *)0x0;
          pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca6f3;
          bVar5 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca70f;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (Settings_KeybindSetting_o *)
                      CONCAT71(0x5577f,*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x48) == '\0');
          }
        }
        return pSVar10;
      }
      return (Settings_KeybindSetting_o *)0x0;
    }
    pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca729;
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)0x41ca72e;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = (System_Collections_Specialized_OrderedDictionary_o *)key;
  if (g_data_057ad63c == '\0') {
    pSStack_68 = (System_String_o *)0x41ca74d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyCode);
    pSStack_68 = (System_String_o *)0x41ca759;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_68 = (System_String_o *)0x41ca765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63c = '\x01';
  }
  pSStack_68 = (System_String_o *)0x41ca774;
  SStack_60 = (System_Nullable_KeyCode__Fields)
              CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar9,method);
  if ((char)SStack_60.hasValue != '\0') {
    pSStack_68 = (System_String_o *)0x41ca78e;
    iStack_48 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_60,MethodInfo_KeyCode_get_Value);
    SStack_58.klass = TypeInfo_KeyCode;
    SStack_58.monitor = (void *)0xffffffffffffffff;
    pSStack_68 = (System_String_o *)0x41ca7b6;
    pSVar10 = (Settings_KeybindSetting_o *)System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
    return pSVar10;
  }
  pSStack_68 = (System_String_o *)0x41ca7c4;
  pSVar13 = pSVar9;
  pSVar10 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar9,method);
  if (pSVar10 != (Settings_KeybindSetting_o *)0x0) {
    pSStack_68 = (System_String_o *)0x41ca7dc;
    pSVar10 = (Settings_KeybindSetting_o *)
              (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
    return pSVar10;
  }
  pSStack_68 = (System_String_o *)0x41ca7e7;
  il2cpp_runtime_helper_022b2c90();
  pSStack_68 = pSVar9;
  if (g_data_057ad63d == '\0') {
    pSStack_80 = (System_String_o *)0x41ca80d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_80 = (System_String_o *)0x41ca819;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63d = '\x01';
  }
  pSStack_80 = (System_String_o *)0x41ca828;
  SStack_70 = (System_Nullable_KeyCode__Fields)
              CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar13,method);
  if ((char)SStack_70.hasValue == '\0') {
    pSStack_80 = (System_String_o *)0x41ca86b;
    pSVar9 = pSVar13;
    pMVar11 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar13,method);
    if (pMVar11 == (MethodInfo *)0x0) {
      pSStack_80 = (System_String_o *)0x41ca88c;
      il2cpp_runtime_helper_022b2c90();
      pSStack_80 = pSVar13;
      if (g_data_057ad63e == '\0') {
        pSStack_98 = (System_String_o *)0x41ca8ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
        pSStack_98 = (System_String_o *)0x41ca8b9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
        g_data_057ad63e = '\x01';
      }
      pSStack_98 = (System_String_o *)0x41ca8c8;
      SStack_88 = (System_Nullable_KeyCode__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar9,method);
      if ((char)SStack_88.hasValue == '\0') {
        pSStack_98 = (System_String_o *)0x41ca90b;
        pSVar13 = pSVar9;
        pMVar11 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar9,method);
        if (pMVar11 == (MethodInfo *)0x0) {
          pSStack_98 = (System_String_o *)0x41ca92c;
          il2cpp_runtime_helper_022b2c90();
          pSStack_98 = pSVar9;
          if (g_data_057ad63f == '\0') {
            pSStack_b0 = (System_String_o *)0x41ca94d;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
            pSStack_b0 = (System_String_o *)0x41ca959;
            il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
            g_data_057ad63f = '\x01';
          }
          pSStack_b0 = (System_String_o *)0x41ca968;
          _Stack_a0 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar13,method);
          if (_Stack_a0._0_1_ == '\0') {
            pSStack_b0 = (System_String_o *)0x41ca9ab;
            pMVar11 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar13,method);
            if (pMVar11 == (MethodInfo *)0x0) {
              pSStack_b0 = (System_String_o *)0x41ca9cc;
              il2cpp_runtime_helper_022b2c90();
              pSStack_b0 = pSVar13;
              if (g_data_057ad640 == '\0') {
                pSStackY_158 = (System_String_o *)0x41ca9ed;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                pSStackY_158 = (System_String_o *)0x41ca9f9;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                pSStackY_158 = (System_String_o *)0x41caa05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
                pSStackY_158 = (System_String_o *)0x41caa11;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
                pSStackY_158 = (System_String_o *)0x41caa1d;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad640 = '\x01';
              }
              fStack_c0 = 0.0;
              uStack_bc = 0;
              auStack_e0._16_8_ = (InvokerMethod)0x0;
              auStack_e0._24_4_ = 0;
              auStack_e0._28_4_ = 0.0;
              auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
              auStack_e0._8_8_ = (Il2CppMethodPointer)0x0;
              lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar2 != 0) {
                pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  pSStackY_158 = (System_String_o *)0x41caa76;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStackY_158 = (System_String_o *)0x41caa7d;
                UVar17 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                pSVar13 = (System_String_o *)0x0;
                if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                  pSStackY_158 = (System_String_o *)0x41caa95;
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_108,pUVar3,UVar17,(MethodInfo *)0x0);
                  fVar14 = UStack_108.fields.m_Origin.fields.x;
                  fVar16 = UStack_108.fields.m_Origin.fields.y;
                  iVar22 = 0;
                  auStack_f0._0_4_ = UStack_108.fields.m_Direction.fields.x;
                  auStack_f0._4_4_ = UStack_108.fields.m_Direction.fields.y;
                  auStack_f0._8_8_ = 0;
                  fVar15 = UStack_108.fields.m_Origin.fields.z;
                  fVar21 = UStack_108.fields.m_Direction.fields.z;
                  if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                    pSStackY_158 = (System_String_o *)0x41caadb;
                    il2cpp_runtime_helper_02337ed0();
                    fVar15 = UStack_108.fields.m_Origin.fields.z;
                    fVar21 = UStack_108.fields.m_Direction.fields.z;
                  }
                  pSStackY_158 = (System_String_o *)0x41caaec;
                  layerMask = UnityEngine_LayerMask__get_value
                                        ((UnityEngine_LayerMask_Fields)
                                         (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                    pSStackY_158 = (System_String_o *)0x41cab06;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar18 = CONCAT44(fVar16,fVar14);
                  fStack_114 = (float)auStack_f0._0_8_;
                  fStack_110 = SUB84(auStack_f0._0_8_,4);
                  uVar20 = CONCAT44(fVar21,fStack_110);
                  uVar19 = CONCAT44(fStack_114,fVar15);
                  pSStackY_158 = (System_String_o *)0x41cab5b;
                  ray.fields.m_Origin.fields.z = fVar15;
                  ray.fields.m_Direction.fields.x = fStack_114;
                  ray.fields.m_Origin.fields.x = fVar14;
                  ray.fields.m_Origin.fields.y = fVar16;
                  ray.fields.m_Direction.fields.y = fStack_110;
                  ray.fields.m_Direction.fields.z = fVar21;
                  bVar5 = UnityEngine_Physics__Raycast_4e78080
                                    (ray,(UnityEngine_RaycastHit_o *)auStack_e0,1000.0,layerMask,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    fVar14 = fVar14 + (float)auStack_f0._0_4_ * 1000.0;
                    fVar16 = fVar16 + (float)auStack_f0._4_4_ * 1000.0;
                    fVar15 = fVar15 + fVar21 * 1000.0;
                  }
                  else {
                    pSStackY_158 = (System_String_o *)0x41cab6b;
                    __this.fields.m_Point.fields.z = (float)(int)uVar19;
                    __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar19 >> 0x20);
                    __this.fields.m_Point.fields.x = (float)(int)uVar18;
                    __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar18 >> 0x20);
                    __this.fields.m_Normal.fields.y = (float)(int)uVar20;
                    __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar20 >> 0x20);
                    __this.fields.m_FaceID = (uint32_t)fVar15;
                    __this.fields.m_Distance = fVar21;
                    __this.fields.m_UV.fields.x = fVar14;
                    __this.fields.m_UV.fields.y = fVar16;
                    __this.fields.m_Collider = iVar22;
                    UVar17 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_e0);
                    fVar15 = UVar17.fields.z;
                    fVar14 = UVar17.fields.x;
                    fVar16 = UVar17.fields.y;
                  }
                  pSStackY_158 = (System_String_o *)0x41cabbe;
                  pCVar12 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  UVar17.fields.y = fVar16;
                  UVar17.fields.x = fVar14;
                  pSStackY_158 = (System_String_o *)0x41cabd6;
                  UVar17.fields.z = fVar15;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar12,UVar17,(MethodInfo *)0x0);
                  return (Settings_KeybindSetting_o *)pCVar12;
                }
              }
              pSStackY_158 = (System_String_o *)0x41cabe7;
              il2cpp_runtime_helper_022b2c90();
              pSStackY_158 = pSVar13;
              if (g_data_057ad641 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad641 = '\x01';
              }
              lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar2 != 0) {
                pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UVar17 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_170,pUVar3,UVar17,(MethodInfo *)0x0);
                  pCVar12 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  value.fields.z = UStackY_170.fields.m_Direction.fields.z;
                  value.fields.x = UStackY_170.fields.m_Direction.fields.x;
                  value.fields.y = UStackY_170.fields.m_Direction.fields.y;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar12,value,(MethodInfo *)0x0);
                  return (Settings_KeybindSetting_o *)pCVar12;
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ad642 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&"Mouse Y");
                il2cpp_runtime_helper_023445d0(&"Mouse X");
                g_data_057ad642 = '\x01';
              }
              value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
              fVar15 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
              pCVar12 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
              value_00.fields.y = fVar15;
              value_00.fields.z = 0.0;
              CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar12,value_00,(MethodInfo *)0x0);
              return (Settings_KeybindSetting_o *)pCVar12;
            }
            pSStack_b0 = (System_String_o *)0x41ca9c1;
            bVar5 = Settings_KeybindSetting__GetKeyUp
                              ((Settings_KeybindSetting_o *)pMVar11,1,(MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          else {
            pSStack_b0 = (System_String_o *)0x41ca985;
            uVar6 = System_Nullable_Int32Enum___get_Value
                              ((System_Nullable_Int32Enum__o)&_Stack_a0,MethodInfo_KeyCode_get_Value);
            pMVar11 = (MethodInfo *)(ulong)uVar6;
            pSStack_b0 = (System_String_o *)0x41ca990;
            bVar5 = UnityEngine_Input__GetKeyUp(uVar6,(MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          uVar6 = 0;
          if (cVar4 != '\0') {
            pSStack_b0 = (System_String_o *)0x41ca999;
            uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar11);
          }
          return (Settings_KeybindSetting_o *)(ulong)uVar6;
        }
        pSStack_98 = (System_String_o *)0x41ca921;
        bVar5 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar11,1,(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        pSStack_98 = (System_String_o *)0x41ca8e5;
        uVar6 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_88,MethodInfo_KeyCode_get_Value);
        pMVar11 = (MethodInfo *)(ulong)uVar6;
        pSStack_98 = (System_String_o *)0x41ca8f0;
        bVar5 = UnityEngine_Input__GetKeyDown(uVar6,(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      uVar6 = 0;
      if (cVar4 != '\0') {
        pSStack_98 = (System_String_o *)0x41ca8f9;
        uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar11);
      }
      return (Settings_KeybindSetting_o *)(ulong)uVar6;
    }
    pSStack_80 = (System_String_o *)0x41ca881;
    bVar5 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar11,1,(MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    pSStack_80 = (System_String_o *)0x41ca845;
    uVar6 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_70,MethodInfo_KeyCode_get_Value);
    pMVar11 = (MethodInfo *)(ulong)uVar6;
    pSStack_80 = (System_String_o *)0x41ca850;
    bVar5 = UnityEngine_Input__GetKey(uVar6,(MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  uVar6 = 0;
  if (cVar4 != '\0') {
    pSStack_80 = (System_String_o *)0x41ca859;
    uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar11);
  }
  return (Settings_KeybindSetting_o *)(ulong)uVar6;
}


// CustomLogic.CustomLogicInputBuiltin$$GetCustomKeyCode
// il2cpp: System_Nullable_KeyCode__o CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode (System_String_o* key, const MethodInfo* method);
// 0x41ca520

System_Nullable_KeyCode__o
CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar7;
  System_Nullable_KeyCode__Fields SVar8;
  uint uVar6;
  System_Nullable_KeyCode__o SVar9;
  Settings_KeybindSetting_o *pSVar10;
  System_Nullable_KeyCode__Fields SVar11;
  MethodInfo *pMVar12;
  System_Nullable_KeyCode__Fields SVar13;
  System_Nullable_KeyCode__Fields SVar14;
  int32_t layerMask;
  System_Nullable_KeyCode__Fields SVar15;
  System_Nullable_KeyCode__Fields SVar16;
  System_String_o *pSVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_168;
  System_String_o *pSStackY_150;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  int32_t iVar26;
  float fStack_10c;
  float fStack_108;
  UnityEngine_Ray_o UStack_100;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  float fStack_b8;
  undefined8 uStack_b4;
  System_String_o *pSStack_a8;
  _union_14 _Stack_98;
  System_String_o *pSStack_90;
  System_Nullable_KeyCode__Fields SStack_80;
  System_String_o *pSStack_78;
  System_Nullable_KeyCode__Fields SStack_68;
  System_String_o *pSStack_60;
  System_Nullable_KeyCode__Fields SStack_58;
  System_Enum_o SStack_50;
  int32_t iStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  int32_t local_1c;
  System_Nullable_KeyCode__Fields local_18;
  
  if (g_data_057ad63a == '\0') {
    pSStack_30 = (System_String_o *)0x41ca53f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_KeyCode);
    pSStack_30 = (System_String_o *)0x41ca54b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_KeyCode);
    pSStack_30 = (System_String_o *)0x41ca557;
    il2cpp_runtime_helper_023445d0(&"CustomKey/");
    g_data_057ad63a = '\x01';
  }
  local_1c = 0;
  if (key == (System_String_o *)0x0) {
label_041ca61f:
    pSStack_30 = (System_String_o *)0x41ca624;
    il2cpp_runtime_helper_022b2c90();
    pSStack_30 = key;
    if (g_data_057ad63b == '\0') {
      pSStack_38 = (System_String_o *)0x41ca646;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      pSStack_38 = (System_String_o *)0x41ca652;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      pSStack_38 = (System_String_o *)0x41ca65e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      pSStack_38 = (System_String_o *)0x41ca66a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
      g_data_057ad63b = '\x01';
    }
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pSVar7 != (System_String_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
         ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
        if (*(char *)((long)&pSVar7[5].klass + 2) != '\0') {
          SVar8.hasValue = 0;
          SVar8.value = 0;
          return (System_Nullable_KeyCode__o)SVar8;
        }
        SVar16.hasValue = 0;
        SVar16.value = 0;
        pSStack_38 = (System_String_o *)0x41ca6ce;
        bVar5 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            pSStack_38 = (System_String_o *)0x41ca6ea;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar16.hasValue = 0;
          SVar16.value = 0;
          pSStack_38 = (System_String_o *)0x41ca6f3;
          bVar5 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              pSStack_38 = (System_String_o *)0x41ca70f;
              il2cpp_runtime_helper_02337ed0();
            }
            SVar16._1_7_ = 0x5577f;
            SVar16.hasValue._0_1_ = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x48) == '\0';
          }
        }
        return (System_Nullable_KeyCode__o)SVar16;
      }
      pSStack_38 = (System_String_o *)0x41ca729;
      method = (MethodInfo *)TypeInfo_InGameManager;
      il2cpp_runtime_helper_022b2fd0();
    }
    pSStack_38 = (System_String_o *)0x41ca72e;
    il2cpp_runtime_helper_022b2c90();
    pSStack_38 = key;
    if (g_data_057ad63c == '\0') {
      pSStack_60 = (System_String_o *)0x41ca74d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_KeyCode);
      pSStack_60 = (System_String_o *)0x41ca759;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      pSStack_60 = (System_String_o *)0x41ca765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
      g_data_057ad63c = '\x01';
    }
    pSStack_60 = (System_String_o *)0x41ca774;
    SStack_58 = (System_Nullable_KeyCode__Fields)
                CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar7,method);
    if ((char)SStack_58.hasValue == '\0') {
      pSStack_60 = (System_String_o *)0x41ca7c4;
      pSVar17 = pSVar7;
      pSVar10 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar7,method);
      if (pSVar10 != (Settings_KeybindSetting_o *)0x0) {
        pSStack_60 = (System_String_o *)0x41ca7dc;
        SVar9.fields = (System_Nullable_KeyCode__Fields)
                       (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
        return (System_Nullable_KeyCode__o)SVar9.fields;
      }
      pSStack_60 = (System_String_o *)0x41ca7e7;
      il2cpp_runtime_helper_022b2c90();
      pSStack_60 = pSVar7;
      if (g_data_057ad63d == '\0') {
        pSStack_78 = (System_String_o *)0x41ca80d;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
        pSStack_78 = (System_String_o *)0x41ca819;
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
        g_data_057ad63d = '\x01';
      }
      pSStack_78 = (System_String_o *)0x41ca828;
      SStack_68 = (System_Nullable_KeyCode__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar17,method);
      if ((char)SStack_68.hasValue == '\0') {
        pSStack_78 = (System_String_o *)0x41ca86b;
        pSVar7 = pSVar17;
        pMVar12 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar17,method);
        if (pMVar12 == (MethodInfo *)0x0) {
          pSStack_78 = (System_String_o *)0x41ca88c;
          il2cpp_runtime_helper_022b2c90();
          pSStack_78 = pSVar17;
          if (g_data_057ad63e == '\0') {
            pSStack_90 = (System_String_o *)0x41ca8ad;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
            pSStack_90 = (System_String_o *)0x41ca8b9;
            il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
            g_data_057ad63e = '\x01';
          }
          pSStack_90 = (System_String_o *)0x41ca8c8;
          SStack_80 = (System_Nullable_KeyCode__Fields)
                      CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar7,method);
          if ((char)SStack_80.hasValue == '\0') {
            pSStack_90 = (System_String_o *)0x41ca90b;
            pSVar17 = pSVar7;
            pMVar12 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar7,method);
            if (pMVar12 == (MethodInfo *)0x0) {
              pSStack_90 = (System_String_o *)0x41ca92c;
              il2cpp_runtime_helper_022b2c90();
              pSStack_90 = pSVar7;
              if (g_data_057ad63f == '\0') {
                pSStack_a8 = (System_String_o *)0x41ca94d;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
                pSStack_a8 = (System_String_o *)0x41ca959;
                il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
                g_data_057ad63f = '\x01';
              }
              pSStack_a8 = (System_String_o *)0x41ca968;
              _Stack_98 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar17,method);
              if (_Stack_98._0_1_ == '\0') {
                pSStack_a8 = (System_String_o *)0x41ca9ab;
                pMVar12 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar17,method);
                if (pMVar12 == (MethodInfo *)0x0) {
                  pSStack_a8 = (System_String_o *)0x41ca9cc;
                  il2cpp_runtime_helper_022b2c90();
                  pSStack_a8 = pSVar17;
                  if (g_data_057ad640 == '\0') {
                    pSStackY_150 = (System_String_o *)0x41ca9ed;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                    pSStackY_150 = (System_String_o *)0x41ca9f9;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                    pSStackY_150 = (System_String_o *)0x41caa05;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
                    pSStackY_150 = (System_String_o *)0x41caa11;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
                    pSStackY_150 = (System_String_o *)0x41caa1d;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                    g_data_057ad640 = '\x01';
                  }
                  fStack_b8 = 0.0;
                  uStack_b4 = 0;
                  auStack_d8._16_8_ = (InvokerMethod)0x0;
                  auStack_d8._24_4_ = 0;
                  auStack_d8._28_4_ = 0.0;
                  auStack_d8._0_8_ = (Il2CppMethodPointer)0x0;
                  auStack_d8._8_8_ = (Il2CppMethodPointer)0x0;
                  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                  if (lVar2 != 0) {
                    pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                      pSStackY_150 = (System_String_o *)0x41caa76;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSStackY_150 = (System_String_o *)0x41caa7d;
                    UVar21 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                    pSVar17 = (System_String_o *)0x0;
                    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                      pSStackY_150 = (System_String_o *)0x41caa95;
                      UnityEngine_Camera__ScreenPointToRay_4db37e0
                                (&UStack_100,pUVar3,UVar21,(MethodInfo *)0x0);
                      fVar18 = UStack_100.fields.m_Origin.fields.x;
                      fVar20 = UStack_100.fields.m_Origin.fields.y;
                      iVar26 = 0;
                      auStack_e8._0_4_ = UStack_100.fields.m_Direction.fields.x;
                      auStack_e8._4_4_ = UStack_100.fields.m_Direction.fields.y;
                      auStack_e8._8_8_ = 0;
                      fVar19 = UStack_100.fields.m_Origin.fields.z;
                      fVar25 = UStack_100.fields.m_Direction.fields.z;
                      if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                        pSStackY_150 = (System_String_o *)0x41caadb;
                        il2cpp_runtime_helper_02337ed0();
                        fVar19 = UStack_100.fields.m_Origin.fields.z;
                        fVar25 = UStack_100.fields.m_Direction.fields.z;
                      }
                      pSStackY_150 = (System_String_o *)0x41caaec;
                      layerMask = UnityEngine_LayerMask__get_value
                                            ((UnityEngine_LayerMask_Fields)
                                             (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                        pSStackY_150 = (System_String_o *)0x41cab06;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar22 = CONCAT44(fVar20,fVar18);
                      fStack_10c = (float)auStack_e8._0_8_;
                      fStack_108 = SUB84(auStack_e8._0_8_,4);
                      uVar24 = CONCAT44(fVar25,fStack_108);
                      uVar23 = CONCAT44(fStack_10c,fVar19);
                      pSStackY_150 = (System_String_o *)0x41cab5b;
                      ray.fields.m_Origin.fields.z = fVar19;
                      ray.fields.m_Direction.fields.x = fStack_10c;
                      ray.fields.m_Origin.fields.x = fVar18;
                      ray.fields.m_Origin.fields.y = fVar20;
                      ray.fields.m_Direction.fields.y = fStack_108;
                      ray.fields.m_Direction.fields.z = fVar25;
                      bVar5 = UnityEngine_Physics__Raycast_4e78080
                                        (ray,(UnityEngine_RaycastHit_o *)auStack_d8,1000.0,layerMask,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 == '\0') {
                        fVar18 = fVar18 + (float)auStack_e8._0_4_ * 1000.0;
                        fVar20 = fVar20 + (float)auStack_e8._4_4_ * 1000.0;
                        fVar19 = fVar19 + fVar25 * 1000.0;
                      }
                      else {
                        pSStackY_150 = (System_String_o *)0x41cab6b;
                        __this.fields.m_Point.fields.z = (float)(int)uVar23;
                        __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar23 >> 0x20);
                        __this.fields.m_Point.fields.x = (float)(int)uVar22;
                        __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar22 >> 0x20);
                        __this.fields.m_Normal.fields.y = (float)(int)uVar24;
                        __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar24 >> 0x20);
                        __this.fields.m_FaceID = (uint32_t)fVar19;
                        __this.fields.m_Distance = fVar25;
                        __this.fields.m_UV.fields.x = fVar18;
                        __this.fields.m_UV.fields.y = fVar20;
                        __this.fields.m_Collider = iVar26;
                        UVar21 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_d8);
                        fVar19 = UVar21.fields.z;
                        fVar18 = UVar21.fields.x;
                        fVar20 = UVar21.fields.y;
                      }
                      pSStackY_150 = (System_String_o *)0x41cabbe;
                      SVar15 = (System_Nullable_KeyCode__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                      UVar21.fields.y = fVar20;
                      UVar21.fields.x = fVar18;
                      pSStackY_150 = (System_String_o *)0x41cabd6;
                      UVar21.fields.z = fVar19;
                      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330
                                ((CustomLogic_CustomLogicVector3Builtin_o *)SVar15,UVar21,(MethodInfo *)0x0);
                      return (System_Nullable_KeyCode__o)SVar15;
                    }
                  }
                  pSStackY_150 = (System_String_o *)0x41cabe7;
                  il2cpp_runtime_helper_022b2c90();
                  pSStackY_150 = pSVar17;
                  if (g_data_057ad641 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                    g_data_057ad641 = '\x01';
                  }
                  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                  if (lVar2 != 0) {
                    pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UVar21 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                      UnityEngine_Camera__ScreenPointToRay_4db37e0
                                (&UStackY_168,pUVar3,UVar21,(MethodInfo *)0x0);
                      SVar15 = (System_Nullable_KeyCode__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                      value.fields.z = UStackY_168.fields.m_Direction.fields.z;
                      value.fields.x = UStackY_168.fields.m_Direction.fields.x;
                      value.fields.y = UStackY_168.fields.m_Direction.fields.y;
                      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330
                                ((CustomLogic_CustomLogicVector3Builtin_o *)SVar15,value,(MethodInfo *)0x0);
                      return (System_Nullable_KeyCode__o)SVar15;
                    }
                  }
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057ad642 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                    il2cpp_runtime_helper_023445d0(&"Mouse Y");
                    il2cpp_runtime_helper_023445d0(&"Mouse X");
                    g_data_057ad642 = '\x01';
                  }
                  value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
                  fVar19 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
                  SVar15 = (System_Nullable_KeyCode__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  value_00.fields.y = fVar19;
                  value_00.fields.z = 0.0;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330
                            ((CustomLogic_CustomLogicVector3Builtin_o *)SVar15,value_00,(MethodInfo *)0x0);
                  return (System_Nullable_KeyCode__o)SVar15;
                }
                pSStack_a8 = (System_String_o *)0x41ca9c1;
                bVar5 = Settings_KeybindSetting__GetKeyUp
                                  ((Settings_KeybindSetting_o *)pMVar12,1,(MethodInfo *)0x0);
                cVar4 = (char)bVar5;
              }
              else {
                pSStack_a8 = (System_String_o *)0x41ca985;
                uVar6 = System_Nullable_Int32Enum___get_Value
                                  ((System_Nullable_Int32Enum__o)&_Stack_98,MethodInfo_KeyCode_get_Value);
                pMVar12 = (MethodInfo *)(ulong)uVar6;
                pSStack_a8 = (System_String_o *)0x41ca990;
                bVar5 = UnityEngine_Input__GetKeyUp(uVar6,(MethodInfo *)0x0);
                cVar4 = (char)bVar5;
              }
              uVar6 = 0;
              if (cVar4 != '\0') {
                pSStack_a8 = (System_String_o *)0x41ca999;
                uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar12);
              }
              SVar14.value = 0;
              SVar14.hasValue = uVar6;
              return (System_Nullable_KeyCode__o)SVar14;
            }
            pSStack_90 = (System_String_o *)0x41ca921;
            bVar5 = Settings_KeybindSetting__GetKeyDown
                              ((Settings_KeybindSetting_o *)pMVar12,1,(MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          else {
            pSStack_90 = (System_String_o *)0x41ca8e5;
            uVar6 = System_Nullable_Int32Enum___get_Value
                              ((System_Nullable_Int32Enum__o)&SStack_80,MethodInfo_KeyCode_get_Value);
            pMVar12 = (MethodInfo *)(ulong)uVar6;
            pSStack_90 = (System_String_o *)0x41ca8f0;
            bVar5 = UnityEngine_Input__GetKeyDown(uVar6,(MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          uVar6 = 0;
          if (cVar4 != '\0') {
            pSStack_90 = (System_String_o *)0x41ca8f9;
            uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar12);
          }
          SVar13.value = 0;
          SVar13.hasValue = uVar6;
          return (System_Nullable_KeyCode__o)SVar13;
        }
        pSStack_78 = (System_String_o *)0x41ca881;
        bVar5 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar12,1,(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        pSStack_78 = (System_String_o *)0x41ca845;
        uVar6 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_68,MethodInfo_KeyCode_get_Value);
        pMVar12 = (MethodInfo *)(ulong)uVar6;
        pSStack_78 = (System_String_o *)0x41ca850;
        bVar5 = UnityEngine_Input__GetKey(uVar6,(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      uVar6 = 0;
      if (cVar4 != '\0') {
        pSStack_78 = (System_String_o *)0x41ca859;
        uVar6 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar12);
      }
      SVar11.value = 0;
      SVar11.hasValue = uVar6;
      return (System_Nullable_KeyCode__o)SVar11;
    }
    pSStack_60 = (System_String_o *)0x41ca78e;
    iStack_40 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_58,MethodInfo_KeyCode_get_Value);
    SStack_50.klass = TypeInfo_KeyCode;
    SStack_50.monitor = (void *)0xffffffffffffffff;
    pSStack_60 = (System_String_o *)0x41ca7b6;
    SVar9.fields = (System_Nullable_KeyCode__Fields)System_Enum__ToString(&SStack_50,(MethodInfo *)0x0);
    return (System_Nullable_KeyCode__o)SVar9.fields;
  }
  pSStack_30 = (System_String_o *)0x41ca583;
  method = (MethodInfo *)"CustomKey/";
  bVar5 = System_String__StartsWith(key,(System_String_o *)"CustomKey/",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if ("CustomKey/" == (Il2CppClass *)0x0) goto label_041ca61f;
    pSStack_30 = (System_String_o *)0x41ca5a4;
    pSVar7 = System_String__Substring(key,*(int32_t *)&("CustomKey/"->_1).name,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      pSStack_30 = (System_String_o *)0x41ca5c3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = (System_String_o *)0x41ca5da;
    bVar5 = System_Enum__TryParse_Int32Enum_(pSVar7,&local_1c,MethodInfo_Boolean_TryParse_KeyCode);
    if ((char)bVar5 != '\0') {
      local_18.hasValue = 0;
      local_18.value = 0;
      pSStack_30 = (System_String_o *)0x41ca5ff;
      System_Nullable_Int32Enum____ctor((System_Nullable_Int32Enum__o)&local_18,local_1c,MethodInfo_Nullable_1_UnityEngine_KeyCode);
      return (System_Nullable_KeyCode__o)local_18;
    }
  }
  SVar15.hasValue = 0;
  SVar15.value = 0;
  return (System_Nullable_KeyCode__o)SVar15;
}


// CustomLogic.CustomLogicInputBuiltin$$CanKey
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__CanKey (const MethodInfo* method);
// 0x41ca630

bool_conflict CustomLogic_CustomLogicInputBuiltin__CanKey(MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  int32_t layerMask;
  System_String_o *pSVar7;
  Settings_KeybindSetting_o *pSVar8;
  MethodInfo *pMVar9;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  bool_conflict bVar11;
  System_String_o *pSVar12;
  Il2CppClass *in_RSI;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_140;
  System_String_o *pSStackY_128;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  int32_t iVar21;
  float fStack_e4;
  float fStack_e0;
  UnityEngine_Ray_o UStack_d8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [32];
  float fStack_90;
  undefined8 uStack_8c;
  System_String_o *pSStack_80;
  _union_14 _Stack_70;
  System_String_o *pSStack_68;
  System_Nullable_KeyCode__Fields SStack_58;
  System_String_o *pSStack_50;
  System_Nullable_KeyCode__Fields SStack_40;
  System_String_o *pSStack_38;
  System_Nullable_KeyCode__Fields SStack_30;
  System_Enum_o SStack_28;
  int32_t iStack_18;
  
  if (g_data_057ad63b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad63b = '\x01';
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar7 != (System_String_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      if (*(char *)((long)&pSVar7[5].klass + 2) != '\0') {
        return 0;
      }
      bVar11 = 0;
      bVar5 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar11 = 0;
        bVar5 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = (bool_conflict)CONCAT71(0x5577f,*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x48) == '\0');
        }
      }
      return bVar11;
    }
    in_RSI = TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad63c == '\0') {
    pSStack_38 = (System_String_o *)0x41ca74d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyCode);
    pSStack_38 = (System_String_o *)0x41ca759;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_38 = (System_String_o *)0x41ca765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63c = '\x01';
  }
  pSStack_38 = (System_String_o *)0x41ca774;
  SStack_30 = (System_Nullable_KeyCode__Fields)
              CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar7,(MethodInfo *)in_RSI);
  if ((char)SStack_30.hasValue == '\0') {
    pSStack_38 = (System_String_o *)0x41ca7c4;
    pSVar12 = pSVar7;
    pSVar8 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar7,(MethodInfo *)in_RSI);
    if (pSVar8 != (Settings_KeybindSetting_o *)0x0) {
      pSStack_38 = (System_String_o *)0x41ca7dc;
      bVar5 = (*(pSVar8->klass->vtable)._3_ToString.methodPtr)
                        (pSVar8,(pSVar8->klass->vtable)._3_ToString.method);
      return bVar5;
    }
    pSStack_38 = (System_String_o *)0x41ca7e7;
    il2cpp_runtime_helper_022b2c90();
    pSStack_38 = pSVar7;
    if (g_data_057ad63d == '\0') {
      pSStack_50 = (System_String_o *)0x41ca80d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      pSStack_50 = (System_String_o *)0x41ca819;
      il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
      g_data_057ad63d = '\x01';
    }
    pSStack_50 = (System_String_o *)0x41ca828;
    SStack_40 = (System_Nullable_KeyCode__Fields)
                CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar12,(MethodInfo *)in_RSI);
    if ((char)SStack_40.hasValue == '\0') {
      pSStack_50 = (System_String_o *)0x41ca86b;
      pSVar7 = pSVar12;
      pMVar9 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar12,(MethodInfo *)in_RSI);
      if (pMVar9 == (MethodInfo *)0x0) {
        pSStack_50 = (System_String_o *)0x41ca88c;
        il2cpp_runtime_helper_022b2c90();
        pSStack_50 = pSVar12;
        if (g_data_057ad63e == '\0') {
          pSStack_68 = (System_String_o *)0x41ca8ad;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
          pSStack_68 = (System_String_o *)0x41ca8b9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
          g_data_057ad63e = '\x01';
        }
        pSStack_68 = (System_String_o *)0x41ca8c8;
        SStack_58 = (System_Nullable_KeyCode__Fields)
                    CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar7,(MethodInfo *)in_RSI);
        if ((char)SStack_58.hasValue == '\0') {
          pSStack_68 = (System_String_o *)0x41ca90b;
          pSVar12 = pSVar7;
          pMVar9 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar7,(MethodInfo *)in_RSI);
          if (pMVar9 == (MethodInfo *)0x0) {
            pSStack_68 = (System_String_o *)0x41ca92c;
            il2cpp_runtime_helper_022b2c90();
            pSStack_68 = pSVar7;
            if (g_data_057ad63f == '\0') {
              pSStack_80 = (System_String_o *)0x41ca94d;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
              pSStack_80 = (System_String_o *)0x41ca959;
              il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
              g_data_057ad63f = '\x01';
            }
            pSStack_80 = (System_String_o *)0x41ca968;
            _Stack_70 = (_union_14)
                        CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar12,(MethodInfo *)in_RSI);
            if (_Stack_70._0_1_ == '\0') {
              pSStack_80 = (System_String_o *)0x41ca9ab;
              pMVar9 = (MethodInfo *)
                       CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar12,(MethodInfo *)in_RSI);
              if (pMVar9 == (MethodInfo *)0x0) {
                pSStack_80 = (System_String_o *)0x41ca9cc;
                il2cpp_runtime_helper_022b2c90();
                pSStack_80 = pSVar12;
                if (g_data_057ad640 == '\0') {
                  pSStackY_128 = (System_String_o *)0x41ca9ed;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                  pSStackY_128 = (System_String_o *)0x41ca9f9;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                  pSStackY_128 = (System_String_o *)0x41caa05;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
                  pSStackY_128 = (System_String_o *)0x41caa11;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
                  pSStackY_128 = (System_String_o *)0x41caa1d;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                  g_data_057ad640 = '\x01';
                }
                fStack_90 = 0.0;
                uStack_8c = 0;
                auStack_b0._16_8_ = (InvokerMethod)0x0;
                auStack_b0._24_4_ = 0;
                auStack_b0._28_4_ = 0.0;
                auStack_b0._0_8_ = (Il2CppMethodPointer)0x0;
                auStack_b0._8_8_ = (Il2CppMethodPointer)0x0;
                lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                if (lVar2 != 0) {
                  pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                    pSStackY_128 = (System_String_o *)0x41caa76;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStackY_128 = (System_String_o *)0x41caa7d;
                  UVar16 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                  pSVar12 = (System_String_o *)0x0;
                  if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                    pSStackY_128 = (System_String_o *)0x41caa95;
                    UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_d8,pUVar3,UVar16,(MethodInfo *)0x0);
                    fVar13 = UStack_d8.fields.m_Origin.fields.x;
                    fVar15 = UStack_d8.fields.m_Origin.fields.y;
                    iVar21 = 0;
                    auStack_c0._0_4_ = UStack_d8.fields.m_Direction.fields.x;
                    auStack_c0._4_4_ = UStack_d8.fields.m_Direction.fields.y;
                    auStack_c0._8_8_ = 0;
                    fVar14 = UStack_d8.fields.m_Origin.fields.z;
                    fVar20 = UStack_d8.fields.m_Direction.fields.z;
                    if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                      pSStackY_128 = (System_String_o *)0x41caadb;
                      il2cpp_runtime_helper_02337ed0();
                      fVar14 = UStack_d8.fields.m_Origin.fields.z;
                      fVar20 = UStack_d8.fields.m_Direction.fields.z;
                    }
                    pSStackY_128 = (System_String_o *)0x41caaec;
                    layerMask = UnityEngine_LayerMask__get_value
                                          ((UnityEngine_LayerMask_Fields)
                                           (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                      pSStackY_128 = (System_String_o *)0x41cab06;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uVar17 = CONCAT44(fVar15,fVar13);
                    fStack_e4 = (float)auStack_c0._0_8_;
                    fStack_e0 = SUB84(auStack_c0._0_8_,4);
                    uVar19 = CONCAT44(fVar20,fStack_e0);
                    uVar18 = CONCAT44(fStack_e4,fVar14);
                    pSStackY_128 = (System_String_o *)0x41cab5b;
                    ray.fields.m_Origin.fields.z = fVar14;
                    ray.fields.m_Direction.fields.x = fStack_e4;
                    ray.fields.m_Origin.fields.x = fVar13;
                    ray.fields.m_Origin.fields.y = fVar15;
                    ray.fields.m_Direction.fields.y = fStack_e0;
                    ray.fields.m_Direction.fields.z = fVar20;
                    bVar5 = UnityEngine_Physics__Raycast_4e78080
                                      (ray,(UnityEngine_RaycastHit_o *)auStack_b0,1000.0,layerMask,
                                       (MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      fVar13 = fVar13 + (float)auStack_c0._0_4_ * 1000.0;
                      fVar15 = fVar15 + (float)auStack_c0._4_4_ * 1000.0;
                      fVar14 = fVar14 + fVar20 * 1000.0;
                    }
                    else {
                      pSStackY_128 = (System_String_o *)0x41cab6b;
                      __this.fields.m_Point.fields.z = (float)(int)uVar18;
                      __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar18 >> 0x20);
                      __this.fields.m_Point.fields.x = (float)(int)uVar17;
                      __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
                      __this.fields.m_Normal.fields.y = (float)(int)uVar19;
                      __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar19 >> 0x20);
                      __this.fields.m_FaceID = (uint32_t)fVar14;
                      __this.fields.m_Distance = fVar20;
                      __this.fields.m_UV.fields.x = fVar13;
                      __this.fields.m_UV.fields.y = fVar15;
                      __this.fields.m_Collider = iVar21;
                      UVar16 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_b0);
                      fVar14 = UVar16.fields.z;
                      fVar13 = UVar16.fields.x;
                      fVar15 = UVar16.fields.y;
                    }
                    pSStackY_128 = (System_String_o *)0x41cabbe;
                    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                    UVar16.fields.y = fVar15;
                    UVar16.fields.x = fVar13;
                    pSStackY_128 = (System_String_o *)0x41cabd6;
                    UVar16.fields.z = fVar14;
                    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar16,(MethodInfo *)0x0);
                    return (bool_conflict)pCVar10;
                  }
                }
                pSStackY_128 = (System_String_o *)0x41cabe7;
                il2cpp_runtime_helper_022b2c90();
                pSStackY_128 = pSVar12;
                if (g_data_057ad641 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                  g_data_057ad641 = '\x01';
                }
                lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                if (lVar2 != 0) {
                  pUVar3 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UVar16 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
                    UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_140,pUVar3,UVar16,(MethodInfo *)0x0)
                    ;
                    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                    value.fields.z = UStackY_140.fields.m_Direction.fields.z;
                    value.fields.x = UStackY_140.fields.m_Direction.fields.x;
                    value.fields.y = UStackY_140.fields.m_Direction.fields.y;
                    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value,(MethodInfo *)0x0);
                    return (bool_conflict)pCVar10;
                  }
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057ad642 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                  il2cpp_runtime_helper_023445d0(&"Mouse Y");
                  il2cpp_runtime_helper_023445d0(&"Mouse X");
                  g_data_057ad642 = '\x01';
                }
                value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
                fVar14 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
                pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                value_00.fields.y = fVar14;
                value_00.fields.z = 0.0;
                CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_00,(MethodInfo *)0x0);
                return (bool_conflict)pCVar10;
              }
              pSStack_80 = (System_String_o *)0x41ca9c1;
              bVar5 = Settings_KeybindSetting__GetKeyUp
                                ((Settings_KeybindSetting_o *)pMVar9,1,(MethodInfo *)0x0);
              cVar4 = (char)bVar5;
            }
            else {
              pSStack_80 = (System_String_o *)0x41ca985;
              uVar6 = System_Nullable_Int32Enum___get_Value
                                ((System_Nullable_Int32Enum__o)&_Stack_70,MethodInfo_KeyCode_get_Value);
              pMVar9 = (MethodInfo *)(ulong)uVar6;
              pSStack_80 = (System_String_o *)0x41ca990;
              bVar5 = UnityEngine_Input__GetKeyUp(uVar6,(MethodInfo *)0x0);
              cVar4 = (char)bVar5;
            }
            bVar5 = 0;
            if (cVar4 != '\0') {
              pSStack_80 = (System_String_o *)0x41ca999;
              bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar9);
            }
            return bVar5;
          }
          pSStack_68 = (System_String_o *)0x41ca921;
          bVar5 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar9,1,(MethodInfo *)0x0)
          ;
          cVar4 = (char)bVar5;
        }
        else {
          pSStack_68 = (System_String_o *)0x41ca8e5;
          uVar6 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_58,MethodInfo_KeyCode_get_Value)
          ;
          pMVar9 = (MethodInfo *)(ulong)uVar6;
          pSStack_68 = (System_String_o *)0x41ca8f0;
          bVar5 = UnityEngine_Input__GetKeyDown(uVar6,(MethodInfo *)0x0);
          cVar4 = (char)bVar5;
        }
        bVar5 = 0;
        if (cVar4 != '\0') {
          pSStack_68 = (System_String_o *)0x41ca8f9;
          bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar9);
        }
        return bVar5;
      }
      pSStack_50 = (System_String_o *)0x41ca881;
      bVar5 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar9,1,(MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    else {
      pSStack_50 = (System_String_o *)0x41ca845;
      uVar6 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_40,MethodInfo_KeyCode_get_Value);
      pMVar9 = (MethodInfo *)(ulong)uVar6;
      pSStack_50 = (System_String_o *)0x41ca850;
      bVar5 = UnityEngine_Input__GetKey(uVar6,(MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    bVar5 = 0;
    if (cVar4 != '\0') {
      pSStack_50 = (System_String_o *)0x41ca859;
      bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar9);
    }
    return bVar5;
  }
  pSStack_38 = (System_String_o *)0x41ca78e;
  iStack_18 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_30,MethodInfo_KeyCode_get_Value);
  SStack_28.klass = TypeInfo_KeyCode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  pSStack_38 = (System_String_o *)0x41ca7b6;
  pSVar7 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  return (bool_conflict)pSVar7;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__GetKeyName (System_String_o* key, const MethodInfo* method);
// 0x41ca730

System_String_o * CustomLogic_CustomLogicInputBuiltin__GetKeyName(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar3;
  uint uVar4;
  bool_conflict bVar5;
  int32_t layerMask;
  System_String_o *pSVar6;
  Settings_KeybindSetting_o *pSVar7;
  MethodInfo *pMVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  System_String_o *key_00;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_138;
  System_String_o *pSStackY_120;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  int32_t iVar18;
  float fStack_dc;
  float fStack_d8;
  UnityEngine_Ray_o UStack_d0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  float fStack_88;
  undefined8 uStack_84;
  System_String_o *pSStack_78;
  _union_14 _Stack_68;
  System_String_o *pSStack_60;
  System_Nullable_KeyCode__Fields SStack_50;
  System_String_o *pSStack_48;
  System_Nullable_KeyCode__Fields SStack_38;
  System_String_o *pSStack_30;
  System_Nullable_KeyCode__Fields local_28;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (g_data_057ad63c == '\0') {
    pSStack_30 = (System_String_o *)0x41ca74d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyCode);
    pSStack_30 = (System_String_o *)0x41ca759;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_30 = (System_String_o *)0x41ca765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63c = '\x01';
  }
  pSStack_30 = (System_String_o *)0x41ca774;
  local_28 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_28.hasValue != '\0') {
    pSStack_30 = (System_String_o *)0x41ca78e;
    local_10 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&local_28,MethodInfo_KeyCode_get_Value);
    local_20.klass = TypeInfo_KeyCode;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSStack_30 = (System_String_o *)0x41ca7b6;
    pSVar6 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar6;
  }
  pSStack_30 = (System_String_o *)0x41ca7c4;
  pSVar6 = key;
  pSVar7 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
  if (pSVar7 != (Settings_KeybindSetting_o *)0x0) {
    pSStack_30 = (System_String_o *)0x41ca7dc;
    pSVar6 = (System_String_o *)
             (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                       (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
    return pSVar6;
  }
  pSStack_30 = (System_String_o *)0x41ca7e7;
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = key;
  if (g_data_057ad63d == '\0') {
    pSStack_48 = (System_String_o *)0x41ca80d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_48 = (System_String_o *)0x41ca819;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63d = '\x01';
  }
  pSStack_48 = (System_String_o *)0x41ca828;
  SStack_38 = (System_Nullable_KeyCode__Fields)
              CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar6,method);
  if ((char)SStack_38.hasValue == '\0') {
    pSStack_48 = (System_String_o *)0x41ca86b;
    key_00 = pSVar6;
    pMVar8 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar6,method);
    if (pMVar8 == (MethodInfo *)0x0) {
      pSStack_48 = (System_String_o *)0x41ca88c;
      il2cpp_runtime_helper_022b2c90();
      pSStack_48 = pSVar6;
      if (g_data_057ad63e == '\0') {
        pSStack_60 = (System_String_o *)0x41ca8ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
        pSStack_60 = (System_String_o *)0x41ca8b9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
        g_data_057ad63e = '\x01';
      }
      pSStack_60 = (System_String_o *)0x41ca8c8;
      SStack_50 = (System_Nullable_KeyCode__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,method);
      if ((char)SStack_50.hasValue == '\0') {
        pSStack_60 = (System_String_o *)0x41ca90b;
        pSVar6 = key_00;
        pMVar8 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,method);
        if (pMVar8 == (MethodInfo *)0x0) {
          pSStack_60 = (System_String_o *)0x41ca92c;
          il2cpp_runtime_helper_022b2c90();
          pSStack_60 = key_00;
          if (g_data_057ad63f == '\0') {
            pSStack_78 = (System_String_o *)0x41ca94d;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
            pSStack_78 = (System_String_o *)0x41ca959;
            il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
            g_data_057ad63f = '\x01';
          }
          pSStack_78 = (System_String_o *)0x41ca968;
          _Stack_68 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(pSVar6,method);
          if (_Stack_68._0_1_ == '\0') {
            pSStack_78 = (System_String_o *)0x41ca9ab;
            pMVar8 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar6,method);
            if (pMVar8 == (MethodInfo *)0x0) {
              pSStack_78 = (System_String_o *)0x41ca9cc;
              il2cpp_runtime_helper_022b2c90();
              pSStack_78 = pSVar6;
              if (g_data_057ad640 == '\0') {
                pSStackY_120 = (System_String_o *)0x41ca9ed;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                pSStackY_120 = (System_String_o *)0x41ca9f9;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                pSStackY_120 = (System_String_o *)0x41caa05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
                pSStackY_120 = (System_String_o *)0x41caa11;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
                pSStackY_120 = (System_String_o *)0x41caa1d;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad640 = '\x01';
              }
              fStack_88 = 0.0;
              uStack_84 = 0;
              auStack_a8._16_8_ = (InvokerMethod)0x0;
              auStack_a8._24_4_ = 0;
              auStack_a8._28_4_ = 0.0;
              auStack_a8._0_8_ = (Il2CppMethodPointer)0x0;
              auStack_a8._8_8_ = (Il2CppMethodPointer)0x0;
              lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar1 != 0) {
                pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  pSStackY_120 = (System_String_o *)0x41caa76;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStackY_120 = (System_String_o *)0x41caa7d;
                UVar13 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                pSVar6 = (System_String_o *)0x0;
                if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
                  pSStackY_120 = (System_String_o *)0x41caa95;
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_d0,pUVar2,UVar13,(MethodInfo *)0x0);
                  fVar10 = UStack_d0.fields.m_Origin.fields.x;
                  fVar12 = UStack_d0.fields.m_Origin.fields.y;
                  iVar18 = 0;
                  auStack_b8._0_4_ = UStack_d0.fields.m_Direction.fields.x;
                  auStack_b8._4_4_ = UStack_d0.fields.m_Direction.fields.y;
                  auStack_b8._8_8_ = 0;
                  fVar11 = UStack_d0.fields.m_Origin.fields.z;
                  fVar17 = UStack_d0.fields.m_Direction.fields.z;
                  if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                    pSStackY_120 = (System_String_o *)0x41caadb;
                    il2cpp_runtime_helper_02337ed0();
                    fVar11 = UStack_d0.fields.m_Origin.fields.z;
                    fVar17 = UStack_d0.fields.m_Direction.fields.z;
                  }
                  pSStackY_120 = (System_String_o *)0x41caaec;
                  layerMask = UnityEngine_LayerMask__get_value
                                        ((UnityEngine_LayerMask_Fields)
                                         (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                    pSStackY_120 = (System_String_o *)0x41cab06;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar14 = CONCAT44(fVar12,fVar10);
                  fStack_dc = (float)auStack_b8._0_8_;
                  fStack_d8 = SUB84(auStack_b8._0_8_,4);
                  uVar16 = CONCAT44(fVar17,fStack_d8);
                  uVar15 = CONCAT44(fStack_dc,fVar11);
                  pSStackY_120 = (System_String_o *)0x41cab5b;
                  ray.fields.m_Origin.fields.z = fVar11;
                  ray.fields.m_Direction.fields.x = fStack_dc;
                  ray.fields.m_Origin.fields.x = fVar10;
                  ray.fields.m_Origin.fields.y = fVar12;
                  ray.fields.m_Direction.fields.y = fStack_d8;
                  ray.fields.m_Direction.fields.z = fVar17;
                  bVar5 = UnityEngine_Physics__Raycast_4e78080
                                    (ray,(UnityEngine_RaycastHit_o *)auStack_a8,1000.0,layerMask,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    fVar10 = fVar10 + (float)auStack_b8._0_4_ * 1000.0;
                    fVar12 = fVar12 + (float)auStack_b8._4_4_ * 1000.0;
                    fVar11 = fVar11 + fVar17 * 1000.0;
                  }
                  else {
                    pSStackY_120 = (System_String_o *)0x41cab6b;
                    __this.fields.m_Point.fields.z = (float)(int)uVar15;
                    __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar15 >> 0x20);
                    __this.fields.m_Point.fields.x = (float)(int)uVar14;
                    __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
                    __this.fields.m_Normal.fields.y = (float)(int)uVar16;
                    __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar16 >> 0x20);
                    __this.fields.m_FaceID = (uint32_t)fVar11;
                    __this.fields.m_Distance = fVar17;
                    __this.fields.m_UV.fields.x = fVar10;
                    __this.fields.m_UV.fields.y = fVar12;
                    __this.fields.m_Collider = iVar18;
                    UVar13 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_a8);
                    fVar11 = UVar13.fields.z;
                    fVar10 = UVar13.fields.x;
                    fVar12 = UVar13.fields.y;
                  }
                  pSStackY_120 = (System_String_o *)0x41cabbe;
                  pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  UVar13.fields.y = fVar12;
                  UVar13.fields.x = fVar10;
                  pSStackY_120 = (System_String_o *)0x41cabd6;
                  UVar13.fields.z = fVar11;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar13,(MethodInfo *)0x0);
                  return (System_String_o *)pCVar9;
                }
              }
              pSStackY_120 = (System_String_o *)0x41cabe7;
              il2cpp_runtime_helper_022b2c90();
              pSStackY_120 = pSVar6;
              if (g_data_057ad641 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad641 = '\x01';
              }
              lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar1 != 0) {
                pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UVar13 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_138,pUVar2,UVar13,(MethodInfo *)0x0);
                  pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  value.fields.z = UStackY_138.fields.m_Direction.fields.z;
                  value.fields.x = UStackY_138.fields.m_Direction.fields.x;
                  value.fields.y = UStackY_138.fields.m_Direction.fields.y;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,value,(MethodInfo *)0x0);
                  return (System_String_o *)pCVar9;
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ad642 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&"Mouse Y");
                il2cpp_runtime_helper_023445d0(&"Mouse X");
                g_data_057ad642 = '\x01';
              }
              value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
              fVar11 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
              pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
              value_00.fields.y = fVar11;
              value_00.fields.z = 0.0;
              CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,value_00,(MethodInfo *)0x0);
              return (System_String_o *)pCVar9;
            }
            pSStack_78 = (System_String_o *)0x41ca9c1;
            bVar5 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)pMVar8,1,(MethodInfo *)0x0)
            ;
            cVar3 = (char)bVar5;
          }
          else {
            pSStack_78 = (System_String_o *)0x41ca985;
            uVar4 = System_Nullable_Int32Enum___get_Value
                              ((System_Nullable_Int32Enum__o)&_Stack_68,MethodInfo_KeyCode_get_Value);
            pMVar8 = (MethodInfo *)(ulong)uVar4;
            pSStack_78 = (System_String_o *)0x41ca990;
            bVar5 = UnityEngine_Input__GetKeyUp(uVar4,(MethodInfo *)0x0);
            cVar3 = (char)bVar5;
          }
          uVar4 = 0;
          if (cVar3 != '\0') {
            pSStack_78 = (System_String_o *)0x41ca999;
            uVar4 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar8);
          }
          return (System_String_o *)(ulong)uVar4;
        }
        pSStack_60 = (System_String_o *)0x41ca921;
        bVar5 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar8,1,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      else {
        pSStack_60 = (System_String_o *)0x41ca8e5;
        uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_50,MethodInfo_KeyCode_get_Value);
        pMVar8 = (MethodInfo *)(ulong)uVar4;
        pSStack_60 = (System_String_o *)0x41ca8f0;
        bVar5 = UnityEngine_Input__GetKeyDown(uVar4,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      uVar4 = 0;
      if (cVar3 != '\0') {
        pSStack_60 = (System_String_o *)0x41ca8f9;
        uVar4 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar8);
      }
      return (System_String_o *)(ulong)uVar4;
    }
    pSStack_48 = (System_String_o *)0x41ca881;
    bVar5 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar8,1,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  else {
    pSStack_48 = (System_String_o *)0x41ca845;
    uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_38,MethodInfo_KeyCode_get_Value);
    pMVar8 = (MethodInfo *)(ulong)uVar4;
    pSStack_48 = (System_String_o *)0x41ca850;
    bVar5 = UnityEngine_Input__GetKey(uVar4,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  uVar4 = 0;
  if (cVar3 != '\0') {
    pSStack_48 = (System_String_o *)0x41ca859;
    uVar4 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar8);
  }
  return (System_String_o *)(ulong)uVar4;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyHold
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold (System_String_o* key, const MethodInfo* method);
// 0x41ca7f0

bool_conflict CustomLogic_CustomLogicInputBuiltin__GetKeyHold(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar3;
  uint uVar4;
  bool_conflict bVar5;
  int32_t layerMask;
  MethodInfo *pMVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  System_String_o *key_00;
  System_String_o *key_01;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_110;
  System_String_o *pSStackY_f8;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  int32_t iVar16;
  float fStack_b4;
  float fStack_b0;
  UnityEngine_Ray_o UStack_a8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  float fStack_60;
  undefined8 uStack_5c;
  System_String_o *pSStack_50;
  _union_14 _Stack_40;
  System_String_o *pSStack_38;
  System_Nullable_KeyCode__Fields SStack_28;
  System_String_o *pSStack_20;
  System_Nullable_KeyCode__Fields local_10;
  
  if (g_data_057ad63d == '\0') {
    pSStack_20 = (System_String_o *)0x41ca80d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_20 = (System_String_o *)0x41ca819;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63d = '\x01';
  }
  pSStack_20 = (System_String_o *)0x41ca828;
  local_10 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_10.hasValue == '\0') {
    pSStack_20 = (System_String_o *)0x41ca86b;
    key_01 = key;
    pMVar6 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (pMVar6 == (MethodInfo *)0x0) {
      pSStack_20 = (System_String_o *)0x41ca88c;
      il2cpp_runtime_helper_022b2c90();
      pSStack_20 = key;
      if (g_data_057ad63e == '\0') {
        pSStack_38 = (System_String_o *)0x41ca8ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
        pSStack_38 = (System_String_o *)0x41ca8b9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
        g_data_057ad63e = '\x01';
      }
      pSStack_38 = (System_String_o *)0x41ca8c8;
      SStack_28 = (System_Nullable_KeyCode__Fields)
                  CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_01,method);
      if ((char)SStack_28.hasValue == '\0') {
        pSStack_38 = (System_String_o *)0x41ca90b;
        key_00 = key_01;
        pMVar6 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_01,method);
        if (pMVar6 == (MethodInfo *)0x0) {
          pSStack_38 = (System_String_o *)0x41ca92c;
          il2cpp_runtime_helper_022b2c90();
          pSStack_38 = key_01;
          if (g_data_057ad63f == '\0') {
            pSStack_50 = (System_String_o *)0x41ca94d;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
            pSStack_50 = (System_String_o *)0x41ca959;
            il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
            g_data_057ad63f = '\x01';
          }
          pSStack_50 = (System_String_o *)0x41ca968;
          _Stack_40 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,method);
          if (_Stack_40._0_1_ == '\0') {
            pSStack_50 = (System_String_o *)0x41ca9ab;
            pMVar6 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,method);
            if (pMVar6 == (MethodInfo *)0x0) {
              pSStack_50 = (System_String_o *)0x41ca9cc;
              il2cpp_runtime_helper_022b2c90();
              pSStack_50 = key_00;
              if (g_data_057ad640 == '\0') {
                pSStackY_f8 = (System_String_o *)0x41ca9ed;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                pSStackY_f8 = (System_String_o *)0x41ca9f9;
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                pSStackY_f8 = (System_String_o *)0x41caa05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
                pSStackY_f8 = (System_String_o *)0x41caa11;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
                pSStackY_f8 = (System_String_o *)0x41caa1d;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad640 = '\x01';
              }
              fStack_60 = 0.0;
              uStack_5c = 0;
              auStack_80._16_8_ = (InvokerMethod)0x0;
              auStack_80._24_4_ = 0;
              auStack_80._28_4_ = 0.0;
              auStack_80._0_8_ = (Il2CppMethodPointer)0x0;
              auStack_80._8_8_ = (Il2CppMethodPointer)0x0;
              lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar1 != 0) {
                pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  pSStackY_f8 = (System_String_o *)0x41caa76;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStackY_f8 = (System_String_o *)0x41caa7d;
                UVar11 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                key_00 = (System_String_o *)0x0;
                if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
                  pSStackY_f8 = (System_String_o *)0x41caa95;
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_a8,pUVar2,UVar11,(MethodInfo *)0x0);
                  fVar8 = UStack_a8.fields.m_Origin.fields.x;
                  fVar10 = UStack_a8.fields.m_Origin.fields.y;
                  iVar16 = 0;
                  auStack_90._0_4_ = UStack_a8.fields.m_Direction.fields.x;
                  auStack_90._4_4_ = UStack_a8.fields.m_Direction.fields.y;
                  auStack_90._8_8_ = 0;
                  fVar9 = UStack_a8.fields.m_Origin.fields.z;
                  fVar15 = UStack_a8.fields.m_Direction.fields.z;
                  if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                    pSStackY_f8 = (System_String_o *)0x41caadb;
                    il2cpp_runtime_helper_02337ed0();
                    fVar9 = UStack_a8.fields.m_Origin.fields.z;
                    fVar15 = UStack_a8.fields.m_Direction.fields.z;
                  }
                  pSStackY_f8 = (System_String_o *)0x41caaec;
                  layerMask = UnityEngine_LayerMask__get_value
                                        ((UnityEngine_LayerMask_Fields)
                                         (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                    pSStackY_f8 = (System_String_o *)0x41cab06;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar12 = CONCAT44(fVar10,fVar8);
                  fStack_b4 = (float)auStack_90._0_8_;
                  fStack_b0 = SUB84(auStack_90._0_8_,4);
                  uVar14 = CONCAT44(fVar15,fStack_b0);
                  uVar13 = CONCAT44(fStack_b4,fVar9);
                  pSStackY_f8 = (System_String_o *)0x41cab5b;
                  ray.fields.m_Origin.fields.z = fVar9;
                  ray.fields.m_Direction.fields.x = fStack_b4;
                  ray.fields.m_Origin.fields.x = fVar8;
                  ray.fields.m_Origin.fields.y = fVar10;
                  ray.fields.m_Direction.fields.y = fStack_b0;
                  ray.fields.m_Direction.fields.z = fVar15;
                  bVar5 = UnityEngine_Physics__Raycast_4e78080
                                    (ray,(UnityEngine_RaycastHit_o *)auStack_80,1000.0,layerMask,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    fVar8 = fVar8 + (float)auStack_90._0_4_ * 1000.0;
                    fVar10 = fVar10 + (float)auStack_90._4_4_ * 1000.0;
                    fVar9 = fVar9 + fVar15 * 1000.0;
                  }
                  else {
                    pSStackY_f8 = (System_String_o *)0x41cab6b;
                    __this.fields.m_Point.fields.z = (float)(int)uVar13;
                    __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar13 >> 0x20);
                    __this.fields.m_Point.fields.x = (float)(int)uVar12;
                    __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
                    __this.fields.m_Normal.fields.y = (float)(int)uVar14;
                    __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar14 >> 0x20);
                    __this.fields.m_FaceID = (uint32_t)fVar9;
                    __this.fields.m_Distance = fVar15;
                    __this.fields.m_UV.fields.x = fVar8;
                    __this.fields.m_UV.fields.y = fVar10;
                    __this.fields.m_Collider = iVar16;
                    UVar11 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_80);
                    fVar9 = UVar11.fields.z;
                    fVar8 = UVar11.fields.x;
                    fVar10 = UVar11.fields.y;
                  }
                  pSStackY_f8 = (System_String_o *)0x41cabbe;
                  pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  UVar11.fields.y = fVar10;
                  UVar11.fields.x = fVar8;
                  pSStackY_f8 = (System_String_o *)0x41cabd6;
                  UVar11.fields.z = fVar9;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar11,(MethodInfo *)0x0);
                  return (bool_conflict)pCVar7;
                }
              }
              pSStackY_f8 = (System_String_o *)0x41cabe7;
              il2cpp_runtime_helper_022b2c90();
              pSStackY_f8 = key_00;
              if (g_data_057ad641 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                g_data_057ad641 = '\x01';
              }
              lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar1 != 0) {
                pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UVar11 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
                  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_110,pUVar2,UVar11,(MethodInfo *)0x0);
                  pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
                  value.fields.z = UStackY_110.fields.m_Direction.fields.z;
                  value.fields.x = UStackY_110.fields.m_Direction.fields.x;
                  value.fields.y = UStackY_110.fields.m_Direction.fields.y;
                  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,value,(MethodInfo *)0x0);
                  return (bool_conflict)pCVar7;
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ad642 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
                il2cpp_runtime_helper_023445d0(&"Mouse Y");
                il2cpp_runtime_helper_023445d0(&"Mouse X");
                g_data_057ad642 = '\x01';
              }
              value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
              fVar9 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
              pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
              value_00.fields.y = fVar9;
              value_00.fields.z = 0.0;
              CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,value_00,(MethodInfo *)0x0);
              return (bool_conflict)pCVar7;
            }
            pSStack_50 = (System_String_o *)0x41ca9c1;
            bVar5 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)pMVar6,1,(MethodInfo *)0x0)
            ;
            cVar3 = (char)bVar5;
          }
          else {
            pSStack_50 = (System_String_o *)0x41ca985;
            uVar4 = System_Nullable_Int32Enum___get_Value
                              ((System_Nullable_Int32Enum__o)&_Stack_40,MethodInfo_KeyCode_get_Value);
            pMVar6 = (MethodInfo *)(ulong)uVar4;
            pSStack_50 = (System_String_o *)0x41ca990;
            bVar5 = UnityEngine_Input__GetKeyUp(uVar4,(MethodInfo *)0x0);
            cVar3 = (char)bVar5;
          }
          bVar5 = 0;
          if (cVar3 != '\0') {
            pSStack_50 = (System_String_o *)0x41ca999;
            bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar6);
          }
          return bVar5;
        }
        pSStack_38 = (System_String_o *)0x41ca921;
        bVar5 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar6,1,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      else {
        pSStack_38 = (System_String_o *)0x41ca8e5;
        uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&SStack_28,MethodInfo_KeyCode_get_Value);
        pMVar6 = (MethodInfo *)(ulong)uVar4;
        pSStack_38 = (System_String_o *)0x41ca8f0;
        bVar5 = UnityEngine_Input__GetKeyDown(uVar4,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      bVar5 = 0;
      if (cVar3 != '\0') {
        pSStack_38 = (System_String_o *)0x41ca8f9;
        bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar6);
      }
      return bVar5;
    }
    pSStack_20 = (System_String_o *)0x41ca881;
    bVar5 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar6,1,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  else {
    pSStack_20 = (System_String_o *)0x41ca845;
    uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    pMVar6 = (MethodInfo *)(ulong)uVar4;
    pSStack_20 = (System_String_o *)0x41ca850;
    bVar5 = UnityEngine_Input__GetKey(uVar4,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  bVar5 = 0;
  if (cVar3 != '\0') {
    pSStack_20 = (System_String_o *)0x41ca859;
    bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar6);
  }
  return bVar5;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyDown
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown (System_String_o* key, const MethodInfo* method);
// 0x41ca890

bool_conflict CustomLogic_CustomLogicInputBuiltin__GetKeyDown(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar3;
  uint uVar4;
  bool_conflict bVar5;
  int32_t layerMask;
  MethodInfo *pMVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  System_String_o *key_00;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_f8;
  System_String_o *pSStackY_e0;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  int32_t iVar16;
  float fStack_9c;
  float fStack_98;
  UnityEngine_Ray_o UStack_90;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [32];
  float fStack_48;
  undefined8 uStack_44;
  System_String_o *pSStack_38;
  _union_14 _Stack_28;
  System_String_o *pSStack_20;
  System_Nullable_KeyCode__Fields local_10;
  
  if (g_data_057ad63e == '\0') {
    pSStack_20 = (System_String_o *)0x41ca8ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_20 = (System_String_o *)0x41ca8b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63e = '\x01';
  }
  pSStack_20 = (System_String_o *)0x41ca8c8;
  local_10 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_10.hasValue == '\0') {
    pSStack_20 = (System_String_o *)0x41ca90b;
    key_00 = key;
    pMVar6 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (pMVar6 == (MethodInfo *)0x0) {
      pSStack_20 = (System_String_o *)0x41ca92c;
      il2cpp_runtime_helper_022b2c90();
      pSStack_20 = key;
      if (g_data_057ad63f == '\0') {
        pSStack_38 = (System_String_o *)0x41ca94d;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
        pSStack_38 = (System_String_o *)0x41ca959;
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
        g_data_057ad63f = '\x01';
      }
      pSStack_38 = (System_String_o *)0x41ca968;
      _Stack_28 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key_00,method);
      if (_Stack_28._0_1_ == '\0') {
        pSStack_38 = (System_String_o *)0x41ca9ab;
        pMVar6 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key_00,method);
        if (pMVar6 == (MethodInfo *)0x0) {
          pSStack_38 = (System_String_o *)0x41ca9cc;
          il2cpp_runtime_helper_022b2c90();
          pSStack_38 = key_00;
          if (g_data_057ad640 == '\0') {
            pSStackY_e0 = (System_String_o *)0x41ca9ed;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
            pSStackY_e0 = (System_String_o *)0x41ca9f9;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
            pSStackY_e0 = (System_String_o *)0x41caa05;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
            pSStackY_e0 = (System_String_o *)0x41caa11;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
            pSStackY_e0 = (System_String_o *)0x41caa1d;
            il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
            g_data_057ad640 = '\x01';
          }
          fStack_48 = 0.0;
          uStack_44 = 0;
          auStack_68._16_8_ = (InvokerMethod)0x0;
          auStack_68._24_4_ = 0;
          auStack_68._28_4_ = 0.0;
          auStack_68._0_8_ = (Il2CppMethodPointer)0x0;
          auStack_68._8_8_ = (Il2CppMethodPointer)0x0;
          lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (lVar1 != 0) {
            pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
            if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
              pSStackY_e0 = (System_String_o *)0x41caa76;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStackY_e0 = (System_String_o *)0x41caa7d;
            UVar11 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
            key_00 = (System_String_o *)0x0;
            if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
              pSStackY_e0 = (System_String_o *)0x41caa95;
              UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_90,pUVar2,UVar11,(MethodInfo *)0x0);
              fVar8 = UStack_90.fields.m_Origin.fields.x;
              fVar10 = UStack_90.fields.m_Origin.fields.y;
              iVar16 = 0;
              auStack_78._0_4_ = UStack_90.fields.m_Direction.fields.x;
              auStack_78._4_4_ = UStack_90.fields.m_Direction.fields.y;
              auStack_78._8_8_ = 0;
              fVar9 = UStack_90.fields.m_Origin.fields.z;
              fVar15 = UStack_90.fields.m_Direction.fields.z;
              if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
                pSStackY_e0 = (System_String_o *)0x41caadb;
                il2cpp_runtime_helper_02337ed0();
                fVar9 = UStack_90.fields.m_Origin.fields.z;
                fVar15 = UStack_90.fields.m_Direction.fields.z;
              }
              pSStackY_e0 = (System_String_o *)0x41caaec;
              layerMask = UnityEngine_LayerMask__get_value
                                    ((UnityEngine_LayerMask_Fields)
                                     (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                pSStackY_e0 = (System_String_o *)0x41cab06;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar12 = CONCAT44(fVar10,fVar8);
              fStack_9c = (float)auStack_78._0_8_;
              fStack_98 = SUB84(auStack_78._0_8_,4);
              uVar14 = CONCAT44(fVar15,fStack_98);
              uVar13 = CONCAT44(fStack_9c,fVar9);
              pSStackY_e0 = (System_String_o *)0x41cab5b;
              ray.fields.m_Origin.fields.z = fVar9;
              ray.fields.m_Direction.fields.x = fStack_9c;
              ray.fields.m_Origin.fields.x = fVar8;
              ray.fields.m_Origin.fields.y = fVar10;
              ray.fields.m_Direction.fields.y = fStack_98;
              ray.fields.m_Direction.fields.z = fVar15;
              bVar5 = UnityEngine_Physics__Raycast_4e78080
                                (ray,(UnityEngine_RaycastHit_o *)auStack_68,1000.0,layerMask,(MethodInfo *)0x0
                                );
              if ((char)bVar5 == '\0') {
                fVar8 = fVar8 + (float)auStack_78._0_4_ * 1000.0;
                fVar10 = fVar10 + (float)auStack_78._4_4_ * 1000.0;
                fVar9 = fVar9 + fVar15 * 1000.0;
              }
              else {
                pSStackY_e0 = (System_String_o *)0x41cab6b;
                __this.fields.m_Point.fields.z = (float)(int)uVar13;
                __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar13 >> 0x20);
                __this.fields.m_Point.fields.x = (float)(int)uVar12;
                __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
                __this.fields.m_Normal.fields.y = (float)(int)uVar14;
                __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar14 >> 0x20);
                __this.fields.m_FaceID = (uint32_t)fVar9;
                __this.fields.m_Distance = fVar15;
                __this.fields.m_UV.fields.x = fVar8;
                __this.fields.m_UV.fields.y = fVar10;
                __this.fields.m_Collider = iVar16;
                UVar11 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_68);
                fVar9 = UVar11.fields.z;
                fVar8 = UVar11.fields.x;
                fVar10 = UVar11.fields.y;
              }
              pSStackY_e0 = (System_String_o *)0x41cabbe;
              pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
              UVar11.fields.y = fVar10;
              UVar11.fields.x = fVar8;
              pSStackY_e0 = (System_String_o *)0x41cabd6;
              UVar11.fields.z = fVar9;
              CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar11,(MethodInfo *)0x0);
              return (bool_conflict)pCVar7;
            }
          }
          pSStackY_e0 = (System_String_o *)0x41cabe7;
          il2cpp_runtime_helper_022b2c90();
          pSStackY_e0 = key_00;
          if (g_data_057ad641 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
            g_data_057ad641 = '\x01';
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (lVar1 != 0) {
            pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
            if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UVar11 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
              UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_f8,pUVar2,UVar11,(MethodInfo *)0x0);
              pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
              value.fields.z = UStackY_f8.fields.m_Direction.fields.z;
              value.fields.x = UStackY_f8.fields.m_Direction.fields.x;
              value.fields.y = UStackY_f8.fields.m_Direction.fields.y;
              CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,value,(MethodInfo *)0x0);
              return (bool_conflict)pCVar7;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ad642 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
            il2cpp_runtime_helper_023445d0(&"Mouse Y");
            il2cpp_runtime_helper_023445d0(&"Mouse X");
            g_data_057ad642 = '\x01';
          }
          value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar9 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.y = fVar9;
          value_00.fields.z = 0.0;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,value_00,(MethodInfo *)0x0);
          return (bool_conflict)pCVar7;
        }
        pSStack_38 = (System_String_o *)0x41ca9c1;
        bVar5 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)pMVar6,1,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      else {
        pSStack_38 = (System_String_o *)0x41ca985;
        uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&_Stack_28,MethodInfo_KeyCode_get_Value);
        pMVar6 = (MethodInfo *)(ulong)uVar4;
        pSStack_38 = (System_String_o *)0x41ca990;
        bVar5 = UnityEngine_Input__GetKeyUp(uVar4,(MethodInfo *)0x0);
        cVar3 = (char)bVar5;
      }
      bVar5 = 0;
      if (cVar3 != '\0') {
        pSStack_38 = (System_String_o *)0x41ca999;
        bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar6);
      }
      return bVar5;
    }
    pSStack_20 = (System_String_o *)0x41ca921;
    bVar5 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar6,1,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  else {
    pSStack_20 = (System_String_o *)0x41ca8e5;
    uVar4 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    pMVar6 = (MethodInfo *)(ulong)uVar4;
    pSStack_20 = (System_String_o *)0x41ca8f0;
    bVar5 = UnityEngine_Input__GetKeyDown(uVar4,(MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  bVar5 = 0;
  if (cVar3 != '\0') {
    pSStack_20 = (System_String_o *)0x41ca8f9;
    bVar5 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar6);
  }
  return bVar5;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyUp
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp (System_String_o* key, const MethodInfo* method);
// 0x41ca930

bool_conflict CustomLogic_CustomLogicInputBuiltin__GetKeyUp(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  char cVar3;
  uint key_00;
  bool_conflict bVar4;
  int32_t layerMask;
  MethodInfo *method_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_e0;
  System_String_o *pSStackY_c8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  int32_t iVar14;
  float fStack_84;
  float fStack_80;
  UnityEngine_Ray_o UStack_78;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  float fStack_30;
  undefined8 uStack_2c;
  System_String_o *pSStack_20;
  _union_14 local_10;
  
  if (g_data_057ad63f == '\0') {
    pSStack_20 = (System_String_o *)0x41ca94d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_20 = (System_String_o *)0x41ca959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyCode_get_Value);
    g_data_057ad63f = '\x01';
  }
  pSStack_20 = (System_String_o *)0x41ca968;
  local_10 = (_union_14)CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if (local_10._0_1_ == '\0') {
    pSStack_20 = (System_String_o *)0x41ca9ab;
    method_00 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (method_00 == (MethodInfo *)0x0) {
      pSStack_20 = (System_String_o *)0x41ca9cc;
      il2cpp_runtime_helper_022b2c90();
      pSStack_20 = key;
      if (g_data_057ad640 == '\0') {
        pSStackY_c8 = (System_String_o *)0x41ca9ed;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        pSStackY_c8 = (System_String_o *)0x41ca9f9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        pSStackY_c8 = (System_String_o *)0x41caa05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        pSStackY_c8 = (System_String_o *)0x41caa11;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
        pSStackY_c8 = (System_String_o *)0x41caa1d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad640 = '\x01';
      }
      fStack_30 = 0.0;
      uStack_2c = 0;
      auStack_50._16_8_ = (InvokerMethod)0x0;
      auStack_50._24_4_ = 0;
      auStack_50._28_4_ = 0.0;
      auStack_50._0_8_ = (Il2CppMethodPointer)0x0;
      auStack_50._8_8_ = (Il2CppMethodPointer)0x0;
      lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar1 != 0) {
        pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          pSStackY_c8 = (System_String_o *)0x41caa76;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_c8 = (System_String_o *)0x41caa7d;
        UVar9 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        key = (System_String_o *)0x0;
        if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
          pSStackY_c8 = (System_String_o *)0x41caa95;
          UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_78,pUVar2,UVar9,(MethodInfo *)0x0);
          fVar6 = UStack_78.fields.m_Origin.fields.x;
          fVar8 = UStack_78.fields.m_Origin.fields.y;
          iVar14 = 0;
          auStack_60._0_4_ = UStack_78.fields.m_Direction.fields.x;
          auStack_60._4_4_ = UStack_78.fields.m_Direction.fields.y;
          auStack_60._8_8_ = 0;
          fVar7 = UStack_78.fields.m_Origin.fields.z;
          fVar13 = UStack_78.fields.m_Direction.fields.z;
          if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
            pSStackY_c8 = (System_String_o *)0x41caadb;
            il2cpp_runtime_helper_02337ed0();
            fVar7 = UStack_78.fields.m_Origin.fields.z;
            fVar13 = UStack_78.fields.m_Direction.fields.z;
          }
          pSStackY_c8 = (System_String_o *)0x41caaec;
          layerMask = UnityEngine_LayerMask__get_value
                                ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),
                                 (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            pSStackY_c8 = (System_String_o *)0x41cab06;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar10 = CONCAT44(fVar8,fVar6);
          fStack_84 = (float)auStack_60._0_8_;
          fStack_80 = SUB84(auStack_60._0_8_,4);
          uVar12 = CONCAT44(fVar13,fStack_80);
          uVar11 = CONCAT44(fStack_84,fVar7);
          pSStackY_c8 = (System_String_o *)0x41cab5b;
          ray.fields.m_Origin.fields.z = fVar7;
          ray.fields.m_Direction.fields.x = fStack_84;
          ray.fields.m_Origin.fields.x = fVar6;
          ray.fields.m_Origin.fields.y = fVar8;
          ray.fields.m_Direction.fields.y = fStack_80;
          ray.fields.m_Direction.fields.z = fVar13;
          bVar4 = UnityEngine_Physics__Raycast_4e78080
                            (ray,(UnityEngine_RaycastHit_o *)auStack_50,1000.0,layerMask,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            fVar6 = fVar6 + (float)auStack_60._0_4_ * 1000.0;
            fVar8 = fVar8 + (float)auStack_60._4_4_ * 1000.0;
            fVar7 = fVar7 + fVar13 * 1000.0;
          }
          else {
            pSStackY_c8 = (System_String_o *)0x41cab6b;
            __this.fields.m_Point.fields.z = (float)(int)uVar11;
            __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar11 >> 0x20);
            __this.fields.m_Point.fields.x = (float)(int)uVar10;
            __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
            __this.fields.m_Normal.fields.y = (float)(int)uVar12;
            __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
            __this.fields.m_FaceID = (uint32_t)fVar7;
            __this.fields.m_Distance = fVar13;
            __this.fields.m_UV.fields.x = fVar6;
            __this.fields.m_UV.fields.y = fVar8;
            __this.fields.m_Collider = iVar14;
            UVar9 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)auStack_50);
            fVar7 = UVar9.fields.z;
            fVar6 = UVar9.fields.x;
            fVar8 = UVar9.fields.y;
          }
          pSStackY_c8 = (System_String_o *)0x41cabbe;
          pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          UVar9.fields.y = fVar8;
          UVar9.fields.x = fVar6;
          pSStackY_c8 = (System_String_o *)0x41cabd6;
          UVar9.fields.z = fVar7;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar9,(MethodInfo *)0x0);
          return (bool_conflict)pCVar5;
        }
      }
      pSStackY_c8 = (System_String_o *)0x41cabe7;
      il2cpp_runtime_helper_022b2c90();
      pSStackY_c8 = key;
      if (g_data_057ad641 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad641 = '\x01';
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar1 != 0) {
        pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar9 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_e0,pUVar2,UVar9,(MethodInfo *)0x0);
          pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          value.fields.z = UStackY_e0.fields.m_Direction.fields.z;
          value.fields.x = UStackY_e0.fields.m_Direction.fields.x;
          value.fields.y = UStackY_e0.fields.m_Direction.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
          return (bool_conflict)pCVar5;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad642 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        il2cpp_runtime_helper_023445d0(&"Mouse Y");
        il2cpp_runtime_helper_023445d0(&"Mouse X");
        g_data_057ad642 = '\x01';
      }
      value_00.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
      fVar7 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
      pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      value_00.fields.y = fVar7;
      value_00.fields.z = 0.0;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value_00,(MethodInfo *)0x0);
      return (bool_conflict)pCVar5;
    }
    pSStack_20 = (System_String_o *)0x41ca9c1;
    bVar4 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)method_00,1,(MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    pSStack_20 = (System_String_o *)0x41ca985;
    key_00 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    method_00 = (MethodInfo *)(ulong)key_00;
    pSStack_20 = (System_String_o *)0x41ca990;
    bVar4 = UnityEngine_Input__GetKeyUp(key_00,(MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  bVar4 = 0;
  if (cVar3 != '\0') {
    pSStack_20 = (System_String_o *)0x41ca999;
    bVar4 = CustomLogic_CustomLogicInputBuiltin__CanKey(method_00);
  }
  return bVar4;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseAim
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseAim (const MethodInfo* method);
// 0x41ca9d0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicInputBuiltin__GetMouseAim(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this;
  int32_t layerMask;
  bool_conflict bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  undefined8 unaff_RBX;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Ray_o UStackY_c8;
  undefined8 uStackY_b0;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  int32_t iVar13;
  float fStack_6c;
  float fStack_68;
  UnityEngine_Ray_o local_60;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  float fStack_18;
  undefined8 uStack_14;
  
  if (g_data_057ad640 == '\0') {
    uStackY_b0 = 0x41ca9ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    uStackY_b0 = 0x41ca9f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    uStackY_b0 = 0x41caa05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    uStackY_b0 = 0x41caa11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    uStackY_b0 = 0x41caa1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad640 = '\x01';
  }
  fStack_18 = 0.0;
  uStack_14 = 0;
  local_38._16_8_ = (InvokerMethod)0x0;
  local_38._24_4_ = 0;
  local_38._28_4_ = 0.0;
  local_38._0_8_ = (Il2CppMethodPointer)0x0;
  local_38._8_8_ = (Il2CppMethodPointer)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      uStackY_b0 = 0x41caa76;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_b0 = 0x41caa7d;
    UVar8 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    unaff_RBX = 0;
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      uStackY_b0 = 0x41caa95;
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&local_60,pUVar2,UVar8,(MethodInfo *)0x0);
      fVar5 = local_60.fields.m_Origin.fields.x;
      fVar7 = local_60.fields.m_Origin.fields.y;
      iVar13 = 0;
      local_48._0_4_ = local_60.fields.m_Direction.fields.x;
      local_48._4_4_ = local_60.fields.m_Direction.fields.y;
      local_48._8_8_ = 0;
      fVar6 = local_60.fields.m_Origin.fields.z;
      fVar12 = local_60.fields.m_Direction.fields.z;
      if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
        uStackY_b0 = 0x41caadb;
        il2cpp_runtime_helper_02337ed0();
        fVar6 = local_60.fields.m_Origin.fields.z;
        fVar12 = local_60.fields.m_Direction.fields.z;
      }
      uStackY_b0 = 0x41caaec;
      layerMask = UnityEngine_LayerMask__get_value
                            ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),
                             (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        uStackY_b0 = 0x41cab06;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar9 = CONCAT44(fVar7,fVar5);
      fStack_6c = (float)local_48._0_8_;
      fStack_68 = SUB84(local_48._0_8_,4);
      uVar11 = CONCAT44(fVar12,fStack_68);
      uVar10 = CONCAT44(fStack_6c,fVar6);
      uStackY_b0 = 0x41cab5b;
      ray.fields.m_Origin.fields.z = fVar6;
      ray.fields.m_Direction.fields.x = fStack_6c;
      ray.fields.m_Origin.fields.x = fVar5;
      ray.fields.m_Origin.fields.y = fVar7;
      ray.fields.m_Direction.fields.y = fStack_68;
      ray.fields.m_Direction.fields.z = fVar12;
      bVar3 = UnityEngine_Physics__Raycast_4e78080
                        (ray,(UnityEngine_RaycastHit_o *)local_38,1000.0,layerMask,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        fVar5 = fVar5 + (float)local_48._0_4_ * 1000.0;
        fVar7 = fVar7 + (float)local_48._4_4_ * 1000.0;
        fVar6 = fVar6 + fVar12 * 1000.0;
      }
      else {
        uStackY_b0 = 0x41cab6b;
        __this.fields.m_Point.fields.z = (float)(int)uVar10;
        __this.fields.m_Normal.fields.x = (float)(int)((ulong)uVar10 >> 0x20);
        __this.fields.m_Point.fields.x = (float)(int)uVar9;
        __this.fields.m_Point.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
        __this.fields.m_Normal.fields.y = (float)(int)uVar11;
        __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar11 >> 0x20);
        __this.fields.m_FaceID = (uint32_t)fVar6;
        __this.fields.m_Distance = fVar12;
        __this.fields.m_UV.fields.x = fVar5;
        __this.fields.m_UV.fields.y = fVar7;
        __this.fields.m_Collider = iVar13;
        UVar8 = UnityEngine_RaycastHit__get_point(__this,(MethodInfo *)local_38);
        fVar6 = UVar8.fields.z;
        fVar5 = UVar8.fields.x;
        fVar7 = UVar8.fields.y;
      }
      uStackY_b0 = 0x41cabbe;
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      value.fields.y = fVar7;
      value.fields.x = fVar5;
      uStackY_b0 = 0x41cabd6;
      value.fields.z = fVar6;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value,(MethodInfo *)0x0);
      return pCVar4;
    }
  }
  uStackY_b0 = 0x41cabe7;
  il2cpp_runtime_helper_022b2c90();
  uStackY_b0 = unaff_RBX;
  if (g_data_057ad641 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad641 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    pUVar2 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar8 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStackY_c8,pUVar2,UVar8,(MethodInfo *)0x0);
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      value_00.fields.z = UStackY_c8.fields.m_Direction.fields.z;
      value_00.fields.x = UStackY_c8.fields.m_Direction.fields.x;
      value_00.fields.y = UStackY_c8.fields.m_Direction.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,value_00,(MethodInfo *)0x0);
      return pCVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad642 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    il2cpp_runtime_helper_023445d0(&"Mouse X");
    g_data_057ad642 = '\x01';
  }
  UVar8.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar6 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  UVar8.fields.y = fVar6;
  UVar8.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
  return pCVar4;
}


// CustomLogic.CustomLogicInputBuiltin$$GetCursorAimDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection (const MethodInfo* method);
// 0x41cabf0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o value;
  UnityEngine_Ray_o local_20;
  
  if (g_data_057ad641 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad641 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    __this = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar4 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&local_20,__this,UVar4,(MethodInfo *)0x0);
      pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Direction.fields.z;
      value.fields.x = local_20.fields.m_Direction.fields.x;
      value.fields.y = local_20.fields.m_Direction.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar2,value,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad642 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    il2cpp_runtime_helper_023445d0(&"Mouse X");
    g_data_057ad642 = '\x01';
  }
  UVar4.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar3 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  UVar4.fields.y = fVar3;
  UVar4.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar2,UVar4,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseSpeed
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed (const MethodInfo* method);
// 0x41cacd0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad642 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    il2cpp_runtime_helper_023445d0(&"Mouse X");
    g_data_057ad642 = '\x01';
  }
  value.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = fVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMousePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMousePosition (const MethodInfo* method);
// 0x41cad70

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMousePosition(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad643 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad643 = '\x01';
  }
  value = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetScreenDimensions
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions (const MethodInfo* method);
// 0x41cade0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad644 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad644 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = (float)iVar2;
  value.fields.x = (float)iVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyDefaultEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x41cae50

void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled
               (System_String_o *key,bool_conflict enabled,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  Il2CppClass *pIVar8;
  void *pvVar9;
  System_String_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  MethodInfo *item;
  Settings_KeybindSetting_o *item_00;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  VirtualInvokeData *pVVar16;
  long *plVar17;
  System_String_o *pSVar18;
  undefined8 uVar19;
  char cVar20;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  Settings_KeybindSetting_o *pSVar21;
  long lVar22;
  undefined1 auVar23 [12];
  long lStack_70;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (g_data_057ad645 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ad645 = '\x01';
  }
  item = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  if ((char)enabled == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      method_00 = item;
      bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar13 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      method_00 = item;
      bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar13 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  pSVar15 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar12 = (char)method_00;
  if (g_data_057ad646 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ad646 = '\x01';
  }
  item_00 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(pSVar15,method_00);
  cVar20 = (char)method_00;
  if (cVar12 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pSVar21 = item_00;
      bVar13 = System_Collections_Generic_HashSet_object___Contains
                         (pSVar6,(Il2CppObject *)item_00,MethodInfo_Boolean_Contains);
      cVar20 = (char)pSVar21;
      if ((char)bVar13 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove(pSVar6,(Il2CppObject *)item_00,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pSVar21 = item_00;
      bVar13 = System_Collections_Generic_HashSet_object___Contains
                         (pSVar6,(Il2CppObject *)item_00,MethodInfo_Boolean_Contains);
      cVar20 = (char)pSVar21;
      if ((char)bVar13 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar6,(Il2CppObject *)item_00,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  pSVar15 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad647 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Invalid input category: ");
    il2cpp_runtime_helper_023445d0(&". Valid categories are: General, Human, Titan, Interaction");
    g_data_057ad647 = '\x01';
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar22 == 0) ||
     (pSVar7 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar22 + 0x10),
     pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
label_041cb58c:
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar13 = System_Collections_Specialized_OrderedDictionary__Contains
                       (pSVar7,(Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      pSVar15 = System_String__Concat_3af7150("Invalid input category: ",pSVar15,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
      return;
    }
    lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar22 == 0) ||
        (pSVar7 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar22 + 0x10),
        pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar7,(Il2CppObject *)pSVar15,(MethodInfo *)0x0), pIVar14 == (Il2CppObject *)0x0
       )) goto label_041cb58c;
    bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
    if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
       ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SaveableSettingsContainer)) {
      pIVar8 = pIVar14[1].klass;
      if (pIVar8 != (Il2CppClass *)0x0) {
        pvVar9 = (pIVar8->_1).image;
        pSVar15 = (System_String_o *)
                  (**(code **)((long)pvVar9 + 0x2a8))(pIVar8,*(undefined8 *)((long)pvVar9 + 0x2b0));
        if (pSVar15 == (System_String_o *)0x0) goto label_041cb5ad;
        lStack_70 = 0;
label_041cb2e0:
        pSVar10 = pSVar15->klass;
        uVar2._0_1_ = (pSVar10->_2).rank;
        uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar22 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator) {
              pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
              goto label_041cb333;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar22);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_041cb333:
        cVar12 = (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
        if (cVar12 == '\0') goto label_041cb67b;
        pSVar10 = pSVar15->klass;
        uVar3._0_1_ = (pSVar10->_2).rank;
        uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar22 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator) {
              pVVar16 = &(pSVar10->vtable)._0_Equals + (*(int *)((long)&pIVar11->offset + lVar22) + 1);
              goto label_041cb3b8;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar22);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,1);
label_041cb3b8:
        plVar17 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
        if (plVar17 == (long *)0x0) goto label_041cb587;
        if (*(long *)(*plVar17 + 0x40) == *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
          lVar22 = il2cpp_runtime_helper_02305440();
          pIVar14 = *(Il2CppObject **)(lVar22 + 8);
          if (pIVar14 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
               ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_KeybindSetting)) {
              if (cVar20 == '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb599;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb59e;
                  System_Collections_Generic_HashSet_object___Add(pSVar6,pIVar14,MethodInfo_Boolean_Add);
                }
              }
              else {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a3;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 != '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a8;
                  System_Collections_Generic_HashSet_object___Remove(pSVar6,pIVar14,MethodInfo_Boolean_Remove);
                }
              }
            }
          }
          goto label_041cb2e0;
        }
        il2cpp_runtime_helper_022b2fd0(plVar17);
label_041cb587:
        il2cpp_runtime_helper_022b2c90();
      }
      goto label_041cb58c;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pIVar14);
label_041cb599:
  il2cpp_runtime_helper_022b2c90();
label_041cb59e:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a3:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a8:
  il2cpp_runtime_helper_022b2c90();
label_041cb5ad:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) {
    lStack_70 = 0;
    goto label_041cb71a;
  }
  plVar17 = (long *)__cxa_begin_catch(uVar19);
  lStack_70 = *plVar17;
  __cxa_end_catch();
label_041cb67b:
  pSVar18 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
  if (pSVar18 != (System_String_o *)0x0) {
    pSVar10 = pSVar18->klass;
    uVar4._0_1_ = (pSVar10->_2).rank;
    uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
          pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
          goto label_041cb6ed;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar22);
    }
    pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar18,TypeInfo_IDisposable,0);
label_041cb6ed:
    (*pVVar16->methodPtr)(pSVar18,pVVar16->method);
    pSVar15 = pSVar18;
  }
  if (lStack_70 == 0) {
    return;
  }
  do {
    uVar19 = il2cpp_runtime_helper_022fefe0();
label_041cb71a:
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar10 = pSVar15->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
            pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
            goto label_041cb78d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_041cb78d:
      (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
    }
    if (lStack_70 == 0) {
      _Unwind_Resume(uVar19);
    }
    il2cpp_runtime_helper_022fefe0(lStack_70);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyHold
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyHold (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x41cafb0

void CustomLogic_CustomLogicInputBuiltin__SetKeyHold
               (System_String_o *key,bool_conflict enabled,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  Il2CppClass *pIVar8;
  void *pvVar9;
  System_String_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  Settings_KeybindSetting_o *item;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  VirtualInvokeData *pVVar16;
  long *plVar17;
  System_String_o *pSVar18;
  undefined8 uVar19;
  char cVar20;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  Settings_KeybindSetting_o *pSVar21;
  long lVar22;
  undefined1 auVar23 [12];
  long lStack_58;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (g_data_057ad646 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ad646 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  cVar20 = (char)method_00;
  if ((char)enabled == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pSVar21 = item;
      bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      cVar20 = (char)pSVar21;
      if ((char)bVar13 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pSVar21 = item;
      bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      cVar20 = (char)pSVar21;
      if ((char)bVar13 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
      if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar6,(Il2CppObject *)item,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  pSVar15 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad647 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Invalid input category: ");
    il2cpp_runtime_helper_023445d0(&". Valid categories are: General, Human, Titan, Interaction");
    g_data_057ad647 = '\x01';
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar22 == 0) ||
     (pSVar7 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar22 + 0x10),
     pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
label_041cb58c:
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar13 = System_Collections_Specialized_OrderedDictionary__Contains
                       (pSVar7,(Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      pSVar15 = System_String__Concat_3af7150("Invalid input category: ",pSVar15,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
      return;
    }
    lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar22 == 0) ||
        (pSVar7 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar22 + 0x10),
        pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar7,(Il2CppObject *)pSVar15,(MethodInfo *)0x0), pIVar14 == (Il2CppObject *)0x0
       )) goto label_041cb58c;
    bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
    if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
       ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SaveableSettingsContainer)) {
      pIVar8 = pIVar14[1].klass;
      if (pIVar8 != (Il2CppClass *)0x0) {
        pvVar9 = (pIVar8->_1).image;
        pSVar15 = (System_String_o *)
                  (**(code **)((long)pvVar9 + 0x2a8))(pIVar8,*(undefined8 *)((long)pvVar9 + 0x2b0));
        if (pSVar15 == (System_String_o *)0x0) goto label_041cb5ad;
        lStack_58 = 0;
label_041cb2e0:
        pSVar10 = pSVar15->klass;
        uVar2._0_1_ = (pSVar10->_2).rank;
        uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar22 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator) {
              pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
              goto label_041cb333;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar22);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_041cb333:
        cVar12 = (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
        if (cVar12 == '\0') goto label_041cb67b;
        pSVar10 = pSVar15->klass;
        uVar3._0_1_ = (pSVar10->_2).rank;
        uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar22 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator) {
              pVVar16 = &(pSVar10->vtable)._0_Equals + (*(int *)((long)&pIVar11->offset + lVar22) + 1);
              goto label_041cb3b8;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar22);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,1);
label_041cb3b8:
        plVar17 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
        if (plVar17 == (long *)0x0) goto label_041cb587;
        if (*(long *)(*plVar17 + 0x40) == *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
          lVar22 = il2cpp_runtime_helper_02305440();
          pIVar14 = *(Il2CppObject **)(lVar22 + 8);
          if (pIVar14 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
               ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_KeybindSetting)) {
              if (cVar20 == '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb599;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb59e;
                  System_Collections_Generic_HashSet_object___Add(pSVar6,pIVar14,MethodInfo_Boolean_Add);
                }
              }
              else {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a3;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar6,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 != '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a8;
                  System_Collections_Generic_HashSet_object___Remove(pSVar6,pIVar14,MethodInfo_Boolean_Remove);
                }
              }
            }
          }
          goto label_041cb2e0;
        }
        il2cpp_runtime_helper_022b2fd0(plVar17);
label_041cb587:
        il2cpp_runtime_helper_022b2c90();
      }
      goto label_041cb58c;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pIVar14);
label_041cb599:
  il2cpp_runtime_helper_022b2c90();
label_041cb59e:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a3:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a8:
  il2cpp_runtime_helper_022b2c90();
label_041cb5ad:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) {
    lStack_58 = 0;
    goto label_041cb71a;
  }
  plVar17 = (long *)__cxa_begin_catch(uVar19);
  lStack_58 = *plVar17;
  __cxa_end_catch();
label_041cb67b:
  pSVar18 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
  if (pSVar18 != (System_String_o *)0x0) {
    pSVar10 = pSVar18->klass;
    uVar4._0_1_ = (pSVar10->_2).rank;
    uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
          pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
          goto label_041cb6ed;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar22);
    }
    pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar18,TypeInfo_IDisposable,0);
label_041cb6ed:
    (*pVVar16->methodPtr)(pSVar18,pVVar16->method);
    pSVar15 = pSVar18;
  }
  if (lStack_58 == 0) {
    return;
  }
  do {
    uVar19 = il2cpp_runtime_helper_022fefe0();
label_041cb71a:
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar10 = pSVar15->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
            pVVar16 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar22);
            goto label_041cb78d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_041cb78d:
      (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
    }
    if (lStack_58 == 0) {
      _Unwind_Resume(uVar19);
    }
    il2cpp_runtime_helper_022fefe0(lStack_58);
  } while( true );
}


// CustomLogic.CustomLogicInputBuiltin$$SetCategoryKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled (System_String_o* category, bool enabled, const MethodInfo* method);
// 0x41cb120

void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
               (System_String_o *category,bool_conflict enabled,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Specialized_OrderedDictionary_o *pSVar6;
  Il2CppClass *pIVar7;
  void *pvVar8;
  System_String_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  char cVar12;
  bool_conflict bVar13;
  Il2CppObject *pIVar14;
  VirtualInvokeData *pVVar15;
  long *plVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auVar20 [12];
  long local_40;
  char local_34;
  
  if (g_data_057ad647 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Invalid input category: ");
    il2cpp_runtime_helper_023445d0(&". Valid categories are: General, Human, Titan, Interaction");
    g_data_057ad647 = '\x01';
  }
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar19 == 0) ||
     (pSVar6 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar19 + 0x10),
     pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
label_041cb58c:
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar13 = System_Collections_Specialized_OrderedDictionary__Contains
                       (pSVar6,(Il2CppObject *)category,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      pSVar17 = System_String__Concat_3af7150("Invalid input category: ",category,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      return;
    }
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if ((lVar19 == 0) ||
       (pSVar6 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar19 + 0x10),
       pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) goto label_041cb58c;
    pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                        (pSVar6,(Il2CppObject *)category,(MethodInfo *)0x0);
    if (pIVar14 == (Il2CppObject *)0x0) goto label_041cb58c;
    bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
    if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
       ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SaveableSettingsContainer)) {
      pIVar7 = pIVar14[1].klass;
      if (pIVar7 != (Il2CppClass *)0x0) {
        pvVar8 = (pIVar7->_1).image;
        category = (System_String_o *)
                   (**(code **)((long)pvVar8 + 0x2a8))(pIVar7,*(undefined8 *)((long)pvVar8 + 0x2b0));
        if (category == (System_String_o *)0x0) goto label_041cb5ad;
        local_40 = 0;
label_041cb2e0:
        pSVar9 = category->klass;
        uVar2._0_1_ = (pSVar9->_2).rank;
        uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar10 = (pSVar9->_1).interfaceOffsets;
          lVar19 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar19) == TypeInfo_IEnumerator) {
              pVVar15 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar19);
              goto label_041cb333;
            }
            lVar19 = lVar19 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar19);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(category,TypeInfo_IEnumerator,0);
label_041cb333:
        cVar12 = (*pVVar15->methodPtr)(category,pVVar15->method);
        if (cVar12 == '\0') goto label_041cb67b;
        pSVar9 = category->klass;
        uVar3._0_1_ = (pSVar9->_2).rank;
        uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar10 = (pSVar9->_1).interfaceOffsets;
          lVar19 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar19) == TypeInfo_IEnumerator) {
              pVVar15 = &(pSVar9->vtable)._0_Equals + (*(int *)((long)&pIVar10->offset + lVar19) + 1);
              goto label_041cb3b8;
            }
            lVar19 = lVar19 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar19);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(category,TypeInfo_IEnumerator,1);
label_041cb3b8:
        plVar16 = (long *)(*pVVar15->methodPtr)(category,pVVar15->method);
        if (plVar16 == (long *)0x0) goto label_041cb587;
        if (*(long *)(*plVar16 + 0x40) == *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
          lVar19 = il2cpp_runtime_helper_02305440();
          pIVar14 = *(Il2CppObject **)(lVar19 + 8);
          if (pIVar14 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if ((bVar1 <= (pIVar14->klass->_2).naturalAligment) &&
               ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_KeybindSetting)) {
              local_34 = (char)enabled;
              if (local_34 == '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar11 = *(System_Collections_Generic_HashSet_object__o **)
                           (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb599;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar11,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = *(System_Collections_Generic_HashSet_object__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb59e;
                  System_Collections_Generic_HashSet_object___Add(pSVar11,pIVar14,MethodInfo_Boolean_Add);
                }
              }
              else {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar11 = *(System_Collections_Generic_HashSet_object__o **)
                           (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a3;
                bVar13 = System_Collections_Generic_HashSet_object___Contains(pSVar11,pIVar14,MethodInfo_Boolean_Contains);
                if ((char)bVar13 != '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = *(System_Collections_Generic_HashSet_object__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
                  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_041cb5a8;
                  System_Collections_Generic_HashSet_object___Remove(pSVar11,pIVar14,MethodInfo_Boolean_Remove);
                }
              }
            }
          }
          goto label_041cb2e0;
        }
        il2cpp_runtime_helper_022b2fd0(plVar16);
label_041cb587:
        il2cpp_runtime_helper_022b2c90();
      }
      goto label_041cb58c;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pIVar14);
label_041cb599:
  il2cpp_runtime_helper_022b2c90();
label_041cb59e:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a3:
  il2cpp_runtime_helper_022b2c90();
label_041cb5a8:
  il2cpp_runtime_helper_022b2c90();
label_041cb5ad:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  uVar18 = auVar20._0_8_;
  if (auVar20._8_4_ != 1) {
    local_40 = 0;
    do {
      category = (System_String_o *)il2cpp_runtime_helper_023051f0(category,TypeInfo_IDisposable);
      if (category != (System_String_o *)0x0) {
        pSVar9 = category->klass;
        uVar5._0_1_ = (pSVar9->_2).rank;
        uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar10 = (pSVar9->_1).interfaceOffsets;
          lVar19 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar19) == TypeInfo_IDisposable) {
              pVVar15 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar19);
              goto label_041cb78d;
            }
            lVar19 = lVar19 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar19);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(category,TypeInfo_IDisposable,0);
label_041cb78d:
        (*pVVar15->methodPtr)(category,pVVar15->method);
      }
      if (local_40 == 0) {
        _Unwind_Resume(uVar18);
      }
      il2cpp_runtime_helper_022fefe0(local_40);
label_041cb7b0:
      uVar18 = il2cpp_runtime_helper_022fefe0();
    } while( true );
  }
  plVar16 = (long *)__cxa_begin_catch(uVar18);
  local_40 = *plVar16;
  __cxa_end_catch();
label_041cb67b:
  pSVar17 = (System_String_o *)il2cpp_runtime_helper_023051f0(category,TypeInfo_IDisposable);
  if (pSVar17 != (System_String_o *)0x0) {
    pSVar9 = pSVar17->klass;
    uVar4._0_1_ = (pSVar9->_2).rank;
    uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar19) == TypeInfo_IDisposable) {
          pVVar15 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar19);
          goto label_041cb6ed;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar19);
    }
    pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IDisposable,0);
label_041cb6ed:
    (*pVVar15->methodPtr)(pSVar17,pVVar15->method);
    category = pSVar17;
  }
  if (local_40 != 0) goto label_041cb7b0;
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetGeneralKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled (bool enabled, const MethodInfo* method);
// 0x41cb7d0

void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad648 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ad648 = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("General",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetInteractionKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled (bool enabled, const MethodInfo* method);
// 0x41cb810

void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad649 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057ad649 = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Interaction",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetTitanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x41cb850

void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad64a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ad64a = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Titan",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetHumanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x41cb890

void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad64b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Human");
    g_data_057ad64b = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Human",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__get_ClassName (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x41cb8d0

System_String_o *
CustomLogic_CustomLogicInputBuiltin__get_ClassName
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad64c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Input");
    g_data_057ad64c = '\x01';
  }
  return "Input";
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsAbstract (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x41cb900

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsStatic (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x41cb910

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_IsStatic
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x41cb920

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


