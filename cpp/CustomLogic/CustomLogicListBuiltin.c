// Type: CustomLogic.CustomLogicListBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicListBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicListBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40c1db0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  il2cpp_array_size_t iVar2;
  long lVar3;
  uint32_t uVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  undefined8 *puVar8;
  System_Func_T__object__o *getter;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  System_Object_array *s;
  undefined1 auVar12 [16];
  undefined8 uStack_30;
  
  s = args;
  if (g_data_057ac575 == '\0') {
    s = (System_Object_array *)&TypeInfo_CustomLogicListBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac575 = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    iVar2 = args->max_length;
    auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    pCVar10 = auVar12._0_8_;
    if (iVar2 == 0) {
      CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,method);
    }
    else {
      CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50(pCVar10,args,auVar12._8_8_);
    }
    return pCVar10;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  puVar11 = &uStack_30;
  if (g_data_057ac576 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RemoveAt");
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Filter");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Sort");
    il2cpp_runtime_helper_023445d0(&"Randomize");
    il2cpp_runtime_helper_023445d0(&"SortCustom");
    il2cpp_runtime_helper_023445d0(&"Reduce");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"InsertAt");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"ToSet");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac576 = '\x01';
  }
  uVar4 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
  if (uVar4 < 0x658f3665) {
    if (uVar4 < 0x28b19ea4) {
      if (uVar4 < 0xbd14ccd) {
        if (uVar4 == 0x4a57fc2) {
          bVar5 = System_String__op_Equality((System_String_o *)s,"Clear",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ac578 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057ac578 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar3 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar3 + 8) = pSVar9;
              il2cpp_runtime_helper_022b4080(lVar3 + 8,pSVar9);
            }
            pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            return pCVar10;
          }
        }
        else if ((uVar4 == 0xbd14ccc) &&
                (bVar5 = System_String__op_Equality((System_String_o *)s,"ToSet",(MethodInfo *)0x0),
                (char)bVar5 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac586 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToSet_b__17_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac586 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x78) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return pCVar10;
        }
      }
      else if (uVar4 == 0x21a5901d) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Remove",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac57e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac57e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x38) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x28b19ea3) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"Set",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x18) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 < 0x486bbbe1) {
      if (uVar4 == 0x44a7f051) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Map",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac583 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Map_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac583 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x60) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x60,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x486bbbe0) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"RemoveAt",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveAt_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x30) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 == 0x4b0b408d) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"InsertAt",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__InsertAt_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0x658f3664) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Copy",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac587 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Copy_b__18_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac587 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x80) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x80,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 < 0x9dc3aa15) {
    if (uVar4 < 0x8459a7f2) {
      if (uVar4 == 0x8459a7f1) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Sort",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac580 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Sort_b__11_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac580 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x48) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x48,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x669c4958) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"Contains",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x40) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x40,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 == 0x9450dd5c) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"Randomize",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac585 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Randomize_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac585 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x70) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0x9dc3aa14) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Add",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac57b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac57b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x20) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x20,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 < 0xb6973ef8) {
    if (uVar4 == 0xa42c4e6a) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"SortCustom",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac581 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SortCustom_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac581 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x50) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x50,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0xb6973ef7) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Get",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac579 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac579 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 == 0xbd680907) {
    bVar5 = System_String__op_Equality((System_String_o *)s,"Reduce",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac584 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Reduce_b__15_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac584 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x68) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x68,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 == 0xf4a9c097) {
    bVar5 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac582 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Filter_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac582 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x58) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x58,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return pCVar10;
    }
  }
  else if ((uVar4 == 0xe1e7b894) &&
          (bVar5 = System_String__op_Equality((System_String_o *)s,"Count",(MethodInfo *)0x0),
          (char)bVar5 != '\0')) {
    puVar8 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puVar11 = (undefined8 *)&stack0xffffffffffffffe8;
    pSVar6 = (System_String_o *)0x0;
    goto CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicListBuiltin not found");
  pSVar6 = System_String__Concat_3af7150(pSVar6,(System_String_o *)s,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120(unaff_RBX,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar8 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar7);
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)puVar11 + -8) = pSVar6;
  *(System_Exception_o **)((long)puVar11 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)puVar11 + -0x18) = puVar8;
  if (g_data_057ac577 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40c24d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40c24e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40c24f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40c24fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object);
    g_data_057ac577 = '\x01';
  }
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40c2513;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object);
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40c252c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40c253b;
  pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40c2555;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40c3da0

void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac589 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac589 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40c3e10

