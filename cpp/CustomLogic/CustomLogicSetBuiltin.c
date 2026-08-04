// Type: CustomLogic.CustomLogicSetBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSetBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSetBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40c9db0

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicSetBuiltin_o *pCVar10;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  System_Object_array *s;
  undefined1 auVar12 [16];
  undefined8 uStack_30;
  
  s = args;
  if (g_data_057ac5df == '\0') {
    s = (System_Object_array *)&TypeInfo_CustomLogicSetBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5df = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    iVar2 = args->max_length;
    auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSetBuiltin);
    pCVar10 = auVar12._0_8_;
    if (iVar2 == 0) {
      CustomLogic_CustomLogicSetBuiltin___ctor(pCVar10,method);
    }
    else {
      CustomLogic_CustomLogicSetBuiltin___ctor_3fc95c0(pCVar10,args,auVar12._8_8_);
    }
    return pCVar10;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  puVar11 = &uStack_30;
  if (g_data_057ac5e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IsProperSubsetOf");
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Difference");
    il2cpp_runtime_helper_023445d0(&"Union");
    il2cpp_runtime_helper_023445d0(&"ToList");
    il2cpp_runtime_helper_023445d0(&"Overlaps");
    il2cpp_runtime_helper_023445d0(&"IsProperSupersetOf");
    il2cpp_runtime_helper_023445d0(&"IsSubsetOf");
    il2cpp_runtime_helper_023445d0(&"SetEquals");
    il2cpp_runtime_helper_023445d0(&"IsSupersetOf");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Intersect");
    g_data_057ac5e0 = '\x01';
  }
  uVar4 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
  if (uVar4 < 0x819a4895) {
    if (uVar4 < 0x21a5901e) {
      if (uVar4 == 0x4a57fc2) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Clear",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5e2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5e2 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 8) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 8,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return pCVar10;
        }
      }
      else if (uVar4 == 0x21797cc1) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Overlaps",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5ed == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Overlaps_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ed = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x60) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x60,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x21a5901d) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"Remove",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e5 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 < 0x5db8d715) {
      if (uVar4 == 0x25973e73) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"IsProperSupersetOf",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5ec == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSupersetOf_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ec = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x58) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x58,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x5db8d714) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"IsProperSubsetOf",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5eb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSubsetOf_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5eb = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x50) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x50,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 == 0x819a4894) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"Union",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Union_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e6 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0x669c4958) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Contains",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e3 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 < 0x9dc3aa15) {
    if (uVar4 < 0x8c99c7e7) {
      if (uVar4 == 0x81a75162) {
        bVar5 = System_String__op_Equality((System_String_o *)s,"Difference",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5e8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Difference_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5e8 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x38) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar4 == 0x8c99c7e6) &&
              (bVar5 = System_String__op_Equality((System_String_o *)s,"IsSubsetOf",(MethodInfo *)0x0),
              (char)bVar5 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSubsetOf_b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e9 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x40) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x40,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if (uVar4 == 0x91bde06d) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"IsSupersetOf",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ea == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSupersetOf_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ea = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x48) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x48,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0x9dc3aa14) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Add",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e4 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 < 0xcf21bf87) {
    if (uVar4 == 0xba01b30c) {
      bVar5 = System_String__op_Equality((System_String_o *)s,"ToList",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ef == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToList_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ef = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x70) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar4 == 0xcf21bf86) &&
            (bVar5 = System_String__op_Equality((System_String_o *)s,"Intersect",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Intersect_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e7 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x30) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return pCVar10;
    }
  }
  else if (uVar4 == 0xedda3dae) {
    bVar5 = System_String__op_Equality((System_String_o *)s,"SetEquals",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetEquals_b__15_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5ee = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x68) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x68,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
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
    goto CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSetBuiltin not found");
  pSVar6 = System_String__Concat_3af7150(pSVar6,(System_String_o *)s,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120(unaff_RBX,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar8 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar7);
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)puVar11 + -8) = pSVar6;
  *(System_Exception_o **)((long)puVar11 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)puVar11 + -0x18) = puVar8;
  if (g_data_057ac5e1 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca459;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca465;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca471;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
    *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca47d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object);
    g_data_057ac5e1 = '\x01';
  }
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca493;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object);
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca4ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca4bb;
  pCVar10 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
  *(undefined8 *)((long)puVar11 + -0x20) = 0x40ca4d5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40cba40

void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5f1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40cbab0

