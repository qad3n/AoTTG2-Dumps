// Type: CustomLogic.CustomLogicStringBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStringBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicStringBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicStringBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStringBuiltin_o* CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x42513e0

CustomLogic_CustomLogicStringBuiltin_o *
CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  undefined8 *puVar9;
  System_Func_T__object__o *getter;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CustomLogicStringBuiltin_o *pCVar11;
  System_ArgumentException_o **ppSVar12;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057adb62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicStringBuiltin);
    g_data_057adb62 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicStringBuiltin);
    if (g_data_057adb5a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057adb5a = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,method);
    return (CustomLogic_CustomLogicStringBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicStringBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicStringBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar12 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057adb63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Newline");
    il2cpp_runtime_helper_023445d0(&"Insert");
    il2cpp_runtime_helper_023445d0(&"Replace");
    il2cpp_runtime_helper_023445d0(&"IndexOf");
    il2cpp_runtime_helper_023445d0(&"StartsWith");
    il2cpp_runtime_helper_023445d0(&"Length");
    il2cpp_runtime_helper_023445d0(&"FormatFloat");
    il2cpp_runtime_helper_023445d0(&"Join");
    il2cpp_runtime_helper_023445d0(&"Split");
    il2cpp_runtime_helper_023445d0(&"Trim");
    il2cpp_runtime_helper_023445d0(&"Capitalize");
    il2cpp_runtime_helper_023445d0(&"ToUpper");
    il2cpp_runtime_helper_023445d0(&"EndsWith");
    il2cpp_runtime_helper_023445d0(&"SubstringWithLength");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"ToLower");
    il2cpp_runtime_helper_023445d0(&"Substring");
    il2cpp_runtime_helper_023445d0(&"FormatFromList");
    g_data_057adb63 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x669c4959) {
    if (uVar3 < 0x3002539a) {
      if (uVar3 < 0xf317949) {
        if (uVar3 == 0x9390c03) {
          bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Capitalize",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_30 = pSStack_28;
            if (g_data_057adb72 == '\0') {
              pSStack_28 = (System_ArgumentException_o *)pSVar5;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Capitalize_b__16_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057adb72 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
              pSStack_28 = (System_ArgumentException_o *)pSVar5;
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar10);
            }
            pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            return pCVar11;
          }
        }
        else if ((uVar3 == 0xf317948) &&
                (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Insert",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adb71 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Insert_b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb71 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar10);
          }
          pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return pCVar11;
        }
      }
      else if (uVar3 == 0x16a15383) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Split",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adb67 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Split_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb67 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x30025399) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Join",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb68 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Join_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb68 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 < 0x38e8329d) {
      if (uVar3 == 0x325686ab) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Newline",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puVar9 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar9 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppSVar12 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
          goto CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline;
        }
      }
      else if ((uVar3 == 0x38e8329c) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SubstringWithLength",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb6a == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SubstringWithLength_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x43415f31) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToLower",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb74 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToLower_b__18_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb74 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x5101d130) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FormatFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb65 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFloat_b__3_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb65 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Contains",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb6d == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xc2b173c9) {
    if (uVar3 < 0xb4ede919) {
      if (uVar3 == 0xaadc121e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IndexOf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adb75 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IndexOf_b__19_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb75 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x88,pSVar10);
          }
          pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0xb4ede918) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToUpper",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb73 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToUpper_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb73 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0xbbed73fc) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"StartsWith",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb6e == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StartsWith_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xc2b173c8) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Substring",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb69 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Substring_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb69 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xe4d54f64) {
    if (uVar3 == 0xcc5e1935) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Length",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb6b == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Length_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xe4d54f63) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Replace",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb6c == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Replace_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xf5c087e9) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Trim",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb70 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Trim_b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb70 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xfe1f90a3) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"EndsWith",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb6f == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__EndsWith_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xfefe1622) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FormatFromList",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057adb66 == '\0') {
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFromList_b__4_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057adb66 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar10);
    }
    pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicStringBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline:
  *(System_String_o **)((long)ppSVar12 + -8) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppSVar12 + -0x18) = puVar9;
  if (g_data_057adb64 == '\0') {
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Newline_g____getter_2_0);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object);
    g_data_057adb64 = '\x01';
  }
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c53;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c7b;
  pCVar11 = (CustomLogic_CustomLogicStringBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4251c95;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4253620

void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adb77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb77 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x4253690

void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42536a0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  MethodInfo_362C220 *method_00;
  char cVar7;
  uint16_t uVar8;
  int iVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  uint uVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar15;
  System_Text_RegularExpressions_Capture_o *__this_02;
  undefined8 *puVar16;
  System_String_array *separator;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppClass *pIVar17;
  System_String_o *pSVar18;
  System_String_array *pSVar19;
  System_Object_array *pSVar20;
  Il2CppObject *pIVar21;
  System_String_array *pSVar22;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  uint uVar23;
  System_String_array *extraout_RDX;
  long extraout_RDX_00;
  System_String_array *extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  System_String_array *extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  System_String_array *extraout_RDX_08;
  System_String_array *extraout_RDX_09;
  long extraout_RDX_10;
  MethodInfo_362BED0 ***pppMVar24;
  Il2CppClass **unaff_RBP;
  ulong uVar25;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar26;
  long lVar27;
  long *plVar28;
  MethodInfo_362E340 **obj;
  long *obj_00;
  MethodInfo_362BED0 **unaff_R12;
  MethodInfo_24EEB40 **ppMVar29;
  long *unaff_R13;
  System_String_array *unaff_R14;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value;
  float num;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  uint16_t uStack_206;
  uint uStack_204;
  System_Collections_IEnumerator_o *pSStack_200;
  long *plStack_1f8;
  MethodInfo_362BED0 **ppMStack_1f0;
  int32_t iStack_1bc;
  System_String_array *pSStack_1b8;
  System_String_array *pSStack_1b0;
  System_String_array *pSStack_1a8;
  System_String_array *pSStack_1a0;
  System_String_array *pSStack_198;
  System_String_array *pSStack_190;
  System_String_array *pSStack_188;
  System_String_array *pSStack_180;
  System_String_array *pSStack_178;
  long lStack_170;
  undefined1 uStack_159;
  long lStack_158;
  System_String_array *pSStack_150;
  System_String_array *pSStack_148;
  undefined1 uStack_131;
  long lStack_130;
  System_String_array *pSStack_128;
  System_String_array *pSStack_120;
  undefined1 uStack_109;
  long lStack_108;
  System_String_array *pSStack_100;
  System_String_array *pSStack_f8;
  undefined8 uStack_f0;
  System_String_array *pSStack_e8;
  MethodInfo_362BED0 **ppMStack_e0;
  System_String_array *pSStack_d8;
  System_String_array *pSStack_d0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  System_String_array *pSStack_a0;
  undefined8 uStack_78;
  System_String_array *pSStack_70;
  System_String_array *pSStack_68;
  System_String_array *pSStack_60;
  MethodInfo_362BED0 **ppMStack_58;
  
  obj = (MethodInfo_362E340 **)__this;
  if (g_data_057adb78 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb78 = '\x01';
    obj = (MethodInfo_362E340 **)plVar28;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_array *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_362E340 **)unaff_R14;
      num = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)unaff_R14,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (g_data_057adb5c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
          g_data_057adb5c = '\x01';
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar18 = Utility_Util__FormatFloat(num,iVar11,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar18;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb79 = '\x01';
    obj = (MethodInfo_362E340 **)plVar28;
  }
  pSVar19 = extraout_RDX;
  if (extraout_RDX == (System_String_array *)0x0) {
label_04253888:
    il2cpp_runtime_helper_022b2c90();
    plVar28 = (long *)unaff_R14;
  }
  else {
    plVar28 = (long *)unaff_R14;
    if ((int)extraout_RDX->max_length != 0) {
      plVar28 = (long *)extraout_RDX->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_362E340 **)plVar28;
      unaff_R14 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)extraout_RDX->max_length) {
        obj = (MethodInfo_362E340 **)extraout_RDX->m_Items[1];
        pSVar19 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
        if (g_data_057adb5d == '\0') {
          obj = &MethodInfo_Object_ToArray;
          il2cpp_runtime_helper_023445d0();
          g_data_057adb5d = '\x01';
        }
        if (pSVar19 != (System_String_array *)0x0) {
          obj = (MethodInfo_362E340 **)0x0;
          if ((System_Collections_Generic_List_object__o *)pSVar19->m_Items[2] !=
              (System_Collections_Generic_List_object__o *)0x0) {
            pSVar20 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)pSVar19->m_Items[2],MethodInfo_Object_ToArray
                                );
            pSVar18 = System_String__Format_3af7980((System_String_o *)unaff_R14,pSVar20,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
        }
        goto label_04253888;
      }
    }
  }
  auVar31 = il2cpp_runtime_helper_022b2ca0();
  pSVar22 = auVar31._8_8_;
  ppMStack_58 = auVar31._0_8_;
  obj_00 = (long *)obj;
  if (g_data_057adb7a == '\0') {
    pSStack_60 = (System_String_array *)0x42538c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pSStack_60 = (System_String_array *)0x42538cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_60 = (System_String_array *)0x42538d8;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7a = '\x01';
  }
  ppMVar29 = (MethodInfo_24EEB40 **)unaff_R12;
  if (pSVar22 != (System_String_array *)0x0) {
    if (*(int *)&pSVar22->max_length != 0) {
      obj_00 = (long *)pSVar22->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_60 = (System_String_array *)0x425390f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_60 = (System_String_array *)0x4253921;
      plVar28 = (long *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  ((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      ppMVar29 = (MethodInfo_24EEB40 **)&TypeInfo_CustomLogicEvaluator;
      if (1 < *(uint *)&pSVar22->max_length) {
        unaff_R13 = (long *)pSVar22->m_Items[1];
        if ((int)*(uint *)&pSVar22->max_length < 3) {
          uVar12 = 0;
        }
        else {
          pSVar14 = (System_Collections_Generic_List_object__o *)pSVar22->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_60 = (System_String_array *)0x425394f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_60 = (System_String_array *)0x4253961;
          uVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)pSVar14,MethodInfo_Boolean_ConvertTo_Boolean);
        }
        uVar23 = uVar12 & 0xff;
        pSVar22 = (System_String_array *)(ulong)uVar23;
        pppMVar24 = (MethodInfo_362BED0 ***)&uStack_78;
        pSStack_60 = pSVar19;
        ppMStack_58 = unaff_R12;
        if (g_data_057adb5e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          g_data_057adb5e = '\x01';
        }
        unaff_RBP = &TypeInfo_CustomLogicListBuiltin;
        unaff_R15 = (MethodInfo_24EE950 **)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor
                  ((CustomLogic_CustomLogicListBuiltin_o *)unaff_R15,(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
        pIVar17 = (Il2CppClass *)((System_Collections_Generic_List_object__o *)unaff_R13)->klass;
        if (pIVar17 == g_data_057b9c00) {
          if (*(int *)&(((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._items == 1) {
            uVar8 = System_String__get_Chars((System_String_o *)unaff_R13,0,(MethodInfo *)0x0);
            if (((System_String_array *)plVar28 != (System_String_array *)0x0) &&
               (pSVar19 = System_String__Split((System_String_o *)plVar28,uVar8,uVar23,(MethodInfo *)0x0),
               pSVar19 != (System_String_array *)0x0)) {
              iVar9 = (int)pSVar19->max_length;
              if ((System_String_array *)unaff_R15 != (System_String_array *)0x0) {
                if (iVar9 < 1) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                plVar28 = &MethodInfo_Void_Add;
                if ((pSVar19->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar14 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar22 = pSVar19;
                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar14->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar20 = (pSVar14->fields)._items;
                    if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar12 = (pSVar14->fields)._size;
                    if (uVar12 < (uint)pSVar20->max_length) {
                      (pSVar14->fields)._size = uVar12 + 1;
                      pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar14,(Il2CppObject *)pSVar18,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar12 = (uint)pSVar19->max_length;
                    if ((long)(int)uVar12 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
                }
                goto label_04250ec6;
              }
label_04250eab:
              pSVar22 = pSVar19;
              if (iVar9 < 1) {
                return &((System_String_array *)unaff_R15)->obj;
              }
            }
label_04250ec1:
            il2cpp_runtime_helper_022b2c90();
            pSVar19 = pSVar22;
          }
          else {
            if (((System_String_array *)plVar28 == (System_String_array *)0x0) ||
               (pSVar19 = System_String__Split_3afa740
                                    ((System_String_o *)plVar28,(System_String_o *)unaff_R13,uVar23,
                                     (MethodInfo *)0x0), pSVar19 == (System_String_array *)0x0))
            goto label_04250ec1;
            iVar9 = (int)pSVar19->max_length;
            if ((System_String_array *)unaff_R15 == (System_String_array *)0x0) goto label_04250eab;
            if (iVar9 < 1) {
              return &((System_String_array *)unaff_R15)->obj;
            }
            unaff_RBP = (Il2CppClass **)0x0;
            plVar28 = &MethodInfo_Void_Add;
            if ((pSVar19->max_length & 0xffffffff) != 0) {
              do {
                lVar26 = MethodInfo_Void_Add;
                pSVar14 = (System_Collections_Generic_List_object__o *)
                          ((System_String_array *)unaff_R15)->m_Items[2];
                pSVar22 = pSVar19;
                if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar20 = (pSVar14->fields)._items;
                if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                uVar12 = (pSVar14->fields)._size;
                if (uVar12 < (uint)pSVar20->max_length) {
                  (pSVar14->fields)._size = uVar12 + 1;
                  pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                  il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar14,(Il2CppObject *)pSVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                uVar12 = (uint)pSVar19->max_length;
                if ((long)(int)uVar12 <= (long)unaff_RBP) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
              } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
            }
          }
label_04250ec6:
          pSVar18 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
label_04250ecb:
          il2cpp_runtime_helper_022b2fd0(pSVar18);
          separator = (System_String_array *)plVar28;
label_04250ed3:
          pSVar14 = (System_Collections_Generic_List_object__o *)unaff_R13;
          il2cpp_runtime_helper_022b2fd0();
          pSVar22 = pSVar19;
        }
        else {
          bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
          pSVar19 = pSVar22;
          separator = (System_String_array *)plVar28;
          if (((pIVar17->_2).naturalAligment < bVar2) ||
             ((pIVar17->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) goto label_04250ed3;
          uStack_78 = (System_String_array *)(CONCAT44(uVar12,(undefined4)uStack_78) & 0xffffffffff);
          pSStack_70 = (System_String_array *)plVar28;
          pSStack_68 = (System_String_array *)unaff_R15;
          if (((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor == (void *)0x0)
          goto label_04250ec1;
          separator = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          pSVar14 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
          plVar28 = (long *)separator;
          if (separator != (System_String_array *)0x0) {
            unaff_RBP = (Il2CppClass **)separator->m_Items;
            unaff_R15 = (MethodInfo_24EE950 **)0x0;
            unaff_R12 = &MethodInfo_Object_get_Item;
            pSVar22 = (System_String_array *)0x0;
            do {
              if ((long)(pSVar14->fields)._size <= (long)pSVar22) goto label_04250d15;
              pSVar18 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  (pSVar14,(int32_t)pSVar22,MethodInfo_Object_get_Item);
              pSVar19 = pSVar22;
              if ((pSVar18 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar18->klass != g_data_057b9c00))
              goto label_04250ecb;
              if ((System_String_array *)(ulong)(uint)separator->max_length <= pSVar22) goto label_04250ec6;
              unaff_RBP[(long)(pSVar22[-1].m_Items + 0xffff)] = (Il2CppClass *)pSVar18;
              il2cpp_runtime_helper_022b4080((long)((System_String_array *)unaff_R15)->m_Items + (long)(unaff_RBP + -4));
              pSVar22 = (System_String_array *)((long)&(pSVar22->obj).klass + 1);
              pSVar14 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
              unaff_R15 = &(((System_String_array *)unaff_R15)->obj).monitor;
            } while (pSVar14 != (System_Collections_Generic_List_object__o *)0x0);
            goto label_04250ec1;
          }
          if ((pSVar14->fields)._size < 1) {
label_04250d15:
            if (pSStack_70 != (System_String_array *)0x0) {
              pSVar19 = System_String__Split_3afab90
                                  ((System_String_o *)pSStack_70,separator,uStack_78._4_4_,(MethodInfo *)0x0);
              unaff_R15 = (MethodInfo_24EE950 **)pSStack_68;
              if (pSVar19 != (System_String_array *)0x0) {
                iVar9 = (int)pSVar19->max_length;
                if (pSStack_68 == (System_String_array *)0x0) goto label_04250eab;
                if (iVar9 < 1) {
                  return &pSStack_68->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                plVar28 = &MethodInfo_Void_Add;
                if ((pSVar19->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar14 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar22 = pSVar19;
                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar14->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar20 = (pSVar14->fields)._items;
                    if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar12 = (pSVar14->fields)._size;
                    if (uVar12 < (uint)pSVar20->max_length) {
                      (pSVar14->fields)._size = uVar12 + 1;
                      pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar14,(Il2CppObject *)pSVar18,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar12 = (uint)pSVar19->max_length;
                    if ((long)(int)uVar12 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
                }
                goto label_04250ec6;
              }
            }
            goto label_04250ec1;
          }
        }
        pSVar18 = (System_String_o *)0x0;
        System_Collections_Generic_List_object___get_Item(pSVar14,0,MethodInfo_Object_get_Item);
        il2cpp_runtime_helper_022b2c90();
        goto CustomLogic_CustomLogicStringBuiltin__Join;
      }
    }
    pSStack_60 = (System_String_array *)0x425397f;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_60 = (System_String_array *)0x4253984;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  pSStack_70 = auVar31._0_8_;
  pSStack_68 = pSVar22;
  pSStack_60 = (System_String_array *)plVar28;
  if (g_data_057adb7b == '\0') {
    uStack_78 = (System_String_array *)0x42539ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    uStack_78 = (System_String_array *)0x42539b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    uStack_78 = (System_String_array *)0x42539c4;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7b = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_78 = (System_String_array *)0x42539f2;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_78 = (System_String_array *)0x4253a04;
      obj_00 = plVar28;
      pSVar14 = (System_Collections_Generic_List_object__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        uStack_78 = (System_String_array *)0x4253a20;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(lVar26 + 0x28),MethodInfo_String_ConvertTo_String);
        pppMVar24 = &ppMStack_58;
        pSVar22 = pSStack_68;
        unaff_R12 = (MethodInfo_362BED0 **)ppMVar29;
        separator = pSStack_60;
CustomLogic_CustomLogicStringBuiltin__Join:
        *(Il2CppClass ***)((long)pppMVar24 + -8) = unaff_RBP;
        *(MethodInfo_24EE950 ***)((long)pppMVar24 + -0x10) = unaff_R15;
        *(System_String_array **)((long)pppMVar24 + -0x18) = separator;
        *(long **)((long)pppMVar24 + -0x20) = unaff_R13;
        *(MethodInfo_362BED0 ***)((long)pppMVar24 + -0x28) = unaff_R12;
        *(System_String_array **)((long)pppMVar24 + -0x30) = pSVar22;
        if (g_data_057adb5f == '\0') {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f29;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f35;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f41;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f4d;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f59;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f65;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f71;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f7d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057adb5f = '\x01';
        }
        *(undefined8 *)((long)pppMVar24 + -0x68) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x60) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x58) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fa3;
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fb8;
        System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
        if ((pSVar14 != (System_Collections_Generic_List_object__o *)0x0) &&
           (pSVar14 = pSVar14[1].monitor, pSVar14 != (System_Collections_Generic_List_object__o *)0x0)) {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fe2;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)((long)pppMVar24 + -0x48),pSVar14,
                     MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)pppMVar24 + -0x58) = *(undefined8 *)((long)pppMVar24 + -0x38);
          *(undefined8 *)((long)pppMVar24 + -0x68) = *(undefined8 *)((long)pppMVar24 + -0x48);
          *(undefined8 *)((long)pppMVar24 + -0x60) = *(undefined8 *)((long)pppMVar24 + -0x40);
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510a7;
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o)
                                *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                 ((long)pppMVar24 + -0x68),(MethodInfo_321A1D0 *)((long)pppMVar24 + -0x68));
            if ((char)bVar10 != '\0') goto label_04251105;
          }
          else {
            while( true ) {
              *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251043;
              bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o)
                                  *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                   ((long)pppMVar24 + -0x68),(MethodInfo_321A1D0 *)((long)pppMVar24 + -0x68));
              lVar26 = MethodInfo_Void_Add;
              if ((char)bVar10 == '\0') break;
              pIVar21 = *(Il2CppObject **)((long)pppMVar24 + -0x58);
              if ((pIVar21 != (Il2CppObject *)0x0) && (pIVar17 = g_data_057b9c00, pIVar21->klass != g_data_057b9c00)
                 ) {
label_042510f5:
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251100;
                il2cpp_runtime_helper_022b2fd0(pIVar21,pIVar17);
                goto label_04251100;
              }
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar20 = (__this_03->fields)._items;
              if (pSVar20 == (System_Object_array *)0x0) {
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510f5;
                pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
                goto label_042510f5;
              }
              uVar12 = (__this_03->fields)._size;
              if (uVar12 < (uint)pSVar20->max_length) {
                (__this_03->fields)._size = uVar12 + 1;
                pSVar20->m_Items[(int)uVar12] = pIVar21;
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251093;
                il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251037;
                System_Collections_Generic_List_object___AddWithResize(__this_03,pIVar21,method_00);
              }
            }
          }
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510bd;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
          goto label_042510bd;
        }
label_04251100:
        do {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251105;
          il2cpp_runtime_helper_022b2c90();
label_04251105:
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425110a;
          auVar30 = il2cpp_runtime_helper_022b2c90();
          if (auVar30._8_4_ != 1) {
label_04251163:
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425117d;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68)
                       ,(MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425118a;
            _Unwind_Resume(auVar30._0_8_);
          }
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251138;
          plVar28 = (long *)__cxa_begin_catch(auVar30._0_8_);
          lVar26 = *plVar28;
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251140;
          __cxa_end_catch();
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251152;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
          if (lVar26 != 0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251163;
            il2cpp_runtime_helper_022fefe0(lVar26);
            goto label_04251163;
          }
label_042510bd:
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510d4;
            pSVar19 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510e1;
            pSVar18 = System_String__Join(pSVar18,pSVar19,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
        } while( true );
      }
    }
    uStack_78 = (System_String_array *)0x4253a37;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_78 = (System_String_array *)0x4253a3c;
  il2cpp_runtime_helper_022b2c90();
  uStack_78 = (System_String_array *)plVar28;
  if (g_data_057adb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7c = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = plVar28;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_00 + 0x28);
        iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
        plVar28 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSVar18 = System_String__Substring(pSVar18,iVar11,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        goto label_04253aed;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253aed:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  uStack_b0 = auVar31._0_8_;
  lStack_a8 = extraout_RDX_00;
  pSStack_a0 = (System_String_array *)plVar28;
  if (g_data_057adb7d == '\0') {
    lStack_b8 = 0x4253b1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    lStack_b8 = 0x4253b2b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    lStack_b8 = 0x4253b37;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value = (MethodInfo_24EEB40 **)unaff_R15;
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      unaff_RBP = *(Il2CppClass ***)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_b8 = 0x4253b69;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_b8 = 0x4253b7b;
      obj_00 = (long *)unaff_RBP;
      pSVar19 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        obj_00 = *(long **)(lVar26 + 0x28);
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        lStack_b8 = 0x4253b97;
        uVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
        plVar28 = (long *)pSVar19;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          unaff_RBP = (Il2CppClass **)(ulong)uVar12;
          obj_00 = *(long **)(lVar26 + 0x30);
          lStack_b8 = 0x4253bab;
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
          value = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar19 != (System_String_array *)0x0) {
            pSVar18 = System_String__Substring_3af8da0
                                ((System_String_o *)pSVar19,uVar12,iVar11,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253bcd;
        }
      }
    }
    lStack_b8 = 0x4253bcd;
    il2cpp_runtime_helper_022b2ca0();
    value = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  lStack_b8 = 0x4253bd2;
  il2cpp_runtime_helper_022b2c90();
  lStack_b8 = lVar26;
  if (g_data_057adb7e == '\0') {
    pSStack_d0 = (System_String_array *)0x4253bfd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d0 = (System_String_array *)0x4253c09;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar19 = extraout_RDX_01;
  if (extraout_RDX_01 == (System_String_array *)0x0) {
label_04253c70:
    pSStack_d0 = (System_String_array *)0x4253c75;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_01->max_length != 0) {
    pSVar19 = (System_String_array *)extraout_RDX_01->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_d0 = (System_String_array *)0x4253c37;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_d0 = (System_String_array *)0x4253c49;
    obj_00 = (long *)pSVar19;
    pIVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pIVar21 != (Il2CppObject *)0x0) {
      uStack_bc = *(undefined4 *)&pIVar21[1].klass;
      pSStack_d0 = (System_String_array *)0x4253c6a;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_bc);
      return pIVar21;
    }
    goto label_04253c70;
  }
  pSStack_d0 = (System_String_array *)0x4253c7a;
  auVar31 = il2cpp_runtime_helper_022b2ca0();
  lVar26 = auVar31._8_8_;
  uStack_f0 = auVar31._0_8_;
  pSStack_e8 = pSVar19;
  ppMStack_e0 = (MethodInfo_362BED0 **)ppMVar29;
  pSStack_d8 = (System_String_array *)plVar28;
  pSStack_d0 = (System_String_array *)value;
  if (g_data_057adb7f == '\0') {
    pSStack_f8 = (System_String_array *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_f8 = (System_String_array *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_f8 = (System_String_array *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      ppMVar29 = &MethodInfo_String_ConvertTo_String;
      pSStack_f8 = (System_String_array *)0x4253cf1;
      obj_00 = plVar28;
      pSVar19 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        obj_00 = *(long **)(lVar26 + 0x28);
        pSStack_f8 = (System_String_array *)0x4253d07;
        pSVar22 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)pSVar19;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          obj_00 = *(long **)(lVar26 + 0x30);
          pSStack_f8 = (System_String_array *)0x4253d1d;
          pSVar18 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
          value = (MethodInfo_24EEB40 **)pSVar22;
          if (pSVar19 != (System_String_array *)0x0) {
            pSVar18 = System_String__Replace_3af9030
                                ((System_String_o *)pSVar19,(System_String_o *)pSVar22,pSVar18,
                                 (MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_f8 = (System_String_array *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_f8 = (System_String_array *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_108 = lVar26;
  pSStack_100 = (System_String_array *)plVar28;
  pSStack_f8 = (System_String_array *)value;
  if (g_data_057adb80 == '\0') {
    pSStack_120 = (System_String_array *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_120 = (System_String_array *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_120 = (System_String_array *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_120 = (System_String_array *)0x4253dc1;
      obj_00 = plVar28;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_02 + 0x28);
        pSStack_120 = (System_String_array *)0x4253dd6;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStack_120 = (System_String_array *)0x4253de8;
          bVar10 = System_String__Contains(pSVar18,pSVar13,(MethodInfo *)0x0);
          uStack_109 = (undefined1)bVar10;
          pSStack_120 = (System_String_array *)0x4253e01;
          pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_109);
          return pIVar21;
        }
        goto label_04253e10;
      }
    }
    pSStack_120 = (System_String_array *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_120 = (System_String_array *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_130 = extraout_RDX_02;
  pSStack_128 = (System_String_array *)plVar28;
  pSStack_120 = (System_String_array *)value;
  if (g_data_057adb81 == '\0') {
    pSStack_148 = (System_String_array *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_148 = (System_String_array *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_148 = (System_String_array *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_148 = (System_String_array *)0x4253e91;
      obj_00 = plVar28;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_03 + 0x28);
        pSStack_148 = (System_String_array *)0x4253ea6;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStack_148 = (System_String_array *)0x4253eb8;
          bVar10 = System_String__StartsWith(pSVar18,pSVar13,(MethodInfo *)0x0);
          uStack_131 = (undefined1)bVar10;
          pSStack_148 = (System_String_array *)0x4253ed1;
          pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_131);
          return pIVar21;
        }
        goto label_04253ee0;
      }
    }
    pSStack_148 = (System_String_array *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_148 = (System_String_array *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_158 = extraout_RDX_03;
  pSStack_150 = (System_String_array *)plVar28;
  pSStack_148 = (System_String_array *)value;
  if (g_data_057adb82 == '\0') {
    lStack_170 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    lStack_170 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_170 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      lStack_170 = 0x4253f61;
      obj_00 = plVar28;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_04 + 0x28);
        lStack_170 = 0x4253f76;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          lStack_170 = 0x4253f88;
          bVar10 = System_String__EndsWith(pSVar18,pSVar13,(MethodInfo *)0x0);
          uStack_159 = (undefined1)bVar10;
          lStack_170 = 0x4253fa1;
          pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_159);
          return pIVar21;
        }
        goto label_04253fb0;
      }
    }
    lStack_170 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStack_170 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStack_170 = extraout_RDX_04;
  if (g_data_057adb83 == '\0') {
    pSStack_178 = (System_String_array *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_178 = (System_String_array *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar19 = extraout_RDX_05;
  if (extraout_RDX_05 == (System_String_array *)0x0) {
label_04254035:
    pSStack_178 = (System_String_array *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_05->max_length != 0) {
    pSVar19 = (System_String_array *)extraout_RDX_05->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_178 = (System_String_array *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_178 = (System_String_array *)0x4254025;
    obj_00 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254035;
  }
  pSStack_178 = (System_String_array *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_188 = pSVar19;
  pSStack_180 = (System_String_array *)plVar28;
  pSStack_178 = (System_String_array *)value;
  if (g_data_057adb84 == '\0') {
    pSStack_190 = (System_String_array *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_190 = (System_String_array *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_190 = (System_String_array *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    pSVar19 = (System_String_array *)value;
    if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_06 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_190 = (System_String_array *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_190 = (System_String_array *)0x42540b9;
      obj_00 = plVar28;
      pSVar22 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      pSVar19 = (System_String_array *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_06 + 0x28);
        pSStack_190 = (System_String_array *)0x42540ce;
        value = (MethodInfo_24EEB40 **)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)pSVar22;
        if (2 < *(uint *)(extraout_RDX_06 + 0x18)) {
          obj_00 = *(long **)(extraout_RDX_06 + 0x30);
          pSStack_190 = (System_String_array *)0x42540ea;
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar22 != (System_String_array *)0x0) {
            pSVar18 = System_String__Insert
                                ((System_String_o *)pSVar22,iVar11,(System_String_o *)value,(MethodInfo *)0x0)
            ;
            return (Il2CppObject *)pSVar18;
          }
          goto label_04254108;
        }
      }
    }
    value = (MethodInfo_24EEB40 **)pSVar19;
    pSStack_190 = (System_String_array *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStack_190 = (System_String_array *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_190 = (System_String_array *)extraout_RDX_06;
  if (g_data_057adb85 == '\0') {
    pSStack_198 = (System_String_array *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_198 = (System_String_array *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_07 == 0) {
    pSStack_198 = (System_String_array *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
    pIVar21 = *(Il2CppObject **)(extraout_RDX_07 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_198 = (System_String_array *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_198 = (System_String_array *)0x425417d;
    pSVar18 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar21,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_198 = (System_String_array *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar9 == 0) {
      pSStack_198 = (System_String_array *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = pSVar18;
    pSStack_198 = (System_String_array *)plVar28;
    pSStack_190 = (System_String_array *)unaff_RBP;
    bVar10 = System_String__op_Equality
                       (pSVar18,*(System_String_o **)g_data_057b9c00->static_fields,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (pSVar18 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar9 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar18 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar13,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_1f8 = &TypeInfo_MiscExtensions;
        ppMStack_1f0 = (MethodInfo_362BED0 **)ppMVar29;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_206 = 0;
        pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar25 = 0;
          pSStack_200 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_01,(MethodInfo *)0x0);
          if (pSStack_200 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar12 = 0;
label_040653fb:
          pSVar5 = pSStack_200->klass;
          uVar3._0_1_ = (pSVar5->_2).rank;
          uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
          uStack_204 = uVar12;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar15 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26)].methodPtr;
                goto label_04065463;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar26);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_200,TypeInfo_IEnumerator,0);
label_04065463:
          cVar7 = (**ppIVar15)(pSStack_200,(MethodInfo *)ppIVar15[1]);
          if (cVar7 == '\0') {
            iVar9 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar5 = pSStack_200->klass;
          uVar4._0_1_ = (pSVar5->_2).rank;
          uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar15 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar26);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_200,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_02 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar15)(pSStack_200,(MethodInfo *)ppIVar15[1]);
          if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar2) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_02);
              goto label_04065803;
            }
            iVar9 = (__this_02->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar12 < iVar9) goto label_0406581a;
            }
            else if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar12 < iVar9) goto label_04065824;
            }
            else if ((int)uVar12 < iVar9) {
              do {
                uStack_206 = System_String__get_Chars((System_String_o *)__this_05,uVar12,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar18 = System_Char__ToString((uint16_t)&uStack_206,(MethodInfo *)0x0);
                lVar26 = MethodInfo_Void_Add;
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar20 = (pSVar14->fields)._items;
                if (pSVar20 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar23 = (pSVar14->fields)._size;
                if (uVar23 < (uint)pSVar20->max_length) {
                  (pSVar14->fields)._size = uVar23 + 1;
                  pSVar20->m_Items[(int)uVar23] = (Il2CppObject *)pSVar18;
                  il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar23);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar14,(Il2CppObject *)pSVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (__this_02->fields)._Index_k__BackingField);
            }
            pSVar18 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(pSVar14->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar20 = (pSVar14->fields)._items;
            if (pSVar20 == (System_Object_array *)0x0) goto label_04065815;
            uVar12 = (pSVar14->fields)._size;
            if (uVar12 < (uint)pSVar20->max_length) {
              (pSVar14->fields)._size = uVar12 + 1;
              pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar14,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_204 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_206 = System_String__get_Chars((System_String_o *)__this_05,uStack_204,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar25 = 0;
          System_Char__ToString((uint16_t)&uStack_206,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_206 = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_206,(MethodInfo *)0x0);
          auVar30 = il2cpp_runtime_helper_022b2c90();
          uStack_204 = 0;
          iVar9 = 0;
          if (auVar30._8_4_ != 1) {
            plVar28 = (long *)il2cpp_runtime_helper_023051f0(pSStack_200,TypeInfo_IDisposable);
            if (plVar28 == (long *)0x0) goto label_04065a06;
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) == 0) goto label_040659df;
            lVar27 = 0;
            goto label_040659d0;
          }
          puVar16 = (undefined8 *)__cxa_begin_catch(auVar30._0_8_);
          unaff_R13 = (long *)*puVar16;
          __cxa_end_catch();
label_04065677:
          uVar25 = TypeInfo_IDisposable;
          plVar28 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar28 != (long *)0x0) {
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) != 0) {
              lVar27 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
                  puVar16 = (undefined8 *)
                            (lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27);
            }
            puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040656ed:
            uVar25 = puVar16[1];
            (*(code *)*puVar16)(plVar28);
          }
          if ((System_Collections_Generic_List_object__o *)unaff_R13 !=
              (System_Collections_Generic_List_object__o *)0x0) goto label_04065869;
          if ((iVar9 != 6) && (iVar9 != 0)) {
            return (Il2CppObject *)pSVar14;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar9 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar25 = (ulong)uStack_204;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar9 <= (int)uStack_204) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar9 <= (int)uStack_204) {
            return (Il2CppObject *)pSVar14;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_206 = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar18 = System_Char__ToString((uint16_t)&uStack_206,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            piVar1 = &(pSVar14->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar20 = (pSVar14->fields)._items;
            if (pSVar20 == (System_Object_array *)0x0) break;
            uVar12 = (pSVar14->fields)._size;
            if (uVar12 < (uint)pSVar20->max_length) {
              (pSVar14->fields)._size = uVar12 + 1;
              pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar14,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (int32_t)uVar25 + 1;
            uVar25 = (ulong)uVar12;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar12) {
              return (Il2CppObject *)pSVar14;
            }
          }
        } while( true );
      }
      if ((pSVar18->fields)._stringLength < 2) {
        pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      }
      else {
        uVar8 = System_String__get_Chars(pSVar18,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToUpper_3c18a00(uVar8,(MethodInfo *)0x0);
        pSVar13 = System_Char__ToString((short)&pSStack_1a8 + 6,(MethodInfo *)0x0);
        pSVar18 = System_String__Substring(pSVar18,1,(MethodInfo *)0x0);
        pSVar18 = System_String__Concat_3ae5ba0(pSVar13,pSVar18,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar18;
  }
  pSStack_198 = (System_String_array *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_198 = (System_String_array *)extraout_RDX_07;
  if (g_data_057adb86 == '\0') {
    pSStack_1a0 = (System_String_array *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_1a0 = (System_String_array *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar19 = extraout_RDX_08;
  if (extraout_RDX_08 == (System_String_array *)0x0) {
label_04254265:
    pSStack_1a0 = (System_String_array *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_08->max_length != 0) {
    pSVar19 = (System_String_array *)extraout_RDX_08->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_1a0 = (System_String_array *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_1a0 = (System_String_array *)0x4254255;
    obj_00 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254265;
  }
  pSStack_1a0 = (System_String_array *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_1a0 = pSVar19;
  if (g_data_057adb87 == '\0') {
    pSStack_1a8 = (System_String_array *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_1a8 = (System_String_array *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar19 = extraout_RDX_09;
  if (extraout_RDX_09 == (System_String_array *)0x0) {
label_042542e5:
    pSStack_1a8 = (System_String_array *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_09->max_length != 0) {
    pSVar19 = (System_String_array *)extraout_RDX_09->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_1a8 = (System_String_array *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_1a8 = (System_String_array *)0x42542d5;
    obj_00 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_042542e5;
  }
  pSStack_1a8 = (System_String_array *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_1b8 = pSVar19;
  pSStack_1b0 = (System_String_array *)plVar28;
  pSStack_1a8 = (System_String_array *)value;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_10 != 0) {
    if (*(int *)(extraout_RDX_10 + 0x18) != 0) {
      obj_00 = *(long **)(extraout_RDX_10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_10 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_10 + 0x28);
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (pSVar18 != (System_String_o *)0x0) {
          iStack_1bc = System_String__IndexOf_3afbe10(pSVar18,pSVar13,4,(MethodInfo *)0x0);
          pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_1bc);
          return pIVar21;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((System_String_Fields *)&((System_String_array *)obj_00)->bounds)->_stringLength = 1;
  *(undefined1 *)((long)((System_String_array *)obj_00)->m_Items + 0xc) = 1;
  System_Object___ctor((Il2CppObject *)obj_00,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_array *)obj_00)->max_length = (il2cpp_array_size_t)__this_04;
  pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((System_String_array *)obj_00)->max_length,__this_04);
  return pIVar21;
  while (lVar27 = lVar27 + 0x10, (ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)(lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar16)(plVar28,puVar16[1]);
label_04065a06:
  _Unwind_Resume(auVar30._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFromList>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42537a0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  MethodInfo_362C220 *method_00;
  char cVar7;
  uint16_t uVar8;
  int iVar9;
  bool_conflict bVar10;
  uint uVar11;
  int32_t iVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar15;
  System_Text_RegularExpressions_Capture_o *__this_02;
  undefined8 *puVar16;
  System_String_array *separator;
  System_String_array *pSVar17;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *pSVar18;
  Il2CppClass *pIVar19;
  System_Object_array *pSVar20;
  System_String_o *pSVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  uint uVar23;
  long extraout_RDX;
  System_String_array *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  System_String_array *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  System_String_array *extraout_RDX_07;
  System_String_array *extraout_RDX_08;
  long extraout_RDX_09;
  MethodInfo_362BED0 ***pppMVar24;
  Il2CppClass **unaff_RBP;
  ulong uVar25;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar26;
  long lVar27;
  long *plVar28;
  MethodInfo_362E340 **obj;
  long *obj_00;
  MethodInfo_362BED0 **unaff_R12;
  MethodInfo_24EEB40 **ppMVar29;
  long *unaff_R13;
  System_String_array *unaff_R14;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  uint16_t uStack_1ee;
  uint uStack_1ec;
  System_Collections_IEnumerator_o *pSStack_1e8;
  long *plStack_1e0;
  MethodInfo_362BED0 **ppMStack_1d8;
  int32_t iStack_1a4;
  System_String_array *pSStack_1a0;
  System_String_array *pSStack_198;
  System_String_array *pSStack_190;
  System_String_array *pSStack_188;
  System_String_array *pSStack_180;
  System_String_array *pSStack_178;
  System_String_array *pSStack_170;
  System_String_array *pSStack_168;
  System_String_array *pSStack_160;
  long lStack_158;
  undefined1 uStack_141;
  long lStack_140;
  System_String_array *pSStack_138;
  System_String_array *pSStack_130;
  undefined1 uStack_119;
  long lStack_118;
  System_String_array *pSStack_110;
  System_String_array *pSStack_108;
  undefined1 uStack_f1;
  long lStack_f0;
  System_String_array *pSStack_e8;
  System_String_array *pSStack_e0;
  undefined8 uStack_d8;
  System_String_array *pSStack_d0;
  MethodInfo_362BED0 **ppMStack_c8;
  System_String_array *pSStack_c0;
  System_String_array *pSStack_b8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  System_String_array *pSStack_88;
  undefined8 uStack_60;
  System_String_array *pSStack_58;
  System_String_array *pSStack_50;
  System_String_array *pSStack_48;
  MethodInfo_362BED0 **ppMStack_40;
  
  obj = (MethodInfo_362E340 **)__this;
  if (g_data_057adb79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb79 = '\x01';
    obj = (MethodInfo_362E340 **)plVar28;
  }
  if (__a == (System_Object_array *)0x0) {
label_04253888:
    il2cpp_runtime_helper_022b2c90();
    plVar28 = (long *)unaff_R14;
  }
  else {
    plVar28 = (long *)unaff_R14;
    if ((int)__a->max_length != 0) {
      plVar28 = (long *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_362E340 **)plVar28;
      unaff_R14 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        obj = (MethodInfo_362E340 **)__a->m_Items[1];
        __a = (System_Object_array *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
        if (g_data_057adb5d == '\0') {
          obj = &MethodInfo_Object_ToArray;
          il2cpp_runtime_helper_023445d0();
          g_data_057adb5d = '\x01';
        }
        if ((System_String_array *)__a != (System_String_array *)0x0) {
          obj = (MethodInfo_362E340 **)0x0;
          if ((System_Collections_Generic_List_object__o *)((System_String_array *)__a)->m_Items[2] !=
              (System_Collections_Generic_List_object__o *)0x0) {
            pSVar20 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)
                                 ((System_String_array *)__a)->m_Items[2],MethodInfo_Object_ToArray);
            pSVar21 = System_String__Format_3af7980((System_String_o *)unaff_R14,pSVar20,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar21;
          }
        }
        goto label_04253888;
      }
    }
  }
  auVar31 = il2cpp_runtime_helper_022b2ca0();
  pSVar18 = auVar31._8_8_;
  ppMStack_40 = auVar31._0_8_;
  obj_00 = (long *)obj;
  if (g_data_057adb7a == '\0') {
    pSStack_48 = (System_String_array *)0x42538c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pSStack_48 = (System_String_array *)0x42538cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_48 = (System_String_array *)0x42538d8;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7a = '\x01';
  }
  ppMVar29 = (MethodInfo_24EEB40 **)unaff_R12;
  if (pSVar18 != (System_String_array *)0x0) {
    if (*(int *)&pSVar18->max_length != 0) {
      obj_00 = (long *)pSVar18->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_48 = (System_String_array *)0x425390f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = (System_String_array *)0x4253921;
      plVar28 = (long *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  ((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      ppMVar29 = (MethodInfo_24EEB40 **)&TypeInfo_CustomLogicEvaluator;
      if (1 < *(uint *)&pSVar18->max_length) {
        unaff_R13 = (long *)pSVar18->m_Items[1];
        if ((int)*(uint *)&pSVar18->max_length < 3) {
          uVar11 = 0;
        }
        else {
          pSVar14 = (System_Collections_Generic_List_object__o *)pSVar18->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_48 = (System_String_array *)0x425394f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = (System_String_array *)0x4253961;
          uVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)pSVar14,MethodInfo_Boolean_ConvertTo_Boolean);
        }
        uVar23 = uVar11 & 0xff;
        pSVar18 = (System_String_array *)(ulong)uVar23;
        pppMVar24 = (MethodInfo_362BED0 ***)&uStack_60;
        pSStack_48 = (System_String_array *)__a;
        ppMStack_40 = unaff_R12;
        if (g_data_057adb5e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          g_data_057adb5e = '\x01';
        }
        unaff_RBP = &TypeInfo_CustomLogicListBuiltin;
        unaff_R15 = (MethodInfo_24EE950 **)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor
                  ((CustomLogic_CustomLogicListBuiltin_o *)unaff_R15,(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
        pIVar19 = (Il2CppClass *)((System_Collections_Generic_List_object__o *)unaff_R13)->klass;
        if (pIVar19 == g_data_057b9c00) {
          if (*(int *)&(((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._items == 1) {
            uVar8 = System_String__get_Chars((System_String_o *)unaff_R13,0,(MethodInfo *)0x0);
            if (((System_String_array *)plVar28 != (System_String_array *)0x0) &&
               (pSVar17 = System_String__Split((System_String_o *)plVar28,uVar8,uVar23,(MethodInfo *)0x0),
               pSVar17 != (System_String_array *)0x0)) {
              iVar9 = (int)pSVar17->max_length;
              if ((System_String_array *)unaff_R15 != (System_String_array *)0x0) {
                if (iVar9 < 1) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                plVar28 = &MethodInfo_Void_Add;
                if ((pSVar17->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar14 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar18 = pSVar17;
                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar21 = pSVar17->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar14->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar20 = (pSVar14->fields)._items;
                    if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar11 = (pSVar14->fields)._size;
                    if (uVar11 < (uint)pSVar20->max_length) {
                      (pSVar14->fields)._size = uVar11 + 1;
                      pSVar20->m_Items[(int)uVar11] = (Il2CppObject *)pSVar21;
                      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar14,(Il2CppObject *)pSVar21,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar11 = (uint)pSVar17->max_length;
                    if ((long)(int)uVar11 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar11);
                }
                goto label_04250ec6;
              }
label_04250eab:
              pSVar18 = pSVar17;
              if (iVar9 < 1) {
                return &((System_String_array *)unaff_R15)->obj;
              }
            }
label_04250ec1:
            il2cpp_runtime_helper_022b2c90();
            pSVar17 = pSVar18;
          }
          else {
            if (((System_String_array *)plVar28 == (System_String_array *)0x0) ||
               (pSVar17 = System_String__Split_3afa740
                                    ((System_String_o *)plVar28,(System_String_o *)unaff_R13,uVar23,
                                     (MethodInfo *)0x0), pSVar17 == (System_String_array *)0x0))
            goto label_04250ec1;
            iVar9 = (int)pSVar17->max_length;
            if ((System_String_array *)unaff_R15 == (System_String_array *)0x0) goto label_04250eab;
            if (iVar9 < 1) {
              return &((System_String_array *)unaff_R15)->obj;
            }
            unaff_RBP = (Il2CppClass **)0x0;
            plVar28 = &MethodInfo_Void_Add;
            if ((pSVar17->max_length & 0xffffffff) != 0) {
              do {
                lVar26 = MethodInfo_Void_Add;
                pSVar14 = (System_Collections_Generic_List_object__o *)
                          ((System_String_array *)unaff_R15)->m_Items[2];
                pSVar18 = pSVar17;
                if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                pSVar21 = pSVar17->m_Items[(long)unaff_RBP];
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar20 = (pSVar14->fields)._items;
                if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                uVar11 = (pSVar14->fields)._size;
                if (uVar11 < (uint)pSVar20->max_length) {
                  (pSVar14->fields)._size = uVar11 + 1;
                  pSVar20->m_Items[(int)uVar11] = (Il2CppObject *)pSVar21;
                  il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar14,(Il2CppObject *)pSVar21,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                uVar11 = (uint)pSVar17->max_length;
                if ((long)(int)uVar11 <= (long)unaff_RBP) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
              } while (unaff_RBP < (System_String_array *)(ulong)uVar11);
            }
          }
label_04250ec6:
          pSVar21 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
label_04250ecb:
          il2cpp_runtime_helper_022b2fd0(pSVar21);
          separator = (System_String_array *)plVar28;
label_04250ed3:
          pSVar14 = (System_Collections_Generic_List_object__o *)unaff_R13;
          il2cpp_runtime_helper_022b2fd0();
          pSVar18 = pSVar17;
        }
        else {
          bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
          pSVar17 = pSVar18;
          separator = (System_String_array *)plVar28;
          if (((pIVar19->_2).naturalAligment < bVar2) ||
             ((pIVar19->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) goto label_04250ed3;
          uStack_60 = (System_String_array *)(CONCAT44(uVar11,(undefined4)uStack_60) & 0xffffffffff);
          pSStack_58 = (System_String_array *)plVar28;
          pSStack_50 = (System_String_array *)unaff_R15;
          if (((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor == (void *)0x0)
          goto label_04250ec1;
          separator = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          pSVar14 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
          plVar28 = (long *)separator;
          if (separator != (System_String_array *)0x0) {
            unaff_RBP = (Il2CppClass **)separator->m_Items;
            unaff_R15 = (MethodInfo_24EE950 **)0x0;
            unaff_R12 = &MethodInfo_Object_get_Item;
            pSVar18 = (System_String_array *)0x0;
            do {
              if ((long)(pSVar14->fields)._size <= (long)pSVar18) goto label_04250d15;
              pSVar21 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  (pSVar14,(int32_t)pSVar18,MethodInfo_Object_get_Item);
              pSVar17 = pSVar18;
              if ((pSVar21 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar21->klass != g_data_057b9c00))
              goto label_04250ecb;
              if ((System_String_array *)(ulong)(uint)separator->max_length <= pSVar18) goto label_04250ec6;
              unaff_RBP[(long)(pSVar18[-1].m_Items + 0xffff)] = (Il2CppClass *)pSVar21;
              il2cpp_runtime_helper_022b4080((long)((System_String_array *)unaff_R15)->m_Items + (long)(unaff_RBP + -4));
              pSVar18 = (System_String_array *)((long)&(pSVar18->obj).klass + 1);
              pSVar14 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
              unaff_R15 = &(((System_String_array *)unaff_R15)->obj).monitor;
            } while (pSVar14 != (System_Collections_Generic_List_object__o *)0x0);
            goto label_04250ec1;
          }
          if ((pSVar14->fields)._size < 1) {
label_04250d15:
            if (pSStack_58 != (System_String_array *)0x0) {
              pSVar17 = System_String__Split_3afab90
                                  ((System_String_o *)pSStack_58,separator,uStack_60._4_4_,(MethodInfo *)0x0);
              unaff_R15 = (MethodInfo_24EE950 **)pSStack_50;
              if (pSVar17 != (System_String_array *)0x0) {
                iVar9 = (int)pSVar17->max_length;
                if (pSStack_50 == (System_String_array *)0x0) goto label_04250eab;
                if (iVar9 < 1) {
                  return &pSStack_50->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                plVar28 = &MethodInfo_Void_Add;
                if ((pSVar17->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar14 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar18 = pSVar17;
                    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar21 = pSVar17->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar14->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar20 = (pSVar14->fields)._items;
                    if (pSVar20 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar11 = (pSVar14->fields)._size;
                    if (uVar11 < (uint)pSVar20->max_length) {
                      (pSVar14->fields)._size = uVar11 + 1;
                      pSVar20->m_Items[(int)uVar11] = (Il2CppObject *)pSVar21;
                      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar14,(Il2CppObject *)pSVar21,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar11 = (uint)pSVar17->max_length;
                    if ((long)(int)uVar11 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar11);
                }
                goto label_04250ec6;
              }
            }
            goto label_04250ec1;
          }
        }
        pSVar21 = (System_String_o *)0x0;
        System_Collections_Generic_List_object___get_Item(pSVar14,0,MethodInfo_Object_get_Item);
        il2cpp_runtime_helper_022b2c90();
        goto CustomLogic_CustomLogicStringBuiltin__Join;
      }
    }
    pSStack_48 = (System_String_array *)0x425397f;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_48 = (System_String_array *)0x4253984;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  pSStack_58 = auVar31._0_8_;
  pSStack_50 = pSVar18;
  pSStack_48 = (System_String_array *)plVar28;
  if (g_data_057adb7b == '\0') {
    uStack_60 = (System_String_array *)0x42539ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    uStack_60 = (System_String_array *)0x42539b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    uStack_60 = (System_String_array *)0x42539c4;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7b = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_60 = (System_String_array *)0x42539f2;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_60 = (System_String_array *)0x4253a04;
      obj_00 = plVar28;
      pSVar14 = (System_Collections_Generic_List_object__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        uStack_60 = (System_String_array *)0x4253a20;
        pSVar21 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(lVar26 + 0x28),MethodInfo_String_ConvertTo_String);
        pppMVar24 = &ppMStack_40;
        pSVar18 = pSStack_50;
        unaff_R12 = (MethodInfo_362BED0 **)ppMVar29;
        separator = pSStack_48;
CustomLogic_CustomLogicStringBuiltin__Join:
        *(Il2CppClass ***)((long)pppMVar24 + -8) = unaff_RBP;
        *(MethodInfo_24EE950 ***)((long)pppMVar24 + -0x10) = unaff_R15;
        *(System_String_array **)((long)pppMVar24 + -0x18) = separator;
        *(long **)((long)pppMVar24 + -0x20) = unaff_R13;
        *(MethodInfo_362BED0 ***)((long)pppMVar24 + -0x28) = unaff_R12;
        *(System_String_array **)((long)pppMVar24 + -0x30) = pSVar18;
        if (g_data_057adb5f == '\0') {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f29;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f35;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f41;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f4d;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f59;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f65;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f71;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250f7d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057adb5f = '\x01';
        }
        *(undefined8 *)((long)pppMVar24 + -0x68) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x60) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x58) = 0;
        *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fa3;
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fb8;
        System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
        if ((pSVar14 != (System_Collections_Generic_List_object__o *)0x0) &&
           (pSVar14 = pSVar14[1].monitor, pSVar14 != (System_Collections_Generic_List_object__o *)0x0)) {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4250fe2;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)((long)pppMVar24 + -0x48),pSVar14,
                     MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)pppMVar24 + -0x58) = *(undefined8 *)((long)pppMVar24 + -0x38);
          *(undefined8 *)((long)pppMVar24 + -0x68) = *(undefined8 *)((long)pppMVar24 + -0x48);
          *(undefined8 *)((long)pppMVar24 + -0x60) = *(undefined8 *)((long)pppMVar24 + -0x40);
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510a7;
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o)
                                *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                 ((long)pppMVar24 + -0x68),(MethodInfo_321A1D0 *)((long)pppMVar24 + -0x68));
            if ((char)bVar10 != '\0') goto label_04251105;
          }
          else {
            while( true ) {
              *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251043;
              bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o)
                                  *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                   ((long)pppMVar24 + -0x68),(MethodInfo_321A1D0 *)((long)pppMVar24 + -0x68));
              lVar26 = MethodInfo_Void_Add;
              if ((char)bVar10 == '\0') break;
              pIVar22 = *(Il2CppObject **)((long)pppMVar24 + -0x58);
              if ((pIVar22 != (Il2CppObject *)0x0) && (pIVar19 = g_data_057b9c00, pIVar22->klass != g_data_057b9c00)
                 ) {
label_042510f5:
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251100;
                il2cpp_runtime_helper_022b2fd0(pIVar22,pIVar19);
                goto label_04251100;
              }
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar20 = (__this_03->fields)._items;
              if (pSVar20 == (System_Object_array *)0x0) {
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510f5;
                pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
                goto label_042510f5;
              }
              uVar11 = (__this_03->fields)._size;
              if (uVar11 < (uint)pSVar20->max_length) {
                (__this_03->fields)._size = uVar11 + 1;
                pSVar20->m_Items[(int)uVar11] = pIVar22;
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251093;
                il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
                *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251037;
                System_Collections_Generic_List_object___AddWithResize(__this_03,pIVar22,method_00);
              }
            }
          }
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510bd;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
          goto label_042510bd;
        }
label_04251100:
        do {
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251105;
          il2cpp_runtime_helper_022b2c90();
label_04251105:
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425110a;
          auVar30 = il2cpp_runtime_helper_022b2c90();
          if (auVar30._8_4_ != 1) {
label_04251163:
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425117d;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68)
                       ,(MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x425118a;
            _Unwind_Resume(auVar30._0_8_);
          }
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251138;
          plVar28 = (long *)__cxa_begin_catch(auVar30._0_8_);
          lVar26 = *plVar28;
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251140;
          __cxa_end_catch();
          *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251152;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)pppMVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)pppMVar24 + -0x68));
          if (lVar26 != 0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x4251163;
            il2cpp_runtime_helper_022fefe0(lVar26);
            goto label_04251163;
          }
label_042510bd:
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510d4;
            pSVar18 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
            *(undefined8 *)((long)pppMVar24 + -0x70) = 0x42510e1;
            pSVar21 = System_String__Join(pSVar21,pSVar18,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar21;
          }
        } while( true );
      }
    }
    uStack_60 = (System_String_array *)0x4253a37;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_60 = (System_String_array *)0x4253a3c;
  il2cpp_runtime_helper_022b2c90();
  uStack_60 = (System_String_array *)plVar28;
  if (g_data_057adb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7c = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = plVar28;
      pSVar21 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        obj_00 = *(long **)(extraout_RDX + 0x28);
        iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
        plVar28 = (long *)0x0;
        if (pSVar21 != (System_String_o *)0x0) {
          pSVar21 = System_String__Substring(pSVar21,iVar12,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar21;
        }
        goto label_04253aed;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253aed:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  uStack_98 = auVar31._0_8_;
  lStack_90 = extraout_RDX;
  pSStack_88 = (System_String_array *)plVar28;
  if (g_data_057adb7d == '\0') {
    lStack_a0 = 0x4253b1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    lStack_a0 = 0x4253b2b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    lStack_a0 = 0x4253b37;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value = (MethodInfo_24EEB40 **)unaff_R15;
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      unaff_RBP = *(Il2CppClass ***)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_a0 = 0x4253b69;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_a0 = 0x4253b7b;
      obj_00 = (long *)unaff_RBP;
      pSVar18 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        obj_00 = *(long **)(lVar26 + 0x28);
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        lStack_a0 = 0x4253b97;
        uVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
        plVar28 = (long *)pSVar18;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          unaff_RBP = (Il2CppClass **)(ulong)uVar11;
          obj_00 = *(long **)(lVar26 + 0x30);
          lStack_a0 = 0x4253bab;
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
          value = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar18 != (System_String_array *)0x0) {
            pSVar21 = System_String__Substring_3af8da0
                                ((System_String_o *)pSVar18,uVar11,iVar12,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar21;
          }
          goto label_04253bcd;
        }
      }
    }
    lStack_a0 = 0x4253bcd;
    il2cpp_runtime_helper_022b2ca0();
    value = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  lStack_a0 = 0x4253bd2;
  il2cpp_runtime_helper_022b2c90();
  lStack_a0 = lVar26;
  if (g_data_057adb7e == '\0') {
    pSStack_b8 = (System_String_array *)0x4253bfd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_b8 = (System_String_array *)0x4253c09;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar18 = extraout_RDX_00;
  if (extraout_RDX_00 == (System_String_array *)0x0) {
label_04253c70:
    pSStack_b8 = (System_String_array *)0x4253c75;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_00->max_length != 0) {
    pSVar18 = (System_String_array *)extraout_RDX_00->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_b8 = (System_String_array *)0x4253c37;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b8 = (System_String_array *)0x4253c49;
    obj_00 = (long *)pSVar18;
    pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar18,MethodInfo_String_ConvertTo_String);
    if (pIVar22 != (Il2CppObject *)0x0) {
      uStack_a4 = *(undefined4 *)&pIVar22[1].klass;
      pSStack_b8 = (System_String_array *)0x4253c6a;
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a4);
      return pIVar22;
    }
    goto label_04253c70;
  }
  pSStack_b8 = (System_String_array *)0x4253c7a;
  auVar31 = il2cpp_runtime_helper_022b2ca0();
  lVar26 = auVar31._8_8_;
  uStack_d8 = auVar31._0_8_;
  pSStack_d0 = pSVar18;
  ppMStack_c8 = (MethodInfo_362BED0 **)ppMVar29;
  pSStack_c0 = (System_String_array *)plVar28;
  pSStack_b8 = (System_String_array *)value;
  if (g_data_057adb7f == '\0') {
    pSStack_e0 = (System_String_array *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_e0 = (System_String_array *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_e0 = (System_String_array *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      ppMVar29 = &MethodInfo_String_ConvertTo_String;
      pSStack_e0 = (System_String_array *)0x4253cf1;
      obj_00 = plVar28;
      pSVar18 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        obj_00 = *(long **)(lVar26 + 0x28);
        pSStack_e0 = (System_String_array *)0x4253d07;
        pSVar17 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)pSVar18;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          obj_00 = *(long **)(lVar26 + 0x30);
          pSStack_e0 = (System_String_array *)0x4253d1d;
          pSVar21 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
          value = (MethodInfo_24EEB40 **)pSVar17;
          if (pSVar18 != (System_String_array *)0x0) {
            pSVar21 = System_String__Replace_3af9030
                                ((System_String_o *)pSVar18,(System_String_o *)pSVar17,pSVar21,
                                 (MethodInfo *)0x0);
            return (Il2CppObject *)pSVar21;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_e0 = (System_String_array *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_e0 = (System_String_array *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_f0 = lVar26;
  pSStack_e8 = (System_String_array *)plVar28;
  pSStack_e0 = (System_String_array *)value;
  if (g_data_057adb80 == '\0') {
    pSStack_108 = (System_String_array *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_108 = (System_String_array *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_108 = (System_String_array *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_108 = (System_String_array *)0x4253dc1;
      obj_00 = plVar28;
      pSVar21 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_01 + 0x28);
        pSStack_108 = (System_String_array *)0x4253dd6;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar21 != (System_String_o *)0x0) {
          pSStack_108 = (System_String_array *)0x4253de8;
          bVar10 = System_String__Contains(pSVar21,pSVar13,(MethodInfo *)0x0);
          uStack_f1 = (undefined1)bVar10;
          pSStack_108 = (System_String_array *)0x4253e01;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_f1);
          return pIVar22;
        }
        goto label_04253e10;
      }
    }
    pSStack_108 = (System_String_array *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_108 = (System_String_array *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_118 = extraout_RDX_01;
  pSStack_110 = (System_String_array *)plVar28;
  pSStack_108 = (System_String_array *)value;
  if (g_data_057adb81 == '\0') {
    pSStack_130 = (System_String_array *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_130 = (System_String_array *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_130 = (System_String_array *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_130 = (System_String_array *)0x4253e91;
      obj_00 = plVar28;
      pSVar21 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_02 + 0x28);
        pSStack_130 = (System_String_array *)0x4253ea6;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar21 != (System_String_o *)0x0) {
          pSStack_130 = (System_String_array *)0x4253eb8;
          bVar10 = System_String__StartsWith(pSVar21,pSVar13,(MethodInfo *)0x0);
          uStack_119 = (undefined1)bVar10;
          pSStack_130 = (System_String_array *)0x4253ed1;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_119);
          return pIVar22;
        }
        goto label_04253ee0;
      }
    }
    pSStack_130 = (System_String_array *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_130 = (System_String_array *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_140 = extraout_RDX_02;
  pSStack_138 = (System_String_array *)plVar28;
  pSStack_130 = (System_String_array *)value;
  if (g_data_057adb82 == '\0') {
    lStack_158 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    lStack_158 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_158 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      lStack_158 = 0x4253f61;
      obj_00 = plVar28;
      pSVar21 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_03 + 0x28);
        lStack_158 = 0x4253f76;
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)0x0;
        if (pSVar21 != (System_String_o *)0x0) {
          lStack_158 = 0x4253f88;
          bVar10 = System_String__EndsWith(pSVar21,pSVar13,(MethodInfo *)0x0);
          uStack_141 = (undefined1)bVar10;
          lStack_158 = 0x4253fa1;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_141);
          return pIVar22;
        }
        goto label_04253fb0;
      }
    }
    lStack_158 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStack_158 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStack_158 = extraout_RDX_03;
  if (g_data_057adb83 == '\0') {
    pSStack_160 = (System_String_array *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_160 = (System_String_array *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar18 = extraout_RDX_04;
  if (extraout_RDX_04 == (System_String_array *)0x0) {
label_04254035:
    pSStack_160 = (System_String_array *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_04->max_length != 0) {
    pSVar18 = (System_String_array *)extraout_RDX_04->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_160 = (System_String_array *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_160 = (System_String_array *)0x4254025;
    obj_00 = (long *)pSVar18;
    pSVar21 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar18,MethodInfo_String_ConvertTo_String);
    if (pSVar21 != (System_String_o *)0x0) {
      pSVar21 = System_String__Trim(pSVar21,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar21;
    }
    goto label_04254035;
  }
  pSStack_160 = (System_String_array *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_170 = pSVar18;
  pSStack_168 = (System_String_array *)plVar28;
  pSStack_160 = (System_String_array *)value;
  if (g_data_057adb84 == '\0') {
    pSStack_178 = (System_String_array *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_178 = (System_String_array *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_178 = (System_String_array *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    pSVar18 = (System_String_array *)value;
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_178 = (System_String_array *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_178 = (System_String_array *)0x42540b9;
      obj_00 = plVar28;
      pSVar17 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      pSVar18 = (System_String_array *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_05 + 0x28);
        pSStack_178 = (System_String_array *)0x42540ce;
        value = (MethodInfo_24EEB40 **)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        plVar28 = (long *)pSVar17;
        if (2 < *(uint *)(extraout_RDX_05 + 0x18)) {
          obj_00 = *(long **)(extraout_RDX_05 + 0x30);
          pSStack_178 = (System_String_array *)0x42540ea;
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar17 != (System_String_array *)0x0) {
            pSVar21 = System_String__Insert
                                ((System_String_o *)pSVar17,iVar12,(System_String_o *)value,(MethodInfo *)0x0)
            ;
            return (Il2CppObject *)pSVar21;
          }
          goto label_04254108;
        }
      }
    }
    value = (MethodInfo_24EEB40 **)pSVar18;
    pSStack_178 = (System_String_array *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStack_178 = (System_String_array *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_178 = (System_String_array *)extraout_RDX_05;
  if (g_data_057adb85 == '\0') {
    pSStack_180 = (System_String_array *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_180 = (System_String_array *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_06 == 0) {
    pSStack_180 = (System_String_array *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
    pIVar22 = *(Il2CppObject **)(extraout_RDX_06 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_180 = (System_String_array *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_180 = (System_String_array *)0x425417d;
    pSVar21 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar22,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_180 = (System_String_array *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar9 == 0) {
      pSStack_180 = (System_String_array *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = pSVar21;
    pSStack_180 = (System_String_array *)plVar28;
    pSStack_178 = (System_String_array *)unaff_RBP;
    bVar10 = System_String__op_Equality
                       (pSVar21,*(System_String_o **)g_data_057b9c00->static_fields,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (pSVar21 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar9 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar9 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar21 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar13,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar21;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_1e0 = &TypeInfo_MiscExtensions;
        ppMStack_1d8 = (MethodInfo_362BED0 **)ppMVar29;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_1ee = 0;
        pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar25 = 0;
          pSStack_1e8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_01,(MethodInfo *)0x0);
          if (pSStack_1e8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar11 = 0;
label_040653fb:
          pSVar5 = pSStack_1e8->klass;
          uVar3._0_1_ = (pSVar5->_2).rank;
          uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
          uStack_1ec = uVar11;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar15 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26)].methodPtr;
                goto label_04065463;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar26);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_1e8,TypeInfo_IEnumerator,0);
label_04065463:
          cVar7 = (**ppIVar15)(pSStack_1e8,(MethodInfo *)ppIVar15[1]);
          if (cVar7 == '\0') {
            iVar9 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar5 = pSStack_1e8->klass;
          uVar4._0_1_ = (pSVar5->_2).rank;
          uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar15 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar26);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_1e8,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_02 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar15)(pSStack_1e8,(MethodInfo *)ppIVar15[1]);
          if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar2) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_02);
              goto label_04065803;
            }
            iVar9 = (__this_02->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar11 < iVar9) goto label_0406581a;
            }
            else if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar11 < iVar9) goto label_04065824;
            }
            else if ((int)uVar11 < iVar9) {
              do {
                uStack_1ee = System_String__get_Chars((System_String_o *)__this_05,uVar11,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar21 = System_Char__ToString((uint16_t)&uStack_1ee,(MethodInfo *)0x0);
                lVar26 = MethodInfo_Void_Add;
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar20 = (pSVar14->fields)._items;
                if (pSVar20 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar23 = (pSVar14->fields)._size;
                if (uVar23 < (uint)pSVar20->max_length) {
                  (pSVar14->fields)._size = uVar23 + 1;
                  pSVar20->m_Items[(int)uVar23] = (Il2CppObject *)pSVar21;
                  il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar23);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar14,(Il2CppObject *)pSVar21,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (__this_02->fields)._Index_k__BackingField);
            }
            pSVar21 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(pSVar14->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar20 = (pSVar14->fields)._items;
            if (pSVar20 == (System_Object_array *)0x0) goto label_04065815;
            uVar11 = (pSVar14->fields)._size;
            if (uVar11 < (uint)pSVar20->max_length) {
              (pSVar14->fields)._size = uVar11 + 1;
              pSVar20->m_Items[(int)uVar11] = (Il2CppObject *)pSVar21;
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11,pSVar21);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar14,(Il2CppObject *)pSVar21,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_1ec = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_1ee = System_String__get_Chars((System_String_o *)__this_05,uStack_1ec,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar25 = 0;
          System_Char__ToString((uint16_t)&uStack_1ee,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_1ee = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_1ee,(MethodInfo *)0x0);
          auVar30 = il2cpp_runtime_helper_022b2c90();
          uStack_1ec = 0;
          iVar9 = 0;
          if (auVar30._8_4_ != 1) {
            plVar28 = (long *)il2cpp_runtime_helper_023051f0(pSStack_1e8,TypeInfo_IDisposable);
            if (plVar28 == (long *)0x0) goto label_04065a06;
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) == 0) goto label_040659df;
            lVar27 = 0;
            goto label_040659d0;
          }
          puVar16 = (undefined8 *)__cxa_begin_catch(auVar30._0_8_);
          unaff_R13 = (long *)*puVar16;
          __cxa_end_catch();
label_04065677:
          uVar25 = TypeInfo_IDisposable;
          plVar28 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar28 != (long *)0x0) {
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) != 0) {
              lVar27 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
                  puVar16 = (undefined8 *)
                            (lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27);
            }
            puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040656ed:
            uVar25 = puVar16[1];
            (*(code *)*puVar16)(plVar28);
          }
          if ((System_Collections_Generic_List_object__o *)unaff_R13 !=
              (System_Collections_Generic_List_object__o *)0x0) goto label_04065869;
          if ((iVar9 != 6) && (iVar9 != 0)) {
            return (Il2CppObject *)pSVar14;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar9 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar25 = (ulong)uStack_1ec;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar9 <= (int)uStack_1ec) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar9 <= (int)uStack_1ec) {
            return (Il2CppObject *)pSVar14;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_1ee = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar21 = System_Char__ToString((uint16_t)&uStack_1ee,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            piVar1 = &(pSVar14->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar20 = (pSVar14->fields)._items;
            if (pSVar20 == (System_Object_array *)0x0) break;
            uVar11 = (pSVar14->fields)._size;
            if (uVar11 < (uint)pSVar20->max_length) {
              (pSVar14->fields)._size = uVar11 + 1;
              pSVar20->m_Items[(int)uVar11] = (Il2CppObject *)pSVar21;
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar11,pSVar21);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar14,(Il2CppObject *)pSVar21,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = (int32_t)uVar25 + 1;
            uVar25 = (ulong)uVar11;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar11) {
              return (Il2CppObject *)pSVar14;
            }
          }
        } while( true );
      }
      if ((pSVar21->fields)._stringLength < 2) {
        pSVar21 = System_String__ToUpper(pSVar21,(MethodInfo *)0x0);
      }
      else {
        uVar8 = System_String__get_Chars(pSVar21,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToUpper_3c18a00(uVar8,(MethodInfo *)0x0);
        pSVar13 = System_Char__ToString((short)&pSStack_190 + 6,(MethodInfo *)0x0);
        pSVar21 = System_String__Substring(pSVar21,1,(MethodInfo *)0x0);
        pSVar21 = System_String__Concat_3ae5ba0(pSVar13,pSVar21,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar21;
  }
  pSStack_180 = (System_String_array *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_180 = (System_String_array *)extraout_RDX_06;
  if (g_data_057adb86 == '\0') {
    pSStack_188 = (System_String_array *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_188 = (System_String_array *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar18 = extraout_RDX_07;
  if (extraout_RDX_07 == (System_String_array *)0x0) {
label_04254265:
    pSStack_188 = (System_String_array *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_07->max_length != 0) {
    pSVar18 = (System_String_array *)extraout_RDX_07->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_188 = (System_String_array *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_188 = (System_String_array *)0x4254255;
    obj_00 = (long *)pSVar18;
    pSVar21 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar18,MethodInfo_String_ConvertTo_String);
    if (pSVar21 != (System_String_o *)0x0) {
      pSVar21 = System_String__ToUpper(pSVar21,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar21;
    }
    goto label_04254265;
  }
  pSStack_188 = (System_String_array *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_188 = pSVar18;
  if (g_data_057adb87 == '\0') {
    pSStack_190 = (System_String_array *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    pSStack_190 = (System_String_array *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar18 = extraout_RDX_08;
  if (extraout_RDX_08 == (System_String_array *)0x0) {
label_042542e5:
    pSStack_190 = (System_String_array *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_08->max_length != 0) {
    pSVar18 = (System_String_array *)extraout_RDX_08->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_190 = (System_String_array *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_190 = (System_String_array *)0x42542d5;
    obj_00 = (long *)pSVar18;
    pSVar21 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar18,MethodInfo_String_ConvertTo_String);
    if (pSVar21 != (System_String_o *)0x0) {
      pSVar21 = System_String__ToLower(pSVar21,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar21;
    }
    goto label_042542e5;
  }
  pSStack_190 = (System_String_array *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_1a0 = pSVar18;
  pSStack_198 = (System_String_array *)plVar28;
  pSStack_190 = (System_String_array *)value;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    obj_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_09 != 0) {
    if (*(int *)(extraout_RDX_09 + 0x18) != 0) {
      obj_00 = *(long **)(extraout_RDX_09 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_09 + 0x18)) {
        obj_00 = *(long **)(extraout_RDX_09 + 0x28);
        pSVar13 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (pSVar21 != (System_String_o *)0x0) {
          iStack_1a4 = System_String__IndexOf_3afbe10(pSVar21,pSVar13,4,(MethodInfo *)0x0);
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_1a4);
          return pIVar22;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((System_String_array *)obj_00)->bounds = 1;
  *(undefined1 *)((long)((System_String_array *)obj_00)->m_Items + 0xc) = 1;
  System_Object___ctor((Il2CppObject *)obj_00,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_array *)obj_00)->max_length = (il2cpp_array_size_t)__this_04;
  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((System_String_array *)obj_00)->max_length,__this_04);
  return pIVar22;
  while (lVar27 = lVar27 + 0x10, (ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)(lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar16)(plVar28,puVar16[1]);
label_04065a06:
  _Unwind_Resume(auVar30._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Split>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42538a0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  MethodInfo_362C220 *method_00;
  System_Object_array *pSVar7;
  char cVar8;
  uint16_t uVar9;
  int iVar10;
  bool_conflict bVar11;
  uint uVar12;
  int32_t iVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar16;
  System_Text_RegularExpressions_Capture_o *__this_02;
  undefined8 *puVar17;
  System_String_array *separator;
  System_String_o *pSVar18;
  System_String_array *pSVar19;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *pSVar20;
  Il2CppClass *pIVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  uint uVar23;
  long extraout_RDX;
  System_String_array *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  System_String_array *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  System_String_array *extraout_RDX_07;
  System_String_array *extraout_RDX_08;
  long extraout_RDX_09;
  System_String_array *unaff_RBX;
  undefined8 *puVar24;
  Il2CppClass **unaff_RBP;
  ulong uVar25;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar26;
  long lVar27;
  long *plVar28;
  MethodInfo_362BED0 **unaff_R12;
  MethodInfo_24EEB40 **ppMVar29;
  long *unaff_R13;
  long *unaff_R14;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  uint16_t uStack_1d6;
  uint uStack_1d4;
  System_Collections_IEnumerator_o *pSStack_1d0;
  long *plStack_1c8;
  MethodInfo_362BED0 **ppMStack_1c0;
  int32_t iStack_18c;
  System_String_array *pSStack_188;
  System_String_array *pSStack_180;
  System_String_array *pSStack_178;
  System_String_array *pSStack_170;
  System_String_array *pSStack_168;
  System_String_array *pSStack_160;
  System_String_array *pSStack_158;
  System_String_array *pSStack_150;
  System_String_array *pSStack_148;
  long lStack_140;
  undefined1 uStack_129;
  long lStack_128;
  System_String_array *pSStack_120;
  System_String_array *pSStack_118;
  undefined1 uStack_101;
  long lStack_100;
  System_String_array *pSStack_f8;
  System_String_array *pSStack_f0;
  undefined1 uStack_d9;
  long lStack_d8;
  System_String_array *pSStack_d0;
  System_String_array *pSStack_c8;
  undefined8 uStack_c0;
  System_String_array *pSStack_b8;
  MethodInfo_362BED0 **ppMStack_b0;
  System_String_array *pSStack_a8;
  System_String_array *pSStack_a0;
  undefined4 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  System_String_array *pSStack_70;
  undefined8 uStack_48;
  System_String_array *pSStack_40;
  System_String_array *pSStack_38;
  System_String_array *pSStack_30;
  undefined1 auStack_28 [8];
  
  plVar28 = (long *)__this;
  if (g_data_057adb7a == '\0') {
    pSStack_30 = (System_String_array *)0x42538c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pSStack_30 = (System_String_array *)0x42538cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_String_array *)0x42538d8;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7a = '\x01';
  }
  ppMVar29 = (MethodInfo_24EEB40 **)unaff_R12;
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      plVar28 = (long *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_30 = (System_String_array *)0x425390f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = (System_String_array *)0x4253921;
      unaff_R14 = (long *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    ((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      uVar12 = (uint)__a->max_length;
      ppMVar29 = (MethodInfo_24EEB40 **)&TypeInfo_CustomLogicEvaluator;
      if (1 < uVar12) {
        unaff_R13 = (long *)__a->m_Items[1];
        if ((int)uVar12 < 3) {
          uVar12 = 0;
        }
        else {
          pIVar22 = __a->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_30 = (System_String_array *)0x425394f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = (System_String_array *)0x4253961;
          uVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar22,MethodInfo_Boolean_ConvertTo_Boolean);
        }
        uVar23 = uVar12 & 0xff;
        pSVar20 = (System_String_array *)(ulong)uVar23;
        puVar24 = &uStack_48;
        pSStack_30 = unaff_RBX;
        if (g_data_057adb5e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          g_data_057adb5e = '\x01';
        }
        unaff_RBP = &TypeInfo_CustomLogicListBuiltin;
        unaff_R15 = (MethodInfo_24EE950 **)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor
                  ((CustomLogic_CustomLogicListBuiltin_o *)unaff_R15,(MethodInfo *)0x0);
        if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
        pIVar21 = (Il2CppClass *)((System_Collections_Generic_List_object__o *)unaff_R13)->klass;
        if (pIVar21 == g_data_057b9c00) {
          if (*(int *)&(((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._items == 1) {
            uVar9 = System_String__get_Chars((System_String_o *)unaff_R13,0,(MethodInfo *)0x0);
            if (((System_String_array *)unaff_R14 != (System_String_array *)0x0) &&
               (pSVar19 = System_String__Split((System_String_o *)unaff_R14,uVar9,uVar23,(MethodInfo *)0x0),
               pSVar19 != (System_String_array *)0x0)) {
              iVar10 = (int)pSVar19->max_length;
              if ((System_String_array *)unaff_R15 != (System_String_array *)0x0) {
                if (iVar10 < 1) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                unaff_R14 = &MethodInfo_Void_Add;
                if ((pSVar19->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar15 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar20 = pSVar19;
                    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar15->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar7 = (pSVar15->fields)._items;
                    if (pSVar7 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar12 = (pSVar15->fields)._size;
                    if (uVar12 < (uint)pSVar7->max_length) {
                      (pSVar15->fields)._size = uVar12 + 1;
                      pSVar7->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                      il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar15,(Il2CppObject *)pSVar18,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar12 = (uint)pSVar19->max_length;
                    if ((long)(int)uVar12 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
                }
                goto label_04250ec6;
              }
label_04250eab:
              pSVar20 = pSVar19;
              if (iVar10 < 1) {
                return &((System_String_array *)unaff_R15)->obj;
              }
            }
label_04250ec1:
            il2cpp_runtime_helper_022b2c90();
            pSVar19 = pSVar20;
          }
          else {
            if (((System_String_array *)unaff_R14 == (System_String_array *)0x0) ||
               (pSVar19 = System_String__Split_3afa740
                                    ((System_String_o *)unaff_R14,(System_String_o *)unaff_R13,uVar23,
                                     (MethodInfo *)0x0), pSVar19 == (System_String_array *)0x0))
            goto label_04250ec1;
            iVar10 = (int)pSVar19->max_length;
            if ((System_String_array *)unaff_R15 == (System_String_array *)0x0) goto label_04250eab;
            if (iVar10 < 1) {
              return &((System_String_array *)unaff_R15)->obj;
            }
            unaff_RBP = (Il2CppClass **)0x0;
            unaff_R14 = &MethodInfo_Void_Add;
            if ((pSVar19->max_length & 0xffffffff) != 0) {
              do {
                lVar26 = MethodInfo_Void_Add;
                pSVar15 = (System_Collections_Generic_List_object__o *)
                          ((System_String_array *)unaff_R15)->m_Items[2];
                pSVar20 = pSVar19;
                if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                piVar1 = &(pSVar15->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar15->fields)._items;
                if (pSVar7 == (System_Object_array *)0x0) goto label_04250ec1;
                uVar12 = (pSVar15->fields)._size;
                if (uVar12 < (uint)pSVar7->max_length) {
                  (pSVar15->fields)._size = uVar12 + 1;
                  pSVar7->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                  il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar15,(Il2CppObject *)pSVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                uVar12 = (uint)pSVar19->max_length;
                if ((long)(int)uVar12 <= (long)unaff_RBP) {
                  return &((System_String_array *)unaff_R15)->obj;
                }
              } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
            }
          }
label_04250ec6:
          pSVar18 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
label_04250ecb:
          il2cpp_runtime_helper_022b2fd0(pSVar18);
          separator = (System_String_array *)unaff_R14;
label_04250ed3:
          pSVar15 = (System_Collections_Generic_List_object__o *)unaff_R13;
          il2cpp_runtime_helper_022b2fd0();
          pSVar20 = pSVar19;
        }
        else {
          bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
          pSVar19 = pSVar20;
          separator = (System_String_array *)unaff_R14;
          if (((pIVar21->_2).naturalAligment < bVar2) ||
             ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) goto label_04250ed3;
          uStack_48 = (System_String_array *)(CONCAT44(uVar12,(undefined4)uStack_48) & 0xffffffffff);
          pSStack_40 = (System_String_array *)unaff_R14;
          pSStack_38 = (System_String_array *)unaff_R15;
          if (((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor == (void *)0x0)
          goto label_04250ec1;
          separator = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          pSVar15 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
          unaff_R14 = (long *)separator;
          if (separator != (System_String_array *)0x0) {
            unaff_RBP = (Il2CppClass **)separator->m_Items;
            unaff_R15 = (MethodInfo_24EE950 **)0x0;
            unaff_R12 = &MethodInfo_Object_get_Item;
            pSVar20 = (System_String_array *)0x0;
            do {
              if ((long)(pSVar15->fields)._size <= (long)pSVar20) goto label_04250d15;
              pSVar18 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  (pSVar15,(int32_t)pSVar20,MethodInfo_Object_get_Item);
              pSVar19 = pSVar20;
              if ((pSVar18 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar18->klass != g_data_057b9c00))
              goto label_04250ecb;
              if ((System_String_array *)(ulong)(uint)separator->max_length <= pSVar20) goto label_04250ec6;
              unaff_RBP[(long)(pSVar20[-1].m_Items + 0xffff)] = (Il2CppClass *)pSVar18;
              il2cpp_runtime_helper_022b4080((long)((System_String_array *)unaff_R15)->m_Items + (long)(unaff_RBP + -4));
              pSVar20 = (System_String_array *)((long)&(pSVar20->obj).klass + 1);
              pSVar15 = ((System_Collections_Generic_List_object__o *)((long)unaff_R13 + 0x28))->monitor;
              unaff_R15 = &(((System_String_array *)unaff_R15)->obj).monitor;
            } while (pSVar15 != (System_Collections_Generic_List_object__o *)0x0);
            goto label_04250ec1;
          }
          if ((pSVar15->fields)._size < 1) {
label_04250d15:
            if (pSStack_40 != (System_String_array *)0x0) {
              pSVar19 = System_String__Split_3afab90
                                  ((System_String_o *)pSStack_40,separator,uStack_48._4_4_,(MethodInfo *)0x0);
              unaff_R15 = (MethodInfo_24EE950 **)pSStack_38;
              if (pSVar19 != (System_String_array *)0x0) {
                iVar10 = (int)pSVar19->max_length;
                if (pSStack_38 == (System_String_array *)0x0) goto label_04250eab;
                if (iVar10 < 1) {
                  return &pSStack_38->obj;
                }
                unaff_RBP = (Il2CppClass **)0x0;
                unaff_R14 = &MethodInfo_Void_Add;
                if ((pSVar19->max_length & 0xffffffff) != 0) {
                  do {
                    lVar26 = MethodInfo_Void_Add;
                    pSVar15 = (System_Collections_Generic_List_object__o *)
                              ((System_String_array *)unaff_R15)->m_Items[2];
                    pSVar20 = pSVar19;
                    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pSVar18 = pSVar19->m_Items[(long)unaff_RBP];
                    piVar1 = &(pSVar15->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar7 = (pSVar15->fields)._items;
                    if (pSVar7 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar12 = (pSVar15->fields)._size;
                    if (uVar12 < (uint)pSVar7->max_length) {
                      (pSVar15->fields)._size = uVar12 + 1;
                      pSVar7->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
                      il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar15,(Il2CppObject *)pSVar18,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    unaff_RBP = (Il2CppClass **)((long)&(((System_String_array *)unaff_RBP)->obj).klass + 1);
                    uVar12 = (uint)pSVar19->max_length;
                    if ((long)(int)uVar12 <= (long)unaff_RBP) {
                      return &((System_String_array *)unaff_R15)->obj;
                    }
                  } while (unaff_RBP < (System_String_array *)(ulong)uVar12);
                }
                goto label_04250ec6;
              }
            }
            goto label_04250ec1;
          }
        }
        pSVar18 = (System_String_o *)0x0;
        System_Collections_Generic_List_object___get_Item(pSVar15,0,MethodInfo_Object_get_Item);
        il2cpp_runtime_helper_022b2c90();
        goto CustomLogic_CustomLogicStringBuiltin__Join;
      }
    }
    pSStack_30 = (System_String_array *)0x425397f;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_30 = (System_String_array *)0x4253984;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  pSStack_40 = auVar31._0_8_;
  pSStack_38 = (System_String_array *)__a;
  pSStack_30 = (System_String_array *)unaff_R14;
  if (g_data_057adb7b == '\0') {
    uStack_48 = (System_String_array *)0x42539ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    uStack_48 = (System_String_array *)0x42539b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    uStack_48 = (System_String_array *)0x42539c4;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7b = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      unaff_R14 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_48 = (System_String_array *)0x42539f2;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_48 = (System_String_array *)0x4253a04;
      plVar28 = unaff_R14;
      pSVar15 = (System_Collections_Generic_List_object__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        uStack_48 = (System_String_array *)0x4253a20;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(lVar26 + 0x28),MethodInfo_String_ConvertTo_String);
        puVar24 = (undefined8 *)auStack_28;
        pSVar20 = pSStack_38;
        unaff_R12 = (MethodInfo_362BED0 **)ppMVar29;
        separator = pSStack_30;
CustomLogic_CustomLogicStringBuiltin__Join:
        *(Il2CppClass ***)((long)puVar24 + -8) = unaff_RBP;
        *(MethodInfo_24EE950 ***)((long)puVar24 + -0x10) = unaff_R15;
        *(System_String_array **)((long)puVar24 + -0x18) = separator;
        *(long **)((long)puVar24 + -0x20) = unaff_R13;
        *(MethodInfo_362BED0 ***)((long)puVar24 + -0x28) = unaff_R12;
        *(System_String_array **)((long)puVar24 + -0x30) = pSVar20;
        if (g_data_057adb5f == '\0') {
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f29;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f35;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f41;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f4d;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f59;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f65;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f71;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250f7d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057adb5f = '\x01';
        }
        *(undefined8 *)((long)puVar24 + -0x68) = 0;
        *(undefined8 *)((long)puVar24 + -0x60) = 0;
        *(undefined8 *)((long)puVar24 + -0x58) = 0;
        *(undefined8 *)((long)puVar24 + -0x70) = 0x4250fa3;
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)puVar24 + -0x70) = 0x4250fb8;
        System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
        if ((pSVar15 != (System_Collections_Generic_List_object__o *)0x0) &&
           (pSVar15 = pSVar15[1].monitor, pSVar15 != (System_Collections_Generic_List_object__o *)0x0)) {
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4250fe2;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)((long)puVar24 + -0x48),pSVar15,
                     MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          *(undefined8 *)((long)puVar24 + -0x58) = *(undefined8 *)((long)puVar24 + -0x38);
          *(undefined8 *)((long)puVar24 + -0x68) = *(undefined8 *)((long)puVar24 + -0x48);
          *(undefined8 *)((long)puVar24 + -0x60) = *(undefined8 *)((long)puVar24 + -0x40);
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)puVar24 + -0x70) = 0x42510a7;
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o)
                                *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                 ((long)puVar24 + -0x68),(MethodInfo_321A1D0 *)((long)puVar24 + -0x68));
            if ((char)bVar11 != '\0') goto label_04251105;
          }
          else {
            while( true ) {
              *(undefined8 *)((long)puVar24 + -0x70) = 0x4251043;
              bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o)
                                  *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                   ((long)puVar24 + -0x68),(MethodInfo_321A1D0 *)((long)puVar24 + -0x68));
              lVar26 = MethodInfo_Void_Add;
              if ((char)bVar11 == '\0') break;
              pIVar22 = *(Il2CppObject **)((long)puVar24 + -0x58);
              if ((pIVar22 != (Il2CppObject *)0x0) && (pIVar21 = g_data_057b9c00, pIVar22->klass != g_data_057b9c00)
                 ) {
label_042510f5:
                *(undefined8 *)((long)puVar24 + -0x70) = 0x4251100;
                il2cpp_runtime_helper_022b2fd0(pIVar22,pIVar21);
                goto label_04251100;
              }
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this_03->fields)._items;
              if (pSVar7 == (System_Object_array *)0x0) {
                *(undefined8 *)((long)puVar24 + -0x70) = 0x42510f5;
                pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
                goto label_042510f5;
              }
              uVar12 = (__this_03->fields)._size;
              if (uVar12 < (uint)pSVar7->max_length) {
                (__this_03->fields)._size = uVar12 + 1;
                pSVar7->m_Items[(int)uVar12] = pIVar22;
                *(undefined8 *)((long)puVar24 + -0x70) = 0x4251093;
                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
                *(undefined8 *)((long)puVar24 + -0x70) = 0x4251037;
                System_Collections_Generic_List_object___AddWithResize(__this_03,pIVar22,method_00);
              }
            }
          }
          *(undefined8 *)((long)puVar24 + -0x70) = 0x42510bd;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)puVar24 + -0x68));
          goto label_042510bd;
        }
label_04251100:
        do {
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4251105;
          il2cpp_runtime_helper_022b2c90();
label_04251105:
          *(undefined8 *)((long)puVar24 + -0x70) = 0x425110a;
          auVar30 = il2cpp_runtime_helper_022b2c90();
          if (auVar30._8_4_ != 1) {
label_04251163:
            *(undefined8 *)((long)puVar24 + -0x70) = 0x425117d;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar24 + -0x68),
                       (MethodInfo_321A1C0 *)((long)puVar24 + -0x68));
            *(undefined8 *)((long)puVar24 + -0x70) = 0x425118a;
            _Unwind_Resume(auVar30._0_8_);
          }
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4251138;
          plVar28 = (long *)__cxa_begin_catch(auVar30._0_8_);
          lVar26 = *plVar28;
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4251140;
          __cxa_end_catch();
          *(undefined8 *)((long)puVar24 + -0x70) = 0x4251152;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar24 + -0x68),
                     (MethodInfo_321A1C0 *)((long)puVar24 + -0x68));
          if (lVar26 != 0) {
            *(undefined8 *)((long)puVar24 + -0x70) = 0x4251163;
            il2cpp_runtime_helper_022fefe0(lVar26);
            goto label_04251163;
          }
label_042510bd:
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            *(undefined8 *)((long)puVar24 + -0x70) = 0x42510d4;
            pSVar20 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
            *(undefined8 *)((long)puVar24 + -0x70) = 0x42510e1;
            pSVar18 = System_String__Join(pSVar18,pSVar20,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
        } while( true );
      }
    }
    uStack_48 = (System_String_array *)0x4253a37;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_48 = (System_String_array *)0x4253a3c;
  il2cpp_runtime_helper_022b2c90();
  uStack_48 = (System_String_array *)unaff_R14;
  if (g_data_057adb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7c = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar28 = unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar28 = *(long **)(extraout_RDX + 0x28);
        iVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar28,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSVar18 = System_String__Substring(pSVar18,iVar13,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        goto label_04253aed;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253aed:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar31._8_8_;
  uStack_80 = auVar31._0_8_;
  lStack_78 = extraout_RDX;
  pSStack_70 = (System_String_array *)unaff_R14;
  if (g_data_057adb7d == '\0') {
    lStack_88 = 0x4253b1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    lStack_88 = 0x4253b2b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    lStack_88 = 0x4253b37;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value = (MethodInfo_24EEB40 **)unaff_R15;
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      unaff_RBP = *(Il2CppClass ***)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_88 = 0x4253b69;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_88 = 0x4253b7b;
      plVar28 = (long *)unaff_RBP;
      pSVar20 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        plVar28 = *(long **)(lVar26 + 0x28);
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        lStack_88 = 0x4253b97;
        uVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar28,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = (long *)pSVar20;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          unaff_RBP = (Il2CppClass **)(ulong)uVar12;
          plVar28 = *(long **)(lVar26 + 0x30);
          lStack_88 = 0x4253bab;
          iVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar28,MethodInfo_Int32_ConvertTo_Int32);
          value = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar20 != (System_String_array *)0x0) {
            pSVar18 = System_String__Substring_3af8da0
                                ((System_String_o *)pSVar20,uVar12,iVar13,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253bcd;
        }
      }
    }
    lStack_88 = 0x4253bcd;
    il2cpp_runtime_helper_022b2ca0();
    value = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  lStack_88 = 0x4253bd2;
  il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar26;
  if (g_data_057adb7e == '\0') {
    pSStack_a0 = (System_String_array *)0x4253bfd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_a0 = (System_String_array *)0x4253c09;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar20 = extraout_RDX_00;
  if (extraout_RDX_00 == (System_String_array *)0x0) {
label_04253c70:
    pSStack_a0 = (System_String_array *)0x4253c75;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_00->max_length != 0) {
    pSVar20 = (System_String_array *)extraout_RDX_00->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_a0 = (System_String_array *)0x4253c37;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_a0 = (System_String_array *)0x4253c49;
    plVar28 = (long *)pSVar20;
    pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar20,MethodInfo_String_ConvertTo_String);
    if (pIVar22 != (Il2CppObject *)0x0) {
      uStack_8c = *(undefined4 *)&pIVar22[1].klass;
      pSStack_a0 = (System_String_array *)0x4253c6a;
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_8c);
      return pIVar22;
    }
    goto label_04253c70;
  }
  pSStack_a0 = (System_String_array *)0x4253c7a;
  auVar31 = il2cpp_runtime_helper_022b2ca0();
  lVar26 = auVar31._8_8_;
  uStack_c0 = auVar31._0_8_;
  pSStack_b8 = pSVar20;
  ppMStack_b0 = (MethodInfo_362BED0 **)ppMVar29;
  pSStack_a8 = (System_String_array *)unaff_R14;
  pSStack_a0 = (System_String_array *)value;
  if (g_data_057adb7f == '\0') {
    pSStack_c8 = (System_String_array *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_c8 = (System_String_array *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar26 != 0) {
    if (*(int *)(lVar26 + 0x18) != 0) {
      unaff_R14 = *(long **)(lVar26 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_c8 = (System_String_array *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      ppMVar29 = &MethodInfo_String_ConvertTo_String;
      pSStack_c8 = (System_String_array *)0x4253cf1;
      plVar28 = unaff_R14;
      pSVar20 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar26 + 0x18)) {
        plVar28 = *(long **)(lVar26 + 0x28);
        pSStack_c8 = (System_String_array *)0x4253d07;
        pSVar19 = (System_String_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (long *)pSVar20;
        if (2 < *(uint *)(lVar26 + 0x18)) {
          plVar28 = *(long **)(lVar26 + 0x30);
          pSStack_c8 = (System_String_array *)0x4253d1d;
          pSVar18 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
          value = (MethodInfo_24EEB40 **)pSVar19;
          if (pSVar20 != (System_String_array *)0x0) {
            pSVar18 = System_String__Replace_3af9030
                                ((System_String_o *)pSVar20,(System_String_o *)pSVar19,pSVar18,
                                 (MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_c8 = (System_String_array *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_c8 = (System_String_array *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_d8 = lVar26;
  pSStack_d0 = (System_String_array *)unaff_R14;
  pSStack_c8 = (System_String_array *)value;
  if (g_data_057adb80 == '\0') {
    pSStack_f0 = (System_String_array *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_f0 = (System_String_array *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_f0 = (System_String_array *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_f0 = (System_String_array *)0x4253dc1;
      plVar28 = unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar28 = *(long **)(extraout_RDX_01 + 0x28);
        pSStack_f0 = (System_String_array *)0x4253dd6;
        pSVar14 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStack_f0 = (System_String_array *)0x4253de8;
          bVar11 = System_String__Contains(pSVar18,pSVar14,(MethodInfo *)0x0);
          uStack_d9 = (undefined1)bVar11;
          pSStack_f0 = (System_String_array *)0x4253e01;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d9);
          return pIVar22;
        }
        goto label_04253e10;
      }
    }
    pSStack_f0 = (System_String_array *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_f0 = (System_String_array *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_100 = extraout_RDX_01;
  pSStack_f8 = (System_String_array *)unaff_R14;
  pSStack_f0 = (System_String_array *)value;
  if (g_data_057adb81 == '\0') {
    pSStack_118 = (System_String_array *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_118 = (System_String_array *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_118 = (System_String_array *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_118 = (System_String_array *)0x4253e91;
      plVar28 = unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar28 = *(long **)(extraout_RDX_02 + 0x28);
        pSStack_118 = (System_String_array *)0x4253ea6;
        pSVar14 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStack_118 = (System_String_array *)0x4253eb8;
          bVar11 = System_String__StartsWith(pSVar18,pSVar14,(MethodInfo *)0x0);
          uStack_101 = (undefined1)bVar11;
          pSStack_118 = (System_String_array *)0x4253ed1;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_101);
          return pIVar22;
        }
        goto label_04253ee0;
      }
    }
    pSStack_118 = (System_String_array *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_118 = (System_String_array *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_128 = extraout_RDX_02;
  pSStack_120 = (System_String_array *)unaff_R14;
  pSStack_118 = (System_String_array *)value;
  if (g_data_057adb82 == '\0') {
    lStack_140 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    lStack_140 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      unaff_R14 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_140 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      lStack_140 = 0x4253f61;
      plVar28 = unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        plVar28 = *(long **)(extraout_RDX_03 + 0x28);
        lStack_140 = 0x4253f76;
        pSVar14 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (long *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          lStack_140 = 0x4253f88;
          bVar11 = System_String__EndsWith(pSVar18,pSVar14,(MethodInfo *)0x0);
          uStack_129 = (undefined1)bVar11;
          lStack_140 = 0x4253fa1;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_129);
          return pIVar22;
        }
        goto label_04253fb0;
      }
    }
    lStack_140 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStack_140 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStack_140 = extraout_RDX_03;
  if (g_data_057adb83 == '\0') {
    pSStack_148 = (System_String_array *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_148 = (System_String_array *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar20 = extraout_RDX_04;
  if (extraout_RDX_04 == (System_String_array *)0x0) {
label_04254035:
    pSStack_148 = (System_String_array *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_04->max_length != 0) {
    pSVar20 = (System_String_array *)extraout_RDX_04->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_148 = (System_String_array *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_148 = (System_String_array *)0x4254025;
    plVar28 = (long *)pSVar20;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar20,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254035;
  }
  pSStack_148 = (System_String_array *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_158 = pSVar20;
  pSStack_150 = (System_String_array *)unaff_R14;
  pSStack_148 = (System_String_array *)value;
  if (g_data_057adb84 == '\0') {
    pSStack_160 = (System_String_array *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_160 = (System_String_array *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_160 = (System_String_array *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    pSVar20 = (System_String_array *)value;
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      unaff_R14 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_160 = (System_String_array *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_160 = (System_String_array *)0x42540b9;
      plVar28 = unaff_R14;
      pSVar19 = (System_String_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar20 = (System_String_array *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        plVar28 = *(long **)(extraout_RDX_05 + 0x28);
        pSStack_160 = (System_String_array *)0x42540ce;
        value = (MethodInfo_24EEB40 **)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (long *)pSVar19;
        if (2 < *(uint *)(extraout_RDX_05 + 0x18)) {
          plVar28 = *(long **)(extraout_RDX_05 + 0x30);
          pSStack_160 = (System_String_array *)0x42540ea;
          iVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar28,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar19 != (System_String_array *)0x0) {
            pSVar18 = System_String__Insert
                                ((System_String_o *)pSVar19,iVar13,(System_String_o *)value,(MethodInfo *)0x0)
            ;
            return (Il2CppObject *)pSVar18;
          }
          goto label_04254108;
        }
      }
    }
    value = (MethodInfo_24EEB40 **)pSVar20;
    pSStack_160 = (System_String_array *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStack_160 = (System_String_array *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_160 = (System_String_array *)extraout_RDX_05;
  if (g_data_057adb85 == '\0') {
    pSStack_168 = (System_String_array *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_168 = (System_String_array *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_06 == 0) {
    pSStack_168 = (System_String_array *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
    pIVar22 = *(Il2CppObject **)(extraout_RDX_06 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_168 = (System_String_array *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_168 = (System_String_array *)0x425417d;
    pSVar18 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar22,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_168 = (System_String_array *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar10 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar10 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar10 == 0) {
      pSStack_168 = (System_String_array *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = pSVar18;
    pSStack_168 = (System_String_array *)unaff_R14;
    pSStack_160 = (System_String_array *)unaff_RBP;
    bVar11 = System_String__op_Equality
                       (pSVar18,*(System_String_o **)g_data_057b9c00->static_fields,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar18 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar10 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar10 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar10 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar18 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar14,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_1c8 = &TypeInfo_MiscExtensions;
        ppMStack_1c0 = (MethodInfo_362BED0 **)ppMVar29;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_1d6 = 0;
        pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar15,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar25 = 0;
          pSStack_1d0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_01,(MethodInfo *)0x0);
          if (pSStack_1d0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar12 = 0;
label_040653fb:
          pSVar5 = pSStack_1d0->klass;
          uVar3._0_1_ = (pSVar5->_2).rank;
          uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
          uStack_1d4 = uVar12;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar16 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26)].methodPtr;
                goto label_04065463;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar26);
          }
          ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_1d0,TypeInfo_IEnumerator,0);
label_04065463:
          cVar8 = (**ppIVar16)(pSStack_1d0,(MethodInfo *)ppIVar16[1]);
          if (cVar8 == '\0') {
            iVar10 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar5 = pSStack_1d0->klass;
          uVar4._0_1_ = (pSVar5->_2).rank;
          uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar26) == TypeInfo_IEnumerator) {
                ppIVar16 = &pSVar5->vtable[*(int *)((long)&pIVar6->offset + lVar26) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar26);
          }
          ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_1d0,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_02 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar16)(pSStack_1d0,(MethodInfo *)ppIVar16[1]);
          if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar2) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_02);
              goto label_04065803;
            }
            iVar10 = (__this_02->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar12 < iVar10) goto label_0406581a;
            }
            else if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar12 < iVar10) goto label_04065824;
            }
            else if ((int)uVar12 < iVar10) {
              do {
                uStack_1d6 = System_String__get_Chars((System_String_o *)__this_05,uVar12,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar18 = System_Char__ToString((uint16_t)&uStack_1d6,(MethodInfo *)0x0);
                lVar26 = MethodInfo_Void_Add;
                piVar1 = &(pSVar15->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar15->fields)._items;
                if (pSVar7 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar23 = (pSVar15->fields)._size;
                if (uVar23 < (uint)pSVar7->max_length) {
                  (pSVar15->fields)._size = uVar23 + 1;
                  pSVar7->m_Items[(int)uVar23] = (Il2CppObject *)pSVar18;
                  il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar23);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar15,(Il2CppObject *)pSVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (__this_02->fields)._Index_k__BackingField);
            }
            pSVar18 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar15->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) goto label_04065815;
            uVar12 = (pSVar15->fields)._size;
            if (uVar12 < (uint)pSVar7->max_length) {
              (pSVar15->fields)._size = uVar12 + 1;
              pSVar7->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar15,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_1d4 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_1d6 = System_String__get_Chars((System_String_o *)__this_05,uStack_1d4,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar25 = 0;
          System_Char__ToString((uint16_t)&uStack_1d6,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_1d6 = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_1d6,(MethodInfo *)0x0);
          auVar30 = il2cpp_runtime_helper_022b2c90();
          uStack_1d4 = 0;
          iVar10 = 0;
          if (auVar30._8_4_ != 1) {
            plVar28 = (long *)il2cpp_runtime_helper_023051f0(pSStack_1d0,TypeInfo_IDisposable);
            if (plVar28 == (long *)0x0) goto label_04065a06;
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) == 0) goto label_040659df;
            lVar27 = 0;
            goto label_040659d0;
          }
          puVar17 = (undefined8 *)__cxa_begin_catch(auVar30._0_8_);
          unaff_R13 = (long *)*puVar17;
          __cxa_end_catch();
label_04065677:
          uVar25 = TypeInfo_IDisposable;
          plVar28 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar28 != (long *)0x0) {
            lVar26 = *plVar28;
            if ((ulong)*(ushort *)(lVar26 + 0x12e) != 0) {
              lVar27 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
                  puVar17 = (undefined8 *)
                            (lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27);
            }
            puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040656ed:
            uVar25 = puVar17[1];
            (*(code *)*puVar17)(plVar28);
          }
          if ((System_Collections_Generic_List_object__o *)unaff_R13 !=
              (System_Collections_Generic_List_object__o *)0x0) goto label_04065869;
          if ((iVar10 != 6) && (iVar10 != 0)) {
            return (Il2CppObject *)pSVar15;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar10 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar25 = (ulong)uStack_1d4;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar10 <= (int)uStack_1d4) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar10 <= (int)uStack_1d4) {
            return (Il2CppObject *)pSVar15;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_1d6 = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar25,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar18 = System_Char__ToString((uint16_t)&uStack_1d6,(MethodInfo *)0x0);
            lVar26 = MethodInfo_Void_Add;
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar15->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) break;
            uVar12 = (pSVar15->fields)._size;
            if (uVar12 < (uint)pSVar7->max_length) {
              (pSVar15->fields)._size = uVar12 + 1;
              pSVar7->m_Items[(int)uVar12] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar12,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar15,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (int32_t)uVar25 + 1;
            uVar25 = (ulong)uVar12;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar12) {
              return (Il2CppObject *)pSVar15;
            }
          }
        } while( true );
      }
      if ((pSVar18->fields)._stringLength < 2) {
        pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      }
      else {
        uVar9 = System_String__get_Chars(pSVar18,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToUpper_3c18a00(uVar9,(MethodInfo *)0x0);
        pSVar14 = System_Char__ToString((short)&pSStack_178 + 6,(MethodInfo *)0x0);
        pSVar18 = System_String__Substring(pSVar18,1,(MethodInfo *)0x0);
        pSVar18 = System_String__Concat_3ae5ba0(pSVar14,pSVar18,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar18;
  }
  pSStack_168 = (System_String_array *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_168 = (System_String_array *)extraout_RDX_06;
  if (g_data_057adb86 == '\0') {
    pSStack_170 = (System_String_array *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_170 = (System_String_array *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar20 = extraout_RDX_07;
  if (extraout_RDX_07 == (System_String_array *)0x0) {
label_04254265:
    pSStack_170 = (System_String_array *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_07->max_length != 0) {
    pSVar20 = (System_String_array *)extraout_RDX_07->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_170 = (System_String_array *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_170 = (System_String_array *)0x4254255;
    plVar28 = (long *)pSVar20;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar20,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254265;
  }
  pSStack_170 = (System_String_array *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_170 = pSVar20;
  if (g_data_057adb87 == '\0') {
    pSStack_178 = (System_String_array *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    pSStack_178 = (System_String_array *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar20 = extraout_RDX_08;
  if (extraout_RDX_08 == (System_String_array *)0x0) {
label_042542e5:
    pSStack_178 = (System_String_array *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_08->max_length != 0) {
    pSVar20 = (System_String_array *)extraout_RDX_08->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_178 = (System_String_array *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_178 = (System_String_array *)0x42542d5;
    plVar28 = (long *)pSVar20;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar20,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_042542e5;
  }
  pSStack_178 = (System_String_array *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_188 = pSVar20;
  pSStack_180 = (System_String_array *)unaff_R14;
  pSStack_178 = (System_String_array *)value;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar28 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_09 != 0) {
    if (*(int *)(extraout_RDX_09 + 0x18) != 0) {
      plVar28 = *(long **)(extraout_RDX_09 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_09 + 0x18)) {
        plVar28 = *(long **)(extraout_RDX_09 + 0x28);
        pSVar14 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar28,MethodInfo_String_ConvertTo_String);
        if (pSVar18 != (System_String_o *)0x0) {
          iStack_18c = System_String__IndexOf_3afbe10(pSVar18,pSVar14,4,(MethodInfo *)0x0);
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_18c);
          return pIVar22;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((System_String_array *)plVar28)->bounds = 1;
  *(undefined1 *)((long)((System_String_array *)plVar28)->m_Items + 0xc) = 1;
  System_Object___ctor((Il2CppObject *)plVar28,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_array *)plVar28)->max_length = (il2cpp_array_size_t)__this_04;
  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((System_String_array *)plVar28)->max_length,__this_04);
  return pIVar22;
  while (lVar27 = lVar27 + 0x10, (ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar27) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar26 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
      puVar17 = (undefined8 *)(lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar17)(plVar28,puVar17[1]);
label_04065a06:
  _Unwind_Resume(auVar30._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Join>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253990

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  System_Text_RegularExpressions_MatchCollection_o *__this_06;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_07;
  undefined8 *puVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  System_String_array *value;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  long extraout_RDX;
  long extraout_RDX_00;
  System_Collections_Generic_List_Enumerator_T__c *extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  System_Collections_Generic_List_Enumerator_T__c *extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  System_Collections_Generic_List_Enumerator_T__c *extraout_RDX_08;
  System_Collections_Generic_List_Enumerator_T__c *extraout_RDX_09;
  long extraout_RDX_10;
  System_Collections_Generic_List_Enumerator_T__c *unaff_RBP;
  ulong uVar20;
  System_Text_RegularExpressions_Regex_o *__this_09;
  long lVar21;
  long lVar22;
  long *plVar23;
  MethodInfo_24EEB40 **unaff_R12;
  long *unaff_R13;
  System_Collections_Generic_List_Enumerator_T__c *unaff_R14;
  uint uVar24;
  int iVar25;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value_00;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  uint16_t uStackY_1ae;
  uint uStackY_1ac;
  System_Collections_IEnumerator_o *pSStackY_1a8;
  long *plStackY_1a0;
  MethodInfo_24EEB40 **ppMStackY_198;
  int32_t iStackY_164;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_160;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_158;
  System_String_o *pSStackY_150;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_148;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_140;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_138;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_130;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_128;
  System_String_o *pSStackY_120;
  long lStackY_118;
  undefined1 uStackY_101;
  long lStackY_100;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_f8;
  System_String_o *pSStackY_f0;
  undefined1 uStackY_d9;
  long lStackY_d8;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_d0;
  System_String_o *pSStackY_c8;
  undefined1 uStackY_b1;
  long lStackY_b0;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_a8;
  System_String_o *pSStackY_a0;
  undefined8 uStackY_98;
  System_Collections_Generic_List_Enumerator_T__c *pSStackY_90;
  undefined4 uVar28;
  undefined4 uVar29;
  Il2CppType *pIVar30;
  Il2CppObject *pIVar31;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_48;
  Il2CppType *in_stack_ffffffffffffffc0;
  Il2CppObject *in_stack_ffffffffffffffc8;
  
  plVar23 = (long *)__this;
  if (g_data_057adb7b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_Collections_Generic_List_Enumerator_T__c *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (long *)unaff_R14;
      pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      if (1 < (uint)__a->max_length) {
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (g_data_057adb5f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057adb5f = '\x01';
        }
        uVar28 = 0;
        uVar29 = 0;
        pIVar30 = (Il2CppType *)0x0;
        pIVar31 = (Il2CppObject *)0x0;
        pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar15,MethodInfo_List_1_System_String);
        if ((pIVar17 != (Il2CppObject *)0x0) && (pIVar17[3].klass != (Il2CppClass *)0x0)) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_48,
                     (System_Collections_Generic_List_object__o *)pIVar17[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          uVar28 = SUB84(pSStack_48,0);
          uVar29 = (undefined4)((ulong)pSStack_48 >> 0x20);
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_02.fields._8_8_ = in_stack_ffffffffffffffc0;
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSStack_48;
            __this_02.fields._current = in_stack_ffffffffffffffc8;
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
            if ((char)bVar10 != '\0') goto label_04251105;
          }
          else {
            while (__this_01.fields._list._4_4_ = uVar29, __this_01.fields._list._0_4_ = uVar28,
                  __this_01.fields._8_8_ = in_stack_ffffffffffffffc0,
                  __this_01.fields._current = in_stack_ffffffffffffffc8,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                  lVar21 = MethodInfo_Void_Add, (char)bVar10 != '\0') {
              pIVar31 = in_stack_ffffffffffffffc8;
              if ((in_stack_ffffffffffffffc8 != (Il2CppObject *)0x0) &&
                 (pIVar16 = g_data_057b9c00, in_stack_ffffffffffffffc8->klass != g_data_057b9c00)) {
label_042510f5:
                il2cpp_runtime_helper_022b2fd0(in_stack_ffffffffffffffc8,pIVar16);
                pIVar30 = in_stack_ffffffffffffffc0;
                goto label_04251100;
              }
              piVar1 = &(pSVar15->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (pSVar15->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
                goto label_042510f5;
              }
              uVar24 = (pSVar15->fields)._size;
              if (uVar24 < (uint)pSVar8->max_length) {
                (pSVar15->fields)._size = uVar24 + 1;
                pSVar8->m_Items[(int)uVar24] = in_stack_ffffffffffffffc8;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar15,in_stack_ffffffffffffffc8,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          __this_03.fields._list._4_4_ = uVar29;
          __this_03.fields._list._0_4_ = uVar28;
          __this_03.fields._8_8_ = in_stack_ffffffffffffffc0;
          __this_03.fields._current = in_stack_ffffffffffffffc8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pIVar30 = in_stack_ffffffffffffffc0;
          pIVar31 = in_stack_ffffffffffffffc8;
          goto label_042510bd;
        }
label_04251100:
        do {
          il2cpp_runtime_helper_022b2c90();
          in_stack_ffffffffffffffc0 = pIVar30;
          in_stack_ffffffffffffffc8 = pIVar31;
label_04251105:
          auVar26 = il2cpp_runtime_helper_022b2c90();
          if (auVar26._8_4_ != 1) {
label_04251163:
            __this_05.fields._list._4_4_ = uVar29;
            __this_05.fields._list._0_4_ = uVar28;
            __this_05.fields._8_8_ = in_stack_ffffffffffffffc0;
            __this_05.fields._current = in_stack_ffffffffffffffc8;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            _Unwind_Resume(auVar26._0_8_);
          }
          plVar23 = (long *)__cxa_begin_catch(auVar26._0_8_);
          lVar21 = *plVar23;
          __cxa_end_catch();
          __this_04.fields._list._4_4_ = uVar29;
          __this_04.fields._list._0_4_ = uVar28;
          __this_04.fields._8_8_ = in_stack_ffffffffffffffc0;
          __this_04.fields._current = in_stack_ffffffffffffffc8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pIVar30 = in_stack_ffffffffffffffc0;
          pIVar31 = in_stack_ffffffffffffffc8;
          if (lVar21 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar21);
            goto label_04251163;
          }
label_042510bd:
          if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
            value = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray(pSVar15,MethodInfo_String_ToArray);
            pSVar18 = System_String__Join(pSVar18,value,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7c = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar23 = *(long **)(extraout_RDX + 0x28);
        iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar23,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSVar18 = System_String__Substring(pSVar18,iVar11,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        goto label_04253aed;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253aed:
  il2cpp_runtime_helper_022b2c90();
  pSStack_48 = unaff_R14;
  if (g_data_057adb7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value_00 = (MethodInfo_24EEB40 **)unaff_R15;
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_RBP = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (long *)unaff_RBP;
      pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_00 + 0x28);
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        uVar24 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar23,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          unaff_RBP = (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar24;
          plVar23 = *(long **)(extraout_RDX_00 + 0x30);
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar23,MethodInfo_Int32_ConvertTo_Int32);
          value_00 = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar19 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
            pSVar18 = System_String__Substring_3af8da0
                                ((System_String_o *)pSVar19,uVar24,iVar11,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253bcd;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    value_00 = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar19 = extraout_RDX_01;
  if (extraout_RDX_01 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
label_04253c70:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_01->_1).namespaze != 0) {
    pSVar19 = (extraout_RDX_01->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar23 = (long *)pSVar19;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pIVar17 != (Il2CppObject *)0x0) {
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff9c);
      return pIVar17;
    }
    goto label_04253c70;
  }
  auVar27 = il2cpp_runtime_helper_022b2ca0();
  lVar21 = auVar27._8_8_;
  uStackY_98 = auVar27._0_8_;
  pSStackY_90 = pSVar19;
  if (g_data_057adb7f == '\0') {
    pSStackY_a0 = (System_String_o *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_a0 = (System_String_o *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar21 != 0) {
    if (*(int *)(lVar21 + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(lVar21 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStackY_a0 = (System_String_o *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_String_ConvertTo_String;
      pSStackY_a0 = (System_String_o *)0x4253cf1;
      plVar23 = (long *)unaff_R14;
      pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar21 + 0x18)) {
        plVar23 = *(long **)(lVar21 + 0x28);
        pSStackY_a0 = (System_String_o *)0x4253d07;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)(lVar21 + 0x18)) {
          plVar23 = *(long **)(lVar21 + 0x30);
          pSStackY_a0 = (System_String_o *)0x4253d1d;
          pSVar12 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
          value_00 = (MethodInfo_24EEB40 **)pSVar18;
          if (pSVar19 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
            pSVar18 = System_String__Replace_3af9030
                                ((System_String_o *)pSVar19,pSVar18,pSVar12,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04253d42;
        }
      }
    }
    pSStackY_a0 = (System_String_o *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStackY_a0 = (System_String_o *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStackY_b0 = lVar21;
  pSStackY_a8 = unaff_R14;
  pSStackY_a0 = (System_String_o *)value_00;
  if (g_data_057adb80 == '\0') {
    pSStackY_c8 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_c8 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStackY_c8 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = &MethodInfo_String_ConvertTo_String;
      pSStackY_c8 = (System_String_o *)0x4253dc1;
      plVar23 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_02 + 0x28);
        pSStackY_c8 = (System_String_o *)0x4253dd6;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStackY_c8 = (System_String_o *)0x4253de8;
          bVar10 = System_String__Contains(pSVar18,pSVar12,(MethodInfo *)0x0);
          uStackY_b1 = (undefined1)bVar10;
          pSStackY_c8 = (System_String_o *)0x4253e01;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStackY_b1);
          return pIVar17;
        }
        goto label_04253e10;
      }
    }
    pSStackY_c8 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStackY_c8 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStackY_d8 = extraout_RDX_02;
  pSStackY_d0 = unaff_R14;
  pSStackY_c8 = (System_String_o *)value_00;
  if (g_data_057adb81 == '\0') {
    pSStackY_f0 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_f0 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStackY_f0 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = &MethodInfo_String_ConvertTo_String;
      pSStackY_f0 = (System_String_o *)0x4253e91;
      plVar23 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_03 + 0x28);
        pSStackY_f0 = (System_String_o *)0x4253ea6;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          pSStackY_f0 = (System_String_o *)0x4253eb8;
          bVar10 = System_String__StartsWith(pSVar18,pSVar12,(MethodInfo *)0x0);
          uStackY_d9 = (undefined1)bVar10;
          pSStackY_f0 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStackY_d9);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStackY_f0 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStackY_f0 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStackY_100 = extraout_RDX_03;
  pSStackY_f8 = unaff_R14;
  pSStackY_f0 = (System_String_o *)value_00;
  if (g_data_057adb82 == '\0') {
    lStackY_118 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    lStackY_118 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStackY_118 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = &MethodInfo_String_ConvertTo_String;
      lStackY_118 = 0x4253f61;
      plVar23 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_04 + 0x28);
        lStackY_118 = 0x4253f76;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
        if (pSVar18 != (System_String_o *)0x0) {
          lStackY_118 = 0x4253f88;
          bVar10 = System_String__EndsWith(pSVar18,pSVar12,(MethodInfo *)0x0);
          uStackY_101 = (undefined1)bVar10;
          lStackY_118 = 0x4253fa1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStackY_101);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    lStackY_118 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStackY_118 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStackY_118 = extraout_RDX_04;
  if (g_data_057adb83 == '\0') {
    pSStackY_120 = (System_String_o *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_120 = (System_String_o *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar19 = extraout_RDX_05;
  if (extraout_RDX_05 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
label_04254035:
    pSStackY_120 = (System_String_o *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_05->_1).namespaze != 0) {
    pSVar19 = (extraout_RDX_05->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStackY_120 = (System_String_o *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_120 = (System_String_o *)0x4254025;
    plVar23 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254035;
  }
  pSStackY_120 = (System_String_o *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStackY_130 = pSVar19;
  pSStackY_128 = unaff_R14;
  pSStackY_120 = (System_String_o *)value_00;
  if (g_data_057adb84 == '\0') {
    pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    pSVar18 = (System_String_o *)value_00;
    if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
      unaff_R14 = *(System_Collections_Generic_List_Enumerator_T__c **)(extraout_RDX_06 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x42540b9;
      plVar23 = (long *)unaff_R14;
      pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar18 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_06 + 0x28);
        pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x42540ce;
        value_00 = (MethodInfo_24EEB40 **)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)(extraout_RDX_06 + 0x18)) {
          plVar23 = *(long **)(extraout_RDX_06 + 0x30);
          pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x42540ea;
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar23,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar19 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
            pSVar18 = System_String__Insert
                                ((System_String_o *)pSVar19,iVar11,(System_String_o *)value_00,
                                 (MethodInfo *)0x0);
            return (Il2CppObject *)pSVar18;
          }
          goto label_04254108;
        }
      }
    }
    value_00 = (MethodInfo_24EEB40 **)pSVar18;
    pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStackY_138 = (System_Collections_Generic_List_Enumerator_T__c *)extraout_RDX_06;
  if (g_data_057adb85 == '\0') {
    pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_07 == 0) {
    pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_07 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x425417d;
    pSVar18 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar25 == 0) {
      pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = pSVar18;
    pSStackY_140 = unaff_R14;
    pSStackY_138 = unaff_RBP;
    bVar10 = System_String__op_Equality
                       (pSVar18,*(System_String_o **)g_data_057b9c00->static_fields,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (pSVar18 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar25 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_09 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_09 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_09 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar18 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_09,pSVar12,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar18;
        }
        il2cpp_runtime_helper_022b2c90();
        plStackY_1a0 = &TypeInfo_MiscExtensions;
        ppMStackY_198 = unaff_R12;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStackY_1ae = 0;
        pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar15,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_06 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_09,(MethodInfo *)0x0),
           __this_06 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar20 = 0;
          pSStackY_1a8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                   (__this_06,(MethodInfo *)0x0);
          if (pSStackY_1a8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar24 = 0;
label_040653fb:
          pSVar6 = pSStackY_1a8->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStackY_1ac = uVar24;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar21) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar21)].methodPtr;
                goto label_04065463;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar21);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStackY_1a8,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStackY_1a8,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar25 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStackY_1a8->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar21) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar21) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar21);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStackY_1a8,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_07 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStackY_1a8,(MethodInfo *)ppIVar13[1]);
          if (__this_07 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_07->klass->_2).naturalAligment < bVar2) ||
               ((__this_07->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_07);
              goto label_04065803;
            }
            iVar25 = (__this_07->fields)._Index_k__BackingField;
            if (__this_09 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar24 < iVar25) goto label_0406581a;
            }
            else if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar24 < iVar25) goto label_04065824;
            }
            else if ((int)uVar24 < iVar25) {
              do {
                uStackY_1ae = System_String__get_Chars((System_String_o *)__this_09,uVar24,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar18 = System_Char__ToString((uint16_t)&uStackY_1ae,(MethodInfo *)0x0);
                lVar21 = MethodInfo_Void_Add;
                piVar1 = &(pSVar15->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (pSVar15->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (pSVar15->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (pSVar15->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar18;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar15,(Il2CppObject *)pSVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                uVar24 = uVar24 + 1;
              } while ((int)uVar24 < (__this_07->fields)._Index_k__BackingField);
            }
            pSVar18 = System_Text_RegularExpressions_Capture__get_Value(__this_07,(MethodInfo *)0x0);
            lVar21 = MethodInfo_Void_Add;
            if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (pSVar15->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar24 = (pSVar15->fields)._size;
            if (uVar24 < (uint)pSVar8->max_length) {
              (pSVar15->fields)._size = uVar24 + 1;
              pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar15,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            uVar24 = (__this_07->fields)._Length_k__BackingField + (__this_07->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStackY_1ac = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStackY_1ae = System_String__get_Chars((System_String_o *)__this_09,uStackY_1ac,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar20 = 0;
          System_Char__ToString((uint16_t)&uStackY_1ae,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStackY_1ae = System_String__get_Chars
                                  ((System_String_o *)__this_09,(int32_t)uVar20,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStackY_1ae,(MethodInfo *)0x0);
          auVar26 = il2cpp_runtime_helper_022b2c90();
          uStackY_1ac = 0;
          iVar25 = 0;
          if (auVar26._8_4_ != 1) {
            plVar23 = (long *)il2cpp_runtime_helper_023051f0(pSStackY_1a8,TypeInfo_IDisposable);
            if (plVar23 == (long *)0x0) goto label_04065a06;
            lVar21 = *plVar23;
            if ((ulong)*(ushort *)(lVar21 + 0x12e) == 0) goto label_040659df;
            lVar22 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar26._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar20 = TypeInfo_IDisposable;
          plVar23 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar23 != (long *)0x0) {
            lVar21 = *plVar23;
            if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
              lVar22 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar22 = lVar22 + 0x10;
              } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar23,TypeInfo_IDisposable,0);
label_040656ed:
            uVar20 = puVar14[1];
            (*(code *)*puVar14)(plVar23);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar25 != 6) && (iVar25 != 0)) {
            return (Il2CppObject *)pSVar15;
          }
          if (__this_09 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar25 = (int)(__this_09->fields).internalMatchTimeout.fields._ticks;
          uVar20 = (ulong)uStackY_1ac;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar25 <= (int)uStackY_1ac) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar25 <= (int)uStackY_1ac) {
            return (Il2CppObject *)pSVar15;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStackY_1ae = System_String__get_Chars
                                    ((System_String_o *)__this_09,(int32_t)uVar20,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar18 = System_Char__ToString((uint16_t)&uStackY_1ae,(MethodInfo *)0x0);
            lVar21 = MethodInfo_Void_Add;
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (pSVar15->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar24 = (pSVar15->fields)._size;
            if (uVar24 < (uint)pSVar8->max_length) {
              (pSVar15->fields)._size = uVar24 + 1;
              pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar18;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar18);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar15,(Il2CppObject *)pSVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            uVar24 = (int32_t)uVar20 + 1;
            uVar20 = (ulong)uVar24;
            if ((int)(__this_09->fields).internalMatchTimeout.fields._ticks <= (int)uVar24) {
              return (Il2CppObject *)pSVar15;
            }
          }
        } while( true );
      }
      if ((pSVar18->fields)._stringLength < 2) {
        pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      }
      else {
        c = System_String__get_Chars(pSVar18,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
        pSVar12 = System_Char__ToString((short)&pSStackY_150 + 6,(MethodInfo *)0x0);
        pSVar18 = System_String__Substring(pSVar18,1,(MethodInfo *)0x0);
        pSVar18 = System_String__Concat_3ae5ba0(pSVar12,pSVar18,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar18;
  }
  pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStackY_140 = (System_Collections_Generic_List_Enumerator_T__c *)extraout_RDX_07;
  if (g_data_057adb86 == '\0') {
    pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar19 = extraout_RDX_08;
  if (extraout_RDX_08 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
label_04254265:
    pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_08->_1).namespaze != 0) {
    pSVar19 = (extraout_RDX_08->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x4254255;
    plVar23 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_04254265;
  }
  pSStackY_148 = (System_Collections_Generic_List_Enumerator_T__c *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStackY_148 = pSVar19;
  if (g_data_057adb87 == '\0') {
    pSStackY_150 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    pSStackY_150 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar19 = extraout_RDX_09;
  if (extraout_RDX_09 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
label_042542e5:
    pSStackY_150 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_09->_1).namespaze != 0) {
    pSVar19 = (extraout_RDX_09->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStackY_150 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_150 = (System_String_o *)0x42542d5;
    plVar23 = (long *)pSVar19;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar18 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar18;
    }
    goto label_042542e5;
  }
  pSStackY_150 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStackY_160 = pSVar19;
  pSStackY_158 = unaff_R14;
  pSStackY_150 = (System_String_o *)value_00;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar23 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_10 != 0) {
    if (*(int *)(extraout_RDX_10 + 0x18) != 0) {
      plVar23 = *(long **)(extraout_RDX_10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_10 + 0x18)) {
        plVar23 = *(long **)(extraout_RDX_10 + 0x28);
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar23,MethodInfo_String_ConvertTo_String);
        if (pSVar18 != (System_String_o *)0x0) {
          iStackY_164 = System_String__IndexOf_3afbe10(pSVar18,pSVar12,4,(MethodInfo *)0x0);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStackY_164);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)
   &((System_String_Fields *)&(((System_Collections_Generic_List_Enumerator_T__c *)plVar23)->_1).name)->
    _stringLength = 1;
  (((System_Collections_Generic_List_Enumerator_T__c *)plVar23)->_1).byval_arg.field_0xc = 1;
  System_Object___ctor((Il2CppObject *)plVar23,(MethodInfo *)0x0);
  __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_08,MethodInfo_Dictionary_2_System_String_System_Object);
  (((System_Collections_Generic_List_Enumerator_T__c *)plVar23)->_1).namespaze = (char *)__this_08;
  pIVar17 = (Il2CppObject *)
            il2cpp_runtime_helper_022b4080(&(((System_Collections_Generic_List_Enumerator_T__c *)plVar23)->_1).namespaze,
                               __this_08);
  return pIVar17;
  while (lVar22 = lVar22 + 0x10, (ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar23,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar23,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar26._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Substring>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253a40

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  int32_t iVar11;
  uint uVar12;
  bool_conflict bVar13;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar14;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  System_String_o *newValue;
  System_String_c *__this_04;
  System_String_o *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  System_String_o *extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  System_String_o *extraout_RDX_06;
  System_String_o *extraout_RDX_07;
  long extraout_RDX_08;
  System_String_o *unaff_RBP;
  ulong uVar19;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar20;
  long lVar21;
  long *plVar22;
  MethodInfo_24EEB40 **unaff_R12;
  long *unaff_R13;
  System_String_o *unaff_R14;
  int iVar23;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  uint16_t uStack_196;
  uint uStack_194;
  System_Collections_IEnumerator_o *pSStack_190;
  long *plStack_188;
  MethodInfo_24EEB40 **ppMStack_180;
  undefined8 uStack_150;
  System_String_o *pSStack_148;
  System_String_o *pSStack_140;
  undefined8 uStack_138;
  System_String_o *pSStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  System_String_o *pSStack_118;
  System_String_o *pSStack_110;
  System_String_o *pSStack_108;
  long lStack_100;
  undefined1 uStack_e9;
  long lStack_e8;
  System_String_o *pSStack_e0;
  System_String_o *pSStack_d8;
  undefined1 uStack_c1;
  long lStack_c0;
  System_String_o *pSStack_b8;
  System_String_o *pSStack_b0;
  undefined1 uStack_99;
  long lStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  undefined8 uStack_80;
  System_String_o *pSStack_78;
  undefined4 uStack_4c;
  long lStack_48;
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  System_String_o *pSStack_30;
  
  plVar22 = (long *)__this;
  if (g_data_057adb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar22 = (long *)__a->m_Items[1];
        iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSVar16 = System_String__Substring(pSVar16,iVar11,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar16;
        }
        goto label_04253aed;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253aed:
  auVar25 = il2cpp_runtime_helper_022b2c90();
  lVar20 = auVar25._8_8_;
  uStack_40 = auVar25._0_8_;
  pSStack_38 = __a;
  pSStack_30 = unaff_R14;
  if (g_data_057adb7d == '\0') {
    lStack_48 = 0x4253b1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    lStack_48 = 0x4253b2b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    lStack_48 = 0x4253b37;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value = (MethodInfo_24EEB40 **)unaff_R15;
  if (lVar20 != 0) {
    if (*(int *)(lVar20 + 0x18) != 0) {
      unaff_RBP = *(System_String_o **)(lVar20 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_48 = 0x4253b69;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_48 = 0x4253b7b;
      plVar22 = (long *)unaff_RBP;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar20 + 0x18)) {
        plVar22 = *(long **)(lVar20 + 0x28);
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        lStack_48 = 0x4253b97;
        uVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(lVar20 + 0x18)) {
          unaff_RBP = (System_String_o *)(ulong)uVar12;
          plVar22 = *(long **)(lVar20 + 0x30);
          lStack_48 = 0x4253bab;
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
          value = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar16 = System_String__Substring_3af8da0(pSVar16,uVar12,iVar11,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04253bcd;
        }
      }
    }
    lStack_48 = 0x4253bcd;
    il2cpp_runtime_helper_022b2ca0();
    value = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  lStack_48 = 0x4253bd2;
  il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar20;
  if (g_data_057adb7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar16 = extraout_RDX;
  if (extraout_RDX == (System_String_o *)0x0) {
label_04253c70:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX[1].klass != 0) {
    pSVar16 = extraout_RDX[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar22 = (long *)pSVar16;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pIVar17 != (Il2CppObject *)0x0) {
      uStack_4c = *(undefined4 *)&pIVar17[1].klass;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_4c);
      return pIVar17;
    }
    goto label_04253c70;
  }
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  lVar20 = auVar25._8_8_;
  uStack_80 = auVar25._0_8_;
  pSStack_78 = pSVar16;
  if (g_data_057adb7f == '\0') {
    pSStack_88 = (System_String_o *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_88 = (System_String_o *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar20 != 0) {
    if (*(int *)(lVar20 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(lVar20 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_88 = (System_String_o *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_String_ConvertTo_String;
      pSStack_88 = (System_String_o *)0x4253cf1;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar20 + 0x18)) {
        plVar22 = *(long **)(lVar20 + 0x28);
        pSStack_88 = (System_String_o *)0x4253d07;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(lVar20 + 0x18)) {
          plVar22 = *(long **)(lVar20 + 0x30);
          pSStack_88 = (System_String_o *)0x4253d1d;
          newValue = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String)
          ;
          value = (MethodInfo_24EEB40 **)pSVar18;
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar16 = System_String__Replace_3af9030(pSVar16,pSVar18,newValue,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_88 = (System_String_o *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_88 = (System_String_o *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_98 = lVar20;
  pSStack_90 = unaff_R14;
  pSStack_88 = (System_String_o *)value;
  if (g_data_057adb80 == '\0') {
    pSStack_b0 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_b0 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_b0 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_b0 = (System_String_o *)0x4253dc1;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_00 + 0x28);
        pSStack_b0 = (System_String_o *)0x4253dd6;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_b0 = (System_String_o *)0x4253de8;
          bVar13 = System_String__Contains(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_99 = (undefined1)bVar13;
          pSStack_b0 = (System_String_o *)0x4253e01;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_99);
          return pIVar17;
        }
        goto label_04253e10;
      }
    }
    pSStack_b0 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_b0 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_c0 = extraout_RDX_00;
  pSStack_b8 = unaff_R14;
  pSStack_b0 = (System_String_o *)value;
  if (g_data_057adb81 == '\0') {
    pSStack_d8 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d8 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_d8 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_d8 = (System_String_o *)0x4253e91;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_01 + 0x28);
        pSStack_d8 = (System_String_o *)0x4253ea6;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_d8 = (System_String_o *)0x4253eb8;
          bVar13 = System_String__StartsWith(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_c1 = (undefined1)bVar13;
          pSStack_d8 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_c1);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStack_d8 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_d8 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_e8 = extraout_RDX_01;
  pSStack_e0 = unaff_R14;
  pSStack_d8 = (System_String_o *)value;
  if (g_data_057adb82 == '\0') {
    lStack_100 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    lStack_100 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_100 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      lStack_100 = 0x4253f61;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_02 + 0x28);
        lStack_100 = 0x4253f76;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          lStack_100 = 0x4253f88;
          bVar13 = System_String__EndsWith(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_e9 = (undefined1)bVar13;
          lStack_100 = 0x4253fa1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_e9);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    lStack_100 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStack_100 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStack_100 = extraout_RDX_02;
  if (g_data_057adb83 == '\0') {
    pSStack_108 = (System_String_o *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_108 = (System_String_o *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar16 = extraout_RDX_03;
  if (extraout_RDX_03 == (System_String_o *)0x0) {
label_04254035:
    pSStack_108 = (System_String_o *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03[1].klass != 0) {
    pSVar16 = extraout_RDX_03[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_108 = (System_String_o *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_108 = (System_String_o *)0x4254025;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254035;
  }
  pSStack_108 = (System_String_o *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_118 = pSVar16;
  pSStack_110 = unaff_R14;
  pSStack_108 = (System_String_o *)value;
  if (g_data_057adb84 == '\0') {
    pSStack_120 = (System_String_o *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_120 = (System_String_o *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_120 = (System_String_o *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    pSVar16 = (System_String_o *)value;
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_120 = (System_String_o *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_120 = (System_String_o *)0x42540b9;
      plVar22 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar16 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_04 + 0x28);
        pSStack_120 = (System_String_o *)0x42540ce;
        value = (MethodInfo_24EEB40 **)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar18;
        if (2 < *(uint *)(extraout_RDX_04 + 0x18)) {
          plVar22 = *(long **)(extraout_RDX_04 + 0x30);
          pSStack_120 = (System_String_o *)0x42540ea;
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar18 != (System_String_o *)0x0) {
            pSVar16 = System_String__Insert(pSVar18,iVar11,(System_String_o *)value,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04254108;
        }
      }
    }
    value = (MethodInfo_24EEB40 **)pSVar16;
    pSStack_120 = (System_String_o *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStack_120 = (System_String_o *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_120 = (System_String_o *)extraout_RDX_04;
  if (g_data_057adb85 == '\0') {
    pSStack_128 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_128 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_05 == 0) {
    pSStack_128 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_05 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_128 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_128 = (System_String_o *)0x425417d;
    pSVar16 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_128 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_128 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_138 = (System_String_o *)((ulong)uStack_138 & 0xffffffffffff);
    pSStack_148 = (System_String_o *)0x4065181;
    pSVar18 = pSVar16;
    pSStack_130 = pSStack_120;
    pSStack_128 = unaff_R14;
    pSStack_120 = unaff_RBP;
    bVar13 = System_String__op_Equality
                       (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      if (pSVar16 == (System_String_o *)0x0) {
        pSStack_148 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_150 = pSVar16;
        pSStack_148 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar16 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar18,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar16;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_188 = &TypeInfo_MiscExtensions;
        ppMStack_180 = unaff_R12;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_196 = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar19 = 0;
          pSStack_190 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_02,(MethodInfo *)0x0);
          if (pSStack_190 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar12 = 0;
label_040653fb:
          pSVar6 = pSStack_190->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_194 = uVar12;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                ppIVar14 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
                goto label_04065463;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar20);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_190,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar14)(pSStack_190,(MethodInfo *)ppIVar14[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_190->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                ppIVar14 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar20) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar20);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_190,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar14)(pSStack_190,(MethodInfo *)ppIVar14[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar12 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar12 < iVar23) goto label_04065824;
            }
            else if ((int)uVar12 < iVar23) {
              do {
                uStack_196 = System_String__get_Chars((System_String_o *)__this_05,uVar12,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = System_Char__ToString((uint16_t)&uStack_196,(MethodInfo *)0x0);
                lVar20 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar16;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar16,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar16 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar20 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar12 = (__this_01->fields)._size;
            if (uVar12 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar12 + 1;
              pSVar8->m_Items[(int)uVar12] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar12,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_194 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_196 = System_String__get_Chars((System_String_o *)__this_05,uStack_194,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar19 = 0;
          System_Char__ToString((uint16_t)&uStack_196,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_196 = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar19,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_196,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_194 = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar22 = (long *)il2cpp_runtime_helper_023051f0(pSStack_190,TypeInfo_IDisposable);
            if (plVar22 == (long *)0x0) goto label_04065a06;
            lVar20 = *plVar22;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto label_040659df;
            lVar21 = 0;
            goto label_040659d0;
          }
          puVar15 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar15;
          __cxa_end_catch();
label_04065677:
          uVar19 = TypeInfo_IDisposable;
          plVar22 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar22 != (long *)0x0) {
            lVar20 = *plVar22;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                  puVar15 = (undefined8 *)
                            (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_040656ed:
            uVar19 = puVar15[1];
            (*(code *)*puVar15)(plVar22);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar19 = (ulong)uStack_194;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_194) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_194) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_196 = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar19,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = System_Char__ToString((uint16_t)&uStack_196,(MethodInfo *)0x0);
            lVar20 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar12 = (__this_01->fields)._size;
            if (uVar12 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar12 + 1;
              pSVar8->m_Items[(int)uVar12] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar12,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            uVar12 = (int32_t)uVar19 + 1;
            uVar19 = (ulong)uVar12;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar12) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar16->fields)._stringLength < 2) {
        pSStack_148 = (System_String_o *)0x406519e;
        pSVar16 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      }
      else {
        pSStack_148 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar16,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_148 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_148 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_138 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_138);
        pSStack_148 = (System_String_o *)0x40651e0;
        pSVar18 = System_Char__ToString((short)&uStack_138 + 6,(MethodInfo *)0x0);
        pSStack_148 = (System_String_o *)0x40651f2;
        pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
        pSStack_148 = (System_String_o *)0x40651ff;
        pSVar16 = System_String__Concat_3ae5ba0(pSVar18,pSVar16,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar16;
  }
  pSStack_128 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_128 = (System_String_o *)extraout_RDX_05;
  if (g_data_057adb86 == '\0') {
    pSStack_130 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_130 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar16 = extraout_RDX_06;
  if (extraout_RDX_06 == (System_String_o *)0x0) {
label_04254265:
    pSStack_130 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_06[1].klass != 0) {
    pSVar16 = extraout_RDX_06[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_130 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_130 = (System_String_o *)0x4254255;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254265;
  }
  pSStack_130 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_130 = pSVar16;
  if (g_data_057adb87 == '\0') {
    uStack_138 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    uStack_138 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar16 = extraout_RDX_07;
  if (extraout_RDX_07 == (System_String_o *)0x0) {
label_042542e5:
    uStack_138 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_07[1].klass != 0) {
    pSVar16 = extraout_RDX_07[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_138 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_138 = (System_String_o *)0x42542d5;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_042542e5;
  }
  uStack_138 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_148 = pSVar16;
  pSStack_140 = unaff_R14;
  uStack_138 = (System_String_o *)value;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_08 != 0) {
    if (*(int *)(extraout_RDX_08 + 0x18) != 0) {
      plVar22 = *(long **)(extraout_RDX_08 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_08 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_08 + 0x28);
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        if (pSVar16 != (System_String_o *)0x0) {
          iVar11 = System_String__IndexOf_3afbe10(pSVar16,pSVar18,4,(MethodInfo *)0x0);
          uStack_150 = (System_String_o *)CONCAT44(iVar11,(undefined4)uStack_150);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_150 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar22)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar22 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar22,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar22 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar22 + 0x18),__this_04);
  return pIVar17;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)(lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar15)(plVar22,puVar15[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__SubstringWithLength>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253b00

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  uint uVar11;
  int32_t iVar12;
  bool_conflict bVar13;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar14;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  System_String_o *newValue;
  System_String_c *__this_04;
  System_String_o *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  System_String_o *extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  System_String_o *extraout_RDX_06;
  System_String_o *extraout_RDX_07;
  long extraout_RDX_08;
  System_String_o *unaff_RBP;
  ulong uVar19;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar20;
  long lVar21;
  long *plVar22;
  MethodInfo_24EEB40 **unaff_R12;
  long *unaff_R13;
  System_String_o *unaff_R14;
  int iVar23;
  MethodInfo_24EE950 **unaff_R15;
  MethodInfo_24EEB40 **value;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  uint16_t uStack_17e;
  uint uStack_17c;
  System_Collections_IEnumerator_o *pSStack_178;
  long *plStack_170;
  MethodInfo_24EEB40 **ppMStack_168;
  undefined8 uStack_138;
  System_String_o *pSStack_130;
  System_String_o *pSStack_128;
  undefined8 uStack_120;
  System_String_o *pSStack_118;
  System_String_o *pSStack_110;
  System_String_o *pSStack_108;
  System_String_o *pSStack_100;
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  long lStack_e8;
  undefined1 uStack_d1;
  long lStack_d0;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  undefined1 uStack_a9;
  long lStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  undefined1 uStack_81;
  long lStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  undefined8 uStack_68;
  System_String_o *pSStack_60;
  undefined4 uStack_34;
  System_Object_array *pSStack_30;
  
  plVar22 = (long *)__this;
  if (g_data_057adb7d == '\0') {
    pSStack_30 = (System_Object_array *)0x4253b1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_30 = (System_Object_array *)0x4253b2b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_Object_array *)0x4253b37;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7d = '\x01';
  }
  value = (MethodInfo_24EEB40 **)unaff_R15;
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_RBP = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_30 = (System_Object_array *)0x4253b69;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = (System_Object_array *)0x4253b7b;
      plVar22 = (long *)unaff_RBP;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_RBP,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar22 = (long *)__a->m_Items[1];
        unaff_R15 = &MethodInfo_Int32_ConvertTo_Int32;
        pSStack_30 = (System_Object_array *)0x4253b97;
        uVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
        unaff_R14 = pSVar16;
        if (2 < (uint)__a->max_length) {
          unaff_RBP = (System_String_o *)(ulong)uVar11;
          plVar22 = (long *)__a->m_Items[2];
          pSStack_30 = (System_Object_array *)0x4253bab;
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
          value = (MethodInfo_24EEB40 **)unaff_R15;
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar16 = System_String__Substring_3af8da0(pSVar16,uVar11,iVar12,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04253bcd;
        }
      }
    }
    pSStack_30 = (System_Object_array *)0x4253bcd;
    il2cpp_runtime_helper_022b2ca0();
    value = (MethodInfo_24EEB40 **)unaff_R15;
  }
label_04253bcd:
  pSStack_30 = (System_Object_array *)0x4253bd2;
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __a;
  if (g_data_057adb7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  pSVar16 = extraout_RDX;
  if (extraout_RDX == (System_String_o *)0x0) {
label_04253c70:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX[1].klass != 0) {
    pSVar16 = extraout_RDX[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar22 = (long *)pSVar16;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pIVar17 != (Il2CppObject *)0x0) {
      uStack_34 = *(undefined4 *)&pIVar17[1].klass;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_34);
      return pIVar17;
    }
    goto label_04253c70;
  }
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  lVar20 = auVar25._8_8_;
  uStack_68 = auVar25._0_8_;
  pSStack_60 = pSVar16;
  if (g_data_057adb7f == '\0') {
    pSStack_70 = (System_String_o *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_70 = (System_String_o *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar20 != 0) {
    if (*(int *)(lVar20 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(lVar20 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_70 = (System_String_o *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_String_ConvertTo_String;
      pSStack_70 = (System_String_o *)0x4253cf1;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar20 + 0x18)) {
        plVar22 = *(long **)(lVar20 + 0x28);
        pSStack_70 = (System_String_o *)0x4253d07;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(lVar20 + 0x18)) {
          plVar22 = *(long **)(lVar20 + 0x30);
          pSStack_70 = (System_String_o *)0x4253d1d;
          newValue = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String)
          ;
          value = (MethodInfo_24EEB40 **)pSVar18;
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar16 = System_String__Replace_3af9030(pSVar16,pSVar18,newValue,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_70 = (System_String_o *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_70 = (System_String_o *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar20;
  pSStack_78 = unaff_R14;
  pSStack_70 = (System_String_o *)value;
  if (g_data_057adb80 == '\0') {
    pSStack_98 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_98 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_98 = (System_String_o *)0x4253dc1;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_00 + 0x28);
        pSStack_98 = (System_String_o *)0x4253dd6;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_98 = (System_String_o *)0x4253de8;
          bVar13 = System_String__Contains(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_81 = (undefined1)bVar13;
          pSStack_98 = (System_String_o *)0x4253e01;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_81);
          return pIVar17;
        }
        goto label_04253e10;
      }
    }
    pSStack_98 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_98 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_a8 = extraout_RDX_00;
  pSStack_a0 = unaff_R14;
  pSStack_98 = (System_String_o *)value;
  if (g_data_057adb81 == '\0') {
    pSStack_c0 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_c0 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_c0 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      pSStack_c0 = (System_String_o *)0x4253e91;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_01 + 0x28);
        pSStack_c0 = (System_String_o *)0x4253ea6;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_c0 = (System_String_o *)0x4253eb8;
          bVar13 = System_String__StartsWith(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_a9 = (undefined1)bVar13;
          pSStack_c0 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_a9);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStack_c0 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_c0 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_d0 = extraout_RDX_01;
  pSStack_c8 = unaff_R14;
  pSStack_c0 = (System_String_o *)value;
  if (g_data_057adb82 == '\0') {
    lStack_e8 = 0x4253f11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    lStack_e8 = 0x4253f1d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_e8 = 0x4253f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      value = &MethodInfo_String_ConvertTo_String;
      lStack_e8 = 0x4253f61;
      plVar22 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_02 + 0x28);
        lStack_e8 = 0x4253f76;
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          lStack_e8 = 0x4253f88;
          bVar13 = System_String__EndsWith(pSVar16,pSVar18,(MethodInfo *)0x0);
          uStack_d1 = (undefined1)bVar13;
          lStack_e8 = 0x4253fa1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d1);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    lStack_e8 = 0x4253fb0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  lStack_e8 = 0x4253fb5;
  il2cpp_runtime_helper_022b2c90();
  lStack_e8 = extraout_RDX_02;
  if (g_data_057adb83 == '\0') {
    pSStack_f0 = (System_String_o *)0x4253fd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_f0 = (System_String_o *)0x4253fe5;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  pSVar16 = extraout_RDX_03;
  if (extraout_RDX_03 == (System_String_o *)0x0) {
label_04254035:
    pSStack_f0 = (System_String_o *)0x425403a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03[1].klass != 0) {
    pSVar16 = extraout_RDX_03[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_f0 = (System_String_o *)0x4254013;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_f0 = (System_String_o *)0x4254025;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254035;
  }
  pSStack_f0 = (System_String_o *)0x425403f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_100 = pSVar16;
  pSStack_f8 = unaff_R14;
  pSStack_f0 = (System_String_o *)value;
  if (g_data_057adb84 == '\0') {
    pSStack_108 = (System_String_o *)0x425405d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_108 = (System_String_o *)0x4254069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_108 = (System_String_o *)0x4254075;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    pSVar16 = (System_String_o *)value;
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_108 = (System_String_o *)0x42540a7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_108 = (System_String_o *)0x42540b9;
      plVar22 = (long *)unaff_R14;
      pSVar18 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar16 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_04 + 0x28);
        pSStack_108 = (System_String_o *)0x42540ce;
        value = (MethodInfo_24EEB40 **)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar18;
        if (2 < *(uint *)(extraout_RDX_04 + 0x18)) {
          plVar22 = *(long **)(extraout_RDX_04 + 0x30);
          pSStack_108 = (System_String_o *)0x42540ea;
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar22,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar18 != (System_String_o *)0x0) {
            pSVar16 = System_String__Insert(pSVar18,iVar12,(System_String_o *)value,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04254108;
        }
      }
    }
    value = (MethodInfo_24EEB40 **)pSVar16;
    pSStack_108 = (System_String_o *)0x4254108;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  pSStack_108 = (System_String_o *)0x425410d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_108 = (System_String_o *)extraout_RDX_04;
  if (g_data_057adb85 == '\0') {
    pSStack_110 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_110 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_05 == 0) {
    pSStack_110 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_05 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_110 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_110 = (System_String_o *)0x425417d;
    pSVar16 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_110 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_110 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_120 = (System_String_o *)((ulong)uStack_120 & 0xffffffffffff);
    pSStack_130 = (System_String_o *)0x4065181;
    pSVar18 = pSVar16;
    pSStack_118 = pSStack_108;
    pSStack_110 = unaff_R14;
    pSStack_108 = unaff_RBP;
    bVar13 = System_String__op_Equality
                       (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      if (pSVar16 == (System_String_o *)0x0) {
        pSStack_130 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_138 = pSVar16;
        pSStack_130 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar16 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar18,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar16;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_170 = &TypeInfo_MiscExtensions;
        ppMStack_168 = unaff_R12;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_17e = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar19 = 0;
          pSStack_178 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_02,(MethodInfo *)0x0);
          if (pSStack_178 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar11 = 0;
label_040653fb:
          pSVar6 = pSStack_178->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_17c = uVar11;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                ppIVar14 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
                goto label_04065463;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar20);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_178,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar14)(pSStack_178,(MethodInfo *)ppIVar14[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_178->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                ppIVar14 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar20) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar20);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_178,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar14)(pSStack_178,(MethodInfo *)ppIVar14[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar11 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar11 < iVar23) goto label_04065824;
            }
            else if ((int)uVar11 < iVar23) {
              do {
                uStack_17e = System_String__get_Chars((System_String_o *)__this_05,uVar11,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = System_Char__ToString((uint16_t)&uStack_17e,(MethodInfo *)0x0);
                lVar20 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar16;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar16,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar16 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar20 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar11 = (__this_01->fields)._size;
            if (uVar11 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar11 + 1;
              pSVar8->m_Items[(int)uVar11] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar11,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_17c = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_17e = System_String__get_Chars((System_String_o *)__this_05,uStack_17c,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar19 = 0;
          System_Char__ToString((uint16_t)&uStack_17e,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_17e = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar19,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_17e,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_17c = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar22 = (long *)il2cpp_runtime_helper_023051f0(pSStack_178,TypeInfo_IDisposable);
            if (plVar22 == (long *)0x0) goto label_04065a06;
            lVar20 = *plVar22;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto label_040659df;
            lVar21 = 0;
            goto label_040659d0;
          }
          puVar15 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar15;
          __cxa_end_catch();
label_04065677:
          uVar19 = TypeInfo_IDisposable;
          plVar22 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar22 != (long *)0x0) {
            lVar20 = *plVar22;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                  puVar15 = (undefined8 *)
                            (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_040656ed:
            uVar19 = puVar15[1];
            (*(code *)*puVar15)(plVar22);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar19 = (ulong)uStack_17c;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_17c) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_17c) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_17e = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar19,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = System_Char__ToString((uint16_t)&uStack_17e,(MethodInfo *)0x0);
            lVar20 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar11 = (__this_01->fields)._size;
            if (uVar11 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar11 + 1;
              pSVar8->m_Items[(int)uVar11] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar11,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = (int32_t)uVar19 + 1;
            uVar19 = (ulong)uVar11;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar11) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar16->fields)._stringLength < 2) {
        pSStack_130 = (System_String_o *)0x406519e;
        pSVar16 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      }
      else {
        pSStack_130 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar16,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_130 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_130 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_120 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_120);
        pSStack_130 = (System_String_o *)0x40651e0;
        pSVar18 = System_Char__ToString((short)&uStack_120 + 6,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x40651f2;
        pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x40651ff;
        pSVar16 = System_String__Concat_3ae5ba0(pSVar18,pSVar16,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar16;
  }
  pSStack_110 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_110 = (System_String_o *)extraout_RDX_05;
  if (g_data_057adb86 == '\0') {
    pSStack_118 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    pSStack_118 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar16 = extraout_RDX_06;
  if (extraout_RDX_06 == (System_String_o *)0x0) {
label_04254265:
    pSStack_118 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_06[1].klass != 0) {
    pSVar16 = extraout_RDX_06[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_118 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_118 = (System_String_o *)0x4254255;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToUpper(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254265;
  }
  pSStack_118 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_118 = pSVar16;
  if (g_data_057adb87 == '\0') {
    uStack_120 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    uStack_120 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar16 = extraout_RDX_07;
  if (extraout_RDX_07 == (System_String_o *)0x0) {
label_042542e5:
    uStack_120 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_07[1].klass != 0) {
    pSVar16 = extraout_RDX_07[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_120 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_120 = (System_String_o *)0x42542d5;
    plVar22 = (long *)pSVar16;
    pSVar18 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar18 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_042542e5;
  }
  uStack_120 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_130 = pSVar16;
  pSStack_128 = unaff_R14;
  uStack_120 = (System_String_o *)value;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar22 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_08 != 0) {
    if (*(int *)(extraout_RDX_08 + 0x18) != 0) {
      plVar22 = *(long **)(extraout_RDX_08 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_08 + 0x18)) {
        plVar22 = *(long **)(extraout_RDX_08 + 0x28);
        pSVar18 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar22,MethodInfo_String_ConvertTo_String);
        if (pSVar16 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar16,pSVar18,4,(MethodInfo *)0x0);
          uStack_138 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_138);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_138 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar22)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar22 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar22,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar22 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar22 + 0x18),__this_04);
  return pIVar17;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)(lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar15)(plVar22,puVar15[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Length>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253be0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  uint16_t uVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar12;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar13;
  Il2CppObject *pIVar14;
  System_Object_array *pSVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  System_Object_array *extraout_RDX_05;
  System_Object_array *extraout_RDX_06;
  long extraout_RDX_07;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  MethodInfo_24EEB40 **unaff_R12;
  long *unaff_R13;
  System_Object_array *unaff_R14;
  uint uVar22;
  int iVar23;
  MethodInfo_24EEB40 **unaff_R15;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  uint16_t uStack_156;
  uint uStack_154;
  System_Collections_IEnumerator_o *pSStack_150;
  long *plStack_148;
  MethodInfo_24EEB40 **ppMStack_140;
  undefined8 uStack_110;
  System_Object_array *pSStack_108;
  System_Object_array *pSStack_100;
  undefined8 uStack_f8;
  System_Object_array *pSStack_f0;
  System_Object_array *pSStack_e8;
  undefined1 local_a9;
  long lStack_a8;
  System_Object_array *pSStack_a0;
  System_String_o *pSStack_98;
  undefined1 local_81;
  long lStack_80;
  System_Object_array *pSStack_78;
  System_String_o *pSStack_70;
  undefined1 local_59;
  long lStack_58;
  System_Object_array *pSStack_50;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  undefined4 local_c;
  
  plVar21 = (long *)__this;
  if (g_data_057adb7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04253c70:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar21 = (long *)__a;
    pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__a,MethodInfo_String_ConvertTo_String);
    if (pIVar14 != (Il2CppObject *)0x0) {
      local_c = *(undefined4 *)&pIVar14[1].klass;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_c);
      return pIVar14;
    }
    goto label_04253c70;
  }
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  lVar19 = auVar25._8_8_;
  uStack_40 = auVar25._0_8_;
  pSStack_38 = __a;
  if (g_data_057adb7f == '\0') {
    pSStack_48 = (System_String_o *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_48 = (System_String_o *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (lVar19 != 0) {
    if (*(int *)(lVar19 + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(lVar19 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_48 = (System_String_o *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_String_ConvertTo_String;
      pSStack_48 = (System_String_o *)0x4253cf1;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar19 + 0x18)) {
        plVar21 = *(long **)(lVar19 + 0x28);
        pSStack_48 = (System_String_o *)0x4253d07;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar15;
        if (2 < *(uint *)(lVar19 + 0x18)) {
          plVar21 = *(long **)(lVar19 + 0x30);
          pSStack_48 = (System_String_o *)0x4253d1d;
          pSVar17 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
          unaff_R15 = (MethodInfo_24EEB40 **)pSVar16;
          if (pSVar15 != (System_Object_array *)0x0) {
            pSVar16 = System_String__Replace_3af9030
                                ((System_String_o *)pSVar15,pSVar16,pSVar17,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_48 = (System_String_o *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_48 = (System_String_o *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar19;
  pSStack_50 = unaff_R14;
  pSStack_48 = (System_String_o *)unaff_R15;
  if (g_data_057adb80 == '\0') {
    pSStack_70 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_70 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_70 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_70 = (System_String_o *)0x4253dc1;
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar21 = *(long **)(extraout_RDX + 0x28);
        pSStack_70 = (System_String_o *)0x4253dd6;
        pSVar17 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Object_array *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_70 = (System_String_o *)0x4253de8;
          bVar10 = System_String__Contains(pSVar16,pSVar17,(MethodInfo *)0x0);
          local_59 = (undefined1)bVar10;
          pSStack_70 = (System_String_o *)0x4253e01;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_59);
          return pIVar14;
        }
        goto label_04253e10;
      }
    }
    pSStack_70 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_70 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_80 = extraout_RDX;
  pSStack_78 = unaff_R14;
  pSStack_70 = (System_String_o *)unaff_R15;
  if (g_data_057adb81 == '\0') {
    pSStack_98 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_98 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_98 = (System_String_o *)0x4253e91;
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_00 + 0x28);
        pSStack_98 = (System_String_o *)0x4253ea6;
        pSVar17 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Object_array *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_98 = (System_String_o *)0x4253eb8;
          bVar10 = System_String__StartsWith(pSVar16,pSVar17,(MethodInfo *)0x0);
          local_81 = (undefined1)bVar10;
          pSStack_98 = (System_String_o *)0x4253ed1;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_81);
          return pIVar14;
        }
        goto label_04253ee0;
      }
    }
    pSStack_98 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_98 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_a8 = extraout_RDX_00;
  pSStack_a0 = unaff_R14;
  pSStack_98 = (System_String_o *)unaff_R15;
  if (g_data_057adb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_01 + 0x28);
        pSVar17 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_Object_array *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          bVar10 = System_String__EndsWith(pSVar16,pSVar17,(MethodInfo *)0x0);
          local_a9 = (undefined1)bVar10;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_a9);
          return pIVar14;
        }
        goto label_04253fb0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar21 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar16 = System_String__Trim(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    pSVar16 = (System_String_o *)unaff_R15;
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_String_ConvertTo_String);
      pSVar16 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_03 + 0x28);
        unaff_R15 = (MethodInfo_24EEB40 **)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar15;
        if (2 < *(uint *)(extraout_RDX_03 + 0x18)) {
          plVar21 = *(long **)(extraout_RDX_03 + 0x30);
          iVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar15 != (System_Object_array *)0x0) {
            pSVar16 = System_String__Insert
                                ((System_String_o *)pSVar15,iVar11,(System_String_o *)unaff_R15,
                                 (MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = (MethodInfo_24EEB40 **)pSVar16;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_e8 = (System_Object_array *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_e8 = (System_Object_array *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
    pSStack_e8 = (System_Object_array *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    pIVar14 = *(Il2CppObject **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_e8 = (System_Object_array *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_e8 = (System_Object_array *)0x425417d;
    pSVar16 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar14,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_e8 = (System_Object_array *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_e8 = (System_Object_array *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_f8 = (System_String_o *)((ulong)uStack_f8 & 0xffffffffffff);
    pSStack_108 = (System_Object_array *)0x4065181;
    pSVar17 = pSVar16;
    pSStack_f0 = (System_Object_array *)extraout_RDX_03;
    pSStack_e8 = unaff_R14;
    bVar10 = System_String__op_Equality
                       (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (pSVar16 == (System_String_o *)0x0) {
        pSStack_108 = (System_Object_array *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_110 = pSVar16;
        pSStack_108 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar16 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar17,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar16;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_148 = &TypeInfo_MiscExtensions;
        ppMStack_140 = unaff_R12;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_156 = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_150 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_02,(MethodInfo *)0x0);
          if (pSStack_150 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_150->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_154 = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_150,TypeInfo_IEnumerator,0);
label_04065463:
          cVar8 = (**ppIVar12)(pSStack_150,(MethodInfo *)ppIVar12[1]);
          if (cVar8 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_150->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_150,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar12)(pSStack_150,(MethodInfo *)ppIVar12[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_156 = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = System_Char__ToString((uint16_t)&uStack_156,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar15 = (__this_01->fields)._items;
                if (pSVar15 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar15->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar15->m_Items[(int)uVar5] = (Il2CppObject *)pSVar16;
                  il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar16,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar16 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_01->fields)._items;
            if (pSVar15 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar15->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar15->m_Items[(int)uVar22] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar22,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_154 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_156 = System_String__get_Chars((System_String_o *)__this_05,uStack_154,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_156,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_156 = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_156,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_154 = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_150,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar13 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar13;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar13 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar13[1];
            (*(code *)*puVar13)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_154;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_154) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_154) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_156 = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = System_Char__ToString((uint16_t)&uStack_156,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_01->fields)._items;
            if (pSVar15 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar15->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar15->m_Items[(int)uVar22] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar22,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar16->fields)._stringLength < 2) {
        pSStack_108 = (System_Object_array *)0x406519e;
        pSVar16 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      }
      else {
        pSStack_108 = (System_Object_array *)0x40651ac;
        uVar9 = System_String__get_Chars(pSVar16,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_108 = (System_Object_array *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_108 = (System_Object_array *)0x40651cf;
        uVar9 = System_Char__ToUpper_3c18a00(uVar9,(MethodInfo *)0x0);
        uStack_f8 = (System_String_o *)CONCAT26(uVar9,(undefined6)uStack_f8);
        pSStack_108 = (System_Object_array *)0x40651e0;
        pSVar17 = System_Char__ToString((short)&uStack_f8 + 6,(MethodInfo *)0x0);
        pSStack_108 = (System_Object_array *)0x40651f2;
        pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
        pSStack_108 = (System_Object_array *)0x40651ff;
        pSVar16 = System_String__Concat_3ae5ba0(pSVar17,pSVar16,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar16;
  }
  pSStack_e8 = (System_Object_array *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_e8 = (System_Object_array *)extraout_RDX_04;
  if (g_data_057adb86 == '\0') {
    pSStack_f0 = (System_Object_array *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_f0 = (System_Object_array *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_05;
  if (extraout_RDX_05 == (System_Object_array *)0x0) {
label_04254265:
    pSStack_f0 = (System_Object_array *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_05->max_length != 0) {
    pSVar15 = (System_Object_array *)extraout_RDX_05->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_f0 = (System_Object_array *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_f0 = (System_Object_array *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254265;
  }
  pSStack_f0 = (System_Object_array *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_f0 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_f8 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_f8 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_06;
  if (extraout_RDX_06 == (System_Object_array *)0x0) {
label_042542e5:
    uStack_f8 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_06->max_length != 0) {
    pSVar15 = (System_Object_array *)extraout_RDX_06->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_f8 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_f8 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_042542e5;
  }
  uStack_f8 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_108 = pSVar15;
  pSStack_100 = unaff_R14;
  uStack_f8 = (System_String_o *)unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_07 != 0) {
    if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_07 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_07 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_07 + 0x28);
        pSVar17 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar16 != (System_String_o *)0x0) {
          iVar11 = System_String__IndexOf_3afbe10(pSVar16,pSVar17,4,(MethodInfo *)0x0);
          uStack_110 = (System_String_o *)CONCAT44(iVar11,(undefined4)uStack_110);
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_110 + 4);
          return pIVar14;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((System_String_Fields *)&((System_Object_array *)plVar21)->bounds)->_stringLength = 1;
  *(undefined1 *)((long)((System_Object_array *)plVar21)->m_Items + 0xc) = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_Object_array *)plVar21)->max_length = (il2cpp_array_size_t)__this_04;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((System_Object_array *)plVar21)->max_length,__this_04);
  return pIVar14;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar21,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Replace>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253c80

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_String_o *newValue;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  System_String_o *extraout_RDX_05;
  System_String_o *extraout_RDX_06;
  long extraout_RDX_07;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  MethodInfo_24EEB40 **unaff_R12;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  MethodInfo_24EEB40 **unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_13e;
  uint uStack_13c;
  System_Collections_IEnumerator_o *pSStack_138;
  long *plStack_130;
  MethodInfo_24EEB40 **ppMStack_128;
  undefined8 uStack_f8;
  System_String_o *pSStack_f0;
  System_String_o *pSStack_e8;
  undefined8 uStack_e0;
  System_String_o *pSStack_d8;
  System_String_o *pSStack_d0;
  undefined1 uStack_91;
  long lStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  undefined1 uStack_69;
  long lStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  undefined1 uStack_41;
  System_Object_array *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  plVar21 = (long *)__this;
  if (g_data_057adb7f == '\0') {
    pSStack_30 = (System_String_o *)0x4253ca0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_String_o *)0x4253cac;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb7f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_30 = (System_String_o *)0x4253cde;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_String_ConvertTo_String;
      pSStack_30 = (System_String_o *)0x4253cf1;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar21 = (long *)__a->m_Items[1];
        pSStack_30 = (System_String_o *)0x4253d07;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar15;
        if (2 < (uint)__a->max_length) {
          plVar21 = (long *)__a->m_Items[2];
          pSStack_30 = (System_String_o *)0x4253d1d;
          newValue = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String)
          ;
          unaff_R15 = (MethodInfo_24EEB40 **)pSVar16;
          if (pSVar15 != (System_String_o *)0x0) {
            pSVar15 = System_String__Replace_3af9030(pSVar15,pSVar16,newValue,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04253d42;
        }
      }
    }
    pSStack_30 = (System_String_o *)0x4253d42;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253d42:
  pSStack_30 = (System_String_o *)0x4253d47;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = __a;
  pSStack_38 = unaff_R14;
  pSStack_30 = (System_String_o *)unaff_R15;
  if (g_data_057adb80 == '\0') {
    pSStack_58 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_58 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_58 = (System_String_o *)0x4253dc1;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar21 = *(long **)(extraout_RDX + 0x28);
        pSStack_58 = (System_String_o *)0x4253dd6;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSStack_58 = (System_String_o *)0x4253de8;
          bVar11 = System_String__Contains(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_41 = (undefined1)bVar11;
          pSStack_58 = (System_String_o *)0x4253e01;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
          return pIVar17;
        }
        goto label_04253e10;
      }
    }
    pSStack_58 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_58 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = extraout_RDX;
  pSStack_60 = unaff_R14;
  pSStack_58 = (System_String_o *)unaff_R15;
  if (g_data_057adb81 == '\0') {
    pSStack_80 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_80 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_80 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_80 = (System_String_o *)0x4253e91;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_00 + 0x28);
        pSStack_80 = (System_String_o *)0x4253ea6;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSStack_80 = (System_String_o *)0x4253eb8;
          bVar11 = System_String__StartsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_69 = (undefined1)bVar11;
          pSStack_80 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_69);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStack_80 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_80 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_90 = extraout_RDX_00;
  pSStack_88 = unaff_R14;
  pSStack_80 = (System_String_o *)unaff_R15;
  if (g_data_057adb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_01 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          bVar11 = System_String__EndsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_91 = (undefined1)bVar11;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_91);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar21 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    pSVar15 = (System_String_o *)unaff_R15;
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar15 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_03 + 0x28);
        unaff_R15 = (MethodInfo_24EEB40 **)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(extraout_RDX_03 + 0x18)) {
          plVar21 = *(long **)(extraout_RDX_03 + 0x30);
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar15 = System_String__Insert(pSVar16,iVar12,(System_String_o *)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = (MethodInfo_24EEB40 **)pSVar15;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_d0 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d0 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
    pSStack_d0 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_d0 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_d0 = (System_String_o *)0x425417d;
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_d0 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_d0 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_e0 = (System_String_o *)((ulong)uStack_e0 & 0xffffffffffff);
    pSStack_f0 = (System_String_o *)0x4065181;
    pSVar16 = pSVar15;
    pSStack_d8 = (System_String_o *)extraout_RDX_03;
    pSStack_d0 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        pSStack_f0 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_f8 = pSVar15;
        pSStack_f0 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar16,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_130 = &TypeInfo_MiscExtensions;
        ppMStack_128 = unaff_R12;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_13e = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_138 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_02,(MethodInfo *)0x0);
          if (pSStack_138 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_138->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_13c = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_138,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_138,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_138->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_138,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_138,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_13e = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_13e,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_13c = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_13e = System_String__get_Chars((System_String_o *)__this_05,uStack_13c,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_13e,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_13e = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_13e,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_13c = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_138,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_13c;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_13c) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_13c) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_13e = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_13e,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSStack_f0 = (System_String_o *)0x406519e;
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        pSStack_f0 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_f0 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_f0 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_e0 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_e0);
        pSStack_f0 = (System_String_o *)0x40651e0;
        pSVar16 = System_Char__ToString((short)&uStack_e0 + 6,(MethodInfo *)0x0);
        pSStack_f0 = (System_String_o *)0x40651f2;
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSStack_f0 = (System_String_o *)0x40651ff;
        pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  pSStack_d0 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_d0 = (System_String_o *)extraout_RDX_04;
  if (g_data_057adb86 == '\0') {
    pSStack_d8 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d8 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_05;
  if (extraout_RDX_05 == (System_String_o *)0x0) {
label_04254265:
    pSStack_d8 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_05[1].klass != 0) {
    pSVar15 = extraout_RDX_05[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_d8 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_d8 = (System_String_o *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  pSStack_d8 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_d8 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_e0 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_e0 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_06;
  if (extraout_RDX_06 == (System_String_o *)0x0) {
label_042542e5:
    uStack_e0 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_06[1].klass != 0) {
    pSVar15 = extraout_RDX_06[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_e0 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_e0 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  uStack_e0 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_f0 = pSVar15;
  pSStack_e8 = unaff_R14;
  uStack_e0 = (System_String_o *)unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_07 != 0) {
    if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_07 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_07 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_07 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar15,pSVar16,4,(MethodInfo *)0x0);
          uStack_f8 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_f8);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253d50

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  System_String_o *extraout_RDX_04;
  System_String_o *extraout_RDX_05;
  long extraout_RDX_06;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  MethodInfo_24EEB40 **unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_116;
  uint uStack_114;
  System_Collections_IEnumerator_o *pSStack_110;
  long *plStack_108;
  undefined8 uStack_d0;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  undefined8 uStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  undefined1 uStack_69;
  long lStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  undefined1 uStack_41;
  System_Object_array *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  undefined1 uStack_19;
  
  plVar21 = (long *)__this;
  if (g_data_057adb80 == '\0') {
    pSStack_30 = (System_String_o *)0x4253d71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_String_o *)0x4253d7d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb80 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_30 = (System_String_o *)0x4253daf;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_30 = (System_String_o *)0x4253dc1;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar21 = (long *)__a->m_Items[1];
        pSStack_30 = (System_String_o *)0x4253dd6;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSStack_30 = (System_String_o *)0x4253de8;
          bVar11 = System_String__Contains(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_19 = (undefined1)bVar11;
          pSStack_30 = (System_String_o *)0x4253e01;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
          return pIVar17;
        }
        goto label_04253e10;
      }
    }
    pSStack_30 = (System_String_o *)0x4253e10;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253e10:
  pSStack_30 = (System_String_o *)0x4253e15;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = __a;
  pSStack_38 = unaff_R14;
  pSStack_30 = (System_String_o *)unaff_R15;
  if (g_data_057adb81 == '\0') {
    pSStack_58 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_58 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_58 = (System_String_o *)0x4253e91;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar21 = *(long **)(extraout_RDX + 0x28);
        pSStack_58 = (System_String_o *)0x4253ea6;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSStack_58 = (System_String_o *)0x4253eb8;
          bVar11 = System_String__StartsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_41 = (undefined1)bVar11;
          pSStack_58 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStack_58 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_58 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = extraout_RDX;
  pSStack_60 = unaff_R14;
  pSStack_58 = (System_String_o *)unaff_R15;
  if (g_data_057adb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_00 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          bVar11 = System_String__EndsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_69 = (undefined1)bVar11;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_69);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar21 = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    pSVar15 = (System_String_o *)unaff_R15;
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar15 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_02 + 0x28);
        unaff_R15 = (MethodInfo_24EEB40 **)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(extraout_RDX_02 + 0x18)) {
          plVar21 = *(long **)(extraout_RDX_02 + 0x30);
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar15 = System_String__Insert(pSVar16,iVar12,(System_String_o *)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = (MethodInfo_24EEB40 **)pSVar15;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_a8 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_a8 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    pSStack_a8 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_a8 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_a8 = (System_String_o *)0x425417d;
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_a8 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_a8 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_b8 = (System_String_o *)((ulong)uStack_b8 & 0xffffffffffff);
    pSStack_c8 = (System_String_o *)0x4065181;
    pSVar16 = pSVar15;
    pSStack_b0 = (System_String_o *)extraout_RDX_02;
    pSStack_a8 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        pSStack_c8 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_d0 = pSVar15;
        pSStack_c8 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar16,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_108 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_116 = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_110 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                  (__this_02,(MethodInfo *)0x0);
          if (pSStack_110 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_110->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_114 = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_110,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_110,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_110->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_110,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_110,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_116 = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_114 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_116 = System_String__get_Chars((System_String_o *)__this_05,uStack_114,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_116 = System_String__get_Chars
                                 ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_114 = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_110,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_114;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_114) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_114) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_116 = System_String__get_Chars
                                   ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSStack_c8 = (System_String_o *)0x406519e;
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        pSStack_c8 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_c8 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_c8 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_b8 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_b8);
        pSStack_c8 = (System_String_o *)0x40651e0;
        pSVar16 = System_Char__ToString((short)&uStack_b8 + 6,(MethodInfo *)0x0);
        pSStack_c8 = (System_String_o *)0x40651f2;
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSStack_c8 = (System_String_o *)0x40651ff;
        pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  pSStack_a8 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_a8 = (System_String_o *)extraout_RDX_03;
  if (g_data_057adb86 == '\0') {
    pSStack_b0 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_b0 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_04;
  if (extraout_RDX_04 == (System_String_o *)0x0) {
label_04254265:
    pSStack_b0 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_04[1].klass != 0) {
    pSVar15 = extraout_RDX_04[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_b0 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b0 = (System_String_o *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  pSStack_b0 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_b0 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_b8 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_b8 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_05;
  if (extraout_RDX_05 == (System_String_o *)0x0) {
label_042542e5:
    uStack_b8 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_05[1].klass != 0) {
    pSVar15 = extraout_RDX_05[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_b8 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_b8 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  uStack_b8 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_c8 = pSVar15;
  pSStack_c0 = unaff_R14;
  uStack_b8 = (System_String_o *)unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_06 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_06 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar15,pSVar16,4,(MethodInfo *)0x0);
          uStack_d0 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_d0);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d0 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__StartsWith>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253e20

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  System_String_o *extraout_RDX_03;
  System_String_o *extraout_RDX_04;
  long extraout_RDX_05;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  MethodInfo_24EEB40 **unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_ee;
  uint uStack_ec;
  System_Collections_IEnumerator_o *pSStack_e8;
  long *plStack_e0;
  undefined8 uStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  undefined1 uStack_41;
  System_Object_array *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  undefined1 uStack_19;
  
  plVar21 = (long *)__this;
  if (g_data_057adb81 == '\0') {
    pSStack_30 = (System_String_o *)0x4253e41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_String_o *)0x4253e4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb81 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_30 = (System_String_o *)0x4253e7f;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      pSStack_30 = (System_String_o *)0x4253e91;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar21 = (long *)__a->m_Items[1];
        pSStack_30 = (System_String_o *)0x4253ea6;
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSStack_30 = (System_String_o *)0x4253eb8;
          bVar11 = System_String__StartsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_19 = (undefined1)bVar11;
          pSStack_30 = (System_String_o *)0x4253ed1;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
          return pIVar17;
        }
        goto label_04253ee0;
      }
    }
    pSStack_30 = (System_String_o *)0x4253ee0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253ee0:
  pSStack_30 = (System_String_o *)0x4253ee5;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = __a;
  pSStack_38 = unaff_R14;
  pSStack_30 = (System_String_o *)unaff_R15;
  if (g_data_057adb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar21 = *(long **)(extraout_RDX + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          bVar11 = System_String__EndsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_41 = (undefined1)bVar11;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar21 = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    pSVar15 = (System_String_o *)unaff_R15;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar15 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_01 + 0x28);
        unaff_R15 = (MethodInfo_24EEB40 **)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(extraout_RDX_01 + 0x18)) {
          plVar21 = *(long **)(extraout_RDX_01 + 0x30);
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar15 = System_String__Insert(pSVar16,iVar12,(System_String_o *)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = (MethodInfo_24EEB40 **)pSVar15;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_80 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_80 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    pSStack_80 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_80 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_80 = (System_String_o *)0x425417d;
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_80 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_80 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_90 = (System_String_o *)((ulong)uStack_90 & 0xffffffffffff);
    pSStack_a0 = (System_String_o *)0x4065181;
    pSVar16 = pSVar15;
    pSStack_88 = (System_String_o *)extraout_RDX_01;
    pSStack_80 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        pSStack_a0 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_a8 = pSVar15;
        pSStack_a0 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar16,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_e0 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_ee = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_e8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                 (__this_02,(MethodInfo *)0x0);
          if (pSStack_e8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_e8->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_ec = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_e8,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_e8,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_e8->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_e8,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_e8,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_ee = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_ec = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_ee = System_String__get_Chars((System_String_o *)__this_05,uStack_ec,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_ee = System_String__get_Chars((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_ec = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_e8,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_ec;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_ec) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_ec) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_ee = System_String__get_Chars
                                  ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSStack_a0 = (System_String_o *)0x406519e;
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        pSStack_a0 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_a0 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_a0 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_90 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_90);
        pSStack_a0 = (System_String_o *)0x40651e0;
        pSVar16 = System_Char__ToString((short)&uStack_90 + 6,(MethodInfo *)0x0);
        pSStack_a0 = (System_String_o *)0x40651f2;
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSStack_a0 = (System_String_o *)0x40651ff;
        pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  pSStack_80 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_80 = (System_String_o *)extraout_RDX_02;
  if (g_data_057adb86 == '\0') {
    pSStack_88 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_88 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_03;
  if (extraout_RDX_03 == (System_String_o *)0x0) {
label_04254265:
    pSStack_88 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03[1].klass != 0) {
    pSVar15 = extraout_RDX_03[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_88 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_88 = (System_String_o *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  pSStack_88 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_88 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_90 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_90 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_04;
  if (extraout_RDX_04 == (System_String_o *)0x0) {
label_042542e5:
    uStack_90 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_04[1].klass != 0) {
    pSVar15 = extraout_RDX_04[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_90 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_90 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  uStack_90 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_a0 = pSVar15;
  pSStack_98 = unaff_R14;
  uStack_90 = (System_String_o *)unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_05 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar15,pSVar16,4,(MethodInfo *)0x0);
          uStack_a8 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_a8);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__EndsWith>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253ef0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  System_String_o *extraout_RDX_02;
  System_String_o *extraout_RDX_03;
  long extraout_RDX_04;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  MethodInfo_24EEB40 **unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_c6;
  uint uStack_c4;
  System_Collections_IEnumerator_o *pSStack_c0;
  long *plStack_b8;
  undefined8 uStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  undefined8 uStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  undefined1 uStack_19;
  
  plVar21 = (long *)__this;
  if (g_data_057adb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb82 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_String_ConvertTo_String;
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        plVar21 = (long *)__a->m_Items[1];
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = (System_String_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          bVar11 = System_String__EndsWith(pSVar15,pSVar16,(MethodInfo *)0x0);
          uStack_19 = (undefined1)bVar11;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
          return pIVar17;
        }
        goto label_04253fb0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04253fb0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (extraout_RDX == 0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar21 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    pSVar15 = (System_String_o *)unaff_R15;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar15 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_00 + 0x28);
        unaff_R15 = (MethodInfo_24EEB40 **)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          plVar21 = *(long **)(extraout_RDX_00 + 0x30);
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar15 = System_String__Insert(pSVar16,iVar12,(System_String_o *)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = (MethodInfo_24EEB40 **)pSVar15;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_58 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_58 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    pSStack_58 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_58 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_58 = (System_String_o *)0x425417d;
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_58 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_58 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = (System_String_o *)((ulong)uStack_68 & 0xffffffffffff);
    pSStack_78 = (System_String_o *)0x4065181;
    pSVar16 = pSVar15;
    pSStack_60 = (System_String_o *)extraout_RDX_00;
    pSStack_58 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        pSStack_78 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_80 = pSVar15;
        pSStack_78 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar16,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_b8 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_c6 = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_c0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                 (__this_02,(MethodInfo *)0x0);
          if (pSStack_c0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_c0->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_c4 = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_c0,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_c0,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_c0->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_c0,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_c0,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_c6 = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_c4 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_c6 = System_String__get_Chars((System_String_o *)__this_05,uStack_c4,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_c6 = System_String__get_Chars((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_c4 = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_c0,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_c4;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_c4) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_c4) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_c6 = System_String__get_Chars
                                  ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSStack_78 = (System_String_o *)0x406519e;
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        pSStack_78 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_78 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_78 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_68 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_68);
        pSStack_78 = (System_String_o *)0x40651e0;
        pSVar16 = System_Char__ToString((short)&uStack_68 + 6,(MethodInfo *)0x0);
        pSStack_78 = (System_String_o *)0x40651f2;
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSStack_78 = (System_String_o *)0x40651ff;
        pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  pSStack_58 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_58 = (System_String_o *)extraout_RDX_01;
  if (g_data_057adb86 == '\0') {
    pSStack_60 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_60 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_02;
  if (extraout_RDX_02 == (System_String_o *)0x0) {
label_04254265:
    pSStack_60 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02[1].klass != 0) {
    pSVar15 = extraout_RDX_02[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_60 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_60 = (System_String_o *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  pSStack_60 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_60 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_68 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_68 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_03;
  if (extraout_RDX_03 == (System_String_o *)0x0) {
label_042542e5:
    uStack_68 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03[1].klass != 0) {
    pSVar15 = extraout_RDX_03[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  uStack_68 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_78 = pSVar15;
  pSStack_70 = unaff_R14;
  uStack_68 = (System_String_o *)unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_04 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar15,pSVar16,4,(MethodInfo *)0x0);
          uStack_80 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_80);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_80 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Trim>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4253fc0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  System_String_o *extraout_RDX_01;
  System_String_o *extraout_RDX_02;
  long extraout_RDX_03;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  System_String_o *unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_9e;
  uint uStack_9c;
  System_Collections_IEnumerator_o *pSStack_98;
  long *plStack_90;
  undefined8 uStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  plVar21 = (long *)__this;
  if (g_data_057adb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb83 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04254035:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    plVar21 = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254035;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (extraout_RDX != 0) {
    pSVar15 = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(System_String_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar15 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        plVar21 = *(long **)(extraout_RDX + 0x28);
        unaff_R15 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar16;
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          plVar21 = *(long **)(extraout_RDX + 0x30);
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar16 != (System_String_o *)0x0) {
            pSVar15 = System_String__Insert(pSVar16,iVar12,unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar15;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = pSVar15;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_30 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    pSStack_30 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_30 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = (System_String_o *)0x425417d;
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_30 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_30 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = (System_String_o *)((ulong)uStack_40 & 0xffffffffffff);
    pSStack_50 = (System_String_o *)0x4065181;
    pSVar16 = pSVar15;
    pSStack_38 = (System_String_o *)extraout_RDX;
    pSStack_30 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        pSStack_50 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_58 = pSVar15;
        pSStack_50 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar16,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_90 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_9e = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_98 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                 (__this_02,(MethodInfo *)0x0);
          if (pSStack_98 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_98->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_9c = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_98,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_98,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_98->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_98,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_98,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_9e = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_9c = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_9e = System_String__get_Chars((System_String_o *)__this_05,uStack_9c,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_9e = System_String__get_Chars((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_9c = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_98,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_9c;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_9c) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_9c) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_9e = System_String__get_Chars
                                  ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSStack_50 = (System_String_o *)0x406519e;
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        pSStack_50 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_40 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_40);
        pSStack_50 = (System_String_o *)0x40651e0;
        pSVar16 = System_Char__ToString((short)&uStack_40 + 6,(MethodInfo *)0x0);
        pSStack_50 = (System_String_o *)0x40651f2;
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSStack_50 = (System_String_o *)0x40651ff;
        pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  pSStack_30 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_30 = (System_String_o *)extraout_RDX_00;
  if (g_data_057adb86 == '\0') {
    pSStack_38 = (System_String_o *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_38 = (System_String_o *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar15 = extraout_RDX_01;
  if (extraout_RDX_01 == (System_String_o *)0x0) {
label_04254265:
    pSStack_38 = (System_String_o *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_01[1].klass != 0) {
    pSVar15 = extraout_RDX_01[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_38 = (System_String_o *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_38 = (System_String_o *)0x4254255;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  pSStack_38 = (System_String_o *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_38 = pSVar15;
  if (g_data_057adb87 == '\0') {
    uStack_40 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_40 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar15 = extraout_RDX_02;
  if (extraout_RDX_02 == (System_String_o *)0x0) {
label_042542e5:
    uStack_40 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02[1].klass != 0) {
    pSVar15 = extraout_RDX_02[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar15;
    pSVar16 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar15,MethodInfo_String_ConvertTo_String);
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  uStack_40 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_50 = pSVar15;
  pSStack_48 = unaff_R14;
  uStack_40 = unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_03 + 0x28);
        pSVar16 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar15,pSVar16,4,(MethodInfo *)0x0);
          uStack_58 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_58);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_58 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Insert>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4254040

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_c *__this_04;
  long extraout_RDX;
  System_String_o *extraout_RDX_00;
  System_String_o *extraout_RDX_01;
  long extraout_RDX_02;
  ulong uVar18;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_R13;
  System_String_o *unaff_R14;
  uint uVar22;
  int iVar23;
  System_String_o *unaff_R15;
  undefined1 auVar24 [12];
  uint16_t uStack_96;
  uint uStack_94;
  System_Collections_IEnumerator_o *pSStack_90;
  long *plStack_88;
  undefined8 uStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  System_Object_array *pSStack_30;
  System_String_o *pSStack_28;
  
  plVar21 = (long *)__this;
  if (g_data_057adb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb84 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pSVar16 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)unaff_R14;
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_String_ConvertTo_String);
      pSVar16 = (System_String_o *)&MethodInfo_String_ConvertTo_String;
      if (1 < (uint)__a->max_length) {
        plVar21 = (long *)__a->m_Items[1];
        unaff_R15 = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        unaff_R14 = pSVar15;
        if (2 < (uint)__a->max_length) {
          plVar21 = (long *)__a->m_Items[2];
          iVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)plVar21,MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar15 != (System_String_o *)0x0) {
            pSVar16 = System_String__Insert(pSVar15,iVar12,unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar16;
          }
          goto label_04254108;
        }
      }
    }
    unaff_R15 = pSVar16;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04254108:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb85 == '\0') {
    pSStack_28 = (System_String_o *)0x4254129;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_28 = (System_String_o *)0x4254135;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (extraout_RDX == 0) {
    pSStack_28 = (System_String_o *)0x42541e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar17 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_28 = (System_String_o *)0x425416b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_28 = (System_String_o *)0x425417d;
    pSVar16 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar17,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      pSStack_28 = (System_String_o *)0x42541b3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_28 = (System_String_o *)0x42541d2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_38 = (System_String_o *)((ulong)uStack_38 & 0xffffffffffff);
    pSStack_48 = (System_String_o *)0x4065181;
    pSVar15 = pSVar16;
    pSStack_30 = __a;
    pSStack_28 = unaff_R14;
    bVar11 = System_String__op_Equality
                       (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (pSVar16 == (System_String_o *)0x0) {
        pSStack_48 = (System_String_o *)0x4065213;
        il2cpp_runtime_helper_022b2c90();
        uStack_50 = pSVar16;
        pSStack_48 = unaff_R14;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar23 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar16 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar15,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar16;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_88 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_96 = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar18 = 0;
          pSStack_90 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                 (__this_02,(MethodInfo *)0x0);
          if (pSStack_90 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar22 = 0;
label_040653fb:
          pSVar6 = pSStack_90->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_94 = uVar22;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19)].methodPtr;
                goto label_04065463;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_90,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_90,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar23 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_90->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar19) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar19);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_90,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_90,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar23 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar22 < iVar23) goto label_04065824;
            }
            else if ((int)uVar22 < iVar23) {
              do {
                uStack_96 = System_String__get_Chars((System_String_o *)__this_05,uVar22,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
                lVar19 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar16;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar16,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar16 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_94 = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_96 = System_String__get_Chars((System_String_o *)__this_05,uStack_94,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = 0;
          System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_96 = System_String__get_Chars((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
          auVar24 = il2cpp_runtime_helper_022b2c90();
          uStack_94 = 0;
          iVar23 = 0;
          if (auVar24._8_4_ != 1) {
            plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_90,TypeInfo_IDisposable);
            if (plVar21 == (long *)0x0) goto label_04065a06;
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_040659df;
            lVar20 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar18 = TypeInfo_IDisposable;
          plVar21 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar21 != (long *)0x0) {
            lVar19 = *plVar21;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
            uVar18 = puVar14[1];
            (*(code *)*puVar14)(plVar21);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar23 != 6) && (iVar23 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar23 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar18 = (ulong)uStack_94;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar23 <= (int)uStack_94) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar23 <= (int)uStack_94) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_96 = System_String__get_Chars
                                  ((System_String_o *)__this_05,(int32_t)uVar18,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
            lVar19 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar8->m_Items[(int)uVar22] = (Il2CppObject *)pSVar16;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar22,pSVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = (int32_t)uVar18 + 1;
            uVar18 = (ulong)uVar22;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar16->fields)._stringLength < 2) {
        pSStack_48 = (System_String_o *)0x406519e;
        pSVar16 = System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      }
      else {
        pSStack_48 = (System_String_o *)0x40651ac;
        uVar10 = System_String__get_Chars(pSVar16,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          pSStack_48 = (System_String_o *)0x40651c4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = (System_String_o *)0x40651cf;
        uVar10 = System_Char__ToUpper_3c18a00(uVar10,(MethodInfo *)0x0);
        uStack_38 = (System_String_o *)CONCAT26(uVar10,(undefined6)uStack_38);
        pSStack_48 = (System_String_o *)0x40651e0;
        pSVar15 = System_Char__ToString((short)&uStack_38 + 6,(MethodInfo *)0x0);
        pSStack_48 = (System_String_o *)0x40651f2;
        pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
        pSStack_48 = (System_String_o *)0x40651ff;
        pSVar16 = System_String__Concat_3ae5ba0(pSVar15,pSVar16,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar16;
  }
  pSStack_28 = (System_String_o *)0x42541e7;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_28 = (System_String_o *)extraout_RDX;
  if (g_data_057adb86 == '\0') {
    pSStack_30 = (System_Object_array *)0x4254209;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    pSStack_30 = (System_Object_array *)0x4254215;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  pSVar16 = extraout_RDX_00;
  if (extraout_RDX_00 == (System_String_o *)0x0) {
label_04254265:
    pSStack_30 = (System_Object_array *)0x425426a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_00[1].klass != 0) {
    pSVar16 = extraout_RDX_00[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_30 = (System_Object_array *)0x4254243;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = (System_Object_array *)0x4254255;
    plVar21 = (long *)pSVar16;
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_04254265;
  }
  pSStack_30 = (System_Object_array *)0x425426f;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_30 = (System_Object_array *)pSVar16;
  if (g_data_057adb87 == '\0') {
    uStack_38 = (System_String_o *)0x4254289;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    uStack_38 = (System_String_o *)0x4254295;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  pSVar16 = extraout_RDX_01;
  if (extraout_RDX_01 == (System_String_o *)0x0) {
label_042542e5:
    uStack_38 = (System_String_o *)0x42542ea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_01[1].klass != 0) {
    pSVar16 = extraout_RDX_01[1].monitor;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_38 = (System_String_o *)0x42542c3;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_38 = (System_String_o *)0x42542d5;
    plVar21 = (long *)pSVar16;
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar16,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToLower(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    goto label_042542e5;
  }
  uStack_38 = (System_String_o *)0x42542ef;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_48 = pSVar16;
  pSStack_40 = unaff_R14;
  uStack_38 = unaff_R15;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      plVar21 = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        plVar21 = *(long **)(extraout_RDX_02 + 0x28);
        pSVar15 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar21,MethodInfo_String_ConvertTo_String);
        if (pSVar16 != (System_String_o *)0x0) {
          iVar12 = System_String__IndexOf_3afbe10(pSVar16,pSVar15,4,(MethodInfo *)0x0);
          uStack_50 = (System_String_o *)CONCAT44(iVar12,(undefined4)uStack_50);
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_50 + 4);
          return pIVar17;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(((System_String_o *)plVar21)->fields)._stringLength = 1;
  *(undefined1 *)&(((System_String_o *)((long)plVar21 + 0x18))->fields)._firstChar = 1;
  System_Object___ctor((Il2CppObject *)plVar21,(MethodInfo *)0x0);
  __this_04 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_String_o *)((long)plVar21 + 0x18))->klass = __this_04;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b4080((System_String_o *)((long)plVar21 + 0x18),__this_04);
  return pIVar17;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar21,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar24._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Capitalize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4254110

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar13;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  Il2CppObject *pIVar16;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  ulong uVar17;
  System_Text_RegularExpressions_Regex_o *__this_05;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *unaff_R13;
  uint uVar21;
  int iVar22;
  undefined1 auVar23 [12];
  uint16_t uStack_7e;
  uint uStack_7c;
  System_Collections_IEnumerator_o *pSStack_78;
  long *plStack_70;
  undefined8 uStack_38;
  
  plVar20 = (long *)__this;
  if (g_data_057adb85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar20 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb85 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar16 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar16,MethodInfo_String_ConvertTo_String);
    if (g_data_057adb60 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057adb60 = '\x01';
      iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar22 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = pSVar15;
    bVar10 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        uStack_38 = pSVar15;
        if (g_data_057ac2b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ac2b5 = '\x01';
          iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        else {
          iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
        }
        if (iVar22 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        else {
          __this_05 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
        }
        if (__this_05 != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar15 = System_Text_RegularExpressions_Regex__Replace_4906910
                              (__this_05,pSVar12,"",(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        plStack_70 = &TypeInfo_MiscExtensions;
        if (g_data_057ac2b6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          g_data_057ac2b6 = '\x01';
        }
        uStack_7e = 0;
        __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
        if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
           (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                  (__this_00,(System_String_o *)__this_05,(MethodInfo *)0x0),
           __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
          uVar17 = 0;
          pSStack_78 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                 (__this_02,(MethodInfo *)0x0);
          if (pSStack_78 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
          unaff_R13 = &MethodInfo_Void_Add;
          uVar21 = 0;
label_040653fb:
          pSVar6 = pSStack_78->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          uStack_7c = uVar21;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar18 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar18) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar18)].methodPtr;
                goto label_04065463;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar18);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,0);
label_04065463:
          cVar9 = (**ppIVar13)(pSStack_78,(MethodInfo *)ppIVar13[1]);
          if (cVar9 == '\0') {
            iVar22 = 6;
            unaff_R13 = (long *)0x0;
            goto label_04065677;
          }
          pSVar6 = pSStack_78->klass;
          uVar4._0_1_ = (pSVar6->_2).rank;
          uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar18 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar18) == TypeInfo_IEnumerator) {
                ppIVar13 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar18) + 1].methodPtr;
                goto label_040654e8;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar18);
          }
          ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,1);
label_040654e8:
          __this_03 = (System_Text_RegularExpressions_Capture_o *)
                      (**ppIVar13)(pSStack_78,(MethodInfo *)ppIVar13[1]);
          if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
            bVar2 = (TypeInfo_Match->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar2) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
              il2cpp_runtime_helper_022b2fd0(__this_03);
              goto label_04065803;
            }
            iVar22 = (__this_03->fields)._Index_k__BackingField;
            if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
              if ((int)uVar21 < iVar22) goto label_0406581a;
            }
            else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if ((int)uVar21 < iVar22) goto label_04065824;
            }
            else if ((int)uVar21 < iVar22) {
              do {
                uStack_7e = System_String__get_Chars((System_String_o *)__this_05,uVar21,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
                lVar18 = MethodInfo_Void_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_040657fb;
                }
                uVar5 = (__this_01->fields)._size;
                if (uVar5 < (uint)pSVar8->max_length) {
                  (__this_01->fields)._size = uVar5 + 1;
                  pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)pSVar15,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (__this_03->fields)._Index_k__BackingField);
            }
            pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
            lVar18 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
            uVar21 = (__this_01->fields)._size;
            if (uVar21 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar21 + 1;
              pSVar8->m_Items[(int)uVar21] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar21,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            uVar21 = (__this_03->fields)._Length_k__BackingField + (__this_03->fields)._Index_k__BackingField;
            goto label_040653fb;
          }
label_04065803:
          il2cpp_runtime_helper_022b2c90();
label_04065808:
          uStack_7c = 0;
          il2cpp_runtime_helper_022b2c90();
label_04065815:
          il2cpp_runtime_helper_022b2c90();
label_0406581a:
          il2cpp_runtime_helper_022b2c90();
        }
label_0406581f:
        do {
          il2cpp_runtime_helper_022b2c90();
label_04065824:
          uStack_7e = System_String__get_Chars((System_String_o *)__this_05,uStack_7c,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar17 = 0;
          System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_04065864:
          il2cpp_runtime_helper_022b2c90();
label_04065869:
          il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
          uStack_7e = System_String__get_Chars((System_String_o *)__this_05,(int32_t)uVar17,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
          auVar23 = il2cpp_runtime_helper_022b2c90();
          uStack_7c = 0;
          iVar22 = 0;
          if (auVar23._8_4_ != 1) {
            plVar20 = (long *)il2cpp_runtime_helper_023051f0(pSStack_78,TypeInfo_IDisposable);
            if (plVar20 == (long *)0x0) goto label_04065a06;
            lVar18 = *plVar20;
            if ((ulong)*(ushort *)(lVar18 + 0x12e) == 0) goto label_040659df;
            lVar19 = 0;
            goto label_040659d0;
          }
          puVar14 = (undefined8 *)__cxa_begin_catch(auVar23._0_8_);
          unaff_R13 = (long *)*puVar14;
          __cxa_end_catch();
label_04065677:
          uVar17 = TypeInfo_IDisposable;
          plVar20 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar20 != (long *)0x0) {
            lVar18 = *plVar20;
            if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
              lVar19 = 0;
              do {
                if (*(ulong *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                  puVar14 = (undefined8 *)
                            (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                  goto label_040656ed;
                }
                lVar19 = lVar19 + 0x10;
              } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_040656ed:
            uVar17 = puVar14[1];
            (*(code *)*puVar14)(plVar20);
          }
          if (unaff_R13 != (long *)0x0) goto label_04065869;
          if ((iVar22 != 6) && (iVar22 != 0)) {
            return (Il2CppObject *)__this_01;
          }
          if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
          iVar22 = (int)(__this_05->fields).internalMatchTimeout.fields._ticks;
          uVar17 = (ulong)uStack_7c;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
            if (iVar22 <= (int)uStack_7c) {
              return (Il2CppObject *)0x0;
            }
            goto label_04065871;
          }
          if (iVar22 <= (int)uStack_7c) {
            return (Il2CppObject *)__this_01;
          }
          unaff_R13 = &MethodInfo_Void_Add;
          while( true ) {
            uStack_7e = System_String__get_Chars
                                  ((System_String_o *)__this_05,(int32_t)uVar17,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
            lVar18 = MethodInfo_Void_Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_01->fields)._items;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar21 = (__this_01->fields)._size;
            if (uVar21 < (uint)pSVar8->max_length) {
              (__this_01->fields)._size = uVar21 + 1;
              pSVar8->m_Items[(int)uVar21] = (Il2CppObject *)pSVar15;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar21,pSVar15);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            uVar21 = (int32_t)uVar17 + 1;
            uVar17 = (ulong)uVar21;
            if ((int)(__this_05->fields).internalMatchTimeout.fields._ticks <= (int)uVar21) {
              return (Il2CppObject *)__this_01;
            }
          }
        } while( true );
      }
      if ((pSVar15->fields)._stringLength < 2) {
        pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      }
      else {
        c = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
        pSVar12 = System_Char__ToString((uint16_t)&stack0xffffffffffffffe6,(MethodInfo *)0x0);
        pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
        pSVar15 = System_String__Concat_3ae5ba0(pSVar12,pSVar15,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pSVar15;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar20 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  if (extraout_RDX == 0) {
label_04254265:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar20 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar20,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_04254265;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar20 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_042542e5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar20 = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar20,MethodInfo_String_ConvertTo_String);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar15 = System_String__ToLower(pSVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    goto label_042542e5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar20 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      plVar20 = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar20,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        plVar20 = *(long **)(extraout_RDX_01 + 0x28);
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar20,MethodInfo_String_ConvertTo_String);
        if (pSVar15 != (System_String_o *)0x0) {
          iVar11 = System_String__IndexOf_3afbe10(pSVar15,pSVar12,4,(MethodInfo *)0x0);
          uStack_38 = (System_String_o *)CONCAT44(iVar11,(undefined4)uStack_38);
          pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_38 + 4);
          return pIVar16;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((Il2CppObject *)((long)plVar20 + 0x10))->klass = 1;
  *(undefined1 *)((long)&((Il2CppObject *)((long)plVar20 + 0x20))->monitor + 4) = 1;
  System_Object___ctor((Il2CppObject *)plVar20,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Object);
  ((Il2CppObject *)((long)plVar20 + 0x10))->monitor = __this_04;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((Il2CppObject *)((long)plVar20 + 0x10))->monitor,__this_04);
  return pIVar16;
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar20,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar20,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar23._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToUpper>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42541f0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *value;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *extraout_RDX;
  long extraout_RDX_00;
  Il2CppClass *obj;
  int32_t iStack_2c;
  Il2CppObject *pIStack_28;
  
  if (g_data_057adb86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb86 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04254265:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToUpper(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
    goto label_04254265;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adb87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  obj = (Il2CppClass *)extraout_RDX;
  if (extraout_RDX == (Il2CppObject *)0x0) {
label_042542e5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX[1].monitor != 0) {
    obj = extraout_RDX[2].klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)obj;
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
    goto label_042542e5;
  }
  il2cpp_runtime_helper_022b2ca0();
  pIStack_28 = (Il2CppObject *)obj;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicStringBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicStringBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        value = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (pSVar1 != (System_String_o *)0x0) {
          iStack_2c = System_String__IndexOf_3afbe10(pSVar1,value,4,(MethodInfo *)0x0);
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
          return pIVar2;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((Il2CppObject *)(__this + 1))->klass = 1;
  *(undefined1 *)((long)&((Il2CppObject *)(__this + 2))->monitor + 4) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  ((Il2CppObject *)(__this + 1))->monitor = __this_00;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((Il2CppObject *)(__this + 1))->monitor,__this_00);
  return pIVar2;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToLower>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4254270

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *value;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long extraout_RDX;
  int32_t iStack_24;
  System_Object_array *pSStack_20;
  
  if (g_data_057adb87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb87 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_042542e5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)__a;
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__a,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
    goto label_042542e5;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = __a;
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicStringBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicStringBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        value = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (pSVar1 != (System_String_o *)0x0) {
          iStack_24 = System_String__IndexOf_3afbe10(pSVar1,value,4,(MethodInfo *)0x0);
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_24);
          return pIVar2;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((System_Object_array *)__this)->bounds = 1;
  *(undefined1 *)((long)((System_Object_array *)__this)->m_Items + 0xc) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  ((System_Object_array *)__this)->max_length = (il2cpp_array_size_t)__this_00;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((System_Object_array *)__this)->max_length,__this_00);
  return pIVar2;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__IndexOf>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42542f0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  int32_t iStack_1c;
  
  if (g_data_057adb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb88 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *)__a->m_Items[1];
        value = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (__this_00 != (System_String_o *)0x0) {
          iStack_1c = System_String__IndexOf_3afbe10(__this_00,value,4,(MethodInfo *)0x0);
          pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_1c);
          return pIVar1;
        }
        goto label_042543b5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042543b5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&((Il2CppObject *)(__this + 1))->klass = 1;
  *(undefined1 *)((long)&((Il2CppObject *)(__this + 2))->monitor + 4) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Object);
  ((Il2CppObject *)(__this + 1))->monitor = __this_01;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&((Il2CppObject *)(__this + 1))->monitor,__this_01);
  return pIVar1;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4251500

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  undefined8 *puVar6;
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined1 auStack_18 [8];
  
  if (g_data_057adb63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Newline");
    il2cpp_runtime_helper_023445d0(&"Insert");
    il2cpp_runtime_helper_023445d0(&"Replace");
    il2cpp_runtime_helper_023445d0(&"IndexOf");
    il2cpp_runtime_helper_023445d0(&"StartsWith");
    il2cpp_runtime_helper_023445d0(&"Length");
    il2cpp_runtime_helper_023445d0(&"FormatFloat");
    il2cpp_runtime_helper_023445d0(&"Join");
    il2cpp_runtime_helper_023445d0(&"Split");
    il2cpp_runtime_helper_023445d0(&"Trim");
    il2cpp_runtime_helper_023445d0(&"Capitalize");
    il2cpp_runtime_helper_023445d0(&"ToUpper");
    il2cpp_runtime_helper_023445d0(&"EndsWith");
    il2cpp_runtime_helper_023445d0(&"SubstringWithLength");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"ToLower");
    il2cpp_runtime_helper_023445d0(&"Substring");
    il2cpp_runtime_helper_023445d0(&"FormatFromList");
    g_data_057adb63 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x669c4959) {
    if (uVar3 < 0x3002539a) {
      if (uVar3 < 0xf317949) {
        if (uVar3 == 0x9390c03) {
          bVar4 = System_String__op_Equality(name,"Capitalize",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057adb72 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Capitalize_b__16_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057adb72 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xf317948) &&
                (bVar4 = System_String__op_Equality(name,"Insert",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adb71 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Insert_b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb71 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x16a15383) {
        bVar4 = System_String__op_Equality(name,"Split",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adb67 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Split_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb67 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x30025399) &&
              (bVar4 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb68 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Join_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb68 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x38e8329d) {
      if (uVar3 == 0x325686ab) {
        bVar4 = System_String__op_Equality(name,"Newline",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline;
        }
      }
      else if ((uVar3 == 0x38e8329c) &&
              (bVar4 = System_String__op_Equality(name,"SubstringWithLength",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb6a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SubstringWithLength_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x43415f31) {
      bVar4 = System_String__op_Equality(name,"ToLower",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb74 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToLower_b__18_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb74 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x5101d130) {
      bVar4 = System_String__op_Equality(name,"FormatFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb65 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFloat_b__3_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb65 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb6d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xc2b173c9) {
    if (uVar3 < 0xb4ede919) {
      if (uVar3 == 0xaadc121e) {
        bVar4 = System_String__op_Equality(name,"IndexOf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adb75 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IndexOf_b__19_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adb75 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x88,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xb4ede918) &&
              (bVar4 = System_String__op_Equality(name,"ToUpper",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb73 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToUpper_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb73 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xbbed73fc) {
      bVar4 = System_String__op_Equality(name,"StartsWith",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb6e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StartsWith_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc2b173c8) &&
            (bVar4 = System_String__op_Equality(name,"Substring",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb69 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Substring_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb69 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xe4d54f64) {
    if (uVar3 == 0xcc5e1935) {
      bVar4 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb6b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Length_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb6b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xe4d54f63) &&
            (bVar4 = System_String__op_Equality(name,"Replace",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb6c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Replace_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf5c087e9) {
    bVar4 = System_String__op_Equality(name,"Trim",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb70 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Trim_b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb70 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfe1f90a3) {
    bVar4 = System_String__op_Equality(name,"EndsWith",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb6f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__EndsWith_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb6f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xfefe1622) &&
          (bVar4 = System_String__op_Equality(name,"FormatFromList",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057adb66 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFromList_b__4_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057adb66 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicStringBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057adb64 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Newline_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object);
    g_data_057adb64 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c53;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c7b;
  __this = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4251c95;
  CustomLogic_CLPropertyBinding_object____ctor(__this,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreatePropertyBinding__Newline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline (const MethodInfo* method);
// 0x4251c00

CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Newline_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object);
    g_data_057adb64 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat (const MethodInfo* method);
// 0x4251ca0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb65 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFloat_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb65 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFromList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList (const MethodInfo* method);
// 0x4251df0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FormatFromList_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb66 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Split
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split (const MethodInfo* method);
// 0x4251f40

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Split_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb67 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Join
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join (const MethodInfo* method);
// 0x4252090

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Join_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb68 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Substring
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring (const MethodInfo* method);
// 0x42521e0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb69 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Substring_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb69 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__SubstringWithLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength (const MethodInfo* method);
// 0x4252330

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SubstringWithLength_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Length
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length (const MethodInfo* method);
// 0x4252480

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Length_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Replace
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace (const MethodInfo* method);
// 0x42525d0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Replace_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x4252720

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__StartsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith (const MethodInfo* method);
// 0x4252870

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StartsWith_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__EndsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith (const MethodInfo* method);
// 0x42529c0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__EndsWith_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb6f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Trim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim (const MethodInfo* method);
// 0x4252b10

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb70 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Trim_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb70 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Insert
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert (const MethodInfo* method);
// 0x4252c60

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb71 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Insert_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb71 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Capitalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize (const MethodInfo* method);
// 0x4252db0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb72 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Capitalize_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb72 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToUpper
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper (const MethodInfo* method);
// 0x4252f00

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToUpper_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb73 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToLower
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower (const MethodInfo* method);
// 0x4253050

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToLower_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb74 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__IndexOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf (const MethodInfo* method);
// 0x42531a0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (g_data_057adb75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IndexOf_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb75 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStringBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x42532f0

void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057adb76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Newline");
    il2cpp_runtime_helper_023445d0(&"Insert");
    il2cpp_runtime_helper_023445d0(&"Replace");
    il2cpp_runtime_helper_023445d0(&"IndexOf");
    il2cpp_runtime_helper_023445d0(&"StartsWith");
    il2cpp_runtime_helper_023445d0(&"Length");
    il2cpp_runtime_helper_023445d0(&"FormatFloat");
    il2cpp_runtime_helper_023445d0(&"Join");
    il2cpp_runtime_helper_023445d0(&"Split");
    il2cpp_runtime_helper_023445d0(&"Trim");
    il2cpp_runtime_helper_023445d0(&"Capitalize");
    il2cpp_runtime_helper_023445d0(&"ToUpper");
    il2cpp_runtime_helper_023445d0(&"EndsWith");
    il2cpp_runtime_helper_023445d0(&"SubstringWithLength");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"ToLower");
    il2cpp_runtime_helper_023445d0(&"Substring");
    il2cpp_runtime_helper_023445d0(&"FormatFromList");
    g_data_057adb76 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Newline",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FormatFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FormatFromList",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Split",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Join",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Substring",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SubstringWithLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Length",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Replace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Contains",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"StartsWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EndsWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Trim",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Insert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Capitalize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToUpper",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToLower",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IndexOf",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adb5b = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$<__CreatePropertyBinding__Newline>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0 (CustomLogic_CustomLogicStringBuiltin_o* __i, const MethodInfo* method);
// 0x42535f0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0
          (CustomLogic_CustomLogicStringBuiltin_o *__i,MethodInfo *method)

{
  if (g_data_057adb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adb5b = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin___ctor (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x4250930

void CustomLogic_CustomLogicStringBuiltin___ctor
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicStringBuiltin$$get_Newline
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_Newline (const MethodInfo* method);
// 0x4250990

System_String_o * CustomLogic_CustomLogicStringBuiltin__get_Newline(MethodInfo *method)

{
  if (g_data_057adb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057adb5b = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFloat
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFloat (float val, int32_t decimals, const MethodInfo* method);
// 0x42509c0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFloat(float val,int32_t decimals,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057adb5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adb5c = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Utility_Util__FormatFloat(val,decimals,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFromList
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFromList (System_String_o* str, CustomLogic_CustomLogicListBuiltin_o* list, const MethodInfo* method);
// 0x4250a30

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFromList
          (System_String_o *str,CustomLogic_CustomLogicListBuiltin_o *list,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *__this;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  uint16_t separator;
  int iVar6;
  bool_conflict bVar7;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_String_array *separator_00;
  Il2CppRGCTXData *pIVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  Il2CppClass *pIVar12;
  long *plVar13;
  ulong extraout_RDX;
  int32_t options;
  Il2CppRGCTXData *pIVar14;
  System_String_o **ppSVar15;
  CustomLogic_CustomLogicListBuiltin_o *separator_01;
  Il2CppObject *item;
  System_String_array *pSVar16;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  _union_249689 unaff_R12;
  undefined1 auVar17 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  Il2CppObject *pIVar20;
  undefined1 auStack_a8 [16];
  Il2CppObject *pIStack_98;
  Il2CppRGCTXData *pIStack_90;
  _union_249689 _Stack_88;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_80;
  System_String_array *pSStack_78;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_70;
  System_String_o **ppSStack_68;
  int32_t iStack_5c;
  System_String_array *pSStack_58;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_50;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_48;
  
  separator_01 = list;
  pSVar16 = (System_String_array *)str;
  if (g_data_057adb5d == '\0') {
    pSVar16 = (System_String_array *)&MethodInfo_Object_ToArray;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb5d = '\x01';
  }
  if (list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pSVar11 = (list->fields).List;
    pSVar16 = (System_String_array *)0x0;
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_Object_ToArray);
      pSVar9 = System_String__Format_3af7980(str,pSVar8,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_48 = list;
  if (g_data_057adb5e == '\0') {
    ppSStack_68 = (System_String_o **)0x4250abb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    ppSStack_68 = (System_String_o **)0x4250ac7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_68 = (System_String_o **)0x4250ad3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppSStack_68 = (System_String_o **)0x4250adf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    ppSStack_68 = (System_String_o **)0x4250aeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057adb5e = '\x01';
  }
  ppSVar15 = (System_String_o **)&TypeInfo_CustomLogicListBuiltin;
  ppSStack_68 = (System_String_o **)0x4250b02;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  ppSStack_68 = (System_String_o **)0x4250b0f;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  pIVar14 = (Il2CppRGCTXData *)(extraout_RDX & 0xffffffff);
  if (separator_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_04250ec1;
  pIVar14 = (Il2CppRGCTXData *)(extraout_RDX & 0xff);
  pIVar12 = (Il2CppClass *)separator_01->klass;
  options = (int32_t)pIVar14;
  if (pIVar12 == g_data_057b9c00) {
    if ((separator_01->fields).Enabled == 1) {
      ppSStack_68 = (System_String_o **)0x4250c3f;
      separator = System_String__get_Chars((System_String_o *)separator_01,0,(MethodInfo *)0x0);
      if (pSVar16 != (System_String_array *)0x0) {
        ppSStack_68 = (System_String_o **)0x4250c57;
        pIVar10 = (Il2CppRGCTXData *)
                  System_String__Split((System_String_o *)pSVar16,separator,options,(MethodInfo *)0x0);
        if (pIVar10 != (Il2CppRGCTXData *)0x0) {
          iVar6 = (int)pIVar10[3].rgctxDataDummy;
          if (__this_05 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            if (iVar6 < 1) {
              return (System_String_o *)__this_05;
            }
            ppSVar15 = (System_String_o **)0x0;
            pSVar16 = (System_String_array *)&MethodInfo_Void_Add;
            if (((ulong)pIVar10[3].rgctxDataDummy & 0xffffffff) != 0) {
              do {
                lVar5 = MethodInfo_Void_Add;
                pSVar11 = (__this_05->fields).List;
                pIVar14 = pIVar10;
                if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                pMVar4 = pIVar10[(long)((long)ppSVar15 + 4)].method;
                piVar1 = &(pSVar11->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (pSVar11->fields)._items;
                if (pSVar8 == (System_Object_array *)0x0) goto label_04250ec1;
                uVar3 = (pSVar11->fields)._size;
                if (uVar3 < (uint)pSVar8->max_length) {
                  (pSVar11->fields)._size = uVar3 + 1;
                  pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
                  ppSStack_68 = (System_String_o **)0x4250d09;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
                }
                else {
                  ppSStack_68 = (System_String_o **)0x4250ca4;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar11,(Il2CppObject *)pMVar4,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                ppSVar15 = (System_String_o **)((long)ppSVar15 + 1);
                if ((long)(int)*(uint *)(pIVar10 + 3) <= (long)ppSVar15) {
                  return (System_String_o *)__this_05;
                }
              } while (ppSVar15 < (undefined8 *)(ulong)*(uint *)(pIVar10 + 3));
            }
            goto label_04250ec6;
          }
label_04250eab:
          pIVar14 = pIVar10;
          if (iVar6 < 1) {
            return (System_String_o *)__this_05;
          }
        }
      }
label_04250ec1:
      ppSStack_68 = (System_String_o **)0x4250ec6;
      il2cpp_runtime_helper_022b2c90();
      pIVar10 = pIVar14;
    }
    else {
      if (pSVar16 == (System_String_array *)0x0) goto label_04250ec1;
      ppSStack_68 = (System_String_o **)0x4250e03;
      pIVar10 = (Il2CppRGCTXData *)
                System_String__Split_3afa740
                          ((System_String_o *)pSVar16,(System_String_o *)separator_01,options,
                           (MethodInfo *)0x0);
      if (pIVar10 == (Il2CppRGCTXData *)0x0) goto label_04250ec1;
      iVar6 = (int)pIVar10[3].rgctxDataDummy;
      if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_04250eab;
      if (iVar6 < 1) {
        return (System_String_o *)__this_05;
      }
      ppSVar15 = (System_String_o **)0x0;
      pSVar16 = (System_String_array *)&MethodInfo_Void_Add;
      if (((ulong)pIVar10[3].rgctxDataDummy & 0xffffffff) != 0) {
        do {
          lVar5 = MethodInfo_Void_Add;
          pSVar11 = (__this_05->fields).List;
          pIVar14 = pIVar10;
          if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
          pMVar4 = pIVar10[(long)((long)ppSVar15 + 4)].method;
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (pSVar11->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04250ec1;
          uVar3 = (pSVar11->fields)._size;
          if (uVar3 < (uint)pSVar8->max_length) {
            (pSVar11->fields)._size = uVar3 + 1;
            pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
            ppSStack_68 = (System_String_o **)0x4250ea9;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
          }
          else {
            ppSStack_68 = (System_String_o **)0x4250e54;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar11,(Il2CppObject *)pMVar4,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          ppSVar15 = (System_String_o **)((long)ppSVar15 + 1);
          if ((long)(int)*(uint *)(pIVar10 + 3) <= (long)ppSVar15) {
            return (System_String_o *)__this_05;
          }
        } while (ppSVar15 < (undefined8 *)(ulong)*(uint *)(pIVar10 + 3));
      }
    }
label_04250ec6:
    ppSStack_68 = (System_String_o **)0x4250ecb;
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
label_04250ecb:
    ppSStack_68 = (System_String_o **)0x4250ed3;
    il2cpp_runtime_helper_022b2fd0(pSVar9);
    separator_00 = pSVar16;
  }
  else {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    pIVar10 = pIVar14;
    separator_00 = pSVar16;
    if ((bVar2 <= (pIVar12->_2).naturalAligment) &&
       ((pIVar12->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      iStack_5c = options;
      pSStack_58 = pSVar16;
      pCStack_50 = __this_05;
      if ((separator_01->fields).List != (System_Collections_Generic_List_object__o *)0x0) {
        ppSStack_68 = (System_String_o **)0x4250b89;
        separator_00 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)(separator_01->fields).List;
        if (__this_06 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          pSVar16 = separator_00;
          if (separator_00 == (System_String_array *)0x0) {
            if (0 < *(int *)&(__this_06->fields).Variables) goto label_04250edb;
label_04250d15:
            if (pSStack_58 != (System_String_array *)0x0) {
              ppSStack_68 = (System_String_o **)0x4250d31;
              pIVar10 = (Il2CppRGCTXData *)
                        System_String__Split_3afab90
                                  ((System_String_o *)pSStack_58,separator_00,iStack_5c,(MethodInfo *)0x0);
              __this_05 = pCStack_50;
              if (pIVar10 != (Il2CppRGCTXData *)0x0) {
                iVar6 = (int)pIVar10[3].rgctxDataDummy;
                if (pCStack_50 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_04250eab;
                if (iVar6 < 1) {
                  return (System_String_o *)pCStack_50;
                }
                ppSVar15 = (System_String_o **)0x0;
                pSVar16 = (System_String_array *)&MethodInfo_Void_Add;
                if (((ulong)pIVar10[3].rgctxDataDummy & 0xffffffff) != 0) {
                  do {
                    lVar5 = MethodInfo_Void_Add;
                    pSVar11 = (__this_05->fields).List;
                    pIVar14 = pIVar10;
                    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pMVar4 = pIVar10[(long)((long)ppSVar15 + 4)].method;
                    piVar1 = &(pSVar11->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar8 = (pSVar11->fields)._items;
                    if (pSVar8 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar3 = (pSVar11->fields)._size;
                    if (uVar3 < (uint)pSVar8->max_length) {
                      (pSVar11->fields)._size = uVar3 + 1;
                      pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
                      ppSStack_68 = (System_String_o **)0x4250de9;
                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
                    }
                    else {
                      ppSStack_68 = (System_String_o **)0x4250d84;
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar11,(Il2CppObject *)pMVar4,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    ppSVar15 = (System_String_o **)((long)ppSVar15 + 1);
                    if ((long)(int)*(uint *)(pIVar10 + 3) <= (long)ppSVar15) {
                      return (System_String_o *)__this_05;
                    }
                  } while (ppSVar15 < (undefined8 *)(ulong)*(uint *)(pIVar10 + 3));
                }
                goto label_04250ec6;
              }
            }
          }
          else {
            ppSVar15 = separator_00->m_Items;
            __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
            unaff_R12.genericMethod = &MethodInfo_Object_get_Item;
            pIVar14 = (Il2CppRGCTXData *)0x0;
            do {
              if ((long)*(int *)&(__this_06->fields).Variables <= (long)pIVar14) goto label_04250d15;
              ppSStack_68 = (System_String_o **)0x4250bd8;
              pSVar9 = (System_String_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_06,(int32_t)pIVar14,
                                  MethodInfo_Object_get_Item);
              pIVar10 = pIVar14;
              if ((pSVar9 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar9->klass != g_data_057b9c00))
              goto label_04250ecb;
              if ((Il2CppRGCTXData *)(ulong)(uint)separator_00->max_length <= pIVar14) goto label_04250ec6;
              ppSVar15[(long)pIVar14] = pSVar9;
              ppSStack_68 = (System_String_o **)0x4250c12;
              il2cpp_runtime_helper_022b4080((long)&__this_05->klass + (long)ppSVar15);
              pIVar14 = (Il2CppRGCTXData *)((long)pIVar14 + 1);
              __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)(separator_01->fields).List;
              __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)&__this_05->monitor;
            } while (__this_06 != (CustomLogic_CustomLogicListBuiltin_o *)0x0);
          }
        }
      }
      goto label_04250ec1;
    }
  }
  ppSStack_68 = (System_String_o **)0x4250edb;
  __this_06 = separator_01;
  il2cpp_runtime_helper_022b2fd0();
  pIVar14 = pIVar10;
label_04250edb:
  pSVar9 = (System_String_o *)0x0;
  ppSStack_68 = (System_String_o **)0x4250eec;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)__this_06,0,MethodInfo_Object_get_Item);
  ppSStack_68 = (System_String_o **)0x4250ef1;
  il2cpp_runtime_helper_022b2c90();
  pIStack_90 = pIVar14;
  _Stack_88 = unaff_R12;
  pCStack_80 = separator_01;
  pSStack_78 = separator_00;
  pCStack_70 = __this_05;
  ppSStack_68 = ppSVar15;
  if (g_data_057adb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adb5f = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_System_String);
  if ((__this_06 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (__this_06->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_a8._0_8_;
    pIVar19 = (Il2CppType *)auStack_a8._8_8_;
    item = pIStack_98;
    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_a8._8_4_;
      __this_01.fields._version = auStack_a8._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_a8._0_8_;
      __this_01.fields._current = pIStack_98;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
      pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_a8._0_8_;
      pIVar19 = (Il2CppType *)auStack_a8._8_8_;
      pIVar20 = pIStack_98;
      if ((char)bVar7 != '\0') goto label_04251105;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar19,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar18,
            __this_00.fields._current = item,
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38), lVar5 = MethodInfo_Void_Add
            , pIVar20 = item, (char)bVar7 != '\0') {
        if ((item != (Il2CppObject *)0x0) && (pIVar12 = g_data_057b9c00, item->klass != g_data_057b9c00)) {
label_042510f5:
          il2cpp_runtime_helper_022b2fd0(item,pIVar12);
          goto label_04251100;
        }
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (pSVar11->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) {
          pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
          goto label_042510f5;
        }
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = item;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar19;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_02.fields._current = pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    goto label_042510bd;
  }
label_04251100:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04251105:
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
label_04251163:
      __this_04.fields._8_8_ = pIVar19;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
      __this_04.fields._current = pIVar20;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
      _Unwind_Resume(auVar17._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar5 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar19;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_03.fields._current = pIVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_04251163;
    }
label_042510bd:
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar16 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
      pSVar9 = System_String__Join(pSVar9,pSVar16,(MethodInfo *)0x0);
      return pSVar9;
    }
  } while( true );
}


// CustomLogic.CustomLogicStringBuiltin$$Split
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicStringBuiltin__Split (System_String_o* toSplit, Il2CppObject* splitter, bool removeEmptyEntries, const MethodInfo* method);
// 0x4250a90

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicStringBuiltin__Split
          (System_String_o *toSplit,Il2CppObject *splitter,bool_conflict removeEmptyEntries,MethodInfo *method
          )

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  uint16_t separator;
  int iVar7;
  bool_conflict bVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  Il2CppClass *pIVar14;
  long *plVar15;
  Il2CppRGCTXData *pIVar16;
  System_String_o **ppSVar17;
  Il2CppObject *item;
  _union_249689 unaff_R12;
  undefined1 auVar18 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  Il2CppType *pIVar20;
  Il2CppObject *pIVar21;
  undefined1 auStack_90 [16];
  Il2CppObject *pIStack_80;
  Il2CppRGCTXData *pIStack_78;
  _union_249689 _Stack_70;
  Il2CppObject *pIStack_68;
  System_String_array *pSStack_60;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_58;
  System_String_o **ppSStack_50;
  uint uStack_44;
  System_String_o *pSStack_40;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_38;
  
  if (g_data_057adb5e == '\0') {
    ppSStack_50 = (System_String_o **)0x4250abb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    ppSStack_50 = (System_String_o **)0x4250ac7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_50 = (System_String_o **)0x4250ad3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppSStack_50 = (System_String_o **)0x4250adf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    ppSStack_50 = (System_String_o **)0x4250aeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057adb5e = '\x01';
  }
  ppSVar17 = (System_String_o **)&TypeInfo_CustomLogicListBuiltin;
  ppSStack_50 = (System_String_o **)0x4250b02;
  pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  ppSStack_50 = (System_String_o **)0x4250b0f;
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
  pIVar16 = (Il2CppRGCTXData *)(ulong)(uint)removeEmptyEntries;
  if (splitter == (Il2CppObject *)0x0) goto label_04250ec1;
  pIVar16 = (Il2CppRGCTXData *)(ulong)(byte)removeEmptyEntries;
  pIVar14 = splitter->klass;
  if (pIVar14 == g_data_057b9c00) {
    if (*(int *)&splitter[1].klass == 1) {
      ppSStack_50 = (System_String_o **)0x4250c3f;
      separator = System_String__get_Chars((System_String_o *)splitter,0,(MethodInfo *)0x0);
      if (toSplit != (System_String_o *)0x0) {
        ppSStack_50 = (System_String_o **)0x4250c57;
        pIVar12 = (Il2CppRGCTXData *)
                  System_String__Split(toSplit,separator,removeEmptyEntries & 0xff,(MethodInfo *)0x0);
        if (pIVar12 != (Il2CppRGCTXData *)0x0) {
          iVar7 = (int)pIVar12[3].rgctxDataDummy;
          if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            if (iVar7 < 1) {
              return pCVar9;
            }
            ppSVar17 = (System_String_o **)0x0;
            toSplit = (System_String_o *)&MethodInfo_Void_Add;
            if (((ulong)pIVar12[3].rgctxDataDummy & 0xffffffff) != 0) {
              do {
                lVar6 = MethodInfo_Void_Add;
                pSVar13 = (pCVar9->fields).List;
                pIVar16 = pIVar12;
                if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                pMVar4 = pIVar12[(long)((long)ppSVar17 + 4)].method;
                piVar1 = &(pSVar13->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (pSVar13->fields)._items;
                if (pSVar5 == (System_Object_array *)0x0) goto label_04250ec1;
                uVar3 = (pSVar13->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (pSVar13->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
                  ppSStack_50 = (System_String_o **)0x4250d09;
                  il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  ppSStack_50 = (System_String_o **)0x4250ca4;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar13,(Il2CppObject *)pMVar4,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                ppSVar17 = (System_String_o **)((long)ppSVar17 + 1);
                if ((long)(int)*(uint *)(pIVar12 + 3) <= (long)ppSVar17) {
                  return pCVar9;
                }
              } while (ppSVar17 < (undefined8 *)(ulong)*(uint *)(pIVar12 + 3));
            }
            goto label_04250ec6;
          }
label_04250eab:
          pIVar16 = pIVar12;
          if (iVar7 < 1) {
            return pCVar9;
          }
        }
      }
label_04250ec1:
      ppSStack_50 = (System_String_o **)0x4250ec6;
      il2cpp_runtime_helper_022b2c90();
      pIVar12 = pIVar16;
    }
    else {
      if (toSplit == (System_String_o *)0x0) goto label_04250ec1;
      ppSStack_50 = (System_String_o **)0x4250e03;
      pIVar12 = (Il2CppRGCTXData *)
                System_String__Split_3afa740
                          (toSplit,(System_String_o *)splitter,removeEmptyEntries & 0xff,(MethodInfo *)0x0);
      if (pIVar12 == (Il2CppRGCTXData *)0x0) goto label_04250ec1;
      iVar7 = (int)pIVar12[3].rgctxDataDummy;
      if (pCVar9 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_04250eab;
      if (iVar7 < 1) {
        return pCVar9;
      }
      ppSVar17 = (System_String_o **)0x0;
      toSplit = (System_String_o *)&MethodInfo_Void_Add;
      if (((ulong)pIVar12[3].rgctxDataDummy & 0xffffffff) != 0) {
        do {
          lVar6 = MethodInfo_Void_Add;
          pSVar13 = (pCVar9->fields).List;
          pIVar16 = pIVar12;
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
          pMVar4 = pIVar12[(long)((long)ppSVar17 + 4)].method;
          piVar1 = &(pSVar13->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar13->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_04250ec1;
          uVar3 = (pSVar13->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (pSVar13->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
            ppSStack_50 = (System_String_o **)0x4250ea9;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
          }
          else {
            ppSStack_50 = (System_String_o **)0x4250e54;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar13,(Il2CppObject *)pMVar4,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          ppSVar17 = (System_String_o **)((long)ppSVar17 + 1);
          if ((long)(int)*(uint *)(pIVar12 + 3) <= (long)ppSVar17) {
            return pCVar9;
          }
        } while (ppSVar17 < (undefined8 *)(ulong)*(uint *)(pIVar12 + 3));
      }
    }
label_04250ec6:
    ppSStack_50 = (System_String_o **)0x4250ecb;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
label_04250ecb:
    ppSStack_50 = (System_String_o **)0x4250ed3;
    il2cpp_runtime_helper_022b2fd0(pSVar11);
    pSVar10 = (System_String_array *)toSplit;
  }
  else {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    pIVar12 = pIVar16;
    pSVar10 = (System_String_array *)toSplit;
    if ((bVar2 <= (pIVar14->_2).naturalAligment) &&
       ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      uStack_44 = removeEmptyEntries & 0xff;
      pSStack_40 = toSplit;
      pCStack_38 = pCVar9;
      if (splitter[3].klass != (Il2CppClass *)0x0) {
        ppSStack_50 = (System_String_o **)0x4250b89;
        pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        pIVar14 = splitter[3].klass;
        if (pIVar14 != (Il2CppClass *)0x0) {
          toSplit = (System_String_o *)pSVar10;
          if (pSVar10 == (System_String_array *)0x0) {
            if (0 < *(int *)&(pIVar14->_1).namespaze) goto label_04250edb;
label_04250d15:
            if (pSStack_40 != (System_String_o *)0x0) {
              ppSStack_50 = (System_String_o **)0x4250d31;
              pIVar12 = (Il2CppRGCTXData *)
                        System_String__Split_3afab90(pSStack_40,pSVar10,uStack_44,(MethodInfo *)0x0);
              pCVar9 = pCStack_38;
              if (pIVar12 != (Il2CppRGCTXData *)0x0) {
                iVar7 = (int)pIVar12[3].rgctxDataDummy;
                if (pCStack_38 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_04250eab;
                if (iVar7 < 1) {
                  return pCStack_38;
                }
                ppSVar17 = (System_String_o **)0x0;
                toSplit = (System_String_o *)&MethodInfo_Void_Add;
                if (((ulong)pIVar12[3].rgctxDataDummy & 0xffffffff) != 0) {
                  do {
                    lVar6 = MethodInfo_Void_Add;
                    pSVar13 = (pCVar9->fields).List;
                    pIVar16 = pIVar12;
                    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04250ec1;
                    pMVar4 = pIVar12[(long)((long)ppSVar17 + 4)].method;
                    piVar1 = &(pSVar13->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (pSVar13->fields)._items;
                    if (pSVar5 == (System_Object_array *)0x0) goto label_04250ec1;
                    uVar3 = (pSVar13->fields)._size;
                    if (uVar3 < (uint)pSVar5->max_length) {
                      (pSVar13->fields)._size = uVar3 + 1;
                      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pMVar4;
                      ppSStack_50 = (System_String_o **)0x4250de9;
                      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                    }
                    else {
                      ppSStack_50 = (System_String_o **)0x4250d84;
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar13,(Il2CppObject *)pMVar4,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    }
                    ppSVar17 = (System_String_o **)((long)ppSVar17 + 1);
                    if ((long)(int)*(uint *)(pIVar12 + 3) <= (long)ppSVar17) {
                      return pCVar9;
                    }
                  } while (ppSVar17 < (undefined8 *)(ulong)*(uint *)(pIVar12 + 3));
                }
                goto label_04250ec6;
              }
            }
          }
          else {
            ppSVar17 = pSVar10->m_Items;
            pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
            unaff_R12.genericMethod = &MethodInfo_Object_get_Item;
            pIVar16 = (Il2CppRGCTXData *)0x0;
            do {
              if ((long)*(int *)&(pIVar14->_1).namespaze <= (long)pIVar16) goto label_04250d15;
              ppSStack_50 = (System_String_o **)0x4250bd8;
              pSVar11 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pIVar14,(int32_t)pIVar16,
                                   MethodInfo_Object_get_Item);
              pIVar12 = pIVar16;
              if ((pSVar11 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar11->klass != g_data_057b9c00))
              goto label_04250ecb;
              if ((Il2CppRGCTXData *)(ulong)(uint)pSVar10->max_length <= pIVar16) goto label_04250ec6;
              ppSVar17[(long)pIVar16] = pSVar11;
              ppSStack_50 = (System_String_o **)0x4250c12;
              il2cpp_runtime_helper_022b4080((long)&pCVar9->klass + (long)ppSVar17);
              pIVar16 = (Il2CppRGCTXData *)((long)pIVar16 + 1);
              pIVar14 = splitter[3].klass;
              pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)&pCVar9->monitor;
            } while (pIVar14 != (Il2CppClass *)0x0);
          }
        }
      }
      goto label_04250ec1;
    }
  }
  ppSStack_50 = (System_String_o **)0x4250edb;
  pIVar14 = (Il2CppClass *)splitter;
  il2cpp_runtime_helper_022b2fd0();
  pIVar16 = pIVar12;
label_04250edb:
  pSVar11 = (System_String_o *)0x0;
  ppSStack_50 = (System_String_o **)0x4250eec;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)pIVar14,0,MethodInfo_Object_get_Item);
  ppSStack_50 = (System_String_o **)0x4250ef1;
  il2cpp_runtime_helper_022b2c90();
  pIStack_78 = pIVar16;
  _Stack_70 = unaff_R12;
  pIStack_68 = splitter;
  pSStack_60 = pSVar10;
  pCStack_58 = pCVar9;
  ppSStack_50 = ppSVar17;
  if (g_data_057adb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adb5f = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pIVar21 = (Il2CppObject *)0x0;
  pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_System_String);
  if ((pIVar14 != (Il2CppClass *)0x0) &&
     (__this = (pIVar14->_1).this_arg.data, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._0_8_;
    pIVar20 = (Il2CppType *)auStack_90._8_8_;
    item = pIStack_80;
    if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_90._8_4_;
      __this_01.fields._version = auStack_90._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_90._0_8_;
      __this_01.fields._current = pIStack_80;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
      pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._0_8_;
      pIVar20 = (Il2CppType *)auStack_90._8_8_;
      pIVar21 = pIStack_80;
      if ((char)bVar8 != '\0') goto label_04251105;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar20,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar19,
            __this_00.fields._current = item,
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50), lVar6 = MethodInfo_Void_Add
            , pIVar21 = item, (char)bVar8 != '\0') {
        if ((item != (Il2CppObject *)0x0) && (pIVar14 = g_data_057b9c00, item->klass != g_data_057b9c00)) {
label_042510f5:
          il2cpp_runtime_helper_022b2fd0(item,pIVar14);
          goto label_04251100;
        }
        piVar1 = &(pSVar13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar13->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) {
          pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
          goto label_042510f5;
        }
        uVar3 = (pSVar13->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (pSVar13->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = item;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar13,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar20;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_02.fields._current = pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    goto label_042510bd;
  }
label_04251100:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04251105:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ != 1) {
label_04251163:
      __this_04.fields._8_8_ = pIVar20;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
      __this_04.fields._current = pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
      _Unwind_Resume(auVar18._0_8_);
    }
    plVar15 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar6 = *plVar15;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar20;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_03.fields._current = pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      goto label_04251163;
    }
label_042510bd:
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar10 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar13,MethodInfo_String_ToArray);
      pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)System_String__Join(pSVar11,pSVar10,(MethodInfo *)0x0);
      return pCVar9;
    }
  } while( true );
}


// CustomLogic.CustomLogicStringBuiltin$$Join
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Join (CustomLogic_CustomLogicListBuiltin_o* list, System_String_o* separator, const MethodInfo* method);
// 0x4250f00

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Join
          (CustomLogic_CustomLogicListBuiltin_o *list,System_String_o *separator,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_array *value;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  long *plVar8;
  Il2CppObject *item;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057adb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adb5f = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar11 = (Il2CppType *)auStack_48._8_8_;
    item = pIStack_38;
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_48._8_4_;
      __this_01.fields._version = auStack_48._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_01.fields._current = pIStack_38;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar11 = (Il2CppType *)auStack_48._8_8_;
      pIVar12 = pIStack_38;
      if ((char)bVar5 != '\0') goto label_04251105;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
            __this_00.fields._current = item,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), lVar4 = MethodInfo_Void_Add
            , pIVar12 = item, (char)bVar5 != '\0') {
        if ((item != (Il2CppObject *)0x0) && (pIVar7 = g_data_057b9c00, item->klass != g_data_057b9c00)) {
label_042510f5:
          il2cpp_runtime_helper_022b2fd0(item,pIVar7);
          goto label_04251100;
        }
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_05->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
          goto label_042510f5;
        }
        uVar2 = (__this_05->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_05->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
    }
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_02.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    goto label_042510bd;
  }
label_04251100:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04251105:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_04251163:
      __this_04.fields._8_8_ = pIVar11;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_04.fields._current = pIVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_04251163;
    }
label_042510bd:
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      value = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
      pSVar6 = System_String__Join(separator,value,(MethodInfo *)0x0);
      return pSVar6;
    }
  } while( true );
}


// CustomLogic.CustomLogicStringBuiltin$$Substring
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Substring (System_String_o* str, int32_t startIndex, const MethodInfo* method);
// 0x42511a0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Substring(System_String_o *str,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int32_t length;
  int32_t startIndex_00;
  System_String_o *newValue;
  ulong uVar15;
  undefined4 in_register_00000034;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_c6;
  uint uStack_c4;
  System_Collections_IEnumerator_o *pSStack_c0;
  long *plStack_b8;
  uint16_t auStack_62 [5];
  
  pSVar14 = (System_String_o *)CONCAT44(in_register_00000034,startIndex);
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Substring(str,startIndex,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Substring_3af8da0(str,(int32_t)pSVar14,length,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    return (System_String_o *)(ulong)(uint)(str->fields)._stringLength;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Replace_3af9030(str,pSVar14,newValue,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__Contains(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_01,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex_00,pSVar14,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_62[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_b8 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_c6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_c0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_c0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_c0->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_c4 = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_c0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar11)(pSStack_c0,(MethodInfo *)ppIVar11[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_c0->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_c0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar11)(pSStack_c0,(MethodInfo *)ppIVar11[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_c6 = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_c4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_c6 = System_String__get_Chars((System_String_o *)__this_03,uStack_c4,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_c6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_c4 = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_c0,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_c4;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_c4) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_c4) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_c6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = System_Char__ToString((uint16_t)&uStack_c6,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_62[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_62,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$SubstringWithLength
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__SubstringWithLength (System_String_o* str, int32_t startIndex, int32_t length, const MethodInfo* method);
// 0x42511c0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__SubstringWithLength
          (System_String_o *str,int32_t startIndex,int32_t length,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int32_t startIndex_00;
  System_String_o *newValue;
  ulong uVar15;
  undefined4 in_register_00000034;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_be;
  uint uStack_bc;
  System_Collections_IEnumerator_o *pSStack_b8;
  long *plStack_b0;
  uint16_t auStack_5a [5];
  
  pSVar14 = (System_String_o *)CONCAT44(in_register_00000034,startIndex);
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Substring_3af8da0(str,startIndex,length,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    return (System_String_o *)(ulong)(uint)(str->fields)._stringLength;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Replace_3af9030(str,pSVar14,newValue,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__Contains(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,pSVar14,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_01,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex_00,pSVar14,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_5a[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_b0 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_be = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_b8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_b8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_b8->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_bc = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_b8,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar11)(pSStack_b8,(MethodInfo *)ppIVar11[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_b8->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_b8,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar11)(pSStack_b8,(MethodInfo *)ppIVar11[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_be = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_bc = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_be = System_String__get_Chars((System_String_o *)__this_03,uStack_bc,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_be = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_bc = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_b8,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_bc;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_bc) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_bc) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_be = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_5a[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_5a,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Length
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__Length (System_String_o* str, const MethodInfo* method);
// 0x42511e0

int32_t CustomLogic_CustomLogicStringBuiltin__Length(System_String_o *str,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  int32_t startIndex;
  System_String_o *newValue;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_b6;
  uint uStack_b4;
  System_Collections_IEnumerator_o *pSStack_b0;
  long *plStack_a8;
  uint16_t auStack_52 [5];
  
  if (str != (System_String_o *)0x0) {
    return (str->fields)._stringLength;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Replace_3af9030(str,(System_String_o *)method,newValue,(MethodInfo *)0x0);
    return (int32_t)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__Contains(str,(System_String_o *)method,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,(System_String_o *)method,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,(System_String_o *)method,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return (int32_t)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,(System_String_o *)method,(MethodInfo *)0x0);
    return (int32_t)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_52[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return (int32_t)pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_a8 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_b6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_b0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_b0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_b0->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_b4 = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar11->methodPtr)(pSStack_b0,pVVar11->method);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_b0->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar11->methodPtr)(pSStack_b0,pVVar11->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_b4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,uStack_b4,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar15 = 0;
      System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_b4 = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_b0,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_b4;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_b4) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar19 <= (int)uStack_b4) goto label_040657e4;
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_52[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_52,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return (int32_t)str;
label_04065778:
  uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
  lVar16 = MethodInfo_Void_Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (__this_00->fields)._items;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0406581f;
  uVar18 = (__this_00->fields)._size;
  if (uVar18 < (uint)pSVar8->max_length) {
    (__this_00->fields)._size = uVar18 + 1;
    pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar14,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  uVar18 = (int32_t)uVar15 + 1;
  uVar15 = (ulong)uVar18;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
label_040657e4:
    return (int32_t)__this_00;
  }
  goto label_04065778;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Replace
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Replace (System_String_o* str, System_String_o* replace, System_String_o* with, const MethodInfo* method);
// 0x42511f0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Replace
          (System_String_o *str,System_String_o *replace,System_String_o *with,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int32_t startIndex;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_ae;
  uint uStack_ac;
  System_Collections_IEnumerator_o *pSStack_a8;
  long *plStack_a0;
  uint16_t auStack_4a [5];
  
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Replace_3af9030(str,replace,with,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__Contains(str,replace,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,replace,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,replace,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_01,bVar10);
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,replace,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_4a[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_a0 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_ae = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_a8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_a8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_a8->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_ac = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_a8,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar11)(pSStack_a8,(MethodInfo *)ppIVar11[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_a8->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_a8,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar11)(pSStack_a8,(MethodInfo *)ppIVar11[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_ae = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_ac = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_ae = System_String__get_Chars((System_String_o *)__this_03,uStack_ac,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_ae = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_ac = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_a8,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_ac;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_ac) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_ac) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_ae = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_4a[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_4a,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__Contains (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x4251210

bool_conflict
CustomLogic_CustomLogicStringBuiltin__Contains(System_String_o *str,System_String_o *match,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  int32_t startIndex;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_a6;
  uint uStack_a4;
  System_Collections_IEnumerator_o *pSStack_a0;
  long *plStack_98;
  uint16_t auStack_42 [5];
  
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__Contains(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,match,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_42[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return (bool_conflict)pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_98 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_a6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_a0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_a0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_a0->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_a4 = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar11->methodPtr)(pSStack_a0,pVVar11->method);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_a0->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar11->methodPtr)(pSStack_a0,pVVar11->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_a4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,uStack_a4,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar15 = 0;
      System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_a4 = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_a0,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_a4;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_a4) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar19 <= (int)uStack_a4) goto label_040657e4;
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_42[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_42,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return (bool_conflict)str;
label_04065778:
  uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
  lVar16 = MethodInfo_Void_Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (__this_00->fields)._items;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0406581f;
  uVar18 = (__this_00->fields)._size;
  if (uVar18 < (uint)pSVar8->max_length) {
    (__this_00->fields)._size = uVar18 + 1;
    pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar14,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  uVar18 = (int32_t)uVar15 + 1;
  uVar15 = (ulong)uVar18;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
label_040657e4:
    return (bool_conflict)__this_00;
  }
  goto label_04065778;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$StartsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__StartsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x4251230

bool_conflict
CustomLogic_CustomLogicStringBuiltin__StartsWith
          (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  int32_t startIndex;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_9e;
  uint uStack_9c;
  System_Collections_IEnumerator_o *pSStack_98;
  long *plStack_90;
  uint16_t auStack_3a [5];
  
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,match,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_3a[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return (bool_conflict)pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_90 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_9e = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_98 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_98 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_98->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_9c = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_98,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar11->methodPtr)(pSStack_98,pVVar11->method);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_98->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_98,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar11->methodPtr)(pSStack_98,pVVar11->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_9e = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_9c = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_9e = System_String__get_Chars((System_String_o *)__this_03,uStack_9c,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar15 = 0;
      System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_9e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_9c = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_98,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_9c;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_9c) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar19 <= (int)uStack_9c) goto label_040657e4;
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_3a[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_3a,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return (bool_conflict)str;
label_04065778:
  uStack_9e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Char__ToString((uint16_t)&uStack_9e,(MethodInfo *)0x0);
  lVar16 = MethodInfo_Void_Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (__this_00->fields)._items;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0406581f;
  uVar18 = (__this_00->fields)._size;
  if (uVar18 < (uint)pSVar8->max_length) {
    (__this_00->fields)._size = uVar18 + 1;
    pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar14,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  uVar18 = (int32_t)uVar15 + 1;
  uVar15 = (ulong)uVar18;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
label_040657e4:
    return (bool_conflict)__this_00;
  }
  goto label_04065778;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$EndsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__EndsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x4251250

bool_conflict
CustomLogic_CustomLogicStringBuiltin__EndsWith(System_String_o *str,System_String_o *match,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  int32_t startIndex;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_96;
  uint uStack_94;
  System_Collections_IEnumerator_o *pSStack_90;
  long *plStack_88;
  uint16_t auStack_32 [5];
  
  if (str != (System_String_o *)0x0) {
    bVar10 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,match,(MethodInfo *)0x0);
    return (bool_conflict)pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_32[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return (bool_conflict)pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_88 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_96 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_90 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_90 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_90->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_94 = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_90,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar11->methodPtr)(pSStack_90,pVVar11->method);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_90->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_90,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar11->methodPtr)(pSStack_90,pVVar11->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_96 = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_94 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_96 = System_String__get_Chars((System_String_o *)__this_03,uStack_94,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar15 = 0;
      System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_96 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_94 = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_90,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_94;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_94) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar19 <= (int)uStack_94) goto label_040657e4;
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_32[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_32,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return (bool_conflict)str;
label_04065778:
  uStack_96 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Char__ToString((uint16_t)&uStack_96,(MethodInfo *)0x0);
  lVar16 = MethodInfo_Void_Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (__this_00->fields)._items;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0406581f;
  uVar18 = (__this_00->fields)._size;
  if (uVar18 < (uint)pSVar8->max_length) {
    (__this_00->fields)._size = uVar18 + 1;
    pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar14,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  uVar18 = (int32_t)uVar15 + 1;
  uVar15 = (ulong)uVar18;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
label_040657e4:
    return (bool_conflict)__this_00;
  }
  goto label_04065778;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Trim
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Trim (System_String_o* str, const MethodInfo* method);
// 0x4251270

System_String_o * CustomLogic_CustomLogicStringBuiltin__Trim(System_String_o *str,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  int32_t startIndex;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_8e;
  uint uStack_8c;
  System_Collections_IEnumerator_o *pSStack_88;
  long *plStack_80;
  uint16_t auStack_2a [5];
  
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,startIndex,(System_String_o *)method,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_2a[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_80 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_8e = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_88 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_88 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_88->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_8c = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_88,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar11)(pSStack_88,(MethodInfo *)ppIVar11[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_88->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_88,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar11)(pSStack_88,(MethodInfo *)ppIVar11[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_8e = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_8e,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_8c = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_8e = System_String__get_Chars((System_String_o *)__this_03,uStack_8c,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_8e,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_8e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_8e,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_8c = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_88,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_8c;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_8c) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_8c) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_8e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = System_Char__ToString((uint16_t)&uStack_8e,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_2a[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_2a,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Insert
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Insert (System_String_o* str, System_String_o* insert, int32_t index, const MethodInfo* method);
// 0x4251290

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Insert
          (System_String_o *str,System_String_o *insert,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_86;
  uint uStack_84;
  System_Collections_IEnumerator_o *pSStack_80;
  long *plStack_78;
  uint16_t auStack_22 [5];
  
  if (str != (System_String_o *)0x0) {
    pSVar14 = System_String__Insert(str,index,insert,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_22[0] = 0;
  pSVar14 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar14 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return pSVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_78 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_86 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_80 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_80 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_80->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_84 = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_80,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar11)(pSStack_80,(MethodInfo *)ppIVar11[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_80->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_80,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar11)(pSStack_80,(MethodInfo *)ppIVar11[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_86 = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = System_Char__ToString((uint16_t)&uStack_86,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar14 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_84 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_86 = System_String__get_Chars((System_String_o *)__this_03,uStack_84,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_86,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_86 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_86,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_84 = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_80,TypeInfo_IDisposable);
          if (plVar12 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar13;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar12 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar12 != (long *)0x0) {
          lVar16 = *plVar12;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar13[1];
          (*(code *)*puVar13)(plVar12);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_84;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_84) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_84) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_86 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = System_Char__ToString((uint16_t)&uStack_86,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_22[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)auStack_22,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$Capitalize
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Capitalize (System_String_o* str, const MethodInfo* method);
// 0x42512b0

System_String_o * CustomLogic_CustomLogicStringBuiltin__Capitalize(System_String_o *str,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar12;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_7e;
  uint uStack_7c;
  System_Collections_IEnumerator_o *pSStack_78;
  long *plStack_70;
  uint16_t auStack_1a [5];
  
  if (g_data_057adb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057adb60 = '\x01';
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_1a[0] = 0;
  pSVar11 = str;
  bVar10 = System_String__op_Equality
                     (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (str == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar11 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar11,"",(MethodInfo *)0x0);
        return pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_70 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_7e = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_78 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_78 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_78->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_7c = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar12)(pSStack_78,(MethodInfo *)ppIVar12[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_78->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar12)(pSStack_78,(MethodInfo *)ppIVar12[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_7e = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar11 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar11;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar11 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_7c = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_7e = System_String__get_Chars((System_String_o *)__this_03,uStack_7c,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_7e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_7c = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar13 = (long *)il2cpp_runtime_helper_023051f0(pSStack_78,TypeInfo_IDisposable);
          if (plVar13 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar13;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar14 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar14;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar13 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar13 != (long *)0x0) {
          lVar16 = *plVar13;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar14 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar14[1];
          (*(code *)*puVar14)(plVar13);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_7c;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_7c) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_7c) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_7e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((str->fields)._stringLength < 2) {
      str = System_String__ToUpper(str,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(str,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_1a[0] = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar11 = System_Char__ToString((uint16_t)auStack_1a,(MethodInfo *)0x0);
      str1 = System_String__Substring(str,1,(MethodInfo *)0x0);
      str = System_String__Concat_3ae5ba0(pSVar11,str1,(MethodInfo *)0x0);
    }
  }
  return str;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// CustomLogic.CustomLogicStringBuiltin$$ToUpper
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToUpper (System_String_o* str, const MethodInfo* method);
// 0x4251320

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToUpper(System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  
  if (str != (System_String_o *)0x0) {
    pSVar2 = System_String__ToUpper(str,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLower(str,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf_3afbe10(str,(System_String_o *)method,4,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,iVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb61 == '\0') {
    il2cpp_runtime_helper_023445d0(&"String");
    g_data_057adb61 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$ToLower
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToLower (System_String_o* str, const MethodInfo* method);
// 0x4251340

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToLower(System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  
  if (str != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLower(str,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (str != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf_3afbe10(str,(System_String_o *)method,4,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,iVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb61 == '\0') {
    il2cpp_runtime_helper_023445d0(&"String");
    g_data_057adb61 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$IndexOf
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf (System_String_o* str, System_String_o* substring, const MethodInfo* method);
// 0x4251360

int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf
                  (System_String_o *str,System_String_o *substring,MethodInfo *method)

{
  int32_t iVar1;
  
  if (str != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf_3afbe10(str,substring,4,(MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb61 == '\0') {
    il2cpp_runtime_helper_023445d0(&"String");
    g_data_057adb61 = '\x01';
  }
  return (int32_t)"String";
}


// CustomLogic.CustomLogicStringBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_ClassName (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x4251380

System_String_o *
CustomLogic_CustomLogicStringBuiltin__get_ClassName
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057adb61 == '\0') {
    il2cpp_runtime_helper_023445d0(&"String");
    g_data_057adb61 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsAbstract (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x42513b0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsStatic (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x42513c0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_IsStatic
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStringBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x42513d0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