void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c3e20

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar12;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  System_Object_array *pSVar16;
  undefined1 *puVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *method_00;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  Il2CppObject *extraout_RDX_06;
  Il2CppObject *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  int index;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  MethodInfo *pMVar20;
  Il2CppObject *pIVar21;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *__this_03;
  CustomLogic_CustomLogicEvaluator_o *pCVar22;
  CustomLogic_BuiltinClassInstance_o *__this_04;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined1 auVar23 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  MethodInfo *pMStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  System_Collections_Generic_List_object__o *pSStack_48;
  undefined8 uStack_40;
  MethodInfo *pMStack_38;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Clear(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = (MethodInfo *)__c;
  __this_03 = (long *)__this;
  if (g_data_057ac58a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58a = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c3f11:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if ((MethodInfo *)__c != (MethodInfo *)0x0) {
      if (g_data_057ac564 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
        g_data_057ac564 = '\x01';
      }
      __this_03 = (long *)((MethodInfo *)__c)->parameters;
      if (iVar6 < 0) {
        if ((System_Collections_Generic_List_object__o *)__this_03 !=
            (System_Collections_Generic_List_object__o *)0x0) {
          iVar6 = iVar6 + (((System_Collections_Generic_List_object__o *)__this_03)->fields)._size;
          goto label_040c3efa;
        }
      }
      else if ((System_Collections_Generic_List_object__o *)__this_03 !=
               (System_Collections_Generic_List_object__o *)0x0) {
label_040c3efa:
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,iVar6,MethodInfo_Object_get_Item);
        return pIVar10;
      }
    }
    goto label_040c3f11;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  pMStack_38 = (MethodInfo *)__c;
  if (g_data_057ac58b == '\0') {
    uStack_40 = 0x40c3f40;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    uStack_40 = 0x40c3f4c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58b = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R15 = *(System_Collections_Generic_List_object__o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_40 = 0x40c3f7a;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_40 = 0x40c3f8c;
      pMVar19 = MethodInfo_Int32_ConvertTo_Int32;
      __this_03 = (long *)unaff_R15;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)unaff_R15,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          uStack_40 = 0x40c3fa5;
          CustomLogic_CustomLogicListBuiltin__Set
                    ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,iVar6,
                     *(Il2CppObject **)(extraout_RDX_00 + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c3fb2;
      }
    }
    uStack_40 = 0x40c3fb2;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c3fb2:
  uStack_40 = 0x40c3fb7;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  pMVar20 = auVar23._8_8_;
  uStack_40 = auVar23._0_8_;
  if (pMVar20 == (MethodInfo *)0x0) {
label_040c3fe1:
    pSStack_48 = (System_Collections_Generic_List_object__o *)0x40c3fe6;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar20->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      pSStack_48 = (System_Collections_Generic_List_object__o *)0x40c3fdd;
      CustomLogic_CustomLogicListBuiltin__Add
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar20->klass,pMVar20);
      return (Il2CppObject *)0x0;
    }
    goto label_040c3fe1;
  }
  pSStack_48 = (System_Collections_Generic_List_object__o *)0x40c3feb;
  il2cpp_runtime_helper_022b2ca0();
  pMVar20 = pMVar19;
  lStack_58 = extraout_RDX_00;
  pMStack_50 = pMVar18;
  pSStack_48 = unaff_R15;
  if (g_data_057ac58c == '\0') {
    pMStack_60 = (MethodInfo *)0x40c4010;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    pMStack_60 = (MethodInfo *)0x40c401c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58c = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      __this_03 = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_60 = (MethodInfo *)0x40c404a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_60 = (MethodInfo *)0x40c405c;
      pMVar20 = MethodInfo_Int32_ConvertTo_Int32;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        if (pMVar19 != (MethodInfo *)0x0) {
          pMStack_60 = (MethodInfo *)0x40c4075;
          CustomLogic_CustomLogicListBuiltin__InsertAt
                    ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,iVar6,
                     *(Il2CppObject **)(extraout_RDX_01 + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c4082;
      }
    }
    pMStack_60 = (MethodInfo *)0x40c4082;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4082:
  pMStack_60 = (MethodInfo *)0x40c4087;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar23._8_8_;
  uStack_70 = auVar23._0_8_;
  pMVar18 = pMVar20;
  lStack_68 = extraout_RDX_01;
  pMStack_60 = pMVar19;
  if (g_data_057ac58d == '\0') {
    uStack_78 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    uStack_78 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (lVar13 == 0) {
label_040c4114:
    uStack_78 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    __this_03 = *(long **)(lVar13 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_78 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_78 = 0x40c40fb;
    pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar20 != (MethodInfo *)0x0) {
      uStack_78 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar20,iVar6,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_78 = 0x40c411e;
  auVar23 = il2cpp_runtime_helper_022b2ca0();
  pMVar19 = auVar23._8_8_;
  uStack_78 = auVar23._0_8_;
  if (pMVar19 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_80 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar19->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar18 != (MethodInfo *)0x0) {
      uStack_80 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,(Il2CppObject *)pMVar19->klass,pMVar19);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_80 = 0x40c414b;
  auVar23 = il2cpp_runtime_helper_022b2ca0();
  pMVar19 = auVar23._8_8_;
  uStack_80 = auVar23._0_8_;
  if (pMVar19 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar19->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar18 != (MethodInfo *)0x0) {
      bVar7 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,(Il2CppObject *)pMVar19->klass,
                         pMVar19);
      uStack_80 = CONCAT17((char)bVar7,(undefined7)uStack_80);
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
      return pIVar10;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar18 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar19 = pMVar18;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_03 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      __this_03 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        if (pMVar19 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar12 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar19 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar11 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar11,pMVar19);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar8 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar11->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar11->fields).List,pSVar8);
      return (Il2CppObject *)pCVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar19 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar7 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar22,(Il2CppObject *)pMVar18,
                       &((((System_Collections_Generic_List_object__o *)__this_03)->fields)._items)->obj,
                       (MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar16 = (pCVar22->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar15 = il2cpp_runtime_helper_0231b270();
    pIVar21 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar15);
  }
  else {
    if ((pMVar19 != (MethodInfo *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pMVar19), lVar13 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar19;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_06 != (Il2CppObject *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_06), lVar13 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_06;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar16,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar21 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar14 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar14;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar21 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar21), lVar13 != 0)) {
    if ((int)pSVar16->max_length == 0) goto label_040c475b;
    pSVar16->m_Items[0] = pIVar21;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    if ((pCVar22 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar22,(CustomLogic_UserMethod_o *)userMethod,pSVar16,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar17 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar17 >> 8),*puVar17);
    }
    goto label_040c4760;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar22,pCVar1,pSVar16,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
    goto label_040c497d;
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if ((extraout_RDX_07 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_07), lVar13 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = extraout_RDX_07;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar22,pCVar1,pSVar16,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_04 = *(CustomLogic_BuiltinClassInstance_o **)(lVar13 + 0x10);
  if (__this_04 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_04,(__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_08,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_04[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_04[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_04[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_04[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c3e40

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar12;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  System_Object_array *pSVar16;
  undefined1 *puVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  Il2CppObject *extraout_RDX_06;
  undefined8 extraout_RDX_07;
  int index;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  MethodInfo *pMVar20;
  Il2CppObject *pIVar21;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *__this_03;
  CustomLogic_CustomLogicEvaluator_o *pCVar22;
  CustomLogic_BuiltinClassInstance_o *__this_04;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined1 auVar23 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  MethodInfo *pMStack_58;
  long lStack_50;
  MethodInfo *pMStack_48;
  System_Collections_Generic_List_object__o *pSStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_30;
  
  pMVar18 = (MethodInfo *)__c;
  __this_03 = (long *)__this;
  if (g_data_057ac58a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c3f11:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this_03 = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (g_data_057ac564 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
        g_data_057ac564 = '\x01';
      }
      __this_03 = (long *)(__c->fields).List;
      if (iVar6 < 0) {
        if ((System_Collections_Generic_List_object__o *)__this_03 !=
            (System_Collections_Generic_List_object__o *)0x0) {
          iVar6 = iVar6 + (((System_Collections_Generic_List_object__o *)__this_03)->fields)._size;
          goto label_040c3efa;
        }
      }
      else if ((System_Collections_Generic_List_object__o *)__this_03 !=
               (System_Collections_Generic_List_object__o *)0x0) {
label_040c3efa:
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,iVar6,MethodInfo_Object_get_Item);
        return pIVar10;
      }
    }
    goto label_040c3f11;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  pCStack_30 = __c;
  if (g_data_057ac58b == '\0') {
    uStack_38 = 0x40c3f40;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    uStack_38 = 0x40c3f4c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58b = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R15 = *(System_Collections_Generic_List_object__o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_38 = 0x40c3f7a;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_38 = 0x40c3f8c;
      pMVar19 = MethodInfo_Int32_ConvertTo_Int32;
      __this_03 = (long *)unaff_R15;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)unaff_R15,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          uStack_38 = 0x40c3fa5;
          CustomLogic_CustomLogicListBuiltin__Set
                    ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,iVar6,
                     *(Il2CppObject **)(extraout_RDX + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c3fb2;
      }
    }
    uStack_38 = 0x40c3fb2;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c3fb2:
  uStack_38 = 0x40c3fb7;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  pMVar20 = auVar23._8_8_;
  uStack_38 = auVar23._0_8_;
  if (pMVar20 == (MethodInfo *)0x0) {
label_040c3fe1:
    pSStack_40 = (System_Collections_Generic_List_object__o *)0x40c3fe6;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar20->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      pSStack_40 = (System_Collections_Generic_List_object__o *)0x40c3fdd;
      CustomLogic_CustomLogicListBuiltin__Add
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar20->klass,pMVar20);
      return (Il2CppObject *)0x0;
    }
    goto label_040c3fe1;
  }
  pSStack_40 = (System_Collections_Generic_List_object__o *)0x40c3feb;
  il2cpp_runtime_helper_022b2ca0();
  pMVar20 = pMVar19;
  lStack_50 = extraout_RDX;
  pMStack_48 = pMVar18;
  pSStack_40 = unaff_R15;
  if (g_data_057ac58c == '\0') {
    pMStack_58 = (MethodInfo *)0x40c4010;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    pMStack_58 = (MethodInfo *)0x40c401c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58c = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this_03 = *(long **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_58 = (MethodInfo *)0x40c404a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_58 = (MethodInfo *)0x40c405c;
      pMVar20 = MethodInfo_Int32_ConvertTo_Int32;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        if (pMVar19 != (MethodInfo *)0x0) {
          pMStack_58 = (MethodInfo *)0x40c4075;
          CustomLogic_CustomLogicListBuiltin__InsertAt
                    ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,iVar6,
                     *(Il2CppObject **)(extraout_RDX_00 + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c4082;
      }
    }
    pMStack_58 = (MethodInfo *)0x40c4082;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4082:
  pMStack_58 = (MethodInfo *)0x40c4087;
  auVar23 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar23._8_8_;
  uStack_68 = auVar23._0_8_;
  pMVar18 = pMVar20;
  lStack_60 = extraout_RDX_00;
  pMStack_58 = pMVar19;
  if (g_data_057ac58d == '\0') {
    uStack_70 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    uStack_70 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (lVar13 == 0) {
label_040c4114:
    uStack_70 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    __this_03 = *(long **)(lVar13 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_70 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_70 = 0x40c40fb;
    pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__this_03,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar20 != (MethodInfo *)0x0) {
      uStack_70 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar20,iVar6,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_70 = 0x40c411e;
  auVar23 = il2cpp_runtime_helper_022b2ca0();
  pMVar19 = auVar23._8_8_;
  uStack_70 = auVar23._0_8_;
  if (pMVar19 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_78 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar19->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar18 != (MethodInfo *)0x0) {
      uStack_78 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,(Il2CppObject *)pMVar19->klass,pMVar19);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_78 = 0x40c414b;
  auVar23 = il2cpp_runtime_helper_022b2ca0();
  pMVar19 = auVar23._8_8_;
  uStack_78 = auVar23._0_8_;
  if (pMVar19 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar19->name != 0) {
    __this_03 = (long *)0x0;
    if (pMVar18 != (MethodInfo *)0x0) {
      bVar7 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,(Il2CppObject *)pMVar19->klass,
                         pMVar19);
      uStack_78 = CONCAT17((char)bVar7,(undefined7)uStack_78);
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
      return pIVar10;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar18 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar19 = pMVar18;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    __this_03 = *(long **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_03 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      __this_03 = *(long **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)__this_03,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        if (pMVar19 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar12 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar19 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar11 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar11,pMVar19);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar8 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar11->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar11->fields).List,pSVar8);
      return (Il2CppObject *)pCVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar19 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar7 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar22,(Il2CppObject *)pMVar18,
                       &((((System_Collections_Generic_List_object__o *)__this_03)->fields)._items)->obj,
                       (MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar16 = (pCVar22->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar15 = il2cpp_runtime_helper_0231b270();
    pIVar21 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar15);
  }
  else {
    if ((pMVar19 != (MethodInfo *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pMVar19), lVar13 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar19;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_05 != (Il2CppObject *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_05), lVar13 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_05;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar16,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar21 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar14 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar14;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar21 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar21), lVar13 != 0)) {
    if ((int)pSVar16->max_length == 0) goto label_040c475b;
    pSVar16->m_Items[0] = pIVar21;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    if ((pCVar22 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar22,(CustomLogic_UserMethod_o *)userMethod,pSVar16,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar17 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar17 >> 8),*puVar17);
    }
    goto label_040c4760;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar22,pCVar1,pSVar16,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar22 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
    goto label_040c497d;
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if ((extraout_RDX_06 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_06), lVar13 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = extraout_RDX_06;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        if (pCVar22 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar22,pCVar1,pSVar16,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_04 = *(CustomLogic_BuiltinClassInstance_o **)(lVar13 + 0x10);
  if (__this_04 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_04,(__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_07,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_04[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_04[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_04[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_04[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c3f20

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar12;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  System_Object_array *pSVar16;
  undefined1 *puVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  MethodInfo *method_00;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  undefined8 extraout_RDX_06;
  int index;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  MethodInfo *method_01;
  Il2CppObject *pIVar20;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar21;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  Il2CppObject *unaff_R15;
  undefined1 auVar22 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  MethodInfo *pMStack_40;
  System_Object_array *pSStack_38;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  pMVar18 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58b == '\0') {
    uStack_20 = 0x40c3f40;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    uStack_20 = 0x40c3f4c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R15 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_20 = 0x40c3f7a;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_20 = 0x40c3f8c;
      pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
      obj = (long *)unaff_R15;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(unaff_R15,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)__a->max_length) {
        if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          uStack_20 = 0x40c3fa5;
          CustomLogic_CustomLogicListBuiltin__Set(__c,iVar6,__a->m_Items[1],method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c3fb2;
      }
    }
    uStack_20 = 0x40c3fb2;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c3fb2:
  uStack_20 = 0x40c3fb7;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  pMVar19 = auVar22._8_8_;
  uStack_20 = auVar22._0_8_;
  if (pMVar19 == (MethodInfo *)0x0) {
label_040c3fe1:
    pIStack_28 = (Il2CppObject *)0x40c3fe6;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar19->name != 0) {
    obj = (long *)0x0;
    if (pMVar18 != (MethodInfo *)0x0) {
      pIStack_28 = (Il2CppObject *)0x40c3fdd;
      CustomLogic_CustomLogicListBuiltin__Add
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,(Il2CppObject *)pMVar19->klass,pMVar19);
      return (Il2CppObject *)0x0;
    }
    goto label_040c3fe1;
  }
  pIStack_28 = (Il2CppObject *)0x40c3feb;
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  pSStack_38 = __a;
  pCStack_30 = __c;
  pIStack_28 = unaff_R15;
  if (g_data_057ac58c == '\0') {
    pMStack_40 = (MethodInfo *)0x40c4010;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    pMStack_40 = (MethodInfo *)0x40c401c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58c = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      obj = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_40 = (MethodInfo *)0x40c404a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_40 = (MethodInfo *)0x40c405c;
      pMVar19 = MethodInfo_Int32_ConvertTo_Int32;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pMStack_40 = (MethodInfo *)0x40c4075;
          CustomLogic_CustomLogicListBuiltin__InsertAt
                    ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,iVar6,
                     *(Il2CppObject **)(extraout_RDX + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c4082;
      }
    }
    pMStack_40 = (MethodInfo *)0x40c4082;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4082:
  pMStack_40 = (MethodInfo *)0x40c4087;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar22._8_8_;
  uStack_50 = auVar22._0_8_;
  method_01 = pMVar19;
  lStack_48 = extraout_RDX;
  pMStack_40 = pMVar18;
  if (g_data_057ac58d == '\0') {
    uStack_58 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    uStack_58 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (lVar13 == 0) {
label_040c4114:
    uStack_58 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    obj = *(long **)(lVar13 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_58 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_58 = 0x40c40fb;
    method_01 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar19 != (MethodInfo *)0x0) {
      uStack_58 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,iVar6,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_58 = 0x40c411e;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_58 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_60 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (method_01 != (MethodInfo *)0x0) {
      uStack_60 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)method_01,(Il2CppObject *)pMVar18->klass,pMVar18);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_60 = 0x40c414b;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_60 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (method_01 != (MethodInfo *)0x0) {
      bVar7 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)method_01,(Il2CppObject *)pMVar18->klass,
                         pMVar18);
      uStack_60 = CONCAT17((char)bVar7,(undefined7)uStack_60);
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
      return pIVar10;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_01 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)method_01,method_01);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = method_01;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (method_01 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar12 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pMVar18 = pMVar19;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar11 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar11,pMVar18);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar19->parameters;
    pSVar8 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar11->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar11->fields).List,pSVar8);
      return (Il2CppObject *)pCVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar19;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar7 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar21,(Il2CppObject *)pMVar19,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar16 = (pCVar21->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar15 = il2cpp_runtime_helper_0231b270();
    pIVar20 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar15);
  }
  else {
    if ((pMVar18 != (MethodInfo *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pMVar18), lVar13 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar18;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar13 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_04;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar16,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar20 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar14 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar14;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar20 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar20), lVar13 != 0)) {
    if ((int)pSVar16->max_length == 0) goto label_040c475b;
    pSVar16->m_Items[0] = pIVar20;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    if ((pCVar21 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,(CustomLogic_UserMethod_o *)userMethod,pSVar16,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar17 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar17 >> 8),*puVar17);
    }
    goto label_040c4760;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
    goto label_040c497d;
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if ((extraout_RDX_05 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_05), lVar13 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = extraout_RDX_05;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar13 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_06,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c3fc0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar12;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  System_Object_array *pSVar16;
  undefined1 *puVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  MethodInfo *method_00;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  undefined8 extraout_RDX_06;
  int index;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar21;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  undefined1 auVar22 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  MethodInfo *pMStack_28;
  
  if (__a == (System_Object_array *)0x0) {
label_040c3fe1:
    il2cpp_runtime_helper_022b2c90();
    obj = (long *)__this;
  }
  else {
    obj = (long *)__this;
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        CustomLogic_CustomLogicListBuiltin__Add(__c,__a->m_Items[0],(MethodInfo *)__a);
        return (Il2CppObject *)0x0;
      }
      goto label_040c3fe1;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = (MethodInfo *)__c;
  if (g_data_057ac58c == '\0') {
    pMStack_28 = (MethodInfo *)0x40c4010;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    pMStack_28 = (MethodInfo *)0x40c401c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58c = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      obj = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_28 = (MethodInfo *)0x40c404a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_28 = (MethodInfo *)0x40c405c;
      pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        if ((MethodInfo *)__c != (MethodInfo *)0x0) {
          pMStack_28 = (MethodInfo *)0x40c4075;
          CustomLogic_CustomLogicListBuiltin__InsertAt
                    (__c,iVar6,*(Il2CppObject **)(extraout_RDX + 0x28),method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c4082;
      }
    }
    pMStack_28 = (MethodInfo *)0x40c4082;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4082:
  pMStack_28 = (MethodInfo *)0x40c4087;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar22._8_8_;
  uStack_38 = auVar22._0_8_;
  pMVar19 = pMVar18;
  lStack_30 = extraout_RDX;
  pMStack_28 = (MethodInfo *)__c;
  if (g_data_057ac58d == '\0') {
    uStack_40 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    uStack_40 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (lVar13 == 0) {
label_040c4114:
    uStack_40 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    obj = *(long **)(lVar13 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x40c40fb;
    pMVar19 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar18 != (MethodInfo *)0x0) {
      uStack_40 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,iVar6,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_40 = 0x40c411e;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_40 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_48 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      uStack_48 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar18->klass,pMVar18);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_48 = 0x40c414b;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_48 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      bVar7 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar18->klass,
                         pMVar18);
      uStack_48 = CONCAT17((char)bVar7,(undefined7)uStack_48);
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
      return pIVar10;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar19 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar19;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar12 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pMVar18 = pMVar19;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar11 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar11,pMVar18);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar19->parameters;
    pSVar8 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar11->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar11->fields).List,pSVar8);
      return (Il2CppObject *)pCVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar19;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar7 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar21,(Il2CppObject *)pMVar19,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar16 = (pCVar21->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar15 = il2cpp_runtime_helper_0231b270();
    pIVar20 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar15);
  }
  else {
    if ((pMVar18 != (MethodInfo *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pMVar18), lVar13 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar18;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar13 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_04;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar16,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar20 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar14 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar14;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar20 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar20), lVar13 != 0)) {
    if ((int)pSVar16->max_length == 0) goto label_040c475b;
    pSVar16->m_Items[0] = pIVar20;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    if ((pCVar21 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,(CustomLogic_UserMethod_o *)userMethod,pSVar16,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar17 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar17 >> 8),*puVar17);
    }
    goto label_040c4760;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
    goto label_040c497d;
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if ((extraout_RDX_05 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_05), lVar13 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = extraout_RDX_05;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar13 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_06,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__InsertAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c3ff0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar12;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  System_Object_array *pSVar16;
  undefined1 *puVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int index;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar21;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  undefined1 auVar22 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_20;
  
  pMVar18 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58c == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c4010;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c401c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = (long *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c404a;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c405c;
      pMVar18 = MethodInfo_Int32_ConvertTo_Int32;
      iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)__a->max_length) {
        if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c4075;
          CustomLogic_CustomLogicListBuiltin__InsertAt(__c,iVar6,__a->m_Items[1],method);
          return (Il2CppObject *)0x0;
        }
        goto label_040c4082;
      }
    }
    pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c4082;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4082:
  pCStack_20 = (CustomLogic_CustomLogicListBuiltin_o *)0x40c4087;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar22._8_8_;
  uStack_30 = auVar22._0_8_;
  pMVar19 = pMVar18;
  pSStack_28 = __a;
  pCStack_20 = __c;
  if (g_data_057ac58d == '\0') {
    uStack_38 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    uStack_38 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (lVar13 == 0) {
label_040c4114:
    uStack_38 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    obj = *(long **)(lVar13 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_38 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_38 = 0x40c40fb;
    pMVar19 = MethodInfo_Int32_ConvertTo_Int32;
    iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pMVar18 != (MethodInfo *)0x0) {
      uStack_38 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,iVar6,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_38 = 0x40c411e;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_38 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_40 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      uStack_40 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar18->klass,pMVar18);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_40 = 0x40c414b;
  auVar22 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar22._8_8_;
  uStack_40 = auVar22._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar19 != (MethodInfo *)0x0) {
      bVar7 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,(Il2CppObject *)pMVar18->klass,
                         pMVar18);
      uStack_40 = CONCAT17((char)bVar7,(undefined7)uStack_40);
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
      return pIVar10;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar19 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar19;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar19;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar19 != (MethodInfo *)0x0) {
      pCVar11 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar11;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar19 = pMVar18;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar19 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pCVar12 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar19,pMVar19);
    return (Il2CppObject *)pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar19 != (MethodInfo *)0x0) {
    pMVar18 = pMVar19;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar11 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar11,pMVar18);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar19->parameters;
    pSVar8 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar11->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar11->fields).List,pSVar8);
      return (Il2CppObject *)pCVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar19;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar7 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar21,(Il2CppObject *)pMVar19,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar16 = (pCVar21->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar15 = il2cpp_runtime_helper_0231b270();
    pIVar20 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar15);
  }
  else {
    if ((pMVar18 != (MethodInfo *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pMVar18), lVar13 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar18;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
       (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar13 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar16,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar20 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar14 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar14;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar20 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar20), lVar13 != 0)) {
    if ((int)pSVar16->max_length == 0) goto label_040c475b;
    pSVar16->m_Items[0] = pIVar20;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
    if ((pCVar21 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,(CustomLogic_UserMethod_o *)userMethod,pSVar16,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar17 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar17 >> 8),*puVar17);
    }
    goto label_040c4760;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar13 + 0x10);
  pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar16 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
    goto label_040c497d;
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar13 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = extraout_RDX_04;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        if (pCVar21 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar21,pCVar1,pSVar16,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar13 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_05,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveAt>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4090

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t index;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int index_00;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  undefined1 auVar21 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pMVar17 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58d == '\0') {
    uStack_20 = 0x40c40af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    obj = &TypeInfo_CustomLogicEvaluator;
    uStack_20 = 0x40c40bb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c4114:
    uStack_20 = 0x40c4119;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_20 = 0x40c40e9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_20 = 0x40c40fb;
    pMVar17 = MethodInfo_Int32_ConvertTo_Int32;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      uStack_20 = 0x40c410a;
      CustomLogic_CustomLogicListBuiltin__RemoveAt(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4114;
  }
  uStack_20 = 0x40c411e;
  auVar21 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar21._8_8_;
  uStack_20 = auVar21._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4141:
    uStack_28 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar17 != (MethodInfo *)0x0) {
      uStack_28 = 0x40c413d;
      CustomLogic_CustomLogicListBuiltin__Remove
                ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,(Il2CppObject *)pMVar18->klass,pMVar18);
      return (Il2CppObject *)0x0;
    }
    goto label_040c4141;
  }
  uStack_28 = 0x40c414b;
  auVar21 = il2cpp_runtime_helper_022b2ca0();
  pMVar18 = auVar21._8_8_;
  uStack_28 = auVar21._0_8_;
  if (pMVar18 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar18->name != 0) {
    obj = (long *)0x0;
    if (pMVar17 != (MethodInfo *)0x0) {
      bVar6 = CustomLogic_CustomLogicListBuiltin__Contains
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,(Il2CppObject *)pMVar18->klass,
                         pMVar18);
      uStack_28 = CONCAT17((char)bVar6,(undefined7)uStack_28);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
      return pIVar9;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar17 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,pMVar17);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar17;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pIVar9 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar9;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,pMVar17);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,pMVar17);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pMVar18 = pMVar17;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,pMVar18);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar17->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar10->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar10->fields).List,pSVar7);
      return (Il2CppObject *)pCVar10;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index_00 = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index_00,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)source[3].klass,index_00,
                                  MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index_00 != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index_00 = index_00 + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index_00 < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar17;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar17,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar18 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar18), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar18;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_04;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_05,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4120

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  undefined1 auVar21 [16];
  undefined8 uStack_10;
  
  if (__a == (System_Object_array *)0x0) {
label_040c4141:
    uStack_10 = 0x40c4146;
    il2cpp_runtime_helper_022b2c90();
    obj = (long *)__this;
  }
  else {
    obj = (long *)__this;
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        uStack_10 = 0x40c413d;
        CustomLogic_CustomLogicListBuiltin__Remove(__c,__a->m_Items[0],(MethodInfo *)__a);
        return (Il2CppObject *)0x0;
      }
      goto label_040c4141;
    }
  }
  uStack_10 = 0x40c414b;
  auVar21 = il2cpp_runtime_helper_022b2ca0();
  pMVar17 = auVar21._8_8_;
  uStack_10 = auVar21._0_8_;
  if (pMVar17 == (MethodInfo *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar17->name != 0) {
    obj = (long *)0x0;
    if ((MethodInfo *)__c != (MethodInfo *)0x0) {
      bVar6 = CustomLogic_CustomLogicListBuiltin__Contains(__c,(Il2CppObject *)pMVar17->klass,pMVar17);
      uStack_10 = CONCAT17((char)bVar6,(undefined7)uStack_10);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
      return pIVar9;
    }
    goto label_040c4188;
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo *)__c != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = (MethodInfo *)__c;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if ((MethodInfo *)__c != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        if (pMVar17 != (MethodInfo *)0x0) {
          pIVar9 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar9;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar17 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar10->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar10->fields).List,pSVar7);
      return (Il2CppObject *)pCVar10;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                  MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar18,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_04;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_05,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4150

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  undefined8 in_RAX;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  undefined8 uStack_8;
  
  if (__a == (System_Object_array *)0x0) {
label_040c4188:
    il2cpp_runtime_helper_022b2c90();
    obj = (long *)__this;
  }
  else {
    obj = (long *)__this;
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        uStack_8 = in_RAX;
        bVar6 = CustomLogic_CustomLogicListBuiltin__Contains(__c,__a->m_Items[0],(MethodInfo *)__a);
        uStack_8 = CONCAT17((char)bVar6,(undefined7)uStack_8);
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
        return pIVar9;
      }
      goto label_040c4188;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo *)__c != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = (MethodInfo *)__c;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if ((MethodInfo *)__c != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar10 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar10;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        if (pMVar17 != (MethodInfo *)0x0) {
          pIVar9 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar9;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar17 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar10->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar10->fields).List,pSVar7);
      return (Il2CppObject *)pCVar10;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                  MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar18,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_04;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_05,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sort>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c41a0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if ((MethodInfo *)__c != (MethodInfo *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        if (pMVar17 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar9 = CustomLogic_CustomLogicListBuiltin__Randomize
                       ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar17 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar9->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar9->fields).List,pSVar7);
      return (Il2CppObject *)pCVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar18,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_04 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_04), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_04;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_05,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__SortCustom>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c41c0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  Il2CppObject *extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  pMVar17 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c4245:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
    goto label_040c4245;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    obj = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar18 != (MethodInfo *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        if (pMVar17 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar9 = CustomLogic_CustomLogicListBuiltin__Randomize
                       ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar18,pMVar18);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar18 != (MethodInfo *)0x0) {
    pMVar17 = pMVar18;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar18->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar9->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar9->fields).List,pSVar7);
      return (Il2CppObject *)pCVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar18;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar18,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_02 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_02), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_03 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_03), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_03;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_04,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Filter>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4250

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  Il2CppObject *extraout_RDX_01;
  Il2CppObject *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  pMVar17 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac58f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac58f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c42d2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c42d2;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar18 = pMVar17;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (extraout_RDX == 0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    obj = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (pMVar17 != (MethodInfo *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = pMVar18;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      obj = *(long **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        if (pMVar18 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pCVar9 = CustomLogic_CustomLogicListBuiltin__Randomize
                       ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,pMVar17);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)pMVar17,pMVar17);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar17 != (MethodInfo *)0x0) {
    pMVar18 = pMVar17;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,pMVar18);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar17->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar9->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar9->fields).List,pSVar7);
      return (Il2CppObject *)pCVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar17;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)pMVar17,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar19 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar18 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar18), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar18;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_01 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_01), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar19 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar19 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar19), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_02 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_02), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_03,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Map>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c42e0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  Il2CppObject *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int index;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  Il2CppObject *pIVar18;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar19;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  pMVar17 = (MethodInfo *)__c;
  obj = (long *)__this;
  if (g_data_057ac590 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac590 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c4362:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
              ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar9 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar9;
    }
    goto label_040c4362;
  }
  il2cpp_runtime_helper_022b2ca0();
  method_00 = pMVar17;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    obj = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      obj = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        if (pMVar17 != (MethodInfo *)0x0) {
          pIVar10 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar10;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pCVar9 = CustomLogic_CustomLogicListBuiltin__Randomize
                       ((CustomLogic_CustomLogicListBuiltin_o *)method_00,method_00);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)method_00,method_00);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar17 = method_00;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)method_00->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar9->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar9->fields).List,pSVar7);
      return (Il2CppObject *)pCVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                   MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = method_00;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar19,(Il2CppObject *)method_00,
                       (Il2CppObject *)((Il2CppObject *)((long)obj + 0x10))->klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar19->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar18 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
       (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar12 == 0)) goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar18 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar18 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar18), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar18;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar19 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar19,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar19,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar10), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_01 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_01), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar19,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_02,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reduce>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4370

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int index;
  MethodInfo *method_00;
  MethodInfo *pMVar17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  long *plVar19;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  method_00 = (MethodInfo *)__c;
  if (g_data_057ac591 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    plVar19 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac591 = '\x01';
    __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)plVar19;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_UserMethod_ConvertTo_UserMethod;
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
      if (1 < (uint)__a->max_length) {
        if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicListBuiltin__Reduce();
          return pIVar9;
        }
        goto label_040c4400;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4400:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__Randomize
                        ((CustomLogic_CustomLogicListBuiltin_o *)method_00,method_00);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet
                        ((CustomLogic_CustomLogicListBuiltin_o *)method_00,method_00);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar17 = method_00;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)method_00->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar10->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar10->fields).List,pSVar7);
      return (Il2CppObject *)pCVar10;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                  MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = method_00;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar20,(Il2CppObject *)method_00,(Il2CppObject *)((Il2CppObject *)(__this + 1))->klass
                       ,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar20->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar18 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar12 == 0))
    goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar18 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar18 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar18), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar18;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar20 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar20 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar20 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar20,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_01,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Randomize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4410

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar11;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  System_Object_array *pSVar15;
  undefined1 *puVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int index;
  MethodInfo *pMVar17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__c *__this_02;
  CustomLogic_CustomLogicEvaluator_o *pCVar19;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__Randomize(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__c != (MethodInfo *)0x0) {
    pCVar11 = CustomLogic_CustomLogicListBuiltin__ToSet(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__c != (MethodInfo *)0x0) {
    pMVar17 = (MethodInfo *)__c;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,pMVar17);
    source = (System_Collections_Generic_IEnumerable_TSource__o *)((MethodInfo *)__c)->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar10->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(pCVar10->fields).List,pSVar7);
      return (Il2CppObject *)pCVar10;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[3].klass;
      if (__this_02 != (System_Collections_Generic_IEnumerable_TSource__c *)0x0) {
        if (0 < *(int *)&(__this_02->_1).namespaze) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[3].klass == (System_Collections_Generic_IEnumerable_TSource__c *)0x0)
              goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)source[3].klass,index,
                                  MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar9,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
            if (index != *(int *)&(__this_02->_1).namespaze + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[3].klass;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_IEnumerable_TSource__c *)0x0) goto label_040c1d0d;
          } while (index < *(int *)&(__this_02->_1).namespaze);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = (MethodInfo *)__c;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar19,(Il2CppObject *)__c,(Il2CppObject *)__this[1].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar15 = (pCVar19->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar14 = il2cpp_runtime_helper_0231b270();
    pIVar18 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar14);
  }
  else {
    if ((pMVar17 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar17), lVar12 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar17;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar12 == 0))
    goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar15,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar18 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar13;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar18 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar18), lVar12 != 0)) {
    if ((int)pSVar15->max_length == 0) goto label_040c475b;
    pSVar15->m_Items[0] = pIVar18;
    il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
    if ((pCVar19 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar19,(CustomLogic_UserMethod_o *)userMethod,pSVar15,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar16 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar16 >> 8),*puVar16);
    }
    goto label_040c4760;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 != 0)) {
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar19,pCVar1,pSVar15,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar12 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar12 + 0x10);
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar15 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar9), lVar12 == 0))
    goto label_040c497d;
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
         (lVar12 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar12 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar15->max_length) {
        pSVar15->m_Items[1] = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar19,pCVar1,pSVar15,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar12 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_01,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToSet>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4430

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Text_StringBuilder_o *__this_02;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar10;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  System_Object_array *pSVar14;
  undefined1 *puVar15;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int index;
  MethodInfo *pMVar16;
  Il2CppObject *pIVar17;
  System_Collections_Generic_List_object__o *source;
  System_Collections_Generic_List_object__o *__this_03;
  CustomLogic_CustomLogicEvaluator_o *pCVar18;
  CustomLogic_BuiltinClassInstance_o *__this_04;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar10 = CustomLogic_CustomLogicListBuiltin__ToSet(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__c != (MethodInfo *)0x0) {
    pMVar16 = (MethodInfo *)__c;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,pMVar16);
    source = (System_Collections_Generic_List_object__o *)((MethodInfo *)__c)->parameters;
    pSVar7 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_Object_ToList_Object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).List,pSVar7);
      return (Il2CppObject *)__this_01;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_02 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_02,"[",(MethodInfo *)0x0);
      __this_03 = source[1].monitor;
      if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (__this_03->fields)._size) {
          do {
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item(__this_03,index,MethodInfo_Object_get_Item);
            if ((pSVar8 == (System_String_o *)0x0) || (pSVar8->klass != g_data_057b9c00)) {
              if (source[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
              pIVar9 = System_Collections_Generic_List_object___get_Item(source[1].monitor,index,MethodInfo_Object_get_Item)
              ;
              System_Text_StringBuilder__Append_3b04a00(__this_02,pIVar9,(MethodInfo *)0x0);
              __this_03 = source[1].monitor;
            }
            else {
              pSVar8 = System_String__Concat_3af7150("\"",pSVar8,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_02,pSVar8,(MethodInfo *)0x0);
              __this_03 = source[1].monitor;
            }
            if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
            if (index != (__this_03->fields)._size + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_02,", ",(MethodInfo *)0x0);
              __this_03 = source[1].monitor;
            }
            index = index + 1;
            if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
          } while (index < (__this_03->fields)._size);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_02,"]",(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)
             (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._3_ToString.method);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = (MethodInfo *)__c;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar18 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar18,(Il2CppObject *)__c,(Il2CppObject *)__this[1].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar14 = (pCVar18->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar13 = il2cpp_runtime_helper_0231b270();
    pIVar17 = (Il2CppObject *)0x0;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar13);
  }
  else {
    if ((pMVar16 != (MethodInfo *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pMVar16), lVar11 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pMVar16;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar11 == 0))
    goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar14,parameterValues,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar17 = g_data_057b9bb8;
    if ((pIVar9->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar12 = (uint *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)(ulong)*puVar12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar9[1].klass;
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar9);
  }
  else if ((pIVar17 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar17), lVar11 != 0)) {
    if ((int)pSVar14->max_length == 0) goto label_040c475b;
    pSVar14->m_Items[0] = pIVar17;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
    if ((pCVar18 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar18,(CustomLogic_UserMethod_o *)userMethod,pSVar14,(MethodInfo *)0x0),
       pIVar9 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar9->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar15 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar9);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar15 >> 8),*puVar15);
    }
    goto label_040c4760;
  }
  lVar11 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar11 + 0x10);
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar9 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar9), lVar11 != 0)) {
    if ((int)pSVar14->max_length != 0) {
      pSVar14->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
      if (pCVar18 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar18,pCVar1,pSVar14,(MethodInfo *)0x0);
        return pIVar9;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar11 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar11 + 0x10);
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 != (System_Object_array *)0x0) {
    if ((pIVar9 != (Il2CppObject *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pIVar9), lVar11 == 0))
    goto label_040c497d;
    if ((int)pSVar14->max_length != 0) {
      pSVar14->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
      if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar11 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar14->max_length) {
        pSVar14->m_Items[1] = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
        if (pCVar18 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar18,pCVar1,pSVar14,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_04 = *(CustomLogic_BuiltinClassInstance_o **)(lVar11 + 0x10);
  if (__this_04 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_04,(__this_04->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_01,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_04[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_04[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_04[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_04[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Copy>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c4450

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *pCVar7;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  undefined4 extraout_var;
  System_Object_array *parameterValues;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  System_Object_array *pSVar14;
  undefined1 *puVar15;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int index;
  MethodInfo *method_00;
  Il2CppObject *pIVar16;
  System_Collections_Generic_List_object__o *source;
  System_Collections_Generic_List_object__o *__this_02;
  CustomLogic_CustomLogicEvaluator_o *pCVar17;
  CustomLogic_BuiltinClassInstance_o *__this_03;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    method_00 = (MethodInfo *)__c;
    if (g_data_057ac572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
      g_data_057ac572 = '\x01';
    }
    pCVar7 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar7,method_00);
    source = (__c->fields).List;
    pSVar8 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_Object_ToList_Object);
    if (pCVar7 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (pCVar7->fields).List = (System_Collections_Generic_List_object__o *)pSVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar7->fields).List,pSVar8);
      return (Il2CppObject *)pCVar7;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac573 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      il2cpp_runtime_helper_023445d0(&", ");
      il2cpp_runtime_helper_023445d0(&"\"");
      il2cpp_runtime_helper_023445d0(&"[");
      il2cpp_runtime_helper_023445d0(&"]");
      g_data_057ac573 = '\x01';
    }
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      index = 0;
      System_Text_StringBuilder__Append_3b03f90(__this_01,"[",(MethodInfo *)0x0);
      __this_02 = source[1].monitor;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (__this_02->fields)._size) {
          do {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item(__this_02,index,MethodInfo_Object_get_Item);
            if ((pSVar9 == (System_String_o *)0x0) || (pSVar9->klass != g_data_057b9c00)) {
              if (source[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
              pIVar10 = System_Collections_Generic_List_object___get_Item
                                  (source[1].monitor,index,MethodInfo_Object_get_Item);
              System_Text_StringBuilder__Append_3b04a00(__this_01,pIVar10,(MethodInfo *)0x0);
              __this_02 = source[1].monitor;
            }
            else {
              pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
              System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar9,(MethodInfo *)0x0);
              __this_02 = source[1].monitor;
            }
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
            if (index != (__this_02->fields)._size + -1) {
              System_Text_StringBuilder__Append_3b03f90(__this_01,", ",(MethodInfo *)0x0);
              __this_02 = source[1].monitor;
            }
            index = index + 1;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
          } while (index < (__this_02->fields)._size);
        }
        goto label_040c1d12;
      }
    }
label_040c1d0d:
    il2cpp_runtime_helper_022b2c90();
label_040c1d12:
    System_Text_StringBuilder__Append_3b03f90(__this_01,"]",(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)
              (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = __c;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar17 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar17 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar17 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (pCVar17,(Il2CppObject *)__c,(Il2CppObject *)__this[1].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar14 = (pCVar17->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar13 = il2cpp_runtime_helper_0231b270();
    pIVar16 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar13);
  }
  else {
    if ((pCVar7 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (lVar11 = il2cpp_runtime_helper_023051f0(pCVar7), lVar11 == 0)) goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = (Il2CppObject *)pCVar7;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar11 == 0))
    goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (__this_00,(CustomLogic_UserMethod_o *)pSVar14,parameterValues,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar16 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      puVar12 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)(ulong)*puVar12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar17 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else if ((pIVar16 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar16), lVar11 != 0)) {
    if ((int)pSVar14->max_length == 0) goto label_040c475b;
    pSVar14->m_Items[0] = pIVar16;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
    if ((pCVar17 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar17,(CustomLogic_UserMethod_o *)userMethod,pSVar14,(MethodInfo *)0x0),
       pIVar10 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar15 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
      return (Il2CppObject *)CONCAT71((int7)((ulong)puVar15 >> 8),*puVar15);
    }
    goto label_040c4760;
  }
  lVar11 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar17 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar11 + 0x10);
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar10), lVar11 != 0)) {
    if ((int)pSVar14->max_length != 0) {
      pSVar14->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
      if (pCVar17 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                            (pCVar17,pCVar1,pSVar14,(MethodInfo *)0x0);
        return pIVar10;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar11 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar17 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar11 + 0x10);
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar14 != (System_Object_array *)0x0) {
    if ((pIVar10 != (Il2CppObject *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pIVar10), lVar11 == 0))
    goto label_040c497d;
    if ((int)pSVar14->max_length != 0) {
      pSVar14->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
      if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar11 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar14->max_length) {
        pSVar14->m_Items[1] = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
        if (pCVar17 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar17,pCVar1,pSVar14,(MethodInfo *)0x0);
          return pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(CustomLogic_BuiltinClassInstance_o **)(lVar11 + 0x10);
  if (__this_03 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__this_03,(__this_03->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                         extraout_RDX_01,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_03[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_03[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40c1e20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ac576 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RemoveAt");
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Filter");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Sort");
    il2cpp_runtime_helper_023445d0(&"Randomize");
    il2cpp_runtime_helper_023445d0(&"SortCustom");
    il2cpp_runtime_helper_023445d0(&"Reduce");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"InsertAt");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"ToSet");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac576 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x658f3665) {
    if (uVar3 < 0x28b19ea4) {
      if (uVar3 < 0xbd14ccd) {
        if (uVar3 == 0x4a57fc2) {
          bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ac578 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057ac578 = '\x01';
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
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
              il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xbd14ccc) &&
                (bVar4 = System_String__op_Equality(name,"ToSet",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac586 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToSet_b__17_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac586 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x21a5901d) {
        bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac57e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac57e = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x28b19ea3) &&
              (bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57a = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x486bbbe1) {
      if (uVar3 == 0x44a7f051) {
        bVar4 = System_String__op_Equality(name,"Map",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac583 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Map_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac583 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x486bbbe0) &&
              (bVar4 = System_String__op_Equality(name,"RemoveAt",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveAt_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57d = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x4b0b408d) {
      bVar4 = System_String__op_Equality(name,"InsertAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__InsertAt_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57c = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x658f3664) &&
            (bVar4 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac587 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Copy_b__18_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac587 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8459a7f2) {
      if (uVar3 == 0x8459a7f1) {
        bVar4 = System_String__op_Equality(name,"Sort",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac580 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Sort_b__11_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac580 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x669c4958) &&
              (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac57f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac57f = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x9450dd5c) {
      bVar4 = System_String__op_Equality(name,"Randomize",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac585 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Randomize_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac585 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x9dc3aa14) &&
            (bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac57b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac57b = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xb6973ef8) {
    if (uVar3 == 0xa42c4e6a) {
      bVar4 = System_String__op_Equality(name,"SortCustom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac581 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SortCustom_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac581 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xb6973ef7) &&
            (bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac579 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac579 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xbd680907) {
    bVar4 = System_String__op_Equality(name,"Reduce",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac584 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Reduce_b__15_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac584 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf4a9c097) {
    bVar4 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac582 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Filter_b__13_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac582 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicListBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ac577 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c24d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c24e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c24f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c24fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object);
    g_data_057ac577 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c2513;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c252c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c253b;
  __this = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c2555;
  CustomLogic_CLPropertyBinding_object____ctor(__this,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x40c24c0

CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac577 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object);
    g_data_057ac577 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x40c2560

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac578 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac578 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x40c26b0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac579 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac579 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x40c2800

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x40c2950

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__InsertAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt (const MethodInfo* method);
// 0x40c2aa0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__InsertAt_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__RemoveAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt (const MethodInfo* method);
// 0x40c2bf0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveAt_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x40c2d40

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x40c2e90

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac57f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac57f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Sort
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort (const MethodInfo* method);
// 0x40c2fe0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac580 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Sort_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac580 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__SortCustom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom (const MethodInfo* method);
// 0x40c3130

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac581 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SortCustom_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac581 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Filter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter (const MethodInfo* method);
// 0x40c3280

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac582 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Filter_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac582 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Map
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map (const MethodInfo* method);
// 0x40c33d0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac583 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Map_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac583 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Reduce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce (const MethodInfo* method);
// 0x40c3520

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac584 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Reduce_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac584 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Randomize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize (const MethodInfo* method);
// 0x40c3670

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac585 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Randomize_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac585 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__ToSet
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet (const MethodInfo* method);
// 0x40c37c0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac586 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToSet_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac586 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Copy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy (const MethodInfo* method);
// 0x40c3910

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (g_data_057ac587 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicListBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Copy_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac587 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicListBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40c3a60

void CustomLogic_CustomLogicListBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_IEqualityComparer_T__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  undefined4 uStack_24;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ac588 == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3a7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3a89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3a95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3aa1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3aad;
    il2cpp_runtime_helper_023445d0(&"RemoveAt");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ab9;
    il2cpp_runtime_helper_023445d0(&"Remove");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ac5;
    il2cpp_runtime_helper_023445d0(&"Add");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ad1;
    il2cpp_runtime_helper_023445d0(&"Filter");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3add;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ae9;
    il2cpp_runtime_helper_023445d0(&"Count");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3af5;
    il2cpp_runtime_helper_023445d0(&"Sort");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b01;
    il2cpp_runtime_helper_023445d0(&"Randomize");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b0d;
    il2cpp_runtime_helper_023445d0(&"SortCustom");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b19;
    il2cpp_runtime_helper_023445d0(&"Reduce");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b25;
    il2cpp_runtime_helper_023445d0(&"Copy");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b31;
    il2cpp_runtime_helper_023445d0(&"InsertAt");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b3d;
    il2cpp_runtime_helper_023445d0(&"Set");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b49;
    il2cpp_runtime_helper_023445d0(&"Map");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b55;
    il2cpp_runtime_helper_023445d0(&"ToSet");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b61;
    il2cpp_runtime_helper_023445d0(&"Contains");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b6d;
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac588 = '\x01';
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b83;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3b98;
  pSVar2 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3bbd;
    System_Collections_Generic_HashSet_object___Add(__this,"Count",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3bd2;
    System_Collections_Generic_HashSet_object___Add(__this,"Clear",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3be7;
    System_Collections_Generic_HashSet_object___Add(__this,"Get",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3bfc;
    System_Collections_Generic_HashSet_object___Add(__this,"Set",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c11;
    System_Collections_Generic_HashSet_object___Add(__this,"Add",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c26;
    System_Collections_Generic_HashSet_object___Add(__this,"InsertAt",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c3b;
    System_Collections_Generic_HashSet_object___Add(__this,"RemoveAt",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c50;
    System_Collections_Generic_HashSet_object___Add(__this,"Remove",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c65;
    System_Collections_Generic_HashSet_object___Add(__this,"Contains",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c7a;
    System_Collections_Generic_HashSet_object___Add(__this,"Sort",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3c8f;
    System_Collections_Generic_HashSet_object___Add(__this,"SortCustom",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ca4;
    System_Collections_Generic_HashSet_object___Add(__this,"Filter",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3cb9;
    System_Collections_Generic_HashSet_object___Add(__this,"Map",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3cce;
    System_Collections_Generic_HashSet_object___Add(__this,"Reduce",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3ce3;
    System_Collections_Generic_HashSet_object___Add(__this,"Randomize",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3cf8;
    System_Collections_Generic_HashSet_object___Add(__this,"ToSet",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3d0d;
    System_Collections_Generic_HashSet_object___Add(__this,"Copy",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40c3d3f;
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = __this;
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ac562 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac562 = '\x01';
    }
    pSVar1 = (pSVar2->fields)._comparer;
    if (pSVar1 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
      uStack_24 = *(undefined4 *)&pSVar1[1].monitor;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_24);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac589 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac589 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicListBuiltin_o* __i, const MethodInfo* method);
// 0x40c3d40

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicListBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t iStack_c;
  
  if (__i != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (g_data_057ac562 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac562 = '\x01';
    }
    pSVar1 = (__i->fields).List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      iStack_c = (pSVar1->fields)._size;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_c);
      return pIVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac589 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac589 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x40c1190

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$<Contains>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x40c4470

bool_conflict
CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppClass *userMethod;
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_Object_array *parameterValues;
  long lVar7;
  Il2CppObject *pIVar8;
  bool_conflict *pbVar9;
  undefined8 uVar10;
  System_Object_array *pSVar11;
  undefined1 *puVar12;
  Il2CppObject *extraout_RDX;
  Il2CppObject *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  Il2CppObject *pIVar13;
  CustomLogic_CustomLogicEvaluator_o *pCVar14;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  
  pIVar8 = e;
  if (g_data_057ac592 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac592 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_040c4497;
label_040c44e0:
    il2cpp_runtime_helper_02337ed0();
    pCVar14 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_040c44e0;
label_040c4497:
    pCVar14 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar6 = CustomLogic_CustomLogicEvaluator__CheckEquals(pCVar14,e,(__this->fields).value,(MethodInfo *)0x0);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar11 = (pCVar14->fields)._networkCallback;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c4633:
    il2cpp_runtime_helper_022b2c90();
label_040c4638:
    il2cpp_runtime_helper_022b2ca0();
label_040c463d:
    uVar10 = il2cpp_runtime_helper_0231b270();
    pIVar13 = (Il2CppObject *)0x0;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar10);
  }
  else {
    if ((pIVar8 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8), lVar7 == 0))
    goto label_040c463d;
    if ((int)parameterValues->max_length == 0) goto label_040c4638;
    parameterValues->m_Items[0] = pIVar8;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
    if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar7 == 0))
    goto label_040c463d;
    if ((uint)parameterValues->max_length < 2) goto label_040c4638;
    parameterValues->m_Items[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
    if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (__this_00,(CustomLogic_UserMethod_o *)pSVar11,parameterValues,(MethodInfo *)0x0),
       pIVar8 == (Il2CppObject *)0x0)) goto label_040c4633;
    pIVar13 = g_data_057b9bb8;
    if ((pIVar8->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      pbVar9 = (bool_conflict *)il2cpp_runtime_helper_02305440(pIVar8);
      return *pbVar9;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar14 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar8[1].klass;
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar11 == (System_Object_array *)0x0) {
label_040c4756:
    il2cpp_runtime_helper_022b2c90();
label_040c475b:
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_040c4760:
    il2cpp_runtime_helper_022b2fd0(pIVar8);
  }
  else if ((pIVar13 == (Il2CppObject *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pIVar13), lVar7 != 0)) {
    if ((int)pSVar11->max_length == 0) goto label_040c475b;
    pSVar11->m_Items[0] = pIVar13;
    il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
    if ((pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
       (pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar14,(CustomLogic_UserMethod_o *)userMethod,pSVar11,(MethodInfo *)0x0),
       pIVar8 == (Il2CppObject *)0x0)) goto label_040c4756;
    if ((pIVar8->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar12 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar8);
      return (bool_conflict)CONCAT71((int7)((ulong)puVar12 >> 8),*puVar12);
    }
    goto label_040c4760;
  }
  lVar7 = il2cpp_runtime_helper_0231b270();
  pIVar8 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar14 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar7 + 0x10);
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar11 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar8 == (Il2CppObject *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8), lVar7 != 0)) {
    if ((int)pSVar11->max_length != 0) {
      pSVar11->m_Items[0] = pIVar8;
      il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
      if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                           (pCVar14,pCVar1,pSVar11,(MethodInfo *)0x0);
        return (bool_conflict)pIVar8;
      }
      goto label_040c484e;
    }
    goto label_040c4853;
  }
  lVar7 = il2cpp_runtime_helper_0231b270();
  pIVar8 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar14 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar1 = *(CustomLogic_UserMethod_o **)(lVar7 + 0x10);
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar11 != (System_Object_array *)0x0) {
    if ((pIVar8 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8), lVar7 == 0))
    goto label_040c497d;
    if ((int)pSVar11->max_length != 0) {
      pSVar11->m_Items[0] = pIVar8;
      il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
      if ((extraout_RDX_00 != (Il2CppObject *)0x0) &&
         (lVar7 = il2cpp_runtime_helper_023051f0(extraout_RDX_00), lVar7 == 0)) goto label_040c497d;
      if (1 < (uint)pSVar11->max_length) {
        pSVar11->m_Items[1] = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
        if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar14,pCVar1,pSVar11,(MethodInfo *)0x0);
          return (bool_conflict)pIVar8;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar7 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_01 = *(CustomLogic_BuiltinClassInstance_o **)(lVar7 + 0x10);
  if (__this_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_01->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    bVar6 = (*vtableDispatch)
                      (__this_01,(__this_01->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                       extraout_RDX_01,vtableDispatch);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar2 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)&__this_01[1].klass = *puVar2;
  *(undefined4 *)((long)&__this_01[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_01[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_01[1].monitor + 4) = uVar5;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x40c1350

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$<SortCustom>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x40c4500

int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,Il2CppObject *a,
                  Il2CppObject *b,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_UserMethod_o *pCVar2;
  Il2CppClass *userMethod;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int32_t iVar7;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  System_Object_array *pSVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  Il2CppObject *extraout_RDX;
  undefined8 extraout_RDX_00;
  Il2CppObject *pIVar14;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (g_data_057ac593 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac593 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = (__this->fields).method;
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 == (System_Object_array *)0x0) goto label_040c4633;
  if (a == (Il2CppObject *)0x0) {
label_040c45a1:
    if ((int)pSVar8->max_length == 0) {
label_040c4638:
      il2cpp_runtime_helper_022b2ca0();
      goto label_040c463d;
    }
    pSVar8->m_Items[0] = a;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
    if (b != (Il2CppObject *)0x0) {
      lVar9 = il2cpp_runtime_helper_023051f0(b);
      if (lVar9 == 0) goto label_040c463d;
    }
    if ((uint)pSVar8->max_length < 2) goto label_040c4638;
    pSVar8->m_Items[1] = b;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_040c4633:
      il2cpp_runtime_helper_022b2c90();
      goto label_040c4638;
    }
    pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0)
    ;
    if (pIVar10 == (Il2CppObject *)0x0) goto label_040c4633;
    pIVar14 = g_data_057b9bb8;
    if ((pIVar10->klass->_1).element_class == g_data_057b9bb8[4].klass) {
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar10);
      return *piVar11;
    }
  }
  else {
    lVar9 = il2cpp_runtime_helper_023051f0(a);
    if (lVar9 != 0) goto label_040c45a1;
label_040c463d:
    uVar12 = il2cpp_runtime_helper_0231b270();
    pIVar14 = (Il2CppObject *)0x0;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(uVar12);
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = pIVar10[1].klass;
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 == (System_Object_array *)0x0) goto label_040c4756;
  if (pIVar14 == (Il2CppObject *)0x0) {
label_040c46f5:
    if ((int)pSVar8->max_length == 0) {
label_040c475b:
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSVar8->m_Items[0] = pIVar14;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_040c4756:
        il2cpp_runtime_helper_022b2c90();
        goto label_040c475b;
      }
      pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                          (pCVar1,(CustomLogic_UserMethod_o *)userMethod,pSVar8,(MethodInfo *)0x0);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_040c4756;
      if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
        puVar13 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
        return (int32_t)CONCAT71((int7)((ulong)puVar13 >> 8),*puVar13);
      }
    }
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else {
    lVar9 = il2cpp_runtime_helper_023051f0(pIVar14);
    if (lVar9 != 0) goto label_040c46f5;
  }
  lVar9 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = *(CustomLogic_UserMethod_o **)(lVar9 + 0x10);
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar10 == (Il2CppObject *)0x0) {
label_040c4815:
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0);
          return (int32_t)pIVar10;
        }
        goto label_040c484e;
      }
      goto label_040c4853;
    }
    lVar9 = il2cpp_runtime_helper_023051f0(pIVar10);
    if (lVar9 != 0) goto label_040c4815;
  }
  lVar9 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = *(CustomLogic_UserMethod_o **)(lVar9 + 0x10);
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 != (System_Object_array *)0x0) {
    if (pIVar10 != (Il2CppObject *)0x0) {
      lVar9 = il2cpp_runtime_helper_023051f0(pIVar10);
      if (lVar9 == 0) goto label_040c497d;
    }
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (extraout_RDX != (Il2CppObject *)0x0) {
        lVar9 = il2cpp_runtime_helper_023051f0(extraout_RDX);
        if (lVar9 == 0) goto label_040c497d;
      }
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0);
          return (int32_t)pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar9 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(lVar9 + 0x10);
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    iVar7 = (*vtableDispatch)
                      (__this_00,(__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                       extraout_RDX_00,vtableDispatch);
    return iVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)&__this_00[1].klass = *puVar3;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar4;
  *(undefined4 *)&__this_00[1].monitor = uVar5;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar6;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x40c14a0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$<Filter>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x40c4660

bool_conflict
CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_UserMethod_o *pCVar2;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_Object_array *pSVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  undefined1 *puVar11;
  Il2CppObject *extraout_RDX;
  undefined8 extraout_RDX_00;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (g_data_057ac594 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac594 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = (__this->fields).method;
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 == (System_Object_array *)0x0) goto label_040c4756;
  if (e == (Il2CppObject *)0x0) {
label_040c46f5:
    if ((int)pSVar8->max_length == 0) {
label_040c475b:
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSVar8->m_Items[0] = e;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_040c4756:
        il2cpp_runtime_helper_022b2c90();
        goto label_040c475b;
      }
      pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                          (pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_040c4756;
      if ((pIVar10->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
        puVar11 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar10);
        return (bool_conflict)CONCAT71((int7)((ulong)puVar11 >> 8),*puVar11);
      }
    }
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else {
    lVar9 = il2cpp_runtime_helper_023051f0(e);
    if (lVar9 != 0) goto label_040c46f5;
  }
  lVar9 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = *(CustomLogic_UserMethod_o **)(lVar9 + 0x10);
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar10 == (Il2CppObject *)0x0) {
label_040c4815:
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0);
          return (bool_conflict)pIVar10;
        }
        goto label_040c484e;
      }
      goto label_040c4853;
    }
    lVar9 = il2cpp_runtime_helper_023051f0(pIVar10);
    if (lVar9 != 0) goto label_040c4815;
  }
  lVar9 = il2cpp_runtime_helper_0231b270();
  pIVar10 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = *(CustomLogic_UserMethod_o **)(lVar9 + 0x10);
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar8 != (System_Object_array *)0x0) {
    if (pIVar10 != (Il2CppObject *)0x0) {
      lVar9 = il2cpp_runtime_helper_023051f0(pIVar10);
      if (lVar9 == 0) goto label_040c497d;
    }
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (extraout_RDX != (Il2CppObject *)0x0) {
        lVar9 = il2cpp_runtime_helper_023051f0(extraout_RDX);
        if (lVar9 == 0) goto label_040c497d;
      }
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar10 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                              (pCVar1,pCVar2,pSVar8,(MethodInfo *)0x0);
          return (bool_conflict)pIVar10;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar9 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(lVar9 + 0x10);
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    bVar7 = (*vtableDispatch)
                      (__this_00,(__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                       extraout_RDX_00,vtableDispatch);
    return bVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)&__this_00[1].klass = *puVar3;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar4;
  *(undefined4 *)&__this_00[1].monitor = uVar5;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar6;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40c15f0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$<Map>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x40c4780

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_UserMethod_o *pCVar2;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_Object_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  undefined8 extraout_RDX_00;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (g_data_057ac595 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac595 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = (__this->fields).method;
  pSVar7 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar7 == (System_Object_array *)0x0) {
label_040c484e:
    il2cpp_runtime_helper_022b2c90();
label_040c4853:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (e == (Il2CppObject *)0x0) {
label_040c4815:
      if ((int)pSVar7->max_length != 0) {
        pSVar7->m_Items[0] = e;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar1,pCVar2,pSVar7,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c484e;
      }
      goto label_040c4853;
    }
    lVar8 = il2cpp_runtime_helper_023051f0(e);
    if (lVar8 != 0) goto label_040c4815;
  }
  lVar8 = il2cpp_runtime_helper_0231b270();
  pIVar9 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pCVar2 = *(CustomLogic_UserMethod_o **)(lVar8 + 0x10);
  pSVar7 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar7 != (System_Object_array *)0x0) {
    if (pIVar9 != (Il2CppObject *)0x0) {
      lVar8 = il2cpp_runtime_helper_023051f0(pIVar9);
      if (lVar8 == 0) goto label_040c497d;
    }
    if ((int)pSVar7->max_length != 0) {
      pSVar7->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
      if (extraout_RDX != (Il2CppObject *)0x0) {
        lVar8 = il2cpp_runtime_helper_023051f0(extraout_RDX);
        if (lVar8 == 0) goto label_040c497d;
      }
      if (1 < (uint)pSVar7->max_length) {
        pSVar7->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1);
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (pCVar1,pCVar2,pSVar7,(MethodInfo *)0x0);
          return pIVar9;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(lVar8 + 0x10);
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_00,(__this_00->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX_00,vtableDispatch);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)&__this_00[1].klass = *puVar3;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar4;
  *(undefined4 *)&__this_00[1].monitor = uVar5;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar6;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x40c16e0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$<Reduce>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, Il2CppObject* acc, Il2CppObject* e, const MethodInfo* method);
// 0x40c4870

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,Il2CppObject *acc,
          Il2CppObject *e,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  System_Object_array *parameterValues;
  long lVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  undefined8 extraout_RDX;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  
  if (g_data_057ac596 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac596 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameterValues != (System_Object_array *)0x0) {
    if (acc != (Il2CppObject *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(acc);
      if (lVar5 == 0) goto label_040c497d;
    }
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = acc;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (e != (Il2CppObject *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(e);
        if (lVar5 == 0) goto label_040c497d;
      }
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = e;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
        if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                             (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
          return pIVar6;
        }
        goto label_040c4978;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c4978:
  il2cpp_runtime_helper_022b2c90();
label_040c497d:
  lVar5 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_01 = *(CustomLogic_BuiltinClassInstance_o **)(lVar5 + 0x10);
  if (__this_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (__this_01->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr;
    pIVar6 = (Il2CppObject *)
             (*vtableDispatch)
                       (__this_01,(__this_01->klass->vtable)._5_get_LookupBaseClassForVariables.method,
                        extraout_RDX,vtableDispatch);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar1 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)&__this_01[1].klass = *puVar1;
  *(undefined4 *)((long)&__this_01[1].klass + 4) = uVar2;
  *(undefined4 *)&__this_01[1].monitor = uVar3;
  *(undefined4 *)((long)&__this_01[1].monitor + 4) = uVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x40c1850

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$<Randomize>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, Il2CppObject* x, const MethodInfo* method);
// 0x40c4990

int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,Il2CppObject *x,
                  MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int32_t iVar5;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)(__this->fields).r;
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    vtableDispatch = (((System_Random_c *)__this_00->klass)->vtable)._5_Next.methodPtr;
    iVar5 = (*vtableDispatch)
                      (__this_00,(((System_Random_c *)__this_00->klass)->vtable)._5_Next.method,method,
                       vtableDispatch);
    return iVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  puVar1 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)&__this_00[1].klass = *puVar1;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar2;
  *(undefined4 *)&__this_00[1].monitor = uVar3;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c09b0

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057ac55f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac55f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_Object);
  (__this->fields).List = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).List);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x40c0a50

void CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
               (CustomLogic_CustomLogicListBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  int32_t *piVar2;
  int *piVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  System_String_o *pSVar10;
  Il2CppClass *item;
  Il2CppClass *pIVar11;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *value;
  Il2CppObject *item_00;
  ulong uVar12;
  int32_t iVar13;
  System_Exception_o *pSVar14;
  System_Exception_o *__this_01;
  
  if (g_data_057ac560 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac560 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields).List;
  (__this->fields).List = pSVar7;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppObject *)0x0;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues == (System_Object_array *)0x0) {
label_040c0ba5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)parameterValues->max_length < 1) {
      return;
    }
    uVar12 = 0;
    if ((parameterValues->max_length & 0xffffffff) != 0) {
      do {
        lVar6 = MethodInfo_Void_Add;
        __this = (CustomLogic_CustomLogicListBuiltin_o *)*ppSVar1;
        if ((System_Exception_o *)__this == (System_Exception_o *)0x0) goto label_040c0ba5;
        pIVar8 = parameterValues->m_Items[uVar12];
        piVar2 = (int32_t *)((long)&(((System_Exception_o *)__this)->fields)._message + 4);
        *piVar2 = *piVar2 + 1;
        pSVar5 = (System_Object_array *)(((System_Exception_o *)__this)->fields)._className;
        if (pSVar5 == (System_Object_array *)0x0) goto label_040c0ba5;
        uVar4 = *(uint *)&(((System_Exception_o *)__this)->fields)._message;
        if (uVar4 < (uint)pSVar5->max_length) {
          *(uint *)&(((System_Exception_o *)__this)->fields)._message = uVar4 + 1;
          __this = (CustomLogic_CustomLogicListBuiltin_o *)(pSVar5->m_Items + (int)uVar4);
          pSVar5->m_Items[(int)uVar4] = pIVar8;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,pIVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = uVar12 + 1;
        uVar4 = (uint)parameterValues->max_length;
        if ((long)(int)uVar4 <= (long)uVar12) {
          return;
        }
      } while (uVar12 < uVar4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar14 = (System_Exception_o *)__this;
  if (g_data_057ac562 == '\0') {
    pSVar14 = (System_Exception_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac562 = '\x01';
  }
  if ((((System_Exception_o *)__this)->fields)._helpURL != (System_String_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pSVar14;
  if (g_data_057ac563 == '\0') {
    __this_01 = (System_Exception_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac563 = '\x01';
  }
  if (*(char *)&(pSVar14->fields)._stackTrace == '\0') {
    pSVar10 = (pSVar14->fields)._helpURL;
    if (pSVar10 != (System_String_o *)0x0) {
      piVar3 = (int *)((long)&pSVar10[1].klass + 4);
      *piVar3 = *piVar3 + 1;
      iVar13 = *(int32_t *)&pSVar10[1].klass;
      *(undefined4 *)&pSVar10[1].klass = 0;
      if (0 < iVar13) {
        System_Array__Clear((System_Array_o *)pSVar10->fields,0,iVar13,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(__this_01,pSVar10,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int32_t)pIVar8;
  if (g_data_057ac564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057ac564 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_object__o *)(__this_01->fields)._helpURL;
  if (iVar13 < 0) {
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar13 = iVar13 + (pSVar7->fields)._size;
      goto label_040c0cd8;
    }
  }
  else if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
label_040c0cd8:
    System_Collections_Generic_List_object___get_Item(pSVar7,iVar13,MethodInfo_Object_get_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int32_t)pIVar8;
  if (g_data_057ac565 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac565 = '\x01';
  }
  if (*(char *)&pSVar7[1].fields._items == '\0') {
    pSVar14 = pSVar7[1].monitor;
    if (iVar13 < 0) {
      if (pSVar14 != (System_Exception_o *)0x0) {
        iVar13 = iVar13 + *(int *)&(pSVar14->fields)._message;
        goto label_040c0d51;
      }
    }
    else if (pSVar14 != (System_Exception_o *)0x0) {
label_040c0d51:
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,value,MethodInfo_Void_set_Item);
      return;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar14,pSVar10,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Set);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar6 = MethodInfo_Void_Add;
  if (*(char *)&(pSVar14->fields)._stackTrace == '\0') {
    pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar14->fields)._helpURL;
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar2 = &(pSVar7->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar5 = (pSVar7->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (pSVar7->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (pSVar7->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = pIVar8;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,pIVar8);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar7,pIVar8,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar14,pSVar10,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar13 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar14->fields)._stackTrace == '\0') {
    pSVar14 = (System_Exception_o *)(pSVar14->fields)._helpURL;
    if (iVar13 < 0) {
      if (pSVar14 != (System_Exception_o *)0x0) {
        iVar13 = iVar13 + *(int *)&(pSVar14->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar14 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,item_00,_DAT_05591640);
      return;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar14,pSVar10,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar14->fields)._stackTrace == '\0') {
    pSVar14 = (System_Exception_o *)(pSVar14->fields)._helpURL;
    if (iVar13 < 0) {
      if (pSVar14 != (System_Exception_o *)0x0) {
        iVar13 = iVar13 + *(int *)&(pSVar14->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar14 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar14,pSVar10,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar14->fields)._stackTrace == '\0') {
    pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar14->fields)._helpURL;
    pSVar14 = (System_Exception_o *)0x0;
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar7,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar14,pSVar10,(MethodInfo *)0x0);
    pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  pIVar8 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = pIVar11;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar11);
    pSVar10 = (pSVar14->fields)._helpURL;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
    System_Func_object__bool____ctor();
    System_Linq_Enumerable__Any_object__2504f10
              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,predicate,MethodInfo_Boolean_Any_Object);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Collections_Generic_IEnumerable_object__o* enumerable, bool isReadOnly, const MethodInfo* method);
// 0x40bdc90

void CustomLogic_CustomLogicListBuiltin___ctor_3fbdc90
               (CustomLogic_CustomLogicListBuiltin_o *__this,
               System_Collections_Generic_IEnumerable_object__o *enumerable,bool_conflict isReadOnly,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  
  if (g_data_057ac561 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac561 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(pSVar2,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields).List;
  (__this->fields).List = pSVar2;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor_362ba10
            (pSVar2,(System_Collections_Generic_IEnumerable_T__o *)enumerable,MethodInfo_List_1_System_Object);
  (__this->fields).List = pSVar2;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar2);
  *(char *)&(__this->fields)._isReadOnly = (char)isReadOnly;
  return;
}


// CustomLogic.CustomLogicListBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin__get_Count (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c0bb0

int32_t CustomLogic_CustomLogicListBuiltin__get_Count
                  (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long lVar5;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t iVar6;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  int32_t extraout_EAX_03;
  bool_conflict bVar7;
  int32_t extraout_EAX_04;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  System_String_o *pSVar10;
  Il2CppClass *item;
  Il2CppClass *pIVar11;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *value;
  Il2CppObject *item_00;
  System_Exception_o *pSVar12;
  System_Exception_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar13;
  
  pSVar12 = (System_Exception_o *)__this;
  if (g_data_057ac562 == '\0') {
    pSVar12 = (System_Exception_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac562 = '\x01';
  }
  pSVar13 = (__this->fields).List;
  if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
    return (pSVar13->fields)._size;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pSVar12;
  if (g_data_057ac563 == '\0') {
    __this_01 = (System_Exception_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac563 = '\x01';
  }
  if (*(char *)&(pSVar12->fields)._stackTrace == '\0') {
    pSVar10 = (pSVar12->fields)._helpURL;
    if (pSVar10 != (System_String_o *)0x0) {
      piVar1 = (int *)((long)&pSVar10[1].klass + 4);
      *piVar1 = *piVar1 + 1;
      iVar6 = *(int32_t *)&pSVar10[1].klass;
      *(undefined4 *)&pSVar10[1].klass = 0;
      if (iVar6 < 1) {
        return (int32_t)pSVar10;
      }
      System_Array__Clear((System_Array_o *)pSVar10->fields,0,iVar6,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(__this_01,pSVar10,(MethodInfo *)0x0);
    method = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar6 = (int32_t)method;
  if (g_data_057ac564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057ac564 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_object__o *)(__this_01->fields)._helpURL;
  if (iVar6 < 0) {
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar6 = iVar6 + (pSVar13->fields)._size;
      goto label_040c0cd8;
    }
  }
  else if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
label_040c0cd8:
    pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar13,iVar6,MethodInfo_Object_get_Item);
    return (int32_t)pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar6 = (int32_t)method;
  if (g_data_057ac565 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac565 = '\x01';
  }
  if (*(char *)&pSVar13[1].fields._items == '\0') {
    pSVar12 = pSVar13[1].monitor;
    if (iVar6 < 0) {
      if (pSVar12 != (System_Exception_o *)0x0) {
        iVar6 = iVar6 + *(int *)&(pSVar12->fields)._message;
        goto label_040c0d51;
      }
    }
    else if (pSVar12 != (System_Exception_o *)0x0) {
label_040c0d51:
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar12,iVar6,value,MethodInfo_Void_set_Item);
      return extraout_EAX_00;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar12,pSVar10,(MethodInfo *)0x0);
    method = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Set);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar5 = MethodInfo_Void_Add;
  if (*(char *)&(pSVar12->fields)._stackTrace == '\0') {
    pSVar13 = (System_Collections_Generic_List_object__o *)(pSVar12->fields)._helpURL;
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar2 = &(pSVar13->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar4 = (pSVar13->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (pSVar13->fields)._size;
        if ((uint)pSVar4->max_length <= uVar3) {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar13,(Il2CppObject *)method,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return extraout_EAX_01;
        }
        (pSVar13->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)method;
        iVar6 = il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,method);
        return iVar6;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar12,pSVar10,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar6 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar12->fields)._stackTrace == '\0') {
    pSVar12 = (System_Exception_o *)(pSVar12->fields)._helpURL;
    if (iVar6 < 0) {
      if (pSVar12 != (System_Exception_o *)0x0) {
        iVar6 = iVar6 + *(int *)&(pSVar12->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar12 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar12,iVar6,item_00,_DAT_05591640);
      return extraout_EAX_02;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar12,pSVar10,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar6 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar12->fields)._stackTrace == '\0') {
    pSVar12 = (System_Exception_o *)(pSVar12->fields)._helpURL;
    if (iVar6 < 0) {
      if (pSVar12 != (System_Exception_o *)0x0) {
        iVar6 = iVar6 + *(int *)&(pSVar12->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar12 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar12,iVar6,MethodInfo_Void_RemoveAt);
      return extraout_EAX_03;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar12,pSVar10,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar12->fields)._stackTrace == '\0') {
    pSVar13 = (System_Collections_Generic_List_object__o *)(pSVar12->fields)._helpURL;
    pSVar12 = (System_Exception_o *)0x0;
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar7 = System_Collections_Generic_List_object___Remove(pSVar13,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return bVar7;
    }
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar12,pSVar10,(MethodInfo *)0x0);
    pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  pIVar8 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  __this_00[1].klass = pIVar11;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar11);
  pSVar10 = (pSVar12->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  bVar7 = System_Linq_Enumerable__Any_object__2504f10
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,predicate,MethodInfo_Boolean_Any_Object);
  return bVar7;
}


// CustomLogic.CustomLogicListBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Clear (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c0bf0

void CustomLogic_CustomLogicListBuiltin__Clear
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  Il2CppClass *item;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *value;
  Il2CppObject *item_00;
  int32_t iVar8;
  System_Exception_o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  Il2CppObject *__this_01;
  
  pSVar9 = (System_Exception_o *)__this;
  if (g_data_057ac563 == '\0') {
    pSVar9 = (System_Exception_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac563 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar10 = (__this->fields).List;
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar8 = (pSVar10->fields)._size;
      (pSVar10->fields)._size = 0;
      if (iVar8 < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar8,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
    method = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int32_t)method;
  if (g_data_057ac564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057ac564 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._helpURL;
  if (iVar8 < 0) {
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar8 = iVar8 + (pSVar10->fields)._size;
      goto label_040c0cd8;
    }
  }
  else if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
label_040c0cd8:
    System_Collections_Generic_List_object___get_Item(pSVar10,iVar8,MethodInfo_Object_get_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int32_t)method;
  if (g_data_057ac565 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac565 = '\x01';
  }
  if (*(char *)&pSVar10[1].fields._items == '\0') {
    pSVar9 = pSVar10[1].monitor;
    if (iVar8 < 0) {
      if (pSVar9 != (System_Exception_o *)0x0) {
        iVar8 = iVar8 + *(int *)&(pSVar9->fields)._message;
        goto label_040c0d51;
      }
    }
    else if (pSVar9 != (System_Exception_o *)0x0) {
label_040c0d51:
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,value,MethodInfo_Void_set_Item);
      return;
    }
  }
  else {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
    method = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Set);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if (*(char *)&(pSVar9->fields)._stackTrace == '\0') {
    pSVar10 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._helpURL;
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar10->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar10->fields)._size;
        if ((uint)pSVar3->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar10,(Il2CppObject *)method,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (pSVar10->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)method;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,method);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar8 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar9->fields)._stackTrace == '\0') {
    pSVar9 = (System_Exception_o *)(pSVar9->fields)._helpURL;
    if (iVar8 < 0) {
      if (pSVar9 != (System_Exception_o *)0x0) {
        iVar8 = iVar8 + *(int *)&(pSVar9->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar9 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,item_00,_DAT_05591640);
      return;
    }
  }
  else {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar9->fields)._stackTrace == '\0') {
    pSVar9 = (System_Exception_o *)(pSVar9->fields)._helpURL;
    if (iVar8 < 0) {
      if (pSVar9 != (System_Exception_o *)0x0) {
        iVar8 = iVar8 + *(int *)&(pSVar9->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar9 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar7 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar9->fields)._stackTrace == '\0') {
    pSVar10 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._helpURL;
    pSVar9 = (System_Exception_o *)0x0;
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar10,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar9,pSVar6,(MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  __this_00[1].klass = pIVar7;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar7);
  pSVar6 = (pSVar9->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  System_Linq_Enumerable__Any_object__2504f10
            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,predicate,MethodInfo_Boolean_Any_Object);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Get (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40c0c90

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Get
          (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX_00;
  undefined8 uVar7;
  System_Exception_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppClass *item;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  undefined4 extraout_var_00;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *value;
  Il2CppObject *item_00;
  int32_t iVar11;
  undefined4 in_register_00000034;
  System_Collections_Generic_List_object__o *pSVar12;
  
  pIVar6 = (Il2CppObject *)CONCAT44(in_register_00000034,index);
  if (g_data_057ac564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057ac564 = '\x01';
  }
  pSVar12 = (__this->fields).List;
  if (index < 0) {
    if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (pSVar12->fields)._size;
      goto label_040c0cd8;
    }
  }
  else if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
label_040c0cd8:
    pIVar6 = System_Collections_Generic_List_object___get_Item(pSVar12,index,MethodInfo_Object_get_Item);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar11 = (int32_t)pIVar6;
  if (g_data_057ac565 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac565 = '\x01';
  }
  if (*(char *)&pSVar12[1].fields._items == '\0') {
    pSVar8 = pSVar12[1].monitor;
    if (iVar11 < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        iVar11 = iVar11 + *(int *)&(pSVar8->fields)._message;
        goto label_040c0d51;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0d51:
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar11,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Set);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._helpURL;
    if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar12->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar12->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar12->fields)._size;
        if ((uint)pSVar3->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar12,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
          return extraout_RAX_00;
        }
        (pSVar12->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar6);
        return pIVar6;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar11 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar8 = (System_Exception_o *)(pSVar8->fields)._helpURL;
    if (iVar11 < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        iVar11 = iVar11 + *(int *)&(pSVar8->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar11,item_00,_DAT_05591640);
      return extraout_RAX_01;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar11 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar8 = (System_Exception_o *)(pSVar8->fields)._helpURL;
    if (iVar11 < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        iVar11 = iVar11 + *(int *)&(pSVar8->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar11,MethodInfo_Void_RemoveAt);
      return extraout_RAX_02;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._helpURL;
    pSVar8 = (System_Exception_o *)0x0;
    if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar5 = System_Collections_Generic_List_object___Remove(pSVar12,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)CONCAT44(extraout_var,bVar5);
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  pIVar6 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  __this_00[1].klass = pIVar10;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar10);
  pSVar9 = (pSVar8->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  bVar5 = System_Linq_Enumerable__Any_object__2504f10
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,predicate,MethodInfo_Boolean_Any_Object);
  return (Il2CppObject *)CONCAT44(extraout_var_00,bVar5);
}


// CustomLogic.CustomLogicListBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Set (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x40c0d00

void CustomLogic_CustomLogicListBuiltin__Set
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  System_Exception_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppClass *item;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *item_00;
  int32_t iVar11;
  undefined4 in_register_00000034;
  
  pIVar6 = (Il2CppObject *)CONCAT44(in_register_00000034,index);
  if (g_data_057ac565 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac565 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar8 = (System_Exception_o *)(__this->fields).List;
    if (index < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        index = index + *(int *)&(pSVar8->fields)._message;
        goto label_040c0d51;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0d51:
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,index,value,MethodInfo_Void_set_Item);
      return;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Set);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar5 = MethodInfo_Void_Add;
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._helpURL;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar3->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar6);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar11 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar8 = (System_Exception_o *)(pSVar8->fields)._helpURL;
    if (iVar11 < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        iVar11 = iVar11 + *(int *)&(pSVar8->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar11,item_00,_DAT_05591640);
      return;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar11 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar8 = (System_Exception_o *)(pSVar8->fields)._helpURL;
    if (iVar11 < 0) {
      if (pSVar8 != (System_Exception_o *)0x0) {
        iVar11 = iVar11 + *(int *)&(pSVar8->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar8 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar11,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar8->fields)._stackTrace == '\0') {
    pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._helpURL;
    pSVar8 = (System_Exception_o *)0x0;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar3,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar8,pSVar9,(MethodInfo *)0x0);
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  pIVar6 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    return;
  }
  __this_00[1].klass = pIVar10;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar10);
  pSVar9 = (pSVar8->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  System_Linq_Enumerable__Any_object__2504f10
            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,predicate,MethodInfo_Boolean_Any_Object);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Add (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c0dc0

void CustomLogic_CustomLogicListBuiltin__Add
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined8 uVar6;
  System_Exception_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppClass *item;
  Il2CppClass *pIVar9;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *item_00;
  int32_t iVar10;
  Il2CppObject *__this_01;
  
  if (g_data_057ac566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac566 = '\x01';
  }
  lVar5 = MethodInfo_Void_Add;
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar3 = (__this->fields).List;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar3->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,value,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = value;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,value);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
  item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
  il2cpp_runtime_helper_022b2b10();
  iVar10 = (int32_t)item;
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if (*(char *)&(pSVar7->fields)._stackTrace == '\0') {
    pSVar7 = (System_Exception_o *)(pSVar7->fields)._helpURL;
    if (iVar10 < 0) {
      if (pSVar7 != (System_Exception_o *)0x0) {
        iVar10 = iVar10 + *(int *)&(pSVar7->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar7 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar7,iVar10,item_00,_DAT_05591640);
      return;
    }
  }
  else {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  iVar10 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar7->fields)._stackTrace == '\0') {
    pSVar7 = (System_Exception_o *)(pSVar7->fields)._helpURL;
    if (iVar10 < 0) {
      if (pSVar7 != (System_Exception_o *)0x0) {
        iVar10 = iVar10 + *(int *)&(pSVar7->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar7 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar7,iVar10,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar7->fields)._stackTrace == '\0') {
    pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._helpURL;
    pSVar7 = (System_Exception_o *)0x0;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(pSVar3,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
    pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  __this_00[1].klass = pIVar9;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar9);
  pSVar8 = (pSVar7->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  System_Linq_Enumerable__Any_object__2504f10
            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,predicate,MethodInfo_Boolean_Any_Object);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$InsertAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__InsertAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x40c0eb0

void CustomLogic_CustomLogicListBuiltin__InsertAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *item;
  undefined8 uVar1;
  System_Exception_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  int32_t index_00;
  undefined4 in_register_00000034;
  Il2CppObject *__this_02;
  
  item = (Il2CppClass *)CONCAT44(in_register_00000034,index);
  if (g_data_057ac567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac567 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar2 = (System_Exception_o *)(__this->fields).List;
    if (index < 0) {
      if (pSVar2 != (System_Exception_o *)0x0) {
        index = index + *(int *)&(pSVar2->fields)._message;
        goto label_040c0f01;
      }
    }
    else if (pSVar2 != (System_Exception_o *)0x0) {
label_040c0f01:
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar2,index,value,_DAT_05591640);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar2 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar2,pSVar3,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_InsertAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  index_00 = (int32_t)item;
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if (*(char *)&(pSVar2->fields)._stackTrace == '\0') {
    pSVar2 = (System_Exception_o *)(pSVar2->fields)._helpURL;
    if (index_00 < 0) {
      if (pSVar2 != (System_Exception_o *)0x0) {
        index_00 = index_00 + *(int *)&(pSVar2->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar2 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,index_00,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar2 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar2,pSVar3,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar2->fields)._stackTrace == '\0') {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._helpURL;
    pSVar2 = (System_Exception_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar2 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar2,pSVar3,(MethodInfo *)0x0);
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    return;
  }
  __this_01[1].klass = pIVar4;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,pIVar4);
  pSVar3 = (pSVar2->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  System_Linq_Enumerable__Any_object__2504f10
            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,MethodInfo_Boolean_Any_Object);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$RemoveAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__RemoveAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40c0f70

void CustomLogic_CustomLogicListBuiltin__RemoveAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *item;
  undefined8 uVar1;
  System_Exception_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  undefined4 in_register_00000034;
  Il2CppObject *__this_02;
  
  item = (Il2CppClass *)CONCAT44(in_register_00000034,index);
  if (g_data_057ac568 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac568 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar2 = (System_Exception_o *)(__this->fields).List;
    if (index < 0) {
      if (pSVar2 != (System_Exception_o *)0x0) {
        index = index + *(int *)&(pSVar2->fields)._message;
        goto label_040c0fbd;
      }
    }
    else if (pSVar2 != (System_Exception_o *)0x0) {
label_040c0fbd:
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,index,MethodInfo_Void_RemoveAt);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar2 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar2,pSVar3,(MethodInfo *)0x0);
    item = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = item;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if (*(char *)&(pSVar2->fields)._stackTrace == '\0') {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._helpURL;
    pSVar2 = (System_Exception_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar2 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar2,pSVar3,(MethodInfo *)0x0);
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    return;
  }
  __this_01[1].klass = pIVar4;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,pIVar4);
  pSVar3 = (pSVar2->fields)._helpURL;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
  System_Func_object__bool____ctor();
  System_Linq_Enumerable__Any_object__2504f10
            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,MethodInfo_Boolean_Any_Object);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Remove (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c1020

void CustomLogic_CustomLogicListBuiltin__Remove
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_02;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *__this_03;
  
  pIVar3 = (Il2CppClass *)value;
  if (g_data_057ac569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac569 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    __this_00 = (__this->fields).List;
    __this_01 = (System_Exception_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(__this_00,value,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(__this_01,pSVar2,(MethodInfo *)0x0);
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_03 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_02 + 1,pIVar3);
    pSVar2 = (__this_01->fields)._helpURL;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
    System_Func_object__bool____ctor();
    System_Linq_Enumerable__Any_object__2504f10
              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,predicate,MethodInfo_Boolean_Any_Object);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__Contains (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c10c0

bool_conflict
CustomLogic_CustomLogicListBuiltin__Contains
          (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *__this_01;
  
  if (g_data_057ac56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    g_data_057ac56a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)value;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,value);
    source = (__this->fields).List;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
    System_Func_object__bool____ctor();
    bVar1 = System_Linq_Enumerable__Any_object__2504f10
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_Boolean_Any_Object);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// CustomLogic.CustomLogicListBuiltin$$Sort
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Sort (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c11a0

void CustomLogic_CustomLogicListBuiltin__Sort(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *__this_00;
  System_Comparison_T__o *comparison;
  undefined8 uVar2;
  System_Exception_o *pSVar3;
  System_String_o *pSVar4;
  
  if (g_data_057ac56b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    g_data_057ac56b = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    pSVar1 = (__this->fields).List;
    pSVar3 = (System_Exception_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort(pSVar1,MethodInfo_Void_Sort);
      return;
    }
  }
  else {
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar3 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
    System_Exception___ctor_3cf6120(pSVar3,pSVar4,(MethodInfo *)0x0);
    method = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_022b2b10();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac56c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_SortCustom_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    g_data_057ac56c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)method;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,method);
    if (*(char *)&(pSVar3->fields)._stackTrace != '\0') goto label_040c1307;
    pSVar1 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._helpURL;
    comparison = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_object);
    System_Comparison_object____ctor();
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort_362e2a0(pSVar1,comparison,MethodInfo_Void_Sort);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040c1307:
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar3 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(pSVar3,pSVar4,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SortCustom);
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$SortCustom
// il2cpp: void CustomLogic_CustomLogicListBuiltin__SortCustom (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x40c1230

void CustomLogic_CustomLogicListBuiltin__SortCustom(void)

{
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *__this_00;
  System_Comparison_T__o *comparison;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (g_data_057ac56c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_SortCustom_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    g_data_057ac56c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = in_RSI;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    if (*(char *)(in_RDI + 0x38) != '\0') goto label_040c1307;
    __this = *(System_Collections_Generic_List_object__o **)(in_RDI + 0x30);
    comparison = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_object);
    System_Comparison_object____ctor();
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort_362e2a0(__this,comparison,MethodInfo_Void_Sort);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040c1307:
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar1);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Cannot modify a read-only list.");
  System_Exception___ctor_3cf6120(__this_01,message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SortCustom);
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Filter
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Filter (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x40c1360

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicListBuiltin__Filter(void)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *__this;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *__this_01;
  System_Collections_Generic_List_TSource__o *pSVar1;
  CustomLogic_CustomLogicListBuiltin_o *extraout_RAX;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (g_data_057ac56d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Object_Where_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Filter_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    g_data_057ac56d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_01 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = in_RSI;
    il2cpp_runtime_helper_022b4080(__this + 1);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)in_RSI);
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(in_RDI + 0x30);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_bool);
    System_Func_object__bool____ctor();
    __this_01 = (Il2CppObject *)System_Linq_Enumerable__Where_object_(source,predicate,MethodInfo_IEnumerable_1_System_Object_Where_Object);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,MethodInfo_List_1_System_Object_ToList_Object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).List,pSVar1);
      return __this_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicListBuiltin$$Map
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Map (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x40c14b0

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicListBuiltin__Map(void)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *__this;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_TSource__TResult__o *selector;
  Il2CppObject *__this_01;
  System_Collections_Generic_List_TSource__o *pSVar1;
  CustomLogic_CustomLogicListBuiltin_o *extraout_RAX;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (g_data_057ac56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Object_Select_Object_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_Map_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    g_data_057ac56e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  __this_01 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = in_RSI;
    il2cpp_runtime_helper_022b4080(__this + 1);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)in_RSI);
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(in_RDI + 0x30);
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_object);
    System_Func_object__object____ctor();
    __this_01 = (Il2CppObject *)System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_Object_Select_Object_Object);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,MethodInfo_List_1_System_Object_ToList_Object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).List,pSVar1);
      return __this_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicListBuiltin$$Reduce
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Reduce (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, Il2CppObject* initialValue, const MethodInfo* method);
// 0x40c1600

Il2CppObject * CustomLogic_CustomLogicListBuiltin__Reduce(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  System_String_o *s;
  System_Exception_o *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *in_RDX;
  Il2CppObject *pIVar10;
  Il2CppClass *in_RSI;
  long lVar11;
  long lVar12;
  long in_RDI;
  undefined1 auVar13 [12];
  
  if (g_data_057ac56f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_Aggregate_Object_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_Reduce_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass19_0);
    g_data_057ac56f = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass19_0);
  pIVar10 = pIVar8;
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (pIVar8 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pIVar8[1].klass = in_RSI;
  il2cpp_runtime_helper_022b4080(pIVar8 + 1);
  plVar5 = *(long **)(in_RDI + 0x30);
  lVar9 = il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_object_object);
  System_Func_object__object__object____ctor();
  lVar1 = MethodInfo_Object_Aggregate_Object_Object;
  if (*(long *)(MethodInfo_Object_Aggregate_Object_Object + 0x38) == 0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0();
    if (*(long *)(lVar1 + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20();
    }
  }
  if (plVar5 == (long *)0x0) {
    puVar4 = &"source";
  }
  else {
    if (lVar9 != 0) {
      lVar3 = **(long **)(lVar1 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = il2cpp_runtime_helper_023009c0();
      }
      lVar12 = *plVar5;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar11) == lVar3) {
            puVar4 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar11) * 0x10 + lVar12 + 0x138);
            goto label_026028b1;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar11);
      }
      puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,lVar3,0);
label_026028b1:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        do {
          lVar3 = *plVar5;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                puVar4 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
                goto label_02602933;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
          }
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IEnumerator,0);
label_02602933:
          cVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (cVar2 == '\0') {
            pIVar10 = (Il2CppObject *)0x0;
            pIVar8 = in_RDX;
            goto label_026029e8;
          }
          lVar3 = *(long *)(*(long *)(lVar1 + 0x38) + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = il2cpp_runtime_helper_023009c0();
          }
          lVar12 = *plVar5;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
            lVar11 = 0;
            do {
              if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar11) == lVar3) {
                puVar4 = (undefined8 *)
                         (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
                goto label_026029c3;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar11);
          }
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,lVar3,0);
label_026029c3:
          uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          in_RDX = (Il2CppObject *)
                   (**(code **)(lVar9 + 0x18))
                             (*(undefined8 *)(lVar9 + 0x40),in_RDX,uVar6,*(undefined8 *)(lVar9 + 0x28));
        } while( true );
      }
      goto label_02602a97;
    }
    puVar4 = (undefined8 *)&"func";
  }
  s = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar4);
  pSVar7 = System_Linq_Error__ArgumentNull(s,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2b10(pSVar7,lVar1);
label_02602a97:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar13 = il2cpp_runtime_helper_022fefe0();
    if (auVar13._8_4_ != 1) break;
    puVar4 = (undefined8 *)__cxa_begin_catch();
    pIVar10 = (Il2CppObject *)*puVar4;
    __cxa_end_catch();
    pIVar8 = in_RDX;
label_026029e8:
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
            puVar4 = (undefined8 *)
                     (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
            goto label_02602a4d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
      }
      puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IDisposable,0);
label_02602a4d:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    in_RDX = pIVar10;
    if (pIVar10 == (Il2CppObject *)0x0) {
      return pIVar8;
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar1 = *plVar5;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
          puVar4 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
          goto label_02602b3d;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IDisposable,0);
label_02602b3d:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  _Unwind_Resume(auVar13._0_8_);
}


// CustomLogic.CustomLogicListBuiltin$$Randomize
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Randomize (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c16f0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Randomize(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  Il2CppObject *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Il2CppClass *__this_02;
  System_Func_TSource__TKey__o *keySelector;
  Il2CppClass *__this_03;
  System_Collections_Generic_List_TSource__o *pSVar1;
  CustomLogic_CustomLogicListBuiltin_o *extraout_RAX;
  MethodInfo *method_00;
  
  if (g_data_057ac570 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Object_OrderBy_Object_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_object_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Randomize_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ac570 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,method_00);
  __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
  __this_03 = __this_02;
  System_Random___ctor((System_Random_o *)__this_02,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_02;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_02);
    source = (__this->fields).List;
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_object_int);
    System_Func_object__int____ctor();
    __this_03 = (Il2CppClass *)
                System_Linq_Enumerable__OrderBy_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Object_OrderBy_Object_Int32);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)__this_03,MethodInfo_List_1_System_Object_ToList_Object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).List,pSVar1);
      return __this_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicListBuiltin$$ToSet
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicListBuiltin__ToSet (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1860

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicListBuiltin__ToSet(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar2;
  CustomLogic_CustomLogicSetBuiltin_o *__this_07;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *item;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (g_data_057ac571 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac571 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  item = (Il2CppObject *)0x0;
  __this_07 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSetBuiltin);
  CustomLogic_CustomLogicSetBuiltin___ctor(__this_07,method);
  __this_00 = (__this->fields).List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_040c19a4:
    il2cpp_runtime_helper_022b2c90();
label_040c19a9:
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar6;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_05.fields._current = item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      if (lVar1 == 0) {
        return __this_07;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_06.fields._8_8_ = pIVar6;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_06.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,__this_00,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar6 = (Il2CppType *)local_38._8_8_;
  item = local_28;
  if (__this_07 == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    __this_03.fields._index = local_38._8_4_;
    __this_03.fields._version = local_38._12_4_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_03.fields._current = local_28;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar6 = (Il2CppType *)local_38._8_8_;
    item = local_28;
    if ((char)bVar2 != '\0') goto label_040c19a9;
  }
  else {
    while (__this_02.fields._8_8_ = pIVar6,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
          __this_02.fields._current = item,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8),
          local_38._0_8_ = pSVar5, local_38._8_8_ = pIVar6, local_28 = item, (char)bVar2 != '\0') {
      __this_01 = (__this_07->fields).Set;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_040c19a4;
      }
      System_Collections_Generic_HashSet_object___Add(__this_01,item,MethodInfo_Boolean_Add);
    }
  }
  __this_04.fields._8_8_ = local_38._8_8_;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  __this_04.fields._current = local_28;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  return __this_07;
}


// CustomLogic.CustomLogicListBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Copy (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1af0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Copy(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  System_Collections_Generic_List_TSource__o *pSVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar3;
  Il2CppObject *value;
  int index;
  System_Collections_Generic_List_object__o *source;
  System_Collections_Generic_List_object__o *__this_01;
  
  if (g_data_057ac572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object_ToList_Object);
    g_data_057ac572 = '\x01';
  }
  pCVar1 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar1,method);
  source = (__this->fields).List;
  pSVar2 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_Object_ToList_Object);
  if (pCVar1 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    (pCVar1->fields).List = (System_Collections_Generic_List_object__o *)pSVar2;
    il2cpp_runtime_helper_022b4080(&(pCVar1->fields).List,pSVar2);
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"\"");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"]");
    g_data_057ac573 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Append_3b03f90(__this_00,"[",(MethodInfo *)0x0);
    __this_01 = source[1].monitor;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        do {
          pSVar3 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_Object_get_Item);
          if ((pSVar3 == (System_String_o *)0x0) || (pSVar3->klass != g_data_057b9c00)) {
            if (source[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
            value = System_Collections_Generic_List_object___get_Item(source[1].monitor,index,MethodInfo_Object_get_Item);
            System_Text_StringBuilder__Append_3b04a00(__this_00,value,(MethodInfo *)0x0);
            __this_01 = source[1].monitor;
          }
          else {
            pSVar3 = System_String__Concat_3af7150("\"",pSVar3,"\"",(MethodInfo *)0x0);
            System_Text_StringBuilder__Append_3b03f90(__this_00,pSVar3,(MethodInfo *)0x0);
            __this_01 = source[1].monitor;
          }
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
          if (index != (__this_01->fields)._size + -1) {
            System_Text_StringBuilder__Append_3b03f90(__this_00,", ",(MethodInfo *)0x0);
            __this_01 = source[1].monitor;
          }
          index = index + 1;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
        } while (index < (__this_01->fields)._size);
      }
      goto label_040c1d12;
    }
  }
label_040c1d0d:
  il2cpp_runtime_helper_022b2c90();
label_040c1d12:
  System_Text_StringBuilder__Append_3b03f90(__this_00,"]",(MethodInfo *)0x0);
  pCVar1 = (CustomLogic_CustomLogicListBuiltin_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pCVar1;
}


// CustomLogic.CustomLogicListBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__ToString (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1b80

System_String_o *
CustomLogic_CustomLogicListBuiltin__ToString(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *value;
  System_String_o *pSVar1;
  int index;
  System_Collections_Generic_List_object__o *pSVar2;
  
  if (g_data_057ac573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"\"");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"]");
    g_data_057ac573 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Append_3b03f90(__this_00,"[",(MethodInfo *)0x0);
    pSVar2 = (__this->fields).List;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        do {
          pSVar1 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_Object_get_Item);
          if ((pSVar1 == (System_String_o *)0x0) || (pSVar1->klass != g_data_057b9c00)) {
            pSVar2 = (__this->fields).List;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
            value = System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_Object_get_Item);
            System_Text_StringBuilder__Append_3b04a00(__this_00,value,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          else {
            pSVar1 = System_String__Concat_3af7150("\"",pSVar1,"\"",(MethodInfo *)0x0);
            System_Text_StringBuilder__Append_3b03f90(__this_00,pSVar1,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
          if (index != (pSVar2->fields)._size + -1) {
            System_Text_StringBuilder__Append_3b03f90(__this_00,", ",(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          index = index + 1;
          if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_040c1d0d;
        } while (index < (pSVar2->fields)._size);
      }
      goto label_040c1d12;
    }
  }
label_040c1d0d:
  il2cpp_runtime_helper_022b2c90();
label_040c1d12:
  System_Text_StringBuilder__Append_3b03f90(__this_00,"]",(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar1;
}


// CustomLogic.CustomLogicListBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__get_ClassName (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1d50

System_String_o *
CustomLogic_CustomLogicListBuiltin__get_ClassName
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac574 == '\0') {
    il2cpp_runtime_helper_023445d0(&"List");
    g_data_057ac574 = '\x01';
  }
  return "List";
}


// CustomLogic.CustomLogicListBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsAbstract (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1d80

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicListBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsStatic (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1d90

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_IsStatic
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicListBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x40c1da0

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