void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbac0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar3;
  Il2CppObject *pIVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long lVar7;
  MethodInfo *unaff_RBX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  Il2CppObject *unaff_R14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_160 [16];
  Il2CppObject *pIStack_150;
  Il2CppRGCTXData *pIStack_148;
  undefined8 uStack_128;
  Il2CppRGCTXData *pIStack_120;
  MethodInfo *pMStack_118;
  undefined8 uStack_110;
  Il2CppRGCTXData *pIStack_108;
  MethodInfo *pMStack_100;
  undefined8 uStack_f8;
  Il2CppRGCTXData *pIStack_f0;
  MethodInfo *pMStack_e8;
  undefined8 uStack_e0;
  Il2CppRGCTXData *pIStack_d8;
  MethodInfo *pMStack_d0;
  undefined8 uStack_c8;
  Il2CppRGCTXData *pIStack_c0;
  MethodInfo *pMStack_b8;
  undefined8 uStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  MethodInfo *pMStack_a0;
  undefined8 uStack_98;
  Il2CppRGCTXData *pIStack_90;
  MethodInfo *pMStack_88;
  undefined8 uStack_80;
  Il2CppRGCTXData *pIStack_78;
  MethodInfo *pMStack_70;
  undefined8 uStack_68;
  MethodInfo *pMStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  MethodInfo *pMStack_48;
  Il2CppObject *pIStack_40;
  undefined8 uStack_38;
  MethodInfo *pMStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  MethodInfo *pMStack_18;
  
  pMVar9 = (MethodInfo *)__c;
  if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (g_data_057ac5d0 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      g_data_057ac5d0 = '\x01';
    }
    __this_00 = (__c->fields).Set;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
    unaff_RBX = (MethodInfo *)__c;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(__this_00,MethodInfo_Void_Clear);
      return (Il2CppObject *)0x0;
    }
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  lVar7 = auVar11._8_8_;
  uStack_20 = auVar11._0_8_;
  pMVar8 = unaff_RBX;
  pMVar10 = pMVar9;
  pMStack_18 = unaff_RBX;
  if (lVar7 == 0) {
label_040cbb83:
    pIStack_28 = (Il2CppObject *)0x40cbb88;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar9;
    if (pMVar9 != (MethodInfo *)0x0) {
      unaff_R14 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d1 == '\0') {
        pIStack_28 = (Il2CppObject *)0x40cbb40;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        g_data_057ac5d1 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_28 = (Il2CppObject *)0x40cbb62;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,unaff_R14,
                           MethodInfo_Boolean_Contains);
        uStack_20 = CONCAT17((char)bVar2,(undefined7)uStack_20);
        pIStack_28 = (Il2CppObject *)0x40cbb7b;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
        return pIVar4;
      }
    }
    goto label_040cbb83;
  }
  pIStack_28 = (Il2CppObject *)0x40cbb8d;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar11._8_8_;
  uStack_38 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pIVar4 = unaff_R14;
  pMStack_30 = pMVar8;
  pIStack_28 = unaff_R14;
  if (lVar7 == 0) {
label_040cbbec:
    pIStack_40 = (Il2CppObject *)0x40cbbf1;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar10;
    if (pMVar10 != (MethodInfo *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d2 == '\0') {
        pIStack_40 = (Il2CppObject *)0x40cbbc0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        g_data_057ac5d2 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_40 = (Il2CppObject *)0x40cbbe2;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,pIVar4,MethodInfo_Boolean_Add);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbbec;
  }
  pIStack_40 = (Il2CppObject *)0x40cbbf6;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar11._8_8_;
  uStack_50 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pMStack_48 = pMVar8;
  pIStack_40 = pIVar4;
  if (lVar7 == 0) {
label_040cbc5c:
    pIStack_58 = (Il2CppObject *)0x40cbc61;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar9;
    if (pMVar9 != (MethodInfo *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d3 == '\0') {
        pIStack_58 = (Il2CppObject *)0x40cbc30;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac5d3 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_58 = (Il2CppObject *)0x40cbc52;
        System_Collections_Generic_HashSet_object___Remove
                  ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,pIVar4,MethodInfo_Boolean_Remove);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbc5c;
  }
  pIStack_58 = (Il2CppObject *)0x40cbc66;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_68 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pMStack_60 = pMVar8;
  pIStack_58 = pIVar4;
  if (g_data_057ac5f2 == '\0') {
    pMStack_70 = (MethodInfo *)0x40cbc8f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_70 = (MethodInfo *)0x40cbc9b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f2 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbd32:
    pMStack_70 = (MethodInfo *)0x40cbd37;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_70 = (MethodInfo *)0x40cbcd1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_70 = (MethodInfo *)0x40cbce3;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d4 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_UnionWith;
        pMStack_70 = (MethodInfo *)0x40cbd00;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d4 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_70 = (MethodInfo *)0x40cbd28;
          System_Collections_Generic_HashSet_object___UnionWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_UnionWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbd32;
  }
  pMStack_70 = (MethodInfo *)0x40cbd3c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_80 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_78 = pIVar6;
  pMStack_70 = pMVar10;
  if (g_data_057ac5f3 == '\0') {
    pMStack_88 = (MethodInfo *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_88 = (MethodInfo *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbe02:
    pMStack_88 = (MethodInfo *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_88 = (MethodInfo *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_88 = (MethodInfo *)0x40cbdb3;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pMStack_88 = (MethodInfo *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_88 = (MethodInfo *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pMStack_88 = (MethodInfo *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_98 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_90 = pIVar5;
  pMStack_88 = pMVar9;
  if (g_data_057ac5f4 == '\0') {
    pMStack_a0 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_a0 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_a0 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_a0 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_a0 = (MethodInfo *)0x40cbe83;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_a0 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_a0 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_a0 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_b0 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pIStack_a8 = pIVar6;
  pMStack_a0 = pMVar8;
  if (g_data_057ac5f5 == '\0') {
    pMStack_b8 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b8 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_b8 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b8 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b8 = (MethodInfo *)0x40cbf53;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_b8 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b8 = (MethodInfo *)0x40cbf98;
          bVar2 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_b0 = CONCAT17((char)bVar2,(undefined7)uStack_b0);
          pMStack_b8 = (MethodInfo *)0x40cbfb1;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_b0 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_b8 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_c8 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_c0 = pIVar5;
  pMStack_b8 = pMVar10;
  if (g_data_057ac5f6 == '\0') {
    pMStack_d0 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_d0 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_d0 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_d0 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_d0 = (MethodInfo *)0x40cc043;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_d0 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_d0 = (MethodInfo *)0x40cc088;
          bVar2 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_c8 = CONCAT17((char)bVar2,(undefined7)uStack_c8);
          pMStack_d0 = (MethodInfo *)0x40cc0a1;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c8 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_d0 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_e0 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_d8 = pIVar6;
  pMStack_d0 = pMVar9;
  if (g_data_057ac5f7 == '\0') {
    pMStack_e8 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_e8 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_e8 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e8 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e8 = (MethodInfo *)0x40cc133;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_e8 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_e8 = (MethodInfo *)0x40cc178;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_e0 = CONCAT17((char)bVar2,(undefined7)uStack_e0);
          pMStack_e8 = (MethodInfo *)0x40cc191;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_e0 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_e8 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_f8 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pIStack_f0 = pIVar5;
  pMStack_e8 = pMVar8;
  if (g_data_057ac5f8 == '\0') {
    pMStack_100 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_100 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_100 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_100 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_100 = (MethodInfo *)0x40cc223;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_100 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_100 = (MethodInfo *)0x40cc268;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_f8 = CONCAT17((char)bVar2,(undefined7)uStack_f8);
          pMStack_100 = (MethodInfo *)0x40cc281;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_f8 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_100 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_110 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_108 = pIVar6;
  pMStack_100 = pMVar10;
  if (g_data_057ac5f9 == '\0') {
    pMStack_118 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_118 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_118 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_118 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_118 = (MethodInfo *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_118 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_118 = (MethodInfo *)0x40cc358;
          bVar2 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
          uStack_110 = CONCAT17((char)bVar2,(undefined7)uStack_110);
          pMStack_118 = (MethodInfo *)0x40cc371;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_110 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_118 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_128 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_120 = pIVar5;
  pMStack_118 = pMVar9;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_128 = CONCAT17((char)bVar2,(undefined7)uStack_128);
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_128 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar10 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar9 = pMVar10;
  pIStack_148 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar9);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_160,
               (System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_160._0_8_;
    pIVar14 = (Il2CppType *)auStack_160._8_8_;
    pIVar4 = pIStack_150;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_160._8_4_;
      __this_02.fields._version = auStack_160._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_160._0_8_;
      __this_02.fields._current = pIStack_150;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffe80);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_160._0_8_;
      pIVar14 = (Il2CppType *)auStack_160._8_8_;
      pIVar4 = pIStack_150;
      if ((char)bVar2 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar4,
            bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe80),
            auStack_160._0_8_ = pSVar13, auStack_160._8_8_ = pIVar14, pIStack_150 = pIVar4,
            (char)bVar2 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar4,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_160._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_160._0_8_;
    __this_03.fields._current = pIStack_150;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar4;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
    if (lVar7 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbb10

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long lVar7;
  MethodInfo *unaff_RBX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  Il2CppObject *unaff_R14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_158 [16];
  Il2CppObject *pIStack_148;
  Il2CppRGCTXData *pIStack_140;
  undefined8 uStack_120;
  Il2CppRGCTXData *pIStack_118;
  MethodInfo *pMStack_110;
  undefined8 uStack_108;
  Il2CppRGCTXData *pIStack_100;
  MethodInfo *pMStack_f8;
  undefined8 uStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  Il2CppRGCTXData *pIStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  MethodInfo *pMStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  MethodInfo *pMStack_28;
  Il2CppObject *pIStack_20;
  undefined8 uStack_18;
  
  pMVar9 = (MethodInfo *)__c;
  if (__a == (System_Object_array *)0x0) {
label_040cbb83:
    pIStack_20 = (Il2CppObject *)0x40cbb88;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    unaff_RBX = (MethodInfo *)__c;
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      unaff_R14 = __a->m_Items[0];
      uStack_18 = in_RAX;
      if (g_data_057ac5d1 == '\0') {
        pIStack_20 = (Il2CppObject *)0x40cbb40;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        g_data_057ac5d1 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_20 = (Il2CppObject *)0x40cbb62;
        bVar2 = System_Collections_Generic_HashSet_object___Contains(__this_00,unaff_R14,MethodInfo_Boolean_Contains);
        uStack_18 = CONCAT17((char)bVar2,(undefined7)uStack_18);
        pIStack_20 = (Il2CppObject *)0x40cbb7b;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
        return pIVar4;
      }
    }
    goto label_040cbb83;
  }
  pIStack_20 = (Il2CppObject *)0x40cbb8d;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar8 = unaff_RBX;
  pMVar10 = pMVar9;
  pIVar4 = unaff_R14;
  pMStack_28 = unaff_RBX;
  pIStack_20 = unaff_R14;
  if (lVar7 == 0) {
label_040cbbec:
    pIStack_38 = (Il2CppObject *)0x40cbbf1;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar9;
    if (pMVar9 != (MethodInfo *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d2 == '\0') {
        pIStack_38 = (Il2CppObject *)0x40cbbc0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        g_data_057ac5d2 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_38 = (Il2CppObject *)0x40cbbe2;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,pIVar4,MethodInfo_Boolean_Add);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbbec;
  }
  pIStack_38 = (Il2CppObject *)0x40cbbf6;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pMStack_40 = pMVar8;
  pIStack_38 = pIVar4;
  if (lVar7 == 0) {
label_040cbc5c:
    pIStack_50 = (Il2CppObject *)0x40cbc61;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar10;
    if (pMVar10 != (MethodInfo *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d3 == '\0') {
        pIStack_50 = (Il2CppObject *)0x40cbc30;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac5d3 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_50 = (Il2CppObject *)0x40cbc52;
        System_Collections_Generic_HashSet_object___Remove
                  ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,pIVar4,MethodInfo_Boolean_Remove);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbc5c;
  }
  pIStack_50 = (Il2CppObject *)0x40cbc66;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pMStack_58 = pMVar8;
  pIStack_50 = pIVar4;
  if (g_data_057ac5f2 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cbc8f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cbc9b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f2 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbd32:
    pMStack_68 = (MethodInfo *)0x40cbd37;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cbcd1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cbce3;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d4 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_UnionWith;
        pMStack_68 = (MethodInfo *)0x40cbd00;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d4 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cbd28;
          System_Collections_Generic_HashSet_object___UnionWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_UnionWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbd32;
  }
  pMStack_68 = (MethodInfo *)0x40cbd3c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_70 = pIVar6;
  pMStack_68 = pMVar9;
  if (g_data_057ac5f3 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbe02:
    pMStack_80 = (MethodInfo *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cbdb3;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pMStack_80 = (MethodInfo *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pMStack_80 = (MethodInfo *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_88 = pIVar5;
  pMStack_80 = pMVar10;
  if (g_data_057ac5f4 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_98 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cbe83;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_98 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_98 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_a0 = pIVar6;
  pMStack_98 = pMVar8;
  if (g_data_057ac5f5 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_b0 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x40cbf53;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_b0 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b0 = (MethodInfo *)0x40cbf98;
          bVar2 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_a8 = CONCAT17((char)bVar2,(undefined7)uStack_a8);
          pMStack_b0 = (MethodInfo *)0x40cbfb1;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_b0 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_c0 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_b8 = pIVar5;
  pMStack_b0 = pMVar9;
  if (g_data_057ac5f6 == '\0') {
    pMStack_c8 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c8 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_c8 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo *)0x40cc043;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_c8 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_c8 = (MethodInfo *)0x40cc088;
          bVar2 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_c0 = CONCAT17((char)bVar2,(undefined7)uStack_c0);
          pMStack_c8 = (MethodInfo *)0x40cc0a1;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c0 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_c8 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_d8 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_d0 = pIVar6;
  pMStack_c8 = pMVar10;
  if (g_data_057ac5f7 == '\0') {
    pMStack_e0 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_e0 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_e0 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo *)0x40cc133;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_e0 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_e0 = (MethodInfo *)0x40cc178;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_d8 = CONCAT17((char)bVar2,(undefined7)uStack_d8);
          pMStack_e0 = (MethodInfo *)0x40cc191;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d8 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_e0 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_f0 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_e8 = pIVar5;
  pMStack_e0 = pMVar8;
  if (g_data_057ac5f8 == '\0') {
    pMStack_f8 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_f8 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_f8 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo *)0x40cc223;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_f8 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_f8 = (MethodInfo *)0x40cc268;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_f0 = CONCAT17((char)bVar2,(undefined7)uStack_f0);
          pMStack_f8 = (MethodInfo *)0x40cc281;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_f0 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_f8 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_108 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_100 = pIVar6;
  pMStack_f8 = pMVar9;
  if (g_data_057ac5f9 == '\0') {
    pMStack_110 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_110 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_110 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_110 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_110 = (MethodInfo *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_110 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_110 = (MethodInfo *)0x40cc358;
          bVar2 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
          uStack_108 = CONCAT17((char)bVar2,(undefined7)uStack_108);
          pMStack_110 = (MethodInfo *)0x40cc371;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_108 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_110 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_120 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_118 = pIVar5;
  pMStack_110 = pMVar10;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_120 = CONCAT17((char)bVar2,(undefined7)uStack_120);
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_120 + 7);
          return pIVar4;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar9 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar9;
  pIStack_140 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_158,
               (System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_158._0_8_;
    pIVar14 = (Il2CppType *)auStack_158._8_8_;
    pIVar4 = pIStack_148;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_158._8_4_;
      __this_02.fields._version = auStack_158._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_158._0_8_;
      __this_02.fields._current = pIStack_148;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffe88);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_158._0_8_;
      pIVar14 = (Il2CppType *)auStack_158._8_8_;
      pIVar4 = pIStack_148;
      if ((char)bVar2 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar4,
            bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe88),
            auStack_158._0_8_ = pSVar13, auStack_158._8_8_ = pIVar14, pIStack_148 = pIVar4,
            (char)bVar2 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar4,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_158._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_158._0_8_;
    __this_03.fields._current = pIStack_148;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar4;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
    if (lVar7 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbb90

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar3;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long lVar7;
  MethodInfo *unaff_RBX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  Il2CppObject *unaff_R14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_140 [16];
  Il2CppObject *pIStack_130;
  Il2CppRGCTXData *pIStack_128;
  undefined8 uStack_108;
  Il2CppRGCTXData *pIStack_100;
  MethodInfo *pMStack_f8;
  undefined8 uStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  Il2CppRGCTXData *pIStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  MethodInfo *pMStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  MethodInfo *pMStack_28;
  Il2CppObject *pIStack_20;
  
  pMVar9 = (MethodInfo *)__c;
  if (__a == (System_Object_array *)0x0) {
label_040cbbec:
    pIStack_20 = (Il2CppObject *)0x40cbbf1;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    unaff_RBX = (MethodInfo *)__c;
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      unaff_R14 = __a->m_Items[0];
      if (g_data_057ac5d2 == '\0') {
        pIStack_20 = (Il2CppObject *)0x40cbbc0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        g_data_057ac5d2 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_20 = (Il2CppObject *)0x40cbbe2;
        System_Collections_Generic_HashSet_object___Add(__this_00,unaff_R14,MethodInfo_Boolean_Add);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbbec;
  }
  pIStack_20 = (Il2CppObject *)0x40cbbf6;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar8 = unaff_RBX;
  pMVar10 = pMVar9;
  pIVar6 = unaff_R14;
  pMStack_28 = unaff_RBX;
  pIStack_20 = unaff_R14;
  if (lVar7 == 0) {
label_040cbc5c:
    pIStack_38 = (Il2CppObject *)0x40cbc61;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pMVar8 = pMVar9;
    if (pMVar9 != (MethodInfo *)0x0) {
      pIVar6 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac5d3 == '\0') {
        pIStack_38 = (Il2CppObject *)0x40cbc30;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac5d3 = '\x01';
      }
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_38 = (Il2CppObject *)0x40cbc52;
        System_Collections_Generic_HashSet_object___Remove
                  ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,pIVar6,MethodInfo_Boolean_Remove);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbc5c;
  }
  pIStack_38 = (Il2CppObject *)0x40cbc66;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pMStack_40 = pMVar8;
  pIStack_38 = pIVar6;
  if (g_data_057ac5f2 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cbc8f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cbc9b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f2 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbd32:
    pMStack_50 = (MethodInfo *)0x40cbd37;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cbcd1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cbce3;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar4 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d4 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_UnionWith;
        pMStack_50 = (MethodInfo *)0x40cbd00;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d4 = '\x01';
      }
      pIVar5 = pIVar4;
      if (pIVar4 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cbd28;
          System_Collections_Generic_HashSet_object___UnionWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_UnionWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbd32;
  }
  pMStack_50 = (MethodInfo *)0x40cbd3c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar4 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_58 = pIVar5;
  pMStack_50 = pMVar10;
  if (g_data_057ac5f3 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (pIVar4 == (Il2CppRGCTXData *)0x0) {
label_040cbe02:
    pMStack_68 = (MethodInfo *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar4 + 3) != 0) {
    pIVar4 = (Il2CppRGCTXData *)pIVar4[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cbdb3;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar4;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar4,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pMStack_68 = (MethodInfo *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      pIVar4 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pMStack_68 = (MethodInfo *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_70 = pIVar4;
  pMStack_68 = pMVar9;
  if (g_data_057ac5f4 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_80 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cbe83;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar4 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_80 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar5 = pIVar4;
      if (pIVar4 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_80 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar4 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pIStack_88 = pIVar5;
  pMStack_80 = pMVar8;
  if (g_data_057ac5f5 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar4 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_98 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar4 + 3) != 0) {
    pIVar4 = (Il2CppRGCTXData *)pIVar4[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cbf53;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar4;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar4,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_98 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar4 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cbf98;
          bVar2 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_90 = CONCAT17((char)bVar2,(undefined7)uStack_90);
          pMStack_98 = (MethodInfo *)0x40cbfb1;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_98 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_a0 = pIVar4;
  pMStack_98 = pMVar10;
  if (g_data_057ac5f6 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_b0 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x40cc043;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar4 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_b0 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar5 = pIVar4;
      if (pIVar4 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b0 = (MethodInfo *)0x40cc088;
          bVar2 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_a8 = CONCAT17((char)bVar2,(undefined7)uStack_a8);
          pMStack_b0 = (MethodInfo *)0x40cc0a1;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_b0 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar4 = auVar11._8_8_;
  uStack_c0 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_b8 = pIVar5;
  pMStack_b0 = pMVar9;
  if (g_data_057ac5f7 == '\0') {
    pMStack_c8 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c8 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar4 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_c8 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar4 + 3) != 0) {
    pIVar4 = (Il2CppRGCTXData *)pIVar4[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo *)0x40cc133;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar4;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar4,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_c8 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar4 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_c8 = (MethodInfo *)0x40cc178;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_c0 = CONCAT17((char)bVar2,(undefined7)uStack_c0);
          pMStack_c8 = (MethodInfo *)0x40cc191;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c0 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_c8 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_d8 = auVar11._0_8_;
  pMVar9 = pMVar10;
  pIStack_d0 = pIVar4;
  pMStack_c8 = pMVar8;
  if (g_data_057ac5f8 == '\0') {
    pMStack_e0 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_e0 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_e0 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo *)0x40cc223;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar4 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_e0 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar5 = pIVar4;
      if (pIVar4 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_e0 = (MethodInfo *)0x40cc268;
          bVar2 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_d8 = CONCAT17((char)bVar2,(undefined7)uStack_d8);
          pMStack_e0 = (MethodInfo *)0x40cc281;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d8 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_e0 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar4 = auVar11._8_8_;
  uStack_f0 = auVar11._0_8_;
  pMVar8 = pMVar9;
  pIStack_e8 = pIVar5;
  pMStack_e0 = pMVar10;
  if (g_data_057ac5f9 == '\0') {
    pMStack_f8 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_f8 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar4 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_f8 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar4 + 3) != 0) {
    pIVar4 = (Il2CppRGCTXData *)pIVar4[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_f8 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_f8 = (MethodInfo *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar4;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar4,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_f8 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar4 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_f8 = (MethodInfo *)0x40cc358;
          bVar2 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
          uStack_f0 = CONCAT17((char)bVar2,(undefined7)uStack_f0);
          pMStack_f8 = (MethodInfo *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_f0 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_f8 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_108 = auVar11._0_8_;
  pMVar10 = pMVar8;
  pIStack_100 = pIVar4;
  pMStack_f8 = pMVar9;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar4 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar5 = pIVar4;
      if (pIVar4 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_SetEquals);
          uStack_108 = CONCAT17((char)bVar2,(undefined7)uStack_108);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_108 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar10 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar9 = pMVar10;
  pIStack_128 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar9);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_140,
               (System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_140._0_8_;
    pIVar14 = (Il2CppType *)auStack_140._8_8_;
    pIVar6 = pIStack_130;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_140._8_4_;
      __this_02.fields._version = auStack_140._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_140._0_8_;
      __this_02.fields._current = pIStack_130;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffea0);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_140._0_8_;
      pIVar14 = (Il2CppType *)auStack_140._8_8_;
      pIVar6 = pIStack_130;
      if ((char)bVar2 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar6,
            bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffea0),
            auStack_140._0_8_ = pSVar13, auStack_140._8_8_ = pIVar14, pIStack_130 = pIVar6,
            (char)bVar2 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_140._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_140._0_8_;
    __this_03.fields._current = pIStack_130;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
    if (lVar7 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbc00

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSetBuiltin_o *unaff_RBX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  Il2CppObject *unaff_R14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_128 [16];
  Il2CppObject *pIStack_118;
  Il2CppRGCTXData *pIStack_110;
  undefined8 uStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  Il2CppRGCTXData *pIStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  pMVar8 = (MethodInfo *)__c;
  if (__a == (System_Object_array *)0x0) {
label_040cbc5c:
    pIStack_20 = (Il2CppObject *)0x40cbc61;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    unaff_RBX = __c;
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      unaff_R14 = __a->m_Items[0];
      if (g_data_057ac5d3 == '\0') {
        pIStack_20 = (Il2CppObject *)0x40cbc30;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac5d3 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pIStack_20 = (Il2CppObject *)0x40cbc52;
        System_Collections_Generic_HashSet_object___Remove(__this_00,unaff_R14,MethodInfo_Boolean_Remove);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040cbc5c;
  }
  pIStack_20 = (Il2CppObject *)0x40cbc66;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pCStack_28 = unaff_RBX;
  pIStack_20 = unaff_R14;
  if (g_data_057ac5f2 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cbc8f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cbc9b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f2 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbd32:
    pMStack_38 = (MethodInfo *)0x40cbd37;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cbcd1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cbce3;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d4 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_UnionWith;
        pMStack_38 = (MethodInfo *)0x40cbd00;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d4 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cbd28;
          System_Collections_Generic_HashSet_object___UnionWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_UnionWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbd32;
  }
  pMStack_38 = (MethodInfo *)0x40cbd3c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar6;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f3 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbe02:
    pMStack_50 = (MethodInfo *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cbdb3;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pMStack_50 = (MethodInfo *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pMStack_50 = (MethodInfo *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar5;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f4 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_68 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cbe83;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_68 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_68 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar6;
  pMStack_68 = pMVar10;
  if (g_data_057ac5f5 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_80 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cbf53;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_80 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cbf98;
          bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo *)0x40cbfb1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_80 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_88 = pIVar5;
  pMStack_80 = pMVar8;
  if (g_data_057ac5f6 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_98 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cc043;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_98 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pMStack_98 = (MethodInfo *)0x40cc0a1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_98 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_a0 = pIVar6;
  pMStack_98 = pMVar9;
  if (g_data_057ac5f7 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_b0 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x40cc133;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_b0 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b0 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_a8 = CONCAT17((char)bVar3,(undefined7)uStack_a8);
          pMStack_b0 = (MethodInfo *)0x40cc191;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_b0 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_c0 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_b8 = pIVar5;
  pMStack_b0 = pMVar10;
  if (g_data_057ac5f8 == '\0') {
    pMStack_c8 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c8 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_c8 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo *)0x40cc223;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_c8 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_c8 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_c0 = CONCAT17((char)bVar3,(undefined7)uStack_c0);
          pMStack_c8 = (MethodInfo *)0x40cc281;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c0 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_c8 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_d8 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_d0 = pIVar6;
  pMStack_c8 = pMVar8;
  if (g_data_057ac5f9 == '\0') {
    pMStack_e0 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_e0 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_e0 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_e0 = (MethodInfo *)0x40cc313;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_e0 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_e0 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
          uStack_d8 = CONCAT17((char)bVar3,(undefined7)uStack_d8);
          pMStack_e0 = (MethodInfo *)0x40cc371;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_e0 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_f0 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_e8 = pIVar5;
  pMStack_e0 = pMVar9;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_f0 = CONCAT17((char)bVar3,(undefined7)uStack_f0);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_f0 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar8 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar9 = pMVar8;
  pIStack_110 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar9);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_128,
               (System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_128._0_8_;
    pIVar14 = (Il2CppType *)auStack_128._8_8_;
    pIVar7 = pIStack_118;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_128._8_4_;
      __this_02.fields._version = auStack_128._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_128._0_8_;
      __this_02.fields._current = pIStack_118;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffeb8);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_128._0_8_;
      pIVar14 = (Il2CppType *)auStack_128._8_8_;
      pIVar7 = pIStack_118;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar7,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffeb8),
            auStack_128._0_8_ = pSVar13, auStack_128._8_8_ = pIVar14, pIStack_118 = pIVar7,
            (char)bVar3 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar7,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_128._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_128._0_8_;
    __this_03.fields._current = pIStack_118;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Union>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbc70

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_110 [16];
  Il2CppObject *pIStack_100;
  Il2CppRGCTXData *pIStack_f8;
  undefined8 uStack_d8;
  Il2CppRGCTXData *pIStack_d0;
  MethodInfo *pMStack_c8;
  undefined8 uStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  
  pMVar8 = (MethodInfo *)__c;
  if (g_data_057ac5f2 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbc8f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbc9b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cbd32:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd37;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbcd1;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbce3;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d4 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_UnionWith;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd00;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d4 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd28;
          System_Collections_Generic_HashSet_object___UnionWith
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_UnionWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbd32;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd3c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f3 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbe02:
    pMStack_38 = (MethodInfo *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cbdb3;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pMStack_38 = (MethodInfo *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pMStack_38 = (MethodInfo *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f4 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_50 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cbe83;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_50 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_50 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar6;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f5 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_68 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cbf53;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_68 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cbf98;
          bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pMStack_68 = (MethodInfo *)0x40cbfb1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_68 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar5;
  pMStack_68 = pMVar10;
  if (g_data_057ac5f6 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_80 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cc043;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_80 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo *)0x40cc0a1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_80 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_88 = pIVar6;
  pMStack_80 = pMVar8;
  if (g_data_057ac5f7 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_98 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cc133;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_98 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pMStack_98 = (MethodInfo *)0x40cc191;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_98 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_a0 = pIVar5;
  pMStack_98 = pMVar9;
  if (g_data_057ac5f8 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_b0 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x40cc223;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_b0 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b0 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_a8 = CONCAT17((char)bVar3,(undefined7)uStack_a8);
          pMStack_b0 = (MethodInfo *)0x40cc281;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_b0 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_c0 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_b8 = pIVar6;
  pMStack_b0 = pMVar10;
  if (g_data_057ac5f9 == '\0') {
    pMStack_c8 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c8 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_c8 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo *)0x40cc313;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_c8 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_c8 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
          uStack_c0 = CONCAT17((char)bVar3,(undefined7)uStack_c0);
          pMStack_c8 = (MethodInfo *)0x40cc371;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c0 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_c8 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_d8 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_d0 = pIVar5;
  pMStack_c8 = pMVar8;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_d8 = CONCAT17((char)bVar3,(undefined7)uStack_d8);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar10 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar10;
  pIStack_f8 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_110,
               (System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_110._0_8_;
    pIVar14 = (Il2CppType *)auStack_110._8_8_;
    pIVar7 = pIStack_100;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_110._8_4_;
      __this_02.fields._version = auStack_110._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_110._0_8_;
      __this_02.fields._current = pIStack_100;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffed0);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_110._0_8_;
      pIVar14 = (Il2CppType *)auStack_110._8_8_;
      pIVar7 = pIStack_100;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar7,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffed0),
            auStack_110._0_8_ = pSVar13, auStack_110._8_8_ = pIVar14, pIStack_100 = pIVar7,
            (char)bVar3 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar7,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_110._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_110._0_8_;
    __this_03.fields._current = pIStack_100;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Intersect>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbd40

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_f8 [16];
  Il2CppObject *pIStack_e8;
  Il2CppRGCTXData *pIStack_e0;
  undefined8 uStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  
  pMVar8 = (MethodInfo *)__c;
  if (g_data_057ac5f3 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbd6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cbe02:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbda1;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbdb3;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d5 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_IntersectWith;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbdd0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d5 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbdf8;
          System_Collections_Generic_HashSet_object___IntersectWith
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbe02;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe0c;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f4 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbed2:
    pMStack_38 = (MethodInfo *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cbe83;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pMStack_38 = (MethodInfo *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                     (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pMStack_38 = (MethodInfo *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f5 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_50 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cbf53;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_50 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cbf98;
          bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pMStack_50 = (MethodInfo *)0x40cbfb1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_50 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar6;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f6 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_68 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cc043;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_68 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pMStack_68 = (MethodInfo *)0x40cc0a1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_68 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar5;
  pMStack_68 = pMVar10;
  if (g_data_057ac5f7 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_80 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cc133;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_80 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo *)0x40cc191;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_80 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_88 = pIVar6;
  pMStack_80 = pMVar8;
  if (g_data_057ac5f8 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_98 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cc223;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_98 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pMStack_98 = (MethodInfo *)0x40cc281;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_98 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_a0 = pIVar5;
  pMStack_98 = pMVar9;
  if (g_data_057ac5f9 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_b0 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b0 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b0 = (MethodInfo *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_b0 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_b0 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
          uStack_a8 = CONCAT17((char)bVar3,(undefined7)uStack_a8);
          pMStack_b0 = (MethodInfo *)0x40cc371;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_b0 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_c0 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_b8 = pIVar6;
  pMStack_b0 = pMVar10;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_SetEquals);
          uStack_c0 = CONCAT17((char)bVar3,(undefined7)uStack_c0);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c0 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar9 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar9;
  pIStack_e0 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_f8,
               (System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_f8._0_8_;
    pIVar14 = (Il2CppType *)auStack_f8._8_8_;
    pIVar7 = pIStack_e8;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_f8._8_4_;
      __this_02.fields._version = auStack_f8._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_f8._0_8_;
      __this_02.fields._current = pIStack_e8;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffee8);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_f8._0_8_;
      pIVar14 = (Il2CppType *)auStack_f8._8_8_;
      pIVar7 = pIStack_e8;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar7,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffee8),
            auStack_f8._0_8_ = pSVar13, auStack_f8._8_8_ = pIVar14, pIStack_e8 = pIVar7, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar7,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_f8._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_f8._0_8_;
    __this_03.fields._current = pIStack_e8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Difference>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbe10

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_e0 [16];
  Il2CppObject *pIStack_d0;
  Il2CppRGCTXData *pIStack_c8;
  undefined8 uStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  MethodInfo *pMStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  
  pMVar8 = (MethodInfo *)__c;
  if (g_data_057ac5f4 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe3b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cbed2:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbed7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe71;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbe83;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d6 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Void_ExceptWith;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbea0;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d6 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbec8;
          System_Collections_Generic_HashSet_object___ExceptWith
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_040cbed2;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbedc;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f5 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cbfb9:
    pMStack_38 = (MethodInfo *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cbf53;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pMStack_38 = (MethodInfo *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cbf98;
          bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pMStack_38 = (MethodInfo *)0x40cbfb1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cbfb9;
  }
  pMStack_38 = (MethodInfo *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f6 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_50 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cc043;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_50 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pMStack_50 = (MethodInfo *)0x40cc0a1;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_50 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar6;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f7 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_68 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cc133;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_68 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pMStack_68 = (MethodInfo *)0x40cc191;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_68 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar5;
  pMStack_68 = pMVar10;
  if (g_data_057ac5f8 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_80 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cc223;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_80 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo *)0x40cc281;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_80 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_88 = pIVar6;
  pMStack_80 = pMVar8;
  if (g_data_057ac5f9 == '\0') {
    pMStack_98 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_98 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_98 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_98 = (MethodInfo *)0x40cc313;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar6 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_98 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar6;
      if (pIVar6 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_98 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pMStack_98 = (MethodInfo *)0x40cc371;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_98 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar6 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_a0 = pIVar5;
  pMStack_98 = pMVar9;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar6 + 3) != 0) {
    pIVar6 = (Il2CppRGCTXData *)pIVar6[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar6;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar6 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_a8 = CONCAT17((char)bVar3,(undefined7)uStack_a8);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
          return pIVar7;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar8 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar9 = pMVar8;
  pIStack_c8 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar9);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_e0,
               (System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_e0._0_8_;
    pIVar14 = (Il2CppType *)auStack_e0._8_8_;
    pIVar7 = pIStack_d0;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_e0._8_4_;
      __this_02.fields._version = auStack_e0._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_e0._0_8_;
      __this_02.fields._current = pIStack_d0;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff00);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_e0._0_8_;
      pIVar14 = (Il2CppType *)auStack_e0._8_8_;
      pIVar7 = pIStack_d0;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar7,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff00),
            auStack_e0._0_8_ = pSVar13, auStack_e0._8_8_ = pIVar14, pIStack_d0 = pIVar7, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar7,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_e0._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_e0._0_8_;
    __this_03.fields._current = pIStack_d0;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSubsetOf>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbee0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppRGCTXData *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_c8 [16];
  Il2CppObject *pIStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pMVar8 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5f5 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbeff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbf0b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cbfb9:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbfbe;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbf41;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbf53;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d7 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSubsetOf;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbf70;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d7 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbf98;
          bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_IsSubsetOf);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbfb1;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cbfb9;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbfc3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f6 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc0a9:
    pMStack_38 = (MethodInfo *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cc043;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pMStack_38 = (MethodInfo *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsSupersetOf);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pMStack_38 = (MethodInfo *)0x40cc0a1;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc0a9;
  }
  pMStack_38 = (MethodInfo *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f7 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_50 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cc133;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_50 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pMStack_50 = (MethodInfo *)0x40cc191;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_50 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar7;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f8 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_68 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cc223;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_68 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pMStack_68 = (MethodInfo *)0x40cc281;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_68 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar5;
  pMStack_68 = pMVar10;
  if (g_data_057ac5f9 == '\0') {
    pMStack_80 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_80 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo *)0x40cc313;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_80 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_80 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_80 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_88 = pIVar7;
  pMStack_80 = pMVar8;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_SetEquals);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar10 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar10;
  pIStack_b0 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c8,
               (System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_c8._0_8_;
    pIVar14 = (Il2CppType *)auStack_c8._8_8_;
    pIVar6 = pIStack_b8;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_c8._8_4_;
      __this_02.fields._version = auStack_c8._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_c8._0_8_;
      __this_02.fields._current = pIStack_b8;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff18);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_c8._0_8_;
      pIVar14 = (Il2CppType *)auStack_c8._8_8_;
      pIVar6 = pIStack_b8;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff18),
            auStack_c8._0_8_ = pSVar13, auStack_c8._8_8_ = pIVar14, pIStack_b8 = pIVar6, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_c8._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_c8._0_8_;
    __this_03.fields._current = pIStack_b8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSupersetOf>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cbfd0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppRGCTXData *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_b0 [16];
  Il2CppObject *pIStack_a0;
  Il2CppRGCTXData *pIStack_98;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pMVar8 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5f6 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cbffb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cc0a9:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc0ae;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc031;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc043;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d8 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsSupersetOf;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc060;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d8 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc088;
          bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_IsSupersetOf);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc0a1;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc0a9;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc0b3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f7 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc199:
    pMStack_38 = (MethodInfo *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cc133;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pMStack_38 = (MethodInfo *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsProperSubsetOf);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pMStack_38 = (MethodInfo *)0x40cc191;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc199;
  }
  pMStack_38 = (MethodInfo *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f8 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_50 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cc223;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_50 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pMStack_50 = (MethodInfo *)0x40cc281;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_50 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar7;
  pMStack_50 = pMVar9;
  if (g_data_057ac5f9 == '\0') {
    pMStack_68 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_68 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_68 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_68 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_Overlaps);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pMStack_68 = (MethodInfo *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_68 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_70 = pIVar5;
  pMStack_68 = pMVar10;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_78 = CONCAT17((char)bVar3,(undefined7)uStack_78);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar9 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar9;
  pIStack_98 = pIVar7;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_b0,
               (System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_b0._0_8_;
    pIVar14 = (Il2CppType *)auStack_b0._8_8_;
    pIVar6 = pIStack_a0;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_b0._8_4_;
      __this_02.fields._version = auStack_b0._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_b0._0_8_;
      __this_02.fields._current = pIStack_a0;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff30);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_b0._0_8_;
      pIVar14 = (Il2CppType *)auStack_b0._8_8_;
      pIVar6 = pIStack_a0;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff30),
            auStack_b0._0_8_ = pSVar13, auStack_b0._8_8_ = pIVar14, pIStack_a0 = pIVar6, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_b0._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_b0._0_8_;
    __this_03.fields._current = pIStack_a0;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSubsetOf>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cc0c0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppRGCTXData *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_98 [16];
  Il2CppObject *pIStack_88;
  Il2CppRGCTXData *pIStack_80;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pMVar8 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5f7 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc0eb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cc199:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc19e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc121;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc133;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5d9 == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSubsetOf;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc150;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5d9 = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc178;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_IsProperSubsetOf);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc191;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc199;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc1a3;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f8 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc289:
    pMStack_38 = (MethodInfo *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cc223;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pMStack_38 = (MethodInfo *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsProperSupersetOf);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pMStack_38 = (MethodInfo *)0x40cc281;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc289;
  }
  pMStack_38 = (MethodInfo *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5f9 == '\0') {
    pMStack_50 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_50 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_50 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_50 = (MethodInfo *)0x40cc313;
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_50 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_50 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pMStack_50 = (MethodInfo *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_50 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  pMVar8 = pMVar10;
  pIStack_58 = pIVar7;
  pMStack_50 = pMVar9;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar10 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_SetEquals);
          uStack_60 = CONCAT17((char)bVar3,(undefined7)uStack_60);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar8 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar9 = pMVar8;
  pIStack_80 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar9);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_98,
               (System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_98._0_8_;
    pIVar14 = (Il2CppType *)auStack_98._8_8_;
    pIVar6 = pIStack_88;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_98._8_4_;
      __this_02.fields._version = auStack_98._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_98._0_8_;
      __this_02.fields._current = pIStack_88;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff48);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_98._0_8_;
      pIVar14 = (Il2CppType *)auStack_98._8_8_;
      pIVar6 = pIStack_88;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff48),
            auStack_98._0_8_ = pSVar13, auStack_98._8_8_ = pIVar14, pIStack_88 = pIVar6, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_98._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_98._0_8_;
    __this_03.fields._current = pIStack_88;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSupersetOf>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cc1b0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppRGCTXData *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_80 [16];
  Il2CppObject *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  undefined8 uStack_48;
  Il2CppRGCTXData *pIStack_40;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pMVar8 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5f8 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc1cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc1db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cc289:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc28e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc211;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc223;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5da == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_IsProperSupersetOf;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc240;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5da = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc268;
          bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_IsProperSupersetOf);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc281;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc289;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc293;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5f9 == '\0') {
    pMStack_38 = (MethodInfo *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_38 = (MethodInfo *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc379:
    pMStack_38 = (MethodInfo *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_38 = (MethodInfo *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_38 = (MethodInfo *)0x40cc313;
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pMStack_38 = (MethodInfo *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMStack_38 = (MethodInfo *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_Overlaps);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pMStack_38 = (MethodInfo *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pMStack_38 = (MethodInfo *)0x40cc383;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pIVar7 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  pMVar10 = pMVar9;
  pIStack_40 = pIVar5;
  pMStack_38 = pMVar8;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar7 + 3) != 0) {
    pIVar7 = (Il2CppRGCTXData *)pIVar7[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar7;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar9 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar7 = pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
          uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar10 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar10;
  pIStack_68 = pIVar7;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar10->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_80,
               (System_Collections_Generic_HashSet_object__o *)pMVar10->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_80._0_8_;
    pIVar14 = (Il2CppType *)auStack_80._8_8_;
    pIVar6 = pIStack_70;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_80._8_4_;
      __this_02.fields._version = auStack_80._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
      __this_02.fields._current = pIStack_70;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff60);
      pSVar13 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_80._0_8_;
      pIVar14 = (Il2CppType *)auStack_80._8_8_;
      pIVar6 = pIStack_70;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar14,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff60),
            auStack_80._0_8_ = pSVar13, auStack_80._8_8_ = pIVar14, pIStack_70 = pIVar6, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_80._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
    __this_03.fields._current = pIStack_70;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar13;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Overlaps>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cc2a0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppRGCTXData *pIVar7;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  undefined1 auStack_68 [16];
  Il2CppObject *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  undefined8 uStack_30;
  Il2CppRGCTXData *pIStack_28;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pMVar8 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5f9 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc2cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5f9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cc379:
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc37e;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc301;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc313;
    pMVar8 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5db == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_Overlaps;
        pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc330;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5db = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc358;
          bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_Overlaps);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc371;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc379;
  }
  pCStack_20 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40cc383;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  pIVar5 = auVar10._8_8_;
  uStack_30 = auVar10._0_8_;
  pMVar9 = pMVar8;
  pIStack_28 = (Il2CppRGCTXData *)__a;
  pCStack_20 = __c;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(pIVar5 + 3) != 0) {
    pIVar5 = (Il2CppRGCTXData *)pIVar5[4].method;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)pIVar5;
    pIVar7 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pIVar5,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (pMVar8 != (MethodInfo *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      pIVar5 = pIVar7;
      if (pIVar7 != (Il2CppRGCTXData *)0x0) {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters !=
            (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            ((System_Collections_Generic_HashSet_object__o *)pMVar8->parameters,
                             (System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_SetEquals);
          uStack_30 = CONCAT17((char)bVar3,(undefined7)uStack_30);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar9 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMVar8 = pMVar9;
  pIStack_50 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,pMVar8);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar9->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
               (System_Collections_Generic_HashSet_object__o *)pMVar9->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_68._0_8_;
    pIVar13 = (Il2CppType *)auStack_68._8_8_;
    pIVar6 = pIStack_58;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_68._8_4_;
      __this_02.fields._version = auStack_68._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_68._0_8_;
      __this_02.fields._current = pIStack_58;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff78);
      pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_68._0_8_;
      pIVar13 = (Il2CppType *)auStack_68._8_8_;
      pIVar6 = pIStack_58;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar13,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar12,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff78),
            auStack_68._0_8_ = pSVar12, auStack_68._8_8_ = pIVar13, pIStack_58 = pIVar6, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_68._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_68._0_8_;
    __this_03.fields._current = pIStack_58;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar13;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar12;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar13;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar12;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar11._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetEquals>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cc390

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  undefined8 in_RAX;
  Il2CppRGCTXData *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  Il2CppRGCTXData *pIStack_38;
  undefined8 uStack_18;
  
  pMVar7 = (MethodInfo *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac5fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5fa = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040cc469:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__a;
    pIVar5 = (Il2CppRGCTXData *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (g_data_057ac5dc == '\0') {
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)&MethodInfo_Boolean_SetEquals;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac5dc = '\x01';
      }
      __a = (System_Object_array *)pIVar5;
      if (pIVar5 != (Il2CppRGCTXData *)0x0) {
        __this_00 = (__c->fields).Set;
        __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,
                             MethodInfo_Boolean_SetEquals);
          uStack_18 = CONCAT17((char)bVar3,(undefined7)uStack_18);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar6;
        }
      }
    }
    goto label_040cc469;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar7 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  method_01 = pMVar7;
  pIStack_38 = (Il2CppRGCTXData *)__a;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,method_01);
  if ((System_Collections_Generic_HashSet_object__o *)pMVar7->parameters !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_50,
               (System_Collections_Generic_HashSet_object__o *)pMVar7->parameters,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_50._0_8_;
    pIVar10 = (Il2CppType *)auStack_50._8_8_;
    pIVar6 = pIStack_40;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_50._8_4_;
      __this_02.fields._version = auStack_50._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_50._0_8_;
      __this_02.fields._current = pIStack_40;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff90);
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_50._0_8_;
      pIVar10 = (Il2CppType *)auStack_50._8_8_;
      pIVar6 = pIStack_40;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar10,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
            __this_01.fields._current = pIVar6,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff90),
            auStack_50._0_8_ = pSVar9, auStack_50._8_8_ = pIVar10, pIStack_40 = pIVar6, (char)bVar3 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar6,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_50._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_50._0_8_;
    __this_03.fields._current = pIStack_40;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_04.fields._current = pIVar6;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar10;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
  __this_05.fields._current = pIVar6;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar8._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToList>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40cc480

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar5 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (__c == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac5fb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac5fb = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  method_01 = (MethodInfo *)__c;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,method_01);
  __this_00 = (__c->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
    pIVar7 = (Il2CppType *)auStack_38._8_8_;
    pIVar8 = pIStack_28;
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = auStack_38._8_4_;
      __this_02.fields._version = auStack_38._12_4_;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
      __this_02.fields._current = pIStack_28;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8);
      pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
      pIVar7 = (Il2CppType *)auStack_38._8_8_;
      pIVar8 = pIStack_28;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar7,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6,
            __this_01.fields._current = pIVar8,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8),
            auStack_38._0_8_ = pSVar6, auStack_38._8_8_ = pIVar7, pIStack_28 = pIVar8, (char)bVar3 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar8,method_00);
      }
    }
    __this_03.fields._8_8_ = auStack_38._8_8_;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
    __this_03.fields._current = pIStack_28;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    return (Il2CppObject *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar7;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
    __this_04.fields._current = pIVar8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    if (lVar2 == 0) {
      return (Il2CppObject *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar7;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
  __this_05.fields._current = pIVar8;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40c9e20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ac5e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IsProperSubsetOf");
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Difference");
    il2cpp_runtime_helper_023445d0(&"Union");
    il2cpp_runtime_helper_023445d0(&"ToList");
    il2cpp_runtime_helper_023445d0(&"Overlaps");
    il2cpp_runtime_helper_023445d0(&"IsProperSupersetOf");
    il2cpp_runtime_helper_023445d0(&"IsSubsetOf");
    il2cpp_runtime_helper_023445d0(&"SetEquals");
    il2cpp_runtime_helper_023445d0(&"IsSupersetOf");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Intersect");
    g_data_057ac5e0 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x819a4895) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5e2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5e2 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x21797cc1) {
        bVar4 = System_String__op_Equality(name,"Overlaps",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5ed == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Overlaps_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ed = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x21a5901d) &&
              (bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e5 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x5db8d715) {
      if (uVar3 == 0x25973e73) {
        bVar4 = System_String__op_Equality(name,"IsProperSupersetOf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5ec == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSupersetOf_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ec = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x5db8d714) &&
              (bVar4 = System_String__op_Equality(name,"IsProperSubsetOf",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5eb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSubsetOf_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5eb = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x819a4894) {
      bVar4 = System_String__op_Equality(name,"Union",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Union_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e6 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e3 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8c99c7e7) {
      if (uVar3 == 0x81a75162) {
        bVar4 = System_String__op_Equality(name,"Difference",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5e8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Difference_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5e8 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x8c99c7e6) &&
              (bVar4 = System_String__op_Equality(name,"IsSubsetOf",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSubsetOf_b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5e9 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x91bde06d) {
      bVar4 = System_String__op_Equality(name,"IsSupersetOf",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ea == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSupersetOf_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ea = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x9dc3aa14) &&
            (bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e4 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xcf21bf87) {
    if (uVar3 == 0xba01b30c) {
      bVar4 = System_String__op_Equality(name,"ToList",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ef == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToList_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ef = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xcf21bf86) &&
            (bVar4 = System_String__op_Equality(name,"Intersect",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Intersect_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5e7 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xedda3dae) {
    bVar4 = System_String__op_Equality(name,"SetEquals",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetEquals_b__15_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5ee = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSetBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ac5e1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca459;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca465;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca471;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca47d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object);
    g_data_057ac5e1 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca493;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca4ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca4bb;
  __this = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ca4d5;
  CustomLogic_CLPropertyBinding_object____ctor(__this,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x40ca440

CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object);
    g_data_057ac5e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x40ca4e0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x40ca630

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x40ca780

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Add_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x40ca8d0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Union
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union (const MethodInfo* method);
// 0x40caa20

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Union_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Intersect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect (const MethodInfo* method);
// 0x40cab70

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Intersect_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Difference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference (const MethodInfo* method);
// 0x40cacc0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Difference_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf (const MethodInfo* method);
// 0x40cae10

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSubsetOf_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5e9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf (const MethodInfo* method);
// 0x40caf60

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsSupersetOf_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ea = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf (const MethodInfo* method);
// 0x40cb0b0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSubsetOf_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5eb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf (const MethodInfo* method);
// 0x40cb200

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsProperSupersetOf_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ec = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Overlaps
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps (const MethodInfo* method);
// 0x40cb350

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Overlaps_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ed = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__SetEquals
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals (const MethodInfo* method);
// 0x40cb4a0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetEquals_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ee = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__ToList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList (const MethodInfo* method);
// 0x40cb5f0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (g_data_057ac5ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToList_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ef = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSetBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40cb740

void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_IEqualityComparer_T__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  undefined4 uStack_24;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ac5f0 == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb75d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb769;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb775;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb781;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb78d;
    il2cpp_runtime_helper_023445d0(&"IsProperSubsetOf");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb799;
    il2cpp_runtime_helper_023445d0(&"Remove");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7a5;
    il2cpp_runtime_helper_023445d0(&"Add");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7b1;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7bd;
    il2cpp_runtime_helper_023445d0(&"Count");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7c9;
    il2cpp_runtime_helper_023445d0(&"Difference");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7d5;
    il2cpp_runtime_helper_023445d0(&"Union");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7e1;
    il2cpp_runtime_helper_023445d0(&"ToList");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7ed;
    il2cpp_runtime_helper_023445d0(&"Overlaps");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb7f9;
    il2cpp_runtime_helper_023445d0(&"IsProperSupersetOf");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb805;
    il2cpp_runtime_helper_023445d0(&"IsSubsetOf");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb811;
    il2cpp_runtime_helper_023445d0(&"SetEquals");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb81d;
    il2cpp_runtime_helper_023445d0(&"IsSupersetOf");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb829;
    il2cpp_runtime_helper_023445d0(&"Contains");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb835;
    il2cpp_runtime_helper_023445d0(&"Intersect");
    g_data_057ac5f0 = '\x01';
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb84b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb860;
  pSVar2 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb885;
    System_Collections_Generic_HashSet_object___Add(__this,"Count",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb89a;
    System_Collections_Generic_HashSet_object___Add(__this,"Clear",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb8af;
    System_Collections_Generic_HashSet_object___Add(__this,"Contains",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb8c4;
    System_Collections_Generic_HashSet_object___Add(__this,"Add",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb8d9;
    System_Collections_Generic_HashSet_object___Add(__this,"Remove",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb8ee;
    System_Collections_Generic_HashSet_object___Add(__this,"Union",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb903;
    System_Collections_Generic_HashSet_object___Add(__this,"Intersect",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb918;
    System_Collections_Generic_HashSet_object___Add(__this,"Difference",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb92d;
    System_Collections_Generic_HashSet_object___Add(__this,"IsSubsetOf",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb942;
    System_Collections_Generic_HashSet_object___Add(__this,"IsSupersetOf",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb957;
    System_Collections_Generic_HashSet_object___Add(__this,"IsProperSubsetOf",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb96c;
    System_Collections_Generic_HashSet_object___Add(__this,"IsProperSupersetOf",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb981;
    System_Collections_Generic_HashSet_object___Add(__this,"Overlaps",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb996;
    System_Collections_Generic_HashSet_object___Add(__this,"SetEquals",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb9ab;
    System_Collections_Generic_HashSet_object___Add(__this,"ToList",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40cb9dd;
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = __this;
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ac5cf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac5cf = '\x01';
    }
    pSVar1 = (pSVar2->fields)._comparer;
    if (pSVar1 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
      uStack_24 = *(undefined4 *)&pSVar1[2].klass;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_24);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5f1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicSetBuiltin_o* __i, const MethodInfo* method);
// 0x40cb9e0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicSetBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (g_data_057ac5cf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac5cf = '\x01';
    }
    pSVar1 = (__i->fields).Set;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      local_c = (pSVar1->fields)._count;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_c);
      return pIVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5f1 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c1a50

void CustomLogic_CustomLogicSetBuiltin___ctor(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (g_data_057ac5cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_object);
    g_data_057ac5cd = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_Object);
  (__this->fields).Set = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Set);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x40c95c0

void CustomLogic_CustomLogicSetBuiltin___ctor_3fc95c0
               (CustomLogic_CustomLogicSetBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o **ppSVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  _union_332950 __this_05;
  ulong uVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar6;
  MethodInfo *method_00;
  ulong unaff_RBX;
  Il2CppRGCTXData *pIVar7;
  Il2CppRGCTXData *pIVar8;
  Il2CppRGCTXData *pIVar9;
  System_Collections_Generic_HashSet_object__o *pSVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  System_Collections_Generic_HashSet_object__o *pSVar12;
  undefined1 auVar13 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  undefined1 auStack_190 [16];
  Il2CppObject *pIStack_180;
  Il2CppRGCTXData *pIStack_178;
  _union_332950 _Stack_170;
  System_Collections_Generic_HashSet_object__o *pSStack_168;
  CustomLogic_CustomLogicSetBuiltin_o *pCStack_160;
  undefined8 uStack_158;
  Il2CppRGCTXData *pIStack_150;
  System_Collections_Generic_HashSet_object__o *pSStack_148;
  undefined8 uStack_140;
  Il2CppRGCTXData *pIStack_138;
  System_Collections_Generic_HashSet_object__o *pSStack_130;
  undefined8 uStack_128;
  Il2CppRGCTXData *pIStack_120;
  System_Collections_Generic_HashSet_object__o *pSStack_118;
  undefined8 uStack_110;
  Il2CppRGCTXData *pIStack_108;
  System_Collections_Generic_HashSet_object__o *pSStack_100;
  undefined8 uStack_f8;
  Il2CppRGCTXData *pIStack_f0;
  System_Collections_Generic_HashSet_object__o *pSStack_e8;
  undefined8 uStack_e0;
  Il2CppRGCTXData *pIStack_d8;
  System_Collections_Generic_HashSet_object__o *pSStack_d0;
  undefined8 uStack_c8;
  Il2CppRGCTXData *pIStack_c0;
  System_Collections_Generic_HashSet_object__o *pSStack_b8;
  undefined8 uStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  System_Collections_Generic_HashSet_object__o *pSStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_HashSet_object__o *pSStack_90;
  Il2CppRGCTXData *pIStack_88;
  undefined8 uStack_80;
  System_Collections_Generic_HashSet_object__o *pSStack_78;
  Il2CppRGCTXData *pIStack_70;
  undefined8 uStack_68;
  System_Collections_Generic_HashSet_object__o *pSStack_60;
  Il2CppRGCTXData *pIStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_HashSet_object__o *pSStack_48;
  System_Collections_Generic_HashSet_object__o **ppSStack_40;
  System_Collections_Generic_HashSet_object__o *pSStack_38;
  code *pcStack_30;
  
  if (g_data_057ac5ce == '\0') {
    pcStack_30 = (code *)0x40c95e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    pcStack_30 = (code *)0x40c95f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pcStack_30 = (code *)0x40c95fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Object);
    pcStack_30 = (code *)0x40c9608;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_object);
    g_data_057ac5ce = '\x01';
  }
  pcStack_30 = (code *)0x40c961e;
  __this_05.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_object);
  pcStack_30 = (code *)0x40c9633;
  System_Collections_Generic_HashSet_object____ctor(__this_05.genericMethod,MethodInfo_HashSet_1_System_Object);
  ppSVar1 = &(__this->fields).Set;
  (__this->fields).Set = (System_Collections_Generic_HashSet_object__o *)__this_05;
  pcStack_30 = (code *)0x40c9646;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    pcStack_30 = (code *)0x40c965e;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppRGCTXData *)0x0;
  pcStack_30 = (code *)0x40c9668;
  pSVar12 = (System_Collections_Generic_HashSet_object__o *)__this;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues != (System_Object_array *)0x0) {
    if (0 < (int)parameterValues->max_length) {
      uVar5 = parameterValues->max_length & 0xffffffff;
      unaff_RBX = 0;
      __this = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Add;
      do {
        if (uVar5 <= unaff_RBX) {
          pcStack_30 = (code *)0x40c96bb;
          il2cpp_runtime_helper_022b2ca0();
          goto label_040c96bb;
        }
        pSVar12 = *ppSVar1;
        if (pSVar12 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_040c96bb;
        pIVar7 = (Il2CppRGCTXData *)parameterValues->m_Items[unaff_RBX];
        pcStack_30 = (code *)0x40c969c;
        System_Collections_Generic_HashSet_object___Add(pSVar12,(Il2CppObject *)pIVar7,MethodInfo_Boolean_Add);
        unaff_RBX = unaff_RBX + 1;
        uVar2 = (uint)parameterValues->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)unaff_RBX < (long)(int)uVar2);
    }
    return;
  }
label_040c96bb:
  pcStack_30 = CustomLogic_CustomLogicSetBuiltin__get_Count;
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar12;
  pcStack_30 = (code *)unaff_RBX;
  if (g_data_057ac5cf == '\0') {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Int32_get_Count;
    pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40c96d9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5cf = '\x01';
  }
  if ((pSVar12->fields)._comparer != (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
    return;
  }
  pSStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40c96f3;
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = pSVar12;
  if (g_data_057ac5d0 == '\0') {
    ppSStack_40 = (System_Collections_Generic_HashSet_object__o **)0x40c9719;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ac5d0 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
  if (pSVar12 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear(pSVar12,MethodInfo_Void_Clear);
    return;
  }
  ppSStack_40 = (System_Collections_Generic_HashSet_object__o **)0x40c973e;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pIVar8 = pIVar7;
  pSStack_48 = pSVar10;
  ppSStack_40 = ppSVar1;
  if (g_data_057ac5d1 == '\0') {
    pIStack_58 = (Il2CppRGCTXData *)0x40c975f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ac5d1 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_object__o *)(pSVar12->fields)._comparer;
  if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Contains(pSVar10,(Il2CppObject *)pIVar7,MethodInfo_Boolean_Contains);
    return;
  }
  pIStack_58 = (Il2CppRGCTXData *)0x40c978d;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  pSStack_60 = pSVar12;
  pIStack_58 = pIVar7;
  if (g_data_057ac5d2 == '\0') {
    pIStack_70 = (Il2CppRGCTXData *)0x40c97af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057ac5d2 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
  if (pSVar12 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(pSVar12,(Il2CppObject *)pIVar8,MethodInfo_Boolean_Add);
    return;
  }
  pIStack_70 = (Il2CppRGCTXData *)0x40c97dd;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pIVar7 = pIVar9;
  pSStack_78 = pSVar10;
  pIStack_70 = pIVar8;
  if (g_data_057ac5d3 == '\0') {
    pIStack_88 = (Il2CppRGCTXData *)0x40c97ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_object__o *)(pSVar12->fields)._comparer;
  if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove(pSVar10,(Il2CppObject *)pIVar9,MethodInfo_Boolean_Remove);
    return;
  }
  pIStack_88 = (Il2CppRGCTXData *)0x40c982d;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIVar8 = pIVar7;
  pSVar11 = pSVar10;
  pSStack_90 = pSVar12;
  pIStack_88 = pIVar9;
  if (g_data_057ac5d4 == '\0') {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    pSStack_a0 = (System_Collections_Generic_HashSet_object__o *)0x40c984f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar7 != (Il2CppRGCTXData *)0x0) {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar12 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar12,(System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Void_UnionWith);
      return;
    }
  }
  pSStack_a0 = (System_Collections_Generic_HashSet_object__o *)0x40c9883;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  pSVar12 = pSVar11;
  pIStack_a8 = pIVar7;
  pSStack_a0 = pSVar10;
  if (g_data_057ac5d5 == '\0') {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    pSStack_b8 = (System_Collections_Generic_HashSet_object__o *)0x40c98af;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar8 != (Il2CppRGCTXData *)0x0) {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(pSVar11->fields)._comparer;
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar10,(System_Collections_Generic_IEnumerable_T__o *)pIVar8[6].method,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  pSStack_b8 = (System_Collections_Generic_HashSet_object__o *)0x40c98e3;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  pIVar7 = pIVar9;
  pSVar10 = pSVar12;
  pIStack_c0 = pIVar8;
  pSStack_b8 = pSVar11;
  if (g_data_057ac5d6 == '\0') {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    pSStack_d0 = (System_Collections_Generic_HashSet_object__o *)0x40c990f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(pSVar12->fields)._comparer;
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pIVar9[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  pSStack_d0 = (System_Collections_Generic_HashSet_object__o *)0x40c9943;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pIVar8 = pIVar7;
  pSVar11 = pSVar10;
  pIStack_d8 = pIVar9;
  pSStack_d0 = pSVar12;
  if (g_data_057ac5d7 == '\0') {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x40c996f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar7 != (Il2CppRGCTXData *)0x0) {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar12 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar12,(System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  pSStack_e8 = (System_Collections_Generic_HashSet_object__o *)0x40c99a3;
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  pSVar12 = pSVar11;
  pIStack_f0 = pIVar7;
  pSStack_e8 = pSVar10;
  if (g_data_057ac5d8 == '\0') {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    pSStack_100 = (System_Collections_Generic_HashSet_object__o *)0x40c99cf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar8 != (Il2CppRGCTXData *)0x0) {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(pSVar11->fields)._comparer;
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar10,(System_Collections_Generic_IEnumerable_T__o *)pIVar8[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  pSStack_100 = (System_Collections_Generic_HashSet_object__o *)0x40c9a03;
  uStack_110 = il2cpp_runtime_helper_022b2c90();
  pIVar7 = pIVar9;
  pSVar10 = pSVar12;
  pIStack_108 = pIVar8;
  pSStack_100 = pSVar11;
  if (g_data_057ac5d9 == '\0') {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    pSStack_118 = (System_Collections_Generic_HashSet_object__o *)0x40c9a2f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(pSVar12->fields)._comparer;
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pIVar9[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  pSStack_118 = (System_Collections_Generic_HashSet_object__o *)0x40c9a63;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  pIVar8 = pIVar7;
  pSVar11 = pSVar10;
  pIStack_120 = pIVar9;
  pSStack_118 = pSVar12;
  if (g_data_057ac5da == '\0') {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    pSStack_130 = (System_Collections_Generic_HashSet_object__o *)0x40c9a8f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar7 != (Il2CppRGCTXData *)0x0) {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar12 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar12,(System_Collections_Generic_IEnumerable_T__o *)pIVar7[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  pSStack_130 = (System_Collections_Generic_HashSet_object__o *)0x40c9ac3;
  uStack_140 = il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  pSVar12 = pSVar11;
  pIStack_138 = pIVar7;
  pSStack_130 = pSVar10;
  if (g_data_057ac5db == '\0') {
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    pSStack_148 = (System_Collections_Generic_HashSet_object__o *)0x40c9aef;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar8 != (Il2CppRGCTXData *)0x0) {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(pSVar11->fields)._comparer;
    pSVar12 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar10,(System_Collections_Generic_IEnumerable_T__o *)pIVar8[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  pSStack_148 = (System_Collections_Generic_HashSet_object__o *)0x40c9b23;
  uStack_158 = il2cpp_runtime_helper_022b2c90();
  pIVar7 = pIVar9;
  pSVar10 = pSVar12;
  pIStack_150 = pIVar8;
  pSStack_148 = pSVar11;
  if (g_data_057ac5dc == '\0') {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    pCStack_160 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40c9b4f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(pSVar12->fields)._comparer;
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pIVar9[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  pCStack_160 = (CustomLogic_CustomLogicSetBuiltin_o *)0x40c9b83;
  il2cpp_runtime_helper_022b2c90();
  pIStack_178 = pIVar9;
  _Stack_170.genericMethod = __this_05.genericMethod;
  pSStack_168 = pSVar12;
  pCStack_160 = __this;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,(MethodInfo *)pIVar7);
  pSVar12 = (System_Collections_Generic_HashSet_object__o *)(pSVar10->fields)._comparer;
  if (pSVar12 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar13._0_8_);
      lVar3 = *plVar6;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar15;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar14;
      __this_03.fields._current = pIVar16;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe50);
      if (lVar3 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar3);
    }
    __this_04.fields._8_8_ = pIVar15;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar14;
    __this_04.fields._current = pIVar16;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe50);
    _Unwind_Resume(auVar13._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_190,pSVar12,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_190._0_8_;
  pIVar15 = (Il2CppType *)auStack_190._8_8_;
  pIVar16 = pIStack_180;
  if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_190._8_4_;
    __this_01.fields._version = auStack_190._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_190._0_8_;
    __this_01.fields._current = pIStack_180;
    bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe50);
    pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_190._0_8_;
    pIVar15 = (Il2CppType *)auStack_190._8_8_;
    pIVar16 = pIStack_180;
    if ((char)bVar4 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar15,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar14,
          __this_00.fields._current = pIVar16,
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffe50),
          auStack_190._0_8_ = pSVar14, auStack_190._8_8_ = pIVar15, pIStack_180 = pIVar16, (char)bVar4 != '\0'
          ) {
      CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar16,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_190._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_190._0_8_;
  __this_02.fields._current = pIStack_180;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffe50);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicSetBuiltin__get_Count (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c96c0

int32_t CustomLogic_CustomLogicSetBuiltin__get_Count
                  (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  int32_t extraout_EAX;
  bool_conflict bVar2;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar3;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_168 [16];
  Il2CppObject *pIStack_158;
  Il2CppRGCTXData *pIStack_150;
  
  pCVar6 = __this;
  if (g_data_057ac5cf == '\0') {
    pCVar6 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5cf = '\x01';
  }
  pSVar8 = (__this->fields).Set;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    return (pSVar8->fields)._count;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ac5d0 = '\x01';
  }
  pSVar8 = (pCVar6->fields).Set;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear(pSVar8,MethodInfo_Void_Clear);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = (Il2CppRGCTXData *)method;
  if (g_data_057ac5d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ac5d1 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains(pSVar8,(Il2CppObject *)method,MethodInfo_Boolean_Contains);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  if (g_data_057ac5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057ac5d2 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar8,(Il2CppObject *)pIVar4,MethodInfo_Boolean_Add);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  if (g_data_057ac5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Remove(pSVar8,(Il2CppObject *)pIVar5,MethodInfo_Boolean_Remove);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar8;
  if (g_data_057ac5d4 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_UnionWith);
      return extraout_EAX_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar8 = pSVar7;
  if (g_data_057ac5d5 == '\0') {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
      return extraout_EAX_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar8;
  if (g_data_057ac5d6 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_ExceptWith);
      return extraout_EAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar8 = pSVar7;
  if (g_data_057ac5d7 == '\0') {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsSubsetOf
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar8;
  if (g_data_057ac5d8 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsSupersetOf
                        (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSupersetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar8 = pSVar7;
  if (g_data_057ac5d9 == '\0') {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar8;
  if (g_data_057ac5da == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar8 = pSVar7;
  if (g_data_057ac5db == '\0') {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar8;
  if (g_data_057ac5dc == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar8->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_SetEquals);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_150 = pIVar4;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_168,pSVar8,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_168._0_8_;
    pIVar11 = (Il2CppType *)auStack_168._8_8_;
    pIVar12 = pIStack_158;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_168._8_4_;
      __this_01.fields._version = auStack_168._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_168._0_8_;
      __this_01.fields._current = pIStack_158;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe78);
      pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_168._0_8_;
      pIVar11 = (Il2CppType *)auStack_168._8_8_;
      pIVar12 = pIStack_158;
      if ((char)bVar2 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffe78),
            auStack_168._0_8_ = pSVar10, auStack_168._8_8_ = pIVar11, pIStack_158 = pIVar12,
            (char)bVar2 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_168._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_168._0_8_;
    __this_02.fields._current = pIStack_158;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffe78);
label_040c9ca6:
    return (int32_t)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe78);
    if (lVar1 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe78);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Clear (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9700

void CustomLogic_CustomLogicSetBuiltin__Clear(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar3;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 local_160 [16];
  Il2CppObject *local_150;
  Il2CppRGCTXData *pIStack_148;
  
  if (g_data_057ac5d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ac5d0 = '\x01';
  }
  pSVar7 = (__this->fields).Set;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear(pSVar7,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = (Il2CppRGCTXData *)method;
  if (g_data_057ac5d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ac5d1 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Contains(pSVar7,(Il2CppObject *)method,MethodInfo_Boolean_Contains);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  if (g_data_057ac5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057ac5d2 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(pSVar7,(Il2CppObject *)pIVar4,MethodInfo_Boolean_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  if (g_data_057ac5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove(pSVar7,(Il2CppObject *)pIVar5,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d4 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_UnionWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d5 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d6 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d7 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d8 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d9 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5da == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5db == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5dc == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_148 = pIVar4;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
  if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar8._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
      __this_03.fields._current = pIVar11;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
    _Unwind_Resume(auVar8._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_160,pSVar7,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_160._0_8_;
  pIVar10 = (Il2CppType *)local_160._8_8_;
  pIVar11 = local_150;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = local_160._8_4_;
    __this_01.fields._version = local_160._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)local_160._0_8_;
    __this_01.fields._current = local_150;
    bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe80);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_160._0_8_;
    pIVar10 = (Il2CppType *)local_160._8_8_;
    pIVar11 = local_150;
    if ((char)bVar2 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar10,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
          __this_00.fields._current = pIVar11,
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffe80),
          local_160._0_8_ = pSVar9, local_160._8_8_ = pIVar10, local_150 = pIVar11, (char)bVar2 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar11,method_00);
    }
  }
  __this_02.fields._8_8_ = local_160._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)local_160._0_8_;
  __this_02.fields._current = local_150;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffe80);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Contains (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c9740

bool_conflict
CustomLogic_CustomLogicSetBuiltin__Contains
          (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar3;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 auStack_158 [16];
  Il2CppObject *pIStack_148;
  Il2CppRGCTXData *pIStack_140;
  
  pIVar4 = (Il2CppRGCTXData *)value;
  if (g_data_057ac5d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ac5d1 = '\x01';
  }
  pSVar7 = (__this->fields).Set;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains(pSVar7,value,MethodInfo_Boolean_Contains);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  if (g_data_057ac5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057ac5d2 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar7,(Il2CppObject *)pIVar4,MethodInfo_Boolean_Add);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  if (g_data_057ac5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Remove(pSVar7,(Il2CppObject *)pIVar5,MethodInfo_Boolean_Remove);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d4 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_UnionWith);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d5 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
      return extraout_EAX_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d6 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_ExceptWith);
      return extraout_EAX_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d7 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsSubsetOf
                        (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d8 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsSupersetOf
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSupersetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d9 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                        (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5da == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5db == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5dc == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_SetEquals);
      return bVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_140 = pIVar4;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_158,pSVar7,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_158._0_8_;
    pIVar10 = (Il2CppType *)auStack_158._8_8_;
    pIVar11 = pIStack_148;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_158._8_4_;
      __this_01.fields._version = auStack_158._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_158._0_8_;
      __this_01.fields._current = pIStack_148;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe88);
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_158._0_8_;
      pIVar10 = (Il2CppType *)auStack_158._8_8_;
      pIVar11 = pIStack_148;
      if ((char)bVar2 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar10,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
            __this_00.fields._current = pIVar11,
            bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffe88),
            auStack_158._0_8_ = pSVar9, auStack_158._8_8_ = pIVar10, pIStack_148 = pIVar11,
            (char)bVar2 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar11,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_158._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_158._0_8_;
    __this_02.fields._current = pIStack_148;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_03.fields._current = pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
    if (lVar1 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
  __this_04.fields._current = pIVar11;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe88);
  _Unwind_Resume(auVar8._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Add (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c9790

void CustomLogic_CustomLogicSetBuiltin__Add
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar3;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 auStack_140 [16];
  Il2CppObject *pIStack_130;
  Il2CppRGCTXData *pIStack_128;
  
  pIVar4 = (Il2CppRGCTXData *)value;
  if (g_data_057ac5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057ac5d2 = '\x01';
  }
  pSVar7 = (__this->fields).Set;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(pSVar7,value,MethodInfo_Boolean_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  if (g_data_057ac5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove(pSVar7,(Il2CppObject *)pIVar4,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar6 = pSVar7;
  if (g_data_057ac5d4 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_UnionWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar6;
  if (g_data_057ac5d5 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar6 = pSVar7;
  if (g_data_057ac5d6 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar6;
  if (g_data_057ac5d7 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar6 = pSVar7;
  if (g_data_057ac5d8 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar6;
  if (g_data_057ac5d9 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar6 = pSVar7;
  if (g_data_057ac5da == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar7 = pSVar6;
  if (g_data_057ac5db == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar6 = pSVar7;
  if (g_data_057ac5dc == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_128 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar4);
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
  if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar8._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
      __this_03.fields._current = pIVar11;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
    _Unwind_Resume(auVar8._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_140,pSVar7,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_140._0_8_;
  pIVar10 = (Il2CppType *)auStack_140._8_8_;
  pIVar11 = pIStack_130;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_140._8_4_;
    __this_01.fields._version = auStack_140._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_140._0_8_;
    __this_01.fields._current = pIStack_130;
    bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffea0);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_140._0_8_;
    pIVar10 = (Il2CppType *)auStack_140._8_8_;
    pIVar11 = pIStack_130;
    if ((char)bVar2 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar10,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
          __this_00.fields._current = pIVar11,
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffea0),
          auStack_140._0_8_ = pSVar9, auStack_140._8_8_ = pIVar10, pIStack_130 = pIVar11, (char)bVar2 != '\0')
    {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar11,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_140._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_140._0_8_;
  __this_02.fields._current = pIStack_130;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffea0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Remove (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x40c97e0

void CustomLogic_CustomLogicSetBuiltin__Remove
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar3;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar4;
  Il2CppRGCTXData *pIVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 auStack_128 [16];
  Il2CppObject *pIStack_118;
  Il2CppRGCTXData *pIStack_110;
  
  pIVar4 = (Il2CppRGCTXData *)value;
  if (g_data_057ac5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac5d3 = '\x01';
  }
  pSVar7 = (__this->fields).Set;
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove(pSVar7,value,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d4 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_UnionWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d5 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d6 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d7 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5d8 == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5d9 == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5da == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar4 = pIVar5;
  pSVar7 = pSVar6;
  if (g_data_057ac5db == '\0') {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar4;
  pSVar6 = pSVar7;
  if (g_data_057ac5dc == '\0') {
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar7->fields)._comparer;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)0x0;
    if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pIVar4[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_110 = pIVar4;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar6->fields)._comparer;
  if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar8._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
      __this_03.fields._current = pIVar11;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
    _Unwind_Resume(auVar8._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_128,pSVar7,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_128._0_8_;
  pIVar10 = (Il2CppType *)auStack_128._8_8_;
  pIVar11 = pIStack_118;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_128._8_4_;
    __this_01.fields._version = auStack_128._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_128._0_8_;
    __this_01.fields._current = pIStack_118;
    bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffeb8);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_128._0_8_;
    pIVar10 = (Il2CppType *)auStack_128._8_8_;
    pIVar11 = pIStack_118;
    if ((char)bVar2 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar10,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
          __this_00.fields._current = pIVar11,
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffeb8),
          auStack_128._0_8_ = pSVar9, auStack_128._8_8_ = pIVar10, pIStack_118 = pIVar11, (char)bVar2 != '\0')
    {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar11,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_128._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_128._0_8_;
  __this_02.fields._current = pIStack_118;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Union
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Union (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9830

void CustomLogic_CustomLogicSetBuiltin__Union
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_110 [16];
  Il2CppObject *pIStack_100;
  Il2CppRGCTXData *pIStack_f8;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d4 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_UnionWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d4 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___UnionWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Void_UnionWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d5 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d6 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d7 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d8 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d9 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5da == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5db == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5dc == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_f8 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar1 = (pCVar7->fields).Set;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
      __this_03.fields._current = pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_04.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
    _Unwind_Resume(auVar9._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_110,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_110._0_8_;
  pIVar11 = (Il2CppType *)auStack_110._8_8_;
  pIVar12 = pIStack_100;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_110._8_4_;
    __this_01.fields._version = auStack_110._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_110._0_8_;
    __this_01.fields._current = pIStack_100;
    bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffed0);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_110._0_8_;
    pIVar11 = (Il2CppType *)auStack_110._8_8_;
    pIVar12 = pIStack_100;
    if ((char)bVar3 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar11,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
          __this_00.fields._current = pIVar12,
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffed0),
          auStack_110._0_8_ = pSVar10, auStack_110._8_8_ = pIVar11, pIStack_100 = pIVar12, (char)bVar3 != '\0'
          ) {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_110._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_110._0_8_;
  __this_02.fields._current = pIStack_100;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffed0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Intersect
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Intersect (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9890

void CustomLogic_CustomLogicSetBuiltin__Intersect
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_f8 [16];
  Il2CppObject *pIStack_e8;
  Il2CppRGCTXData *pIStack_e0;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d5 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_IntersectWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d5 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IntersectWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Void_IntersectWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d6 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d7 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d8 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d9 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5da == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5db == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5dc == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_e0 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar6);
  pSVar1 = (pCVar8->fields).Set;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
      __this_03.fields._current = pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_04.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
    _Unwind_Resume(auVar9._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_f8,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_f8._0_8_;
  pIVar11 = (Il2CppType *)auStack_f8._8_8_;
  pIVar12 = pIStack_e8;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_f8._8_4_;
    __this_01.fields._version = auStack_f8._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_f8._0_8_;
    __this_01.fields._current = pIStack_e8;
    bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffee8);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_f8._0_8_;
    pIVar11 = (Il2CppType *)auStack_f8._8_8_;
    pIVar12 = pIStack_e8;
    if ((char)bVar3 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar11,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
          __this_00.fields._current = pIVar12,
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xfffffffffffffee8),
          auStack_f8._0_8_ = pSVar10, auStack_f8._8_8_ = pIVar11, pIStack_e8 = pIVar12, (char)bVar3 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_f8._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_f8._0_8_;
  __this_02.fields._current = pIStack_e8;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Difference
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Difference (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c98f0

void CustomLogic_CustomLogicSetBuiltin__Difference
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_e0 [16];
  Il2CppObject *pIStack_d0;
  Il2CppRGCTXData *pIStack_c8;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d6 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Void_ExceptWith;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d6 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___ExceptWith
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Void_ExceptWith);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d7 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d8 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d9 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSubsetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5da == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___IsProperSupersetOf
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5db == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Overlaps
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5dc == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___SetEquals
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_SetEquals);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_c8 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar1 = (pCVar7->fields).Set;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
      __this_03.fields._current = pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_04.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
    _Unwind_Resume(auVar9._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_e0,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_e0._0_8_;
  pIVar11 = (Il2CppType *)auStack_e0._8_8_;
  pIVar12 = pIStack_d0;
  if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._index = auStack_e0._8_4_;
    __this_01.fields._version = auStack_e0._12_4_;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_e0._0_8_;
    __this_01.fields._current = pIStack_d0;
    bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff00);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_e0._0_8_;
    pIVar11 = (Il2CppType *)auStack_e0._8_8_;
    pIVar12 = pIStack_d0;
    if ((char)bVar3 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar11,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
          __this_00.fields._current = pIVar12,
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff00),
          auStack_e0._0_8_ = pSVar10, auStack_e0._8_8_ = pIVar11, pIStack_d0 = pIVar12, (char)bVar3 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
    }
  }
  __this_02.fields._8_8_ = auStack_e0._8_8_;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_e0._0_8_;
  __this_02.fields._current = pIStack_d0;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff00);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$IsSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9950

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsSubsetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_c8 [16];
  Il2CppObject *pIStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d7 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d7 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsSubsetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_IsSubsetOf)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d8 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsSupersetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5d9 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5da == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5db == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5dc == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_b0 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar6);
  pSVar1 = (pCVar8->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c8,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_c8._0_8_;
    pIVar11 = (Il2CppType *)auStack_c8._8_8_;
    pIVar12 = pIStack_b8;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_c8._8_4_;
      __this_01.fields._version = auStack_c8._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_c8._0_8_;
      __this_01.fields._current = pIStack_b8;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff18);
      pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_c8._0_8_;
      pIVar11 = (Il2CppType *)auStack_c8._8_8_;
      pIVar12 = pIStack_b8;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff18),
            auStack_c8._0_8_ = pSVar10, auStack_c8._8_8_ = pIVar11, pIStack_b8 = pIVar12, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_c8._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_c8._0_8_;
    __this_02.fields._current = pIStack_b8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff18);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$IsSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c99b0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsSupersetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_b0 [16];
  Il2CppObject *pIStack_a0;
  Il2CppRGCTXData *pIStack_98;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d8 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d8 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_IsSupersetOf)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5d9 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSubsetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5da == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5db == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5dc == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_SetEquals);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_98 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar1 = (pCVar7->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_b0,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_b0._0_8_;
    pIVar11 = (Il2CppType *)auStack_b0._8_8_;
    pIVar12 = pIStack_a0;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_b0._8_4_;
      __this_01.fields._version = auStack_b0._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_b0._0_8_;
      __this_01.fields._current = pIStack_a0;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff30);
      pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_b0._0_8_;
      pIVar11 = (Il2CppType *)auStack_b0._8_8_;
      pIVar12 = pIStack_a0;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff30),
            auStack_b0._0_8_ = pSVar10, auStack_b0._8_8_ = pIVar11, pIStack_a0 = pIVar12, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_b0._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_b0._0_8_;
    __this_02.fields._current = pIStack_a0;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9a10

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_98 [16];
  Il2CppObject *pIStack_88;
  Il2CppRGCTXData *pIStack_80;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5d9 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSubsetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5d9 = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_IsProperSubsetOf)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5da == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_IsProperSupersetOf);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5db == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_Overlaps);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5dc == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_80 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar6);
  pSVar1 = (pCVar8->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_98,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_98._0_8_;
    pIVar11 = (Il2CppType *)auStack_98._8_8_;
    pIVar12 = pIStack_88;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_98._8_4_;
      __this_01.fields._version = auStack_98._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_98._0_8_;
      __this_01.fields._current = pIStack_88;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff48);
      pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_98._0_8_;
      pIVar11 = (Il2CppType *)auStack_98._8_8_;
      pIVar12 = pIStack_88;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff48),
            auStack_98._0_8_ = pSVar10, auStack_98._8_8_ = pIVar11, pIStack_88 = pIVar12, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_98._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_98._0_8_;
    __this_02.fields._current = pIStack_88;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9a70

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *pIVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_80 [16];
  Il2CppObject *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar7 = __this;
  if (g_data_057ac5da == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_IsProperSupersetOf;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5da = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_IsProperSupersetOf)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  pCVar8 = pCVar7;
  if (g_data_057ac5db == '\0') {
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar7->fields).Set;
    pCVar8 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_Overlaps);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCVar7 = pCVar8;
  if (g_data_057ac5dc == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar8->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar6[6].method,MethodInfo_Boolean_SetEquals);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_68 = pIVar6;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)pIVar5);
  pSVar1 = (pCVar7->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_80,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_80._0_8_;
    pIVar11 = (Il2CppType *)auStack_80._8_8_;
    pIVar12 = pIStack_70;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_80._8_4_;
      __this_01.fields._version = auStack_80._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
      __this_01.fields._current = pIStack_70;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff60);
      pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_80._0_8_;
      pIVar11 = (Il2CppType *)auStack_80._8_8_;
      pIVar12 = pIStack_70;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff60),
            auStack_80._0_8_ = pSVar10, auStack_80._8_8_ = pIVar11, pIStack_70 = pIVar12, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar12,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_80._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
    __this_02.fields._current = pIStack_70;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$Overlaps
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Overlaps (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9ad0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__Overlaps
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  Il2CppRGCTXData *pIVar5;
  Il2CppRGCTXData *method_01;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar6;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 auStack_68 [16];
  Il2CppObject *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  pIVar5 = (Il2CppRGCTXData *)set;
  pCVar6 = __this;
  if (g_data_057ac5db == '\0') {
    pCVar6 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_Overlaps;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5db = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar6 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Overlaps
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_Overlaps)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = pIVar5;
  pCVar7 = pCVar6;
  if (g_data_057ac5dc == '\0') {
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pSVar1 = (pCVar6->fields).Set;
    pCVar7 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pIVar5[6].method,MethodInfo_Boolean_SetEquals);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar5;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)method_01);
  pSVar1 = (pCVar7->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_68._0_8_;
    pIVar10 = (Il2CppType *)auStack_68._8_8_;
    pIVar11 = pIStack_58;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_68._8_4_;
      __this_01.fields._version = auStack_68._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_68._0_8_;
      __this_01.fields._current = pIStack_58;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff78);
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_68._0_8_;
      pIVar10 = (Il2CppType *)auStack_68._8_8_;
      pIVar11 = pIStack_58;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar10,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9,
            __this_00.fields._current = pIVar11,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff78),
            auStack_68._0_8_ = pSVar9, auStack_68._8_8_ = pIVar10, pIStack_58 = pIVar11, (char)bVar3 != '\0')
      {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar11,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_68._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_68._0_8_;
    __this_02.fields._current = pIStack_58;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
    __this_03.fields._current = pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar9;
  __this_04.fields._current = pIVar11;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar8._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$SetEquals
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__SetEquals (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x40c9b30

bool_conflict
CustomLogic_CustomLogicSetBuiltin__SetEquals
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  long *plVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  Il2CppRGCTXData *pIStack_38;
  
  method_01 = (MethodInfo *)set;
  pCVar5 = __this;
  if (g_data_057ac5dc == '\0') {
    pCVar5 = (CustomLogic_CustomLogicSetBuiltin_o *)&MethodInfo_Boolean_SetEquals;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5dc = '\x01';
  }
  if (set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pSVar1 = (__this->fields).Set;
    pCVar5 = (CustomLogic_CustomLogicSetBuiltin_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___SetEquals
                        (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,MethodInfo_Boolean_SetEquals)
      ;
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = (Il2CppRGCTXData *)set;
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,method_01);
  pSVar1 = (pCVar5->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_50,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_50._0_8_;
    pIVar8 = (Il2CppType *)auStack_50._8_8_;
    pIVar9 = pIStack_40;
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._index = auStack_50._8_4_;
      __this_01.fields._version = auStack_50._12_4_;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_50._0_8_;
      __this_01.fields._current = pIStack_40;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff90);
      pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_50._0_8_;
      pIVar8 = (Il2CppType *)auStack_50._8_8_;
      pIVar9 = pIStack_40;
      if ((char)bVar3 != '\0') goto label_040c9cba;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar8,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar7,
            __this_00.fields._current = pIVar9,
            bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff90),
            auStack_50._0_8_ = pSVar7, auStack_50._8_8_ = pIVar8, pIStack_40 = pIVar9, (char)bVar3 != '\0') {
        CustomLogic_CustomLogicListBuiltin__Add(__this_05,pIVar9,method_00);
      }
    }
    __this_02.fields._8_8_ = auStack_50._8_8_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_50._0_8_;
    __this_02.fields._current = pIStack_40;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
label_040c9ca6:
    return (bool_conflict)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_040c9cba:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
    if (lVar2 == 0) goto label_040c9ca6;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar7;
  __this_04.fields._current = pIVar9;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar6._0_8_);
}


// CustomLogic.CustomLogicSetBuiltin$$ToList
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicSetBuiltin__ToList (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9b90

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicSetBuiltin__ToList(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  long *plVar3;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (g_data_057ac5dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ac5dd = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,method);
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040c9cba:
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar5;
      __this_04.fields._current = pIVar7;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
      if (lVar1 == 0) {
        return __this_06;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_05.fields._8_8_ = pIVar6;
    __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar5;
    __this_05.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_System_Object_GetEnumerator);
  pSVar5 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
  pIVar6 = (Il2CppType *)auStack_38._8_8_;
  pIVar7 = pIStack_28;
  if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_02.fields._index = auStack_38._8_4_;
    __this_02.fields._version = auStack_38._12_4_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
    __this_02.fields._current = pIStack_28;
    bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8);
    pSVar5 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
    pIVar6 = (Il2CppType *)auStack_38._8_8_;
    pIVar7 = pIStack_28;
    if ((char)bVar2 != '\0') goto label_040c9cba;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar6,
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar5,
          __this_01.fields._current = pIVar7,
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8),
          auStack_38._0_8_ = pSVar5, auStack_38._8_8_ = pIVar6, pIStack_28 = pIVar7, (char)bVar2 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_06,pIVar7,method_00);
    }
  }
  __this_03.fields._8_8_ = auStack_38._8_8_;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
  __this_03.fields._current = pIStack_28;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
  return __this_06;
}


// CustomLogic.CustomLogicSetBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSetBuiltin__get_ClassName (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9d50

System_String_o *
CustomLogic_CustomLogicSetBuiltin__get_ClassName
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac5de == '\0') {
    il2cpp_runtime_helper_023445d0(&"Set");
    g_data_057ac5de = '\x01';
  }
  return "Set";
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsAbstract (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9d80

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsStatic (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9d90

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_IsStatic
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSetBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x40c9da0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


