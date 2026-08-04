// Type: CustomLogic.CustomLogicAnimationBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimationBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnimationBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40ddc40

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar9;
  System_Func_T__object____object__o *pSVar10;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac6a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAnimationBuiltin);
    g_data_057ac6a4 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAnimationBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar5,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAnimationBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar6 = System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_ArgumentException___ctor_3c12490(__this,pSVar6,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAnimationBuiltin_CreateInstance);
  pSVar9 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"PlayAnimationAt");
    il2cpp_runtime_helper_023445d0(&"PlayAnimation");
    il2cpp_runtime_helper_023445d0(&"StopAnimation");
    il2cpp_runtime_helper_023445d0(&"SetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationLength");
    il2cpp_runtime_helper_023445d0(&"GetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"SetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"PlayAnimationQueued");
    il2cpp_runtime_helper_023445d0(&"SetWeight");
    il2cpp_runtime_helper_023445d0(&"GetWeight");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac6a5 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar9,(MethodInfo *)0x0);
  if (uVar3 < 0x55aebb4f) {
    if (uVar3 < 0x1c21234c) {
      if (uVar3 == 0x812156f) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"SetAnimationNormalizedTime",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac6af == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationNormalizedTime);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6af = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar10);
          }
          pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return pCVar5;
        }
      }
      else if (uVar3 == 0x1ae30f5a) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetAnimationSpeed",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac6ac == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationSpeed_b__8_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6ac = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar10);
          }
          pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return pCVar5;
        }
      }
      else if ((uVar3 == 0x1c21234b) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetAnimationNormalizedTime",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6ae == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationNormalizedTime);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ae = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar10);
        }
        pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x492a3ccf) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetAnimationLength",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6ad == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationLength_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ad = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar10);
        }
        pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x4f3aab3d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"StopAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6aa == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StopAnimation_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6aa = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar10);
        }
        pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x55aebb4e) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"PlayAnimationAt",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6a8 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationAt_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6a8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar10);
      }
      pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0xe1cff600) {
    if (uVar3 == 0xcb515bd3) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetWeight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6b1 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetWeight_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6b1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar10);
        }
        pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0xd64c477b) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"PlayAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6a7 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimation_b__3_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6a7 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar10);
        }
        pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0xe1cff5ff) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"SetWeight",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6b0 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetWeight_b__12_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6b0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar10);
      }
      pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xf6be6fea) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"PlayAnimationQueued",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6a9 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationQueued_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6a9 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar10);
      }
      pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xe5b11b66) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"SetAnimationSpeed",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6ab == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationSpeed_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6ab = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar6;
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar10);
      }
      pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return pCVar5;
    }
  }
  else if ((uVar3 == 0xe4b35065) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"IsPlaying",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      ppSVar11 = (System_ArgumentException_o **)&uStack_18;
      pSVar9 = pSStack_28;
    }
    else {
      ppSVar11 = (System_ArgumentException_o **)&uStack_18;
      pSVar9 = pSStack_28;
    }
    goto CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAnimationBuiltin not found");
  pSVar6 = System_String__Concat_3af7150(pSVar6,(System_String_o *)pSVar9,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar9,pSVar6,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying:
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar11 + -0x10) = pSVar6;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar9;
  if (g_data_057ac6a6 == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de369;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de375;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de381;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de38d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsPlaying_b__2_0);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de399;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de3bc;
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de30b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de327;
    pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de341;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de35b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar10);
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de3e2;
  pCVar5 = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40de3fa;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return pCVar5;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40df4c0

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac6b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6b3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40df530

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40df540

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  bool_conflict bVar2;
  undefined4 extraout_EAX;
  uint uVar3;
  float extraout_EAX_00;
  int32_t layer;
  undefined8 in_RAX;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  float extraout_var;
  float extraout_var_00;
  System_Object_array *pSVar6;
  UnityEngine_AnimationState_o *pUVar7;
  System_Object_array *pSVar8;
  System_Object_array *pSVar9;
  Il2CppObject *extraout_RAX;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  long lVar10;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  System_Object_array *pSVar11;
  System_Object_array *pSVar12;
  System_Object_array *pSVar13;
  System_Object_array *unaff_R12;
  undefined8 *unaff_R13;
  System_Object_array *unaff_R15;
  float fVar14;
  float fade;
  undefined1 auVar15 [16];
  undefined8 uStack_190;
  long lStack_188;
  System_Object_array *pSStack_180;
  float fStack_16c;
  long lStack_168;
  System_Object_array *pSStack_160;
  System_Object_array *pSStack_158;
  float fStack_144;
  System_Object_array *pSStack_140;
  System_Object_array *pSStack_138;
  System_Object_array *pSStack_130;
  undefined8 uStack_128;
  System_Object_array *pSStack_120;
  System_Object_array *pSStack_118;
  undefined8 uStack_110;
  System_Object_array *pSStack_108;
  System_Object_array *pSStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  System_Object_array *pSStack_e8;
  float fStack_d4;
  long lStack_d0;
  System_Object_array *pSStack_c8;
  System_Object_array *pSStack_c0;
  undefined8 uStack_b8;
  System_Object_array *pSStack_b0;
  System_Object_array *pSStack_a8;
  undefined8 uStack_a0;
  System_Object_array *pSStack_98;
  System_Object_array *pSStack_90;
  float fStack_88;
  float fStack_84;
  System_Object_array *pSStack_80;
  System_Object_array *pSStack_78;
  undefined8 *puStack_70;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  System_Object_array *pSStack_48;
  undefined8 uStack_18;
  
  pSVar8 = (System_Object_array *)__c;
  uStack_18 = in_RAX;
  if (g_data_057ac6b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040df5e4:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      pUVar1 = (__c->fields).Value;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        bVar2 = UnityEngine_Animation__IsPlaying(pUVar1,pSVar4,(MethodInfo *)0x0);
        uStack_18 = CONCAT17((char)bVar2,(undefined7)uStack_18);
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
        return pIVar5;
      }
    }
    goto label_040df5e4;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar9 = pSVar8;
  pSStack_48 = __a;
  uStack_50 = extraout_EAX;
  fStack_4c = extraout_var;
  if (g_data_057ac6b5 == '\0') {
    pSStack_58 = (System_Object_array *)0x40df616;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_58 = (System_Object_array *)0x40df622;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_58 = (System_Object_array *)0x40df62e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_58 = (System_Object_array *)0x40df63a;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b5 = '\x01';
  }
  pSVar6 = extraout_RDX;
  if (extraout_RDX == (System_Object_array *)0x0) {
label_040df754:
    pSStack_58 = (System_Object_array *)0x40df759;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX->max_length != 0) {
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)extraout_RDX->m_Items[0];
    unaff_R13 = &TypeInfo_CustomLogicEvaluator;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_58 = (System_Object_array *)0x40df671;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_58 = (System_Object_array *)0x40df683;
    pSVar9 = MethodInfo_String_ConvertTo_String;
    __a = (System_Object_array *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    unaff_R15 = (System_Object_array *)0x0;
    if (*(int *)&extraout_RDX->max_length < 2) {
      fVar14 = 0.1;
    }
    else {
      unaff_R12 = (System_Object_array *)extraout_RDX->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_58 = (System_Object_array *)0x40df6b7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_58 = (System_Object_array *)0x40df6c9;
      pSVar9 = MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)unaff_R12;
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)unaff_R12,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      if (2 < *(int *)&extraout_RDX->max_length) {
        pSVar6 = (System_Object_array *)extraout_RDX->m_Items[2];
        fStack_4c = fVar14;
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pSStack_58 = (System_Object_array *)0x40df6eb;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_58 = (System_Object_array *)0x40df6fd;
        pSVar9 = MethodInfo_Int32_ConvertTo_Int32;
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6;
        uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          ((Il2CppObject *)pSVar6,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
        unaff_R15 = (System_Object_array *)(ulong)uVar3;
        fVar14 = fStack_4c;
      }
    }
    if (pSVar8 != (System_Object_array *)0x0) {
      pUVar1 = *(UnityEngine_Animation_o **)&((Il2CppType *)pSVar8->m_Items)[1].bits;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        pSStack_58 = (System_Object_array *)0x40df71e;
        pSVar9 = __a;
        UnityEngine_Animation__CrossFade(pUVar1,(System_String_o *)__a,fVar14,(MethodInfo *)0x0);
        __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                  &((Il2CppType *)pSVar8->m_Items)[1].bits;
        if ((System_Object_array *)__this != (System_Object_array *)0x0) {
          pSStack_58 = (System_Object_array *)0x40df731;
          pSVar9 = __a;
          pUVar7 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)__a,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
            pSStack_58 = (System_Object_array *)0x40df743;
            UnityEngine_AnimationState__set_layer(pUVar7,(int32_t)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
    }
    goto label_040df754;
  }
  pSStack_58 = (System_Object_array *)0x40df75e;
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = pSVar9;
  pSStack_80 = __a;
  pSStack_78 = unaff_R12;
  puStack_70 = unaff_R13;
  pSStack_68 = pSVar8;
  pSStack_60 = unaff_R15;
  pSStack_58 = pSVar6;
  fStack_88 = extraout_EAX_00;
  fStack_84 = extraout_var_00;
  if (g_data_057ac6b6 == '\0') {
    pSStack_90 = (System_Object_array *)0x40df786;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_90 = (System_Object_array *)0x40df792;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_90 = (System_Object_array *)0x40df79e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_90 = (System_Object_array *)0x40df7aa;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b6 = '\x01';
  }
  pSVar8 = extraout_RDX_00;
  pSVar6 = unaff_R15;
  if (extraout_RDX_00 == (System_Object_array *)0x0) {
label_040df8d3:
    pSStack_90 = (System_Object_array *)0x40df8d8;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = pSVar6;
  }
  else if (*(int *)&extraout_RDX_00->max_length != 0) {
    __this = ((Il2CppType *)extraout_RDX_00->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_90 = (System_Object_array *)0x40df7e1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (System_Object_array *)0x40df7f3;
    pSVar11 = MethodInfo_String_ConvertTo_String;
    pSVar6 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)&extraout_RDX_00->max_length) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                &((Il2CppType *)extraout_RDX_00->m_Items)->bits;
      pSStack_90 = (System_Object_array *)0x40df814;
      pSVar11 = MethodInfo_Single_ConvertTo_Single;
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      layer = 0;
      if (*(int *)&extraout_RDX_00->max_length < 3) {
        fade = 0.1;
      }
      else {
        __this = ((Il2CppType *)extraout_RDX_00->m_Items)[1].data;
        fStack_88 = fVar14;
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pSStack_90 = (System_Object_array *)0x40df868;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_90 = (System_Object_array *)0x40df874;
        pSVar11 = MethodInfo_Single_ConvertTo_Single;
        fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        layer = 0;
        fVar14 = fStack_88;
        if (3 < *(int *)&extraout_RDX_00->max_length) {
          pSVar8 = *(System_Object_array **)&((Il2CppType *)extraout_RDX_00->m_Items)[1].bits;
          fStack_84 = fade;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_90 = (System_Object_array *)0x40df8ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_90 = (System_Object_array *)0x40df8bd;
          pSVar11 = MethodInfo_Int32_ConvertTo_Int32;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8;
          layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (&pSVar8->obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
          fade = fStack_84;
          fVar14 = fStack_88;
        }
      }
      if (pSVar9 != (System_Object_array *)0x0) {
        pSStack_90 = (System_Object_array *)0x40df83a;
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
                  ((CustomLogic_CustomLogicAnimationBuiltin_o *)pSVar9,(System_String_o *)pSVar6,fVar14,fade,
                   layer,method);
        return (Il2CppObject *)0x0;
      }
      goto label_040df8d3;
    }
  }
  pSStack_90 = (System_Object_array *)0x40df8dd;
  auVar15 = il2cpp_runtime_helper_022b2ca0();
  pSVar6 = auVar15._8_8_;
  uStack_a0 = auVar15._0_8_;
  pSVar12 = pSVar11;
  pSStack_98 = pSVar8;
  pSStack_90 = pSVar9;
  if (g_data_057ac6b7 == '\0') {
    pSStack_a8 = (System_Object_array *)0x40df8ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_a8 = (System_Object_array *)0x40df90b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b7 = '\x01';
  }
  if (pSVar6 == (System_Object_array *)0x0) {
label_040df96d:
    pSStack_a8 = (System_Object_array *)0x40df972;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar6->max_length != 0) {
    pSVar6 = ((Il2CppType *)pSVar6->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_a8 = (System_Object_array *)0x40df939;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_a8 = (System_Object_array *)0x40df94b;
    pSVar12 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar6->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar11 != (System_Object_array *)0x0) {
      pUVar1 = *(UnityEngine_Animation_o **)&((Il2CppType *)pSVar11->m_Items)[1].bits;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        pSStack_a8 = (System_Object_array *)0x40df963;
        UnityEngine_Animation__PlayQueued(pUVar1,pSVar4,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040df96d;
  }
  pSStack_a8 = (System_Object_array *)0x40df977;
  auVar15 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar15._8_8_;
  uStack_b8 = auVar15._0_8_;
  pSVar8 = pSVar12;
  pSStack_b0 = pSVar6;
  pSStack_a8 = pSVar11;
  if (g_data_057ac6b8 == '\0') {
    pSStack_c0 = (System_Object_array *)0x40df99f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_c0 = (System_Object_array *)0x40df9ab;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b8 = '\x01';
  }
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x18) == 0) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((int)*(long *)(lVar10 + 0x18) == 0) {
        pSStack_c0 = (System_Object_array *)0x40dfa33;
        il2cpp_runtime_helper_022b2ca0();
        pSVar9 = pSVar8;
        lStack_d0 = lVar10;
        pSStack_c8 = pSVar12;
        pSStack_c0 = unaff_R15;
        if (g_data_057ac6b9 == '\0') {
          pSStack_e8 = (System_Object_array *)0x40dfa64;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_e8 = (System_Object_array *)0x40dfa70;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_e8 = (System_Object_array *)0x40dfa7c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6b9 = '\x01';
        }
        if (extraout_RDX_01 == 0) {
label_040dfb1f:
          pSStack_e8 = (System_Object_array *)0x40dfb24;
          il2cpp_runtime_helper_022b2c90();
          pSVar6 = unaff_R15;
        }
        else {
          pSVar6 = unaff_R15;
          if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
            pSVar6 = *(System_Object_array **)(extraout_RDX_01 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_e8 = (System_Object_array *)0x40dfab2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_e8 = (System_Object_array *)0x40dfac4;
            pSVar9 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6;
            unaff_R15 = (System_Object_array *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (&pSVar6->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
              pSStack_e8 = (System_Object_array *)0x40dfae0;
              pSVar9 = MethodInfo_Single_ConvertTo_Single;
              fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar8 != (System_Object_array *)0x0) &&
                 (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                            &((Il2CppType *)pSVar8->m_Items)[1].bits, fStack_d4 = fVar14,
                 (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_e8 = (System_Object_array *)0x40dfafe;
                pSVar9 = unaff_R15;
                pUVar7 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                    (MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_e8 = (System_Object_array *)0x40dfb13;
                  UnityEngine_AnimationState__set_speed(pUVar7,fStack_d4,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfb1f;
            }
          }
        }
        pSStack_e8 = (System_Object_array *)0x40dfb29;
        auVar15 = il2cpp_runtime_helper_022b2ca0();
        pSVar11 = auVar15._8_8_;
        uStack_f8 = auVar15._0_8_;
        pSVar12 = pSVar9;
        lStack_f0 = extraout_RDX_01;
        pSStack_e8 = pSVar8;
        if (g_data_057ac6ba == '\0') {
          pSStack_100 = (System_Object_array *)0x40dfb4f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_100 = (System_Object_array *)0x40dfb5b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6ba = '\x01';
        }
        if (pSVar11 == (System_Object_array *)0x0) {
label_040dfbe5:
          pSStack_100 = (System_Object_array *)0x40dfbea;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar11->max_length != 0) {
          pSVar11 = ((Il2CppType *)pSVar11->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_100 = (System_Object_array *)0x40dfb89;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_100 = (System_Object_array *)0x40dfb9b;
          pSVar12 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar11;
          pSVar8 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar11->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar9 != (System_Object_array *)0x0) &&
             (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                        &((Il2CppType *)pSVar9->m_Items)[1].bits,
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_100 = (System_Object_array *)0x40dfbb3;
            pUVar7 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar8,(MethodInfo *)0x0)
            ;
            pSVar12 = pSVar8;
            if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_100 = (System_Object_array *)0x40dfbc2;
              fVar14 = UnityEngine_AnimationState__get_speed(pUVar7,(MethodInfo *)0x0);
              uStack_f8 = CONCAT44(fVar14,(undefined4)uStack_f8);
              pSStack_100 = (System_Object_array *)0x40dfbdd;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_f8 + 4);
              return pIVar5;
            }
          }
          goto label_040dfbe5;
        }
        pSStack_100 = (System_Object_array *)0x40dfbef;
        auVar15 = il2cpp_runtime_helper_022b2ca0();
        pSVar8 = auVar15._8_8_;
        uStack_110 = auVar15._0_8_;
        pSVar13 = pSVar12;
        pSStack_108 = pSVar11;
        pSStack_100 = pSVar9;
        if (g_data_057ac6bb == '\0') {
          pSStack_118 = (System_Object_array *)0x40dfc0f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_118 = (System_Object_array *)0x40dfc1b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bb = '\x01';
        }
        if (pSVar8 == (System_Object_array *)0x0) {
label_040dfca5:
          pSStack_118 = (System_Object_array *)0x40dfcaa;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar8->max_length != 0) {
          pSVar8 = ((Il2CppType *)pSVar8->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_118 = (System_Object_array *)0x40dfc49;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_118 = (System_Object_array *)0x40dfc5b;
          pSVar13 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8;
          pSVar9 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar8->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar12 != (System_Object_array *)0x0) &&
             (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                        &((Il2CppType *)pSVar12->m_Items)[1].bits,
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_118 = (System_Object_array *)0x40dfc73;
            pUVar7 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar9,(MethodInfo *)0x0)
            ;
            pSVar13 = pSVar9;
            if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_118 = (System_Object_array *)0x40dfc82;
              fVar14 = UnityEngine_AnimationState__get_length(pUVar7,(MethodInfo *)0x0);
              uStack_110 = CONCAT44(fVar14,(undefined4)uStack_110);
              pSStack_118 = (System_Object_array *)0x40dfc9d;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_110 + 4);
              return pIVar5;
            }
          }
          goto label_040dfca5;
        }
        pSStack_118 = (System_Object_array *)0x40dfcaf;
        auVar15 = il2cpp_runtime_helper_022b2ca0();
        pSVar9 = auVar15._8_8_;
        uStack_128 = auVar15._0_8_;
        pSVar11 = pSVar13;
        pSStack_120 = pSVar8;
        pSStack_118 = pSVar12;
        if (g_data_057ac6bc == '\0') {
          pSStack_130 = (System_Object_array *)0x40dfccf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_130 = (System_Object_array *)0x40dfcdb;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bc = '\x01';
        }
        if (pSVar9 == (System_Object_array *)0x0) {
label_040dfd65:
          pSStack_130 = (System_Object_array *)0x40dfd6a;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar9->max_length != 0) {
          pSVar9 = ((Il2CppType *)pSVar9->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_130 = (System_Object_array *)0x40dfd09;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_130 = (System_Object_array *)0x40dfd1b;
          pSVar11 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar9;
          pSVar8 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar9->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar13 != (System_Object_array *)0x0) &&
             (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                        &((Il2CppType *)pSVar13->m_Items)[1].bits,
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_130 = (System_Object_array *)0x40dfd33;
            pUVar7 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar8,(MethodInfo *)0x0)
            ;
            pSVar11 = pSVar8;
            if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_130 = (System_Object_array *)0x40dfd42;
              fVar14 = UnityEngine_AnimationState__get_normalizedTime(pUVar7,(MethodInfo *)0x0);
              uStack_128 = CONCAT44(fVar14,(undefined4)uStack_128);
              pSStack_130 = (System_Object_array *)0x40dfd5d;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_128 + 4);
              return pIVar5;
            }
          }
          goto label_040dfd65;
        }
        pSStack_130 = (System_Object_array *)0x40dfd6f;
        il2cpp_runtime_helper_022b2ca0();
        pSVar8 = pSVar11;
        pSStack_140 = pSVar9;
        pSStack_138 = pSVar13;
        pSStack_130 = pSVar6;
        if (g_data_057ac6bd == '\0') {
          pSStack_158 = (System_Object_array *)0x40dfd94;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_158 = (System_Object_array *)0x40dfda0;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_158 = (System_Object_array *)0x40dfdac;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bd = '\x01';
        }
        if (extraout_RDX_02 == 0) {
label_040dfe4f:
          pSStack_158 = (System_Object_array *)0x40dfe54;
          il2cpp_runtime_helper_022b2c90();
          pSVar9 = pSVar6;
        }
        else {
          pSVar9 = pSVar6;
          if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
            pSVar9 = *(System_Object_array **)(extraout_RDX_02 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_158 = (System_Object_array *)0x40dfde2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_158 = (System_Object_array *)0x40dfdf4;
            pSVar8 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar9;
            pSVar6 = (System_Object_array *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (&pSVar9->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
              pSStack_158 = (System_Object_array *)0x40dfe10;
              pSVar8 = MethodInfo_Single_ConvertTo_Single;
              fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar11 != (System_Object_array *)0x0) &&
                 (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                            &((Il2CppType *)pSVar11->m_Items)[1].bits, fStack_144 = fVar14,
                 (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_158 = (System_Object_array *)0x40dfe2e;
                pSVar8 = pSVar6;
                pUVar7 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar6,
                                    (MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_158 = (System_Object_array *)0x40dfe43;
                  UnityEngine_AnimationState__set_normalizedTime(pUVar7,fStack_144,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfe4f;
            }
          }
        }
        pSStack_158 = (System_Object_array *)0x40dfe59;
        il2cpp_runtime_helper_022b2ca0();
        pSVar6 = pSVar8;
        lStack_168 = extraout_RDX_02;
        pSStack_160 = pSVar11;
        pSStack_158 = pSVar9;
        if (g_data_057ac6be == '\0') {
          pSStack_180 = (System_Object_array *)0x40dfe84;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_180 = (System_Object_array *)0x40dfe90;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_180 = (System_Object_array *)0x40dfe9c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6be = '\x01';
        }
        if (extraout_RDX_03 == 0) {
label_040dff3f:
          pSStack_180 = (System_Object_array *)0x40dff44;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_180 = (System_Object_array *)0x40dfed2;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_180 = (System_Object_array *)0x40dfee4;
          pSVar6 = MethodInfo_String_ConvertTo_String;
          pSVar9 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
            __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x28);
            pSStack_180 = (System_Object_array *)0x40dff00;
            pSVar6 = MethodInfo_Single_ConvertTo_Single;
            fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if ((pSVar8 != (System_Object_array *)0x0) &&
               (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                          &((Il2CppType *)pSVar8->m_Items)[1].bits, fStack_16c = fVar14,
               (System_Object_array *)__this != (System_Object_array *)0x0)) {
              pSStack_180 = (System_Object_array *)0x40dff1e;
              pUVar7 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar9,
                                  (MethodInfo *)0x0);
              pSVar6 = pSVar9;
              if (pUVar7 != (UnityEngine_AnimationState_o *)0x0) {
                pSStack_180 = (System_Object_array *)0x40dff33;
                UnityEngine_AnimationState__set_weight(pUVar7,fStack_16c,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_040dff3f;
          }
        }
        pSStack_180 = (System_Object_array *)0x40dff49;
        auVar15 = il2cpp_runtime_helper_022b2ca0();
        lVar10 = auVar15._8_8_;
        uStack_190 = auVar15._0_8_;
        lStack_188 = extraout_RDX_03;
        pSStack_180 = pSVar8;
        if (g_data_057ac6bf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bf = '\x01';
        }
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) goto label_040e000a;
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar10 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (((pSVar6 != (System_Object_array *)0x0) &&
              (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                         &((Il2CppType *)pSVar6->m_Items)[1].bits,
              (System_Object_array *)__this != (System_Object_array *)0x0)) &&
             (pUVar7 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,pSVar4,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_AnimationState_o *)0x0)) {
            fVar14 = UnityEngine_AnimationState__get_weight(pUVar7,(MethodInfo *)0x0);
            uStack_190 = CONCAT44(fVar14,(undefined4)uStack_190);
            pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_190 + 4);
            return pIVar5;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_040e000a:
        il2cpp_runtime_helper_022b2ca0();
        CustomLogic_BuiltinComponentInstance___ctor
                  ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_c0 = (System_Object_array *)0x40df9e0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_c0 = (System_Object_array *)0x40df9f2;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    }
    if ((pSVar12 != (System_Object_array *)0x0) &&
       (__this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                  &((Il2CppType *)pSVar12->m_Items)[1].bits,
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      if (pSVar4 != (System_String_o *)0x0) {
        pSStack_c0 = (System_Object_array *)0x40dfa0f;
        UnityEngine_Animation__Stop_4da18d0((UnityEngine_Animation_o *)__this,pSVar4,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_040dfa1d;
    }
  }
  pSStack_c0 = (System_Object_array *)0x40dfa1d;
  il2cpp_runtime_helper_022b2c90();
label_040dfa1d:
  pSStack_c0 = (System_Object_array *)0x40dfa24;
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40df5f0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  uint uVar1;
  float extraout_EAX;
  int32_t layer;
  undefined8 in_RAX;
  float extraout_var;
  System_Object_array *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_AnimationState_o *pUVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  System_Object_array *pSVar7;
  System_Object_array *pSVar8;
  Il2CppObject *extraout_RAX;
  System_Object_array *extraout_RDX;
  long lVar9;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  System_Object_array *unaff_RBX;
  System_Object_array *pSVar10;
  System_Object_array *pSVar11;
  System_Object_array *unaff_R12;
  undefined8 *unaff_R13;
  System_Object_array *unaff_R15;
  float fVar12;
  float fade;
  undefined1 auVar13 [16];
  undefined8 uStack_178;
  long lStack_170;
  System_Object_array *pSStack_168;
  float fStack_154;
  long lStack_150;
  System_Object_array *pSStack_148;
  System_Object_array *pSStack_140;
  float fStack_12c;
  System_Object_array *pSStack_128;
  System_Object_array *pSStack_120;
  System_Object_array *pSStack_118;
  undefined8 uStack_110;
  System_Object_array *pSStack_108;
  System_Object_array *pSStack_100;
  undefined8 uStack_f8;
  System_Object_array *pSStack_f0;
  System_Object_array *pSStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  System_Object_array *pSStack_d0;
  float fStack_bc;
  long lStack_b8;
  System_Object_array *pSStack_b0;
  System_Object_array *pSStack_a8;
  undefined8 uStack_a0;
  System_Object_array *pSStack_98;
  System_Object_array *pSStack_90;
  undefined8 uStack_88;
  System_Object_array *pSStack_80;
  System_Object_array *pSStack_78;
  float fStack_70;
  float fStack_6c;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  undefined8 *puStack_58;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_50;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  undefined8 uStack_38;
  
  pSVar5 = (System_Object_array *)__c;
  uStack_38 = in_RAX;
  if (g_data_057ac6b5 == '\0') {
    pSStack_40 = (System_Object_array *)0x40df616;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_40 = (System_Object_array *)0x40df622;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_40 = (System_Object_array *)0x40df62e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_40 = (System_Object_array *)0x40df63a;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040df754:
    pSStack_40 = (System_Object_array *)0x40df759;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
    unaff_R13 = &TypeInfo_CustomLogicEvaluator;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_40 = (System_Object_array *)0x40df671;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = (System_Object_array *)0x40df683;
    pSVar5 = MethodInfo_String_ConvertTo_String;
    unaff_RBX = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    unaff_R15 = (System_Object_array *)0x0;
    if ((int)__a->max_length < 2) {
      fVar12 = 0.1;
    }
    else {
      unaff_R12 = (System_Object_array *)__a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_40 = (System_Object_array *)0x40df6b7;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_Object_array *)0x40df6c9;
      pSVar5 = MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)unaff_R12;
      fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)unaff_R12,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      if (2 < (int)__a->max_length) {
        uStack_38 = CONCAT44(fVar12,(undefined4)uStack_38);
        __a = (System_Object_array *)__a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pSStack_40 = (System_Object_array *)0x40df6eb;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = (System_Object_array *)0x40df6fd;
        pSVar5 = MethodInfo_Int32_ConvertTo_Int32;
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
        uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
        unaff_R15 = (System_Object_array *)(ulong)uVar1;
        fVar12 = uStack_38._4_4_;
      }
    }
    if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      __this_00 = (__c->fields).Value;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (UnityEngine_Animation_o *)0x0) {
        pSStack_40 = (System_Object_array *)0x40df71e;
        pSVar5 = unaff_RBX;
        UnityEngine_Animation__CrossFade(__this_00,(System_String_o *)unaff_RBX,fVar12,(MethodInfo *)0x0);
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value;
        if ((System_Object_array *)__this != (System_Object_array *)0x0) {
          pSStack_40 = (System_Object_array *)0x40df731;
          pSVar5 = unaff_RBX;
          pUVar4 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_RBX,(MethodInfo *)0x0
                             );
          if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
            pSStack_40 = (System_Object_array *)0x40df743;
            UnityEngine_AnimationState__set_layer(pUVar4,(int32_t)unaff_R15,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
    }
    goto label_040df754;
  }
  pSStack_40 = (System_Object_array *)0x40df75e;
  il2cpp_runtime_helper_022b2ca0();
  pSVar7 = pSVar5;
  pSStack_68 = unaff_RBX;
  pSStack_60 = unaff_R12;
  puStack_58 = unaff_R13;
  pCStack_50 = __c;
  pSStack_48 = unaff_R15;
  pSStack_40 = __a;
  fStack_70 = extraout_EAX;
  fStack_6c = extraout_var;
  if (g_data_057ac6b6 == '\0') {
    pSStack_78 = (System_Object_array *)0x40df786;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_78 = (System_Object_array *)0x40df792;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_78 = (System_Object_array *)0x40df79e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_78 = (System_Object_array *)0x40df7aa;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b6 = '\x01';
  }
  pSVar8 = extraout_RDX;
  pSVar2 = unaff_R15;
  if (extraout_RDX == (System_Object_array *)0x0) {
label_040df8d3:
    pSStack_78 = (System_Object_array *)0x40df8d8;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = pSVar2;
  }
  else if (*(int *)&extraout_RDX->max_length != 0) {
    __this = ((Il2CppType *)extraout_RDX->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_78 = (System_Object_array *)0x40df7e1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_78 = (System_Object_array *)0x40df7f3;
    pSVar7 = MethodInfo_String_ConvertTo_String;
    pSVar2 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)&extraout_RDX->max_length) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)
                &((Il2CppType *)extraout_RDX->m_Items)->bits;
      pSStack_78 = (System_Object_array *)0x40df814;
      pSVar7 = MethodInfo_Single_ConvertTo_Single;
      fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      layer = 0;
      if (*(int *)&extraout_RDX->max_length < 3) {
        fade = 0.1;
      }
      else {
        __this = ((Il2CppType *)extraout_RDX->m_Items)[1].data;
        fStack_70 = fVar12;
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pSStack_78 = (System_Object_array *)0x40df868;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_78 = (System_Object_array *)0x40df874;
        pSVar7 = MethodInfo_Single_ConvertTo_Single;
        fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        layer = 0;
        fVar12 = fStack_70;
        if (3 < *(int *)&extraout_RDX->max_length) {
          pSVar8 = *(System_Object_array **)&((Il2CppType *)extraout_RDX->m_Items)[1].bits;
          fStack_6c = fade;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_78 = (System_Object_array *)0x40df8ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_78 = (System_Object_array *)0x40df8bd;
          pSVar7 = MethodInfo_Int32_ConvertTo_Int32;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8;
          layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (&pSVar8->obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
          fade = fStack_6c;
          fVar12 = fStack_70;
        }
      }
      if (pSVar5 != (System_Object_array *)0x0) {
        pSStack_78 = (System_Object_array *)0x40df83a;
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
                  ((CustomLogic_CustomLogicAnimationBuiltin_o *)pSVar5,(System_String_o *)pSVar2,fVar12,fade,
                   layer,method);
        return (Il2CppObject *)0x0;
      }
      goto label_040df8d3;
    }
  }
  pSStack_78 = (System_Object_array *)0x40df8dd;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  pSVar2 = auVar13._8_8_;
  uStack_88 = auVar13._0_8_;
  pSVar10 = pSVar7;
  pSStack_80 = pSVar8;
  pSStack_78 = pSVar5;
  if (g_data_057ac6b7 == '\0') {
    pSStack_90 = (System_Object_array *)0x40df8ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_90 = (System_Object_array *)0x40df90b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b7 = '\x01';
  }
  if (pSVar2 == (System_Object_array *)0x0) {
label_040df96d:
    pSStack_90 = (System_Object_array *)0x40df972;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar2->max_length != 0) {
    pSVar2 = ((Il2CppType *)pSVar2->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_90 = (System_Object_array *)0x40df939;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (System_Object_array *)0x40df94b;
    pSVar10 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar2;
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar2->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar7 != (System_Object_array *)0x0) {
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if ((UnityEngine_Animation_o *)pSVar7->m_Items[3] != (UnityEngine_Animation_o *)0x0) {
        pSStack_90 = (System_Object_array *)0x40df963;
        UnityEngine_Animation__PlayQueued
                  ((UnityEngine_Animation_o *)pSVar7->m_Items[3],pSVar3,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040df96d;
  }
  pSStack_90 = (System_Object_array *)0x40df977;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar9 = auVar13._8_8_;
  uStack_a0 = auVar13._0_8_;
  pSVar5 = pSVar10;
  pSStack_98 = pSVar2;
  pSStack_90 = pSVar7;
  if (g_data_057ac6b8 == '\0') {
    pSStack_a8 = (System_Object_array *)0x40df99f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_a8 = (System_Object_array *)0x40df9ab;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b8 = '\x01';
  }
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x18) == 0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      if ((int)*(long *)(lVar9 + 0x18) == 0) {
        pSStack_a8 = (System_Object_array *)0x40dfa33;
        il2cpp_runtime_helper_022b2ca0();
        pSVar7 = pSVar5;
        lStack_b8 = lVar9;
        pSStack_b0 = pSVar10;
        pSStack_a8 = unaff_R15;
        if (g_data_057ac6b9 == '\0') {
          pSStack_d0 = (System_Object_array *)0x40dfa64;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_d0 = (System_Object_array *)0x40dfa70;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_d0 = (System_Object_array *)0x40dfa7c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6b9 = '\x01';
        }
        if (extraout_RDX_00 == 0) {
label_040dfb1f:
          pSStack_d0 = (System_Object_array *)0x40dfb24;
          il2cpp_runtime_helper_022b2c90();
          pSVar8 = unaff_R15;
        }
        else {
          pSVar8 = unaff_R15;
          if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
            pSVar8 = *(System_Object_array **)(extraout_RDX_00 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_d0 = (System_Object_array *)0x40dfab2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_d0 = (System_Object_array *)0x40dfac4;
            pSVar7 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8;
            unaff_R15 = (System_Object_array *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (&pSVar8->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
              pSStack_d0 = (System_Object_array *)0x40dfae0;
              pSVar7 = MethodInfo_Single_ConvertTo_Single;
              fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar5 != (System_Object_array *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5->m_Items[3],
                 fStack_bc = fVar12, (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_d0 = (System_Object_array *)0x40dfafe;
                pSVar7 = unaff_R15;
                pUVar4 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                    (MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_d0 = (System_Object_array *)0x40dfb13;
                  UnityEngine_AnimationState__set_speed(pUVar4,fStack_bc,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfb1f;
            }
          }
        }
        pSStack_d0 = (System_Object_array *)0x40dfb29;
        auVar13 = il2cpp_runtime_helper_022b2ca0();
        pSVar2 = auVar13._8_8_;
        uStack_e0 = auVar13._0_8_;
        pSVar10 = pSVar7;
        lStack_d8 = extraout_RDX_00;
        pSStack_d0 = pSVar5;
        if (g_data_057ac6ba == '\0') {
          pSStack_e8 = (System_Object_array *)0x40dfb4f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_e8 = (System_Object_array *)0x40dfb5b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6ba = '\x01';
        }
        if (pSVar2 == (System_Object_array *)0x0) {
label_040dfbe5:
          pSStack_e8 = (System_Object_array *)0x40dfbea;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar2->max_length != 0) {
          pSVar2 = ((Il2CppType *)pSVar2->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_e8 = (System_Object_array *)0x40dfb89;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_e8 = (System_Object_array *)0x40dfb9b;
          pSVar10 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar2;
          pSVar5 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar2->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar7 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_e8 = (System_Object_array *)0x40dfbb3;
            pUVar4 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar5,(MethodInfo *)0x0)
            ;
            pSVar10 = pSVar5;
            if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_e8 = (System_Object_array *)0x40dfbc2;
              fVar12 = UnityEngine_AnimationState__get_speed(pUVar4,(MethodInfo *)0x0);
              uStack_e0 = CONCAT44(fVar12,(undefined4)uStack_e0);
              pSStack_e8 = (System_Object_array *)0x40dfbdd;
              pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_e0 + 4);
              return pIVar6;
            }
          }
          goto label_040dfbe5;
        }
        pSStack_e8 = (System_Object_array *)0x40dfbef;
        auVar13 = il2cpp_runtime_helper_022b2ca0();
        pSVar5 = auVar13._8_8_;
        uStack_f8 = auVar13._0_8_;
        pSVar11 = pSVar10;
        pSStack_f0 = pSVar2;
        pSStack_e8 = pSVar7;
        if (g_data_057ac6bb == '\0') {
          pSStack_100 = (System_Object_array *)0x40dfc0f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_100 = (System_Object_array *)0x40dfc1b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bb = '\x01';
        }
        if (pSVar5 == (System_Object_array *)0x0) {
label_040dfca5:
          pSStack_100 = (System_Object_array *)0x40dfcaa;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar5->max_length != 0) {
          pSVar5 = ((Il2CppType *)pSVar5->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_100 = (System_Object_array *)0x40dfc49;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_100 = (System_Object_array *)0x40dfc5b;
          pSVar11 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5;
          pSVar7 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar5->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar10 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar10->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_100 = (System_Object_array *)0x40dfc73;
            pUVar4 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar7,(MethodInfo *)0x0)
            ;
            pSVar11 = pSVar7;
            if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_100 = (System_Object_array *)0x40dfc82;
              fVar12 = UnityEngine_AnimationState__get_length(pUVar4,(MethodInfo *)0x0);
              uStack_f8 = CONCAT44(fVar12,(undefined4)uStack_f8);
              pSStack_100 = (System_Object_array *)0x40dfc9d;
              pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_f8 + 4);
              return pIVar6;
            }
          }
          goto label_040dfca5;
        }
        pSStack_100 = (System_Object_array *)0x40dfcaf;
        auVar13 = il2cpp_runtime_helper_022b2ca0();
        pSVar7 = auVar13._8_8_;
        uStack_110 = auVar13._0_8_;
        pSVar2 = pSVar11;
        pSStack_108 = pSVar5;
        pSStack_100 = pSVar10;
        if (g_data_057ac6bc == '\0') {
          pSStack_118 = (System_Object_array *)0x40dfccf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_118 = (System_Object_array *)0x40dfcdb;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bc = '\x01';
        }
        if (pSVar7 == (System_Object_array *)0x0) {
label_040dfd65:
          pSStack_118 = (System_Object_array *)0x40dfd6a;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar7->max_length != 0) {
          pSVar7 = ((Il2CppType *)pSVar7->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_118 = (System_Object_array *)0x40dfd09;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_118 = (System_Object_array *)0x40dfd1b;
          pSVar2 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7;
          pSVar5 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar7->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar11 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar11->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_118 = (System_Object_array *)0x40dfd33;
            pUVar4 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar5,(MethodInfo *)0x0)
            ;
            pSVar2 = pSVar5;
            if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_118 = (System_Object_array *)0x40dfd42;
              fVar12 = UnityEngine_AnimationState__get_normalizedTime(pUVar4,(MethodInfo *)0x0);
              uStack_110 = CONCAT44(fVar12,(undefined4)uStack_110);
              pSStack_118 = (System_Object_array *)0x40dfd5d;
              pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_110 + 4);
              return pIVar6;
            }
          }
          goto label_040dfd65;
        }
        pSStack_118 = (System_Object_array *)0x40dfd6f;
        il2cpp_runtime_helper_022b2ca0();
        pSVar5 = pSVar2;
        pSStack_128 = pSVar7;
        pSStack_120 = pSVar11;
        pSStack_118 = pSVar8;
        if (g_data_057ac6bd == '\0') {
          pSStack_140 = (System_Object_array *)0x40dfd94;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_140 = (System_Object_array *)0x40dfda0;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_140 = (System_Object_array *)0x40dfdac;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bd = '\x01';
        }
        if (extraout_RDX_01 == 0) {
label_040dfe4f:
          pSStack_140 = (System_Object_array *)0x40dfe54;
          il2cpp_runtime_helper_022b2c90();
          pSVar7 = pSVar8;
        }
        else {
          pSVar7 = pSVar8;
          if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
            pSVar7 = *(System_Object_array **)(extraout_RDX_01 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_140 = (System_Object_array *)0x40dfde2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_140 = (System_Object_array *)0x40dfdf4;
            pSVar5 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7;
            pSVar8 = (System_Object_array *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (&pSVar7->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
              pSStack_140 = (System_Object_array *)0x40dfe10;
              pSVar5 = MethodInfo_Single_ConvertTo_Single;
              fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar2 != (System_Object_array *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar2->m_Items[3],
                 fStack_12c = fVar12, (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_140 = (System_Object_array *)0x40dfe2e;
                pSVar5 = pSVar8;
                pUVar4 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar8,
                                    (MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_140 = (System_Object_array *)0x40dfe43;
                  UnityEngine_AnimationState__set_normalizedTime(pUVar4,fStack_12c,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfe4f;
            }
          }
        }
        pSStack_140 = (System_Object_array *)0x40dfe59;
        il2cpp_runtime_helper_022b2ca0();
        pSVar8 = pSVar5;
        lStack_150 = extraout_RDX_01;
        pSStack_148 = pSVar2;
        pSStack_140 = pSVar7;
        if (g_data_057ac6be == '\0') {
          pSStack_168 = (System_Object_array *)0x40dfe84;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_168 = (System_Object_array *)0x40dfe90;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_168 = (System_Object_array *)0x40dfe9c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6be = '\x01';
        }
        if (extraout_RDX_02 == 0) {
label_040dff3f:
          pSStack_168 = (System_Object_array *)0x40dff44;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_168 = (System_Object_array *)0x40dfed2;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_168 = (System_Object_array *)0x40dfee4;
          pSVar8 = MethodInfo_String_ConvertTo_String;
          pSVar7 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
            __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
            pSStack_168 = (System_Object_array *)0x40dff00;
            pSVar8 = MethodInfo_Single_ConvertTo_Single;
            fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if ((pSVar5 != (System_Object_array *)0x0) &&
               (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5->m_Items[3],
               fStack_154 = fVar12, (System_Object_array *)__this != (System_Object_array *)0x0)) {
              pSStack_168 = (System_Object_array *)0x40dff1e;
              pUVar4 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar7,
                                  (MethodInfo *)0x0);
              pSVar8 = pSVar7;
              if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
                pSStack_168 = (System_Object_array *)0x40dff33;
                UnityEngine_AnimationState__set_weight(pUVar4,fStack_154,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_040dff3f;
          }
        }
        pSStack_168 = (System_Object_array *)0x40dff49;
        auVar13 = il2cpp_runtime_helper_022b2ca0();
        lVar9 = auVar13._8_8_;
        uStack_178 = auVar13._0_8_;
        lStack_170 = extraout_RDX_02;
        pSStack_168 = pSVar5;
        if (g_data_057ac6bf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bf = '\x01';
        }
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) goto label_040e000a;
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar9 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (((pSVar8 != (System_Object_array *)0x0) &&
              (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8->m_Items[3],
              (System_Object_array *)__this != (System_Object_array *)0x0)) &&
             (pUVar4 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,pSVar3,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_AnimationState_o *)0x0)) {
            fVar12 = UnityEngine_AnimationState__get_weight(pUVar4,(MethodInfo *)0x0);
            uStack_178 = CONCAT44(fVar12,(undefined4)uStack_178);
            pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_178 + 4);
            return pIVar6;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_040e000a:
        il2cpp_runtime_helper_022b2ca0();
        CustomLogic_BuiltinComponentInstance___ctor
                  ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_a8 = (System_Object_array *)0x40df9e0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_a8 = (System_Object_array *)0x40df9f2;
      pSVar3 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    }
    if ((pSVar10 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar10->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      if (pSVar3 != (System_String_o *)0x0) {
        pSStack_a8 = (System_Object_array *)0x40dfa0f;
        UnityEngine_Animation__Stop_4da18d0((UnityEngine_Animation_o *)__this,pSVar3,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_040dfa1d;
    }
  }
  pSStack_a8 = (System_Object_array *)0x40dfa1d;
  il2cpp_runtime_helper_022b2c90();
label_040dfa1d:
  pSStack_a8 = (System_Object_array *)0x40dfa24;
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40df760

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  undefined8 in_RAX;
  System_Object_array *pSVar1;
  System_String_o *pSVar2;
  UnityEngine_AnimationState_o *pUVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  Il2CppObject *extraout_RAX;
  long lVar7;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  System_Object_array *pSVar8;
  System_Object_array *pSVar9;
  System_Object_array *pSVar10;
  System_Object_array *unaff_R15;
  float fVar11;
  float fade;
  undefined1 auVar12 [16];
  undefined8 uStack_140;
  long lStack_138;
  System_Object_array *pSStack_130;
  float fStack_11c;
  long lStack_118;
  System_Object_array *pSStack_110;
  System_Object_array *pSStack_108;
  float fStack_f4;
  System_Object_array *pSStack_f0;
  System_Object_array *pSStack_e8;
  System_Object_array *pSStack_e0;
  undefined8 uStack_d8;
  System_Object_array *pSStack_d0;
  System_Object_array *pSStack_c8;
  undefined8 uStack_c0;
  System_Object_array *pSStack_b8;
  System_Object_array *pSStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  System_Object_array *pSStack_98;
  float fStack_84;
  long lStack_80;
  System_Object_array *pSStack_78;
  System_Object_array *pSStack_70;
  undefined8 uStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  undefined8 uStack_50;
  System_Object_array *pSStack_48;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_40;
  undefined8 uStack_38;
  
  pSVar6 = (System_Object_array *)__c;
  uStack_38 = in_RAX;
  if (g_data_057ac6b6 == '\0') {
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df786;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df792;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df79e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df7aa;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b6 = '\x01';
  }
  pSVar1 = unaff_R15;
  if (__a == (System_Object_array *)0x0) {
label_040df8d3:
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df8d8;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = pSVar1;
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df7e1;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df7f3;
    pSVar6 = MethodInfo_String_ConvertTo_String;
    pSVar1 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[1];
      pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df814;
      pSVar6 = MethodInfo_Single_ConvertTo_Single;
      fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      layer = 0;
      if ((int)__a->max_length < 3) {
        fade = 0.1;
      }
      else {
        uStack_38 = CONCAT44(uStack_38._4_4_,fVar11);
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df868;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df874;
        pSVar6 = MethodInfo_Single_ConvertTo_Single;
        fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        layer = 0;
        fVar11 = (float)uStack_38;
        if (3 < (int)__a->max_length) {
          uStack_38 = CONCAT44(fade,(float)uStack_38);
          __a = (System_Object_array *)__a->m_Items[3];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df8ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df8bd;
          pSVar6 = MethodInfo_Int32_ConvertTo_Int32;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
          layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
          fade = uStack_38._4_4_;
          fVar11 = (float)uStack_38;
        }
      }
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df83a;
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
                  (__c,(System_String_o *)pSVar1,fVar11,fade,layer,method);
        return (Il2CppObject *)0x0;
      }
      goto label_040df8d3;
    }
  }
  pCStack_40 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40df8dd;
  auVar12 = il2cpp_runtime_helper_022b2ca0();
  pSVar1 = auVar12._8_8_;
  uStack_50 = auVar12._0_8_;
  pSVar8 = pSVar6;
  pSStack_48 = __a;
  pCStack_40 = __c;
  if (g_data_057ac6b7 == '\0') {
    pSStack_58 = (System_Object_array *)0x40df8ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_58 = (System_Object_array *)0x40df90b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b7 = '\x01';
  }
  if (pSVar1 == (System_Object_array *)0x0) {
label_040df96d:
    pSStack_58 = (System_Object_array *)0x40df972;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar1->max_length != 0) {
    pSVar1 = ((Il2CppType *)pSVar1->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_58 = (System_Object_array *)0x40df939;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_58 = (System_Object_array *)0x40df94b;
    pSVar8 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar1->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar6 != (System_Object_array *)0x0) {
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if ((UnityEngine_Animation_o *)pSVar6->m_Items[3] != (UnityEngine_Animation_o *)0x0) {
        pSStack_58 = (System_Object_array *)0x40df963;
        UnityEngine_Animation__PlayQueued
                  ((UnityEngine_Animation_o *)pSVar6->m_Items[3],pSVar2,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040df96d;
  }
  pSStack_58 = (System_Object_array *)0x40df977;
  auVar12 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar12._8_8_;
  uStack_68 = auVar12._0_8_;
  pSVar4 = pSVar8;
  pSStack_60 = pSVar1;
  pSStack_58 = pSVar6;
  if (g_data_057ac6b8 == '\0') {
    pSStack_70 = (System_Object_array *)0x40df99f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_70 = (System_Object_array *)0x40df9ab;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b8 = '\x01';
  }
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x18) == 0) {
      pSVar2 = (System_String_o *)0x0;
    }
    else {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
        pSStack_70 = (System_Object_array *)0x40dfa33;
        il2cpp_runtime_helper_022b2ca0();
        pSVar6 = pSVar4;
        lStack_80 = lVar7;
        pSStack_78 = pSVar8;
        pSStack_70 = unaff_R15;
        if (g_data_057ac6b9 == '\0') {
          pSStack_98 = (System_Object_array *)0x40dfa64;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_98 = (System_Object_array *)0x40dfa70;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_98 = (System_Object_array *)0x40dfa7c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6b9 = '\x01';
        }
        if (extraout_RDX == 0) {
label_040dfb1f:
          pSStack_98 = (System_Object_array *)0x40dfb24;
          il2cpp_runtime_helper_022b2c90();
          pSVar1 = unaff_R15;
        }
        else {
          pSVar1 = unaff_R15;
          if (*(int *)(extraout_RDX + 0x18) != 0) {
            pSVar1 = *(System_Object_array **)(extraout_RDX + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_98 = (System_Object_array *)0x40dfab2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_98 = (System_Object_array *)0x40dfac4;
            pSVar6 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1;
            unaff_R15 = (System_Object_array *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (&pSVar1->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
              pSStack_98 = (System_Object_array *)0x40dfae0;
              pSVar6 = MethodInfo_Single_ConvertTo_Single;
              fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar4 != (System_Object_array *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4->m_Items[3],
                 fStack_84 = fVar11, (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_98 = (System_Object_array *)0x40dfafe;
                pSVar6 = unaff_R15;
                pUVar3 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                    (MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_98 = (System_Object_array *)0x40dfb13;
                  UnityEngine_AnimationState__set_speed(pUVar3,fStack_84,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfb1f;
            }
          }
        }
        pSStack_98 = (System_Object_array *)0x40dfb29;
        auVar12 = il2cpp_runtime_helper_022b2ca0();
        pSVar8 = auVar12._8_8_;
        uStack_a8 = auVar12._0_8_;
        pSVar9 = pSVar6;
        lStack_a0 = extraout_RDX;
        pSStack_98 = pSVar4;
        if (g_data_057ac6ba == '\0') {
          pSStack_b0 = (System_Object_array *)0x40dfb4f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_b0 = (System_Object_array *)0x40dfb5b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6ba = '\x01';
        }
        if (pSVar8 == (System_Object_array *)0x0) {
label_040dfbe5:
          pSStack_b0 = (System_Object_array *)0x40dfbea;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar8->max_length != 0) {
          pSVar8 = ((Il2CppType *)pSVar8->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_b0 = (System_Object_array *)0x40dfb89;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_b0 = (System_Object_array *)0x40dfb9b;
          pSVar9 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8;
          pSVar4 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar8->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar6 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_b0 = (System_Object_array *)0x40dfbb3;
            pUVar3 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar4,(MethodInfo *)0x0)
            ;
            pSVar9 = pSVar4;
            if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_b0 = (System_Object_array *)0x40dfbc2;
              fVar11 = UnityEngine_AnimationState__get_speed(pUVar3,(MethodInfo *)0x0);
              uStack_a8 = CONCAT44(fVar11,(undefined4)uStack_a8);
              pSStack_b0 = (System_Object_array *)0x40dfbdd;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a8 + 4);
              return pIVar5;
            }
          }
          goto label_040dfbe5;
        }
        pSStack_b0 = (System_Object_array *)0x40dfbef;
        auVar12 = il2cpp_runtime_helper_022b2ca0();
        pSVar4 = auVar12._8_8_;
        uStack_c0 = auVar12._0_8_;
        pSVar10 = pSVar9;
        pSStack_b8 = pSVar8;
        pSStack_b0 = pSVar6;
        if (g_data_057ac6bb == '\0') {
          pSStack_c8 = (System_Object_array *)0x40dfc0f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_c8 = (System_Object_array *)0x40dfc1b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bb = '\x01';
        }
        if (pSVar4 == (System_Object_array *)0x0) {
label_040dfca5:
          pSStack_c8 = (System_Object_array *)0x40dfcaa;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar4->max_length != 0) {
          pSVar4 = ((Il2CppType *)pSVar4->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_c8 = (System_Object_array *)0x40dfc49;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_c8 = (System_Object_array *)0x40dfc5b;
          pSVar10 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4;
          pSVar6 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar4->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar9 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar9->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_c8 = (System_Object_array *)0x40dfc73;
            pUVar3 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar6,(MethodInfo *)0x0)
            ;
            pSVar10 = pSVar6;
            if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_c8 = (System_Object_array *)0x40dfc82;
              fVar11 = UnityEngine_AnimationState__get_length(pUVar3,(MethodInfo *)0x0);
              uStack_c0 = CONCAT44(fVar11,(undefined4)uStack_c0);
              pSStack_c8 = (System_Object_array *)0x40dfc9d;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_c0 + 4);
              return pIVar5;
            }
          }
          goto label_040dfca5;
        }
        pSStack_c8 = (System_Object_array *)0x40dfcaf;
        auVar12 = il2cpp_runtime_helper_022b2ca0();
        pSVar6 = auVar12._8_8_;
        uStack_d8 = auVar12._0_8_;
        pSVar8 = pSVar10;
        pSStack_d0 = pSVar4;
        pSStack_c8 = pSVar9;
        if (g_data_057ac6bc == '\0') {
          pSStack_e0 = (System_Object_array *)0x40dfccf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_e0 = (System_Object_array *)0x40dfcdb;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bc = '\x01';
        }
        if (pSVar6 == (System_Object_array *)0x0) {
label_040dfd65:
          pSStack_e0 = (System_Object_array *)0x40dfd6a;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)&pSVar6->max_length != 0) {
          pSVar6 = ((Il2CppType *)pSVar6->m_Items)->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_e0 = (System_Object_array *)0x40dfd09;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_e0 = (System_Object_array *)0x40dfd1b;
          pSVar8 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6;
          pSVar4 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (&pSVar6->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if ((pSVar10 != (System_Object_array *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar10->m_Items[3],
             (System_Object_array *)__this != (System_Object_array *)0x0)) {
            pSStack_e0 = (System_Object_array *)0x40dfd33;
            pUVar3 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar4,(MethodInfo *)0x0)
            ;
            pSVar8 = pSVar4;
            if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_e0 = (System_Object_array *)0x40dfd42;
              fVar11 = UnityEngine_AnimationState__get_normalizedTime(pUVar3,(MethodInfo *)0x0);
              uStack_d8 = CONCAT44(fVar11,(undefined4)uStack_d8);
              pSStack_e0 = (System_Object_array *)0x40dfd5d;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_d8 + 4);
              return pIVar5;
            }
          }
          goto label_040dfd65;
        }
        pSStack_e0 = (System_Object_array *)0x40dfd6f;
        il2cpp_runtime_helper_022b2ca0();
        pSVar4 = pSVar8;
        pSStack_f0 = pSVar6;
        pSStack_e8 = pSVar10;
        pSStack_e0 = pSVar1;
        if (g_data_057ac6bd == '\0') {
          pSStack_108 = (System_Object_array *)0x40dfd94;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_108 = (System_Object_array *)0x40dfda0;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_108 = (System_Object_array *)0x40dfdac;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bd = '\x01';
        }
        if (extraout_RDX_00 == 0) {
label_040dfe4f:
          pSStack_108 = (System_Object_array *)0x40dfe54;
          il2cpp_runtime_helper_022b2c90();
          pSVar6 = pSVar1;
        }
        else {
          pSVar6 = pSVar1;
          if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
            pSVar6 = *(System_Object_array **)(extraout_RDX_00 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pSStack_108 = (System_Object_array *)0x40dfde2;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_108 = (System_Object_array *)0x40dfdf4;
            pSVar4 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6;
            pSVar1 = (System_Object_array *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (&pSVar6->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
              pSStack_108 = (System_Object_array *)0x40dfe10;
              pSVar4 = MethodInfo_Single_ConvertTo_Single;
              fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
              if ((pSVar8 != (System_Object_array *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8->m_Items[3],
                 fStack_f4 = fVar11, (System_Object_array *)__this != (System_Object_array *)0x0)) {
                pSStack_108 = (System_Object_array *)0x40dfe2e;
                pSVar4 = pSVar1;
                pUVar3 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar1,
                                    (MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
                  pSStack_108 = (System_Object_array *)0x40dfe43;
                  UnityEngine_AnimationState__set_normalizedTime(pUVar3,fStack_f4,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfe4f;
            }
          }
        }
        pSStack_108 = (System_Object_array *)0x40dfe59;
        il2cpp_runtime_helper_022b2ca0();
        pSVar1 = pSVar4;
        lStack_118 = extraout_RDX_00;
        pSStack_110 = pSVar8;
        pSStack_108 = pSVar6;
        if (g_data_057ac6be == '\0') {
          pSStack_130 = (System_Object_array *)0x40dfe84;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pSStack_130 = (System_Object_array *)0x40dfe90;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pSStack_130 = (System_Object_array *)0x40dfe9c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6be = '\x01';
        }
        if (extraout_RDX_01 == 0) {
label_040dff3f:
          pSStack_130 = (System_Object_array *)0x40dff44;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pSStack_130 = (System_Object_array *)0x40dfed2;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_130 = (System_Object_array *)0x40dfee4;
          pSVar1 = MethodInfo_String_ConvertTo_String;
          pSVar6 = (System_Object_array *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
            __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
            pSStack_130 = (System_Object_array *)0x40dff00;
            pSVar1 = MethodInfo_Single_ConvertTo_Single;
            fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if ((pSVar4 != (System_Object_array *)0x0) &&
               (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4->m_Items[3],
               fStack_11c = fVar11, (System_Object_array *)__this != (System_Object_array *)0x0)) {
              pSStack_130 = (System_Object_array *)0x40dff1e;
              pUVar3 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar6,
                                  (MethodInfo *)0x0);
              pSVar1 = pSVar6;
              if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
                pSStack_130 = (System_Object_array *)0x40dff33;
                UnityEngine_AnimationState__set_weight(pUVar3,fStack_11c,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_040dff3f;
          }
        }
        pSStack_130 = (System_Object_array *)0x40dff49;
        auVar12 = il2cpp_runtime_helper_022b2ca0();
        lVar7 = auVar12._8_8_;
        uStack_140 = auVar12._0_8_;
        lStack_138 = extraout_RDX_01;
        pSStack_130 = pSVar4;
        if (g_data_057ac6bf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bf = '\x01';
        }
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) goto label_040e000a;
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar7 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (((pSVar1 != (System_Object_array *)0x0) &&
              (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1->m_Items[3],
              (System_Object_array *)__this != (System_Object_array *)0x0)) &&
             (pUVar3 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,pSVar2,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_AnimationState_o *)0x0)) {
            fVar11 = UnityEngine_AnimationState__get_weight(pUVar3,(MethodInfo *)0x0);
            uStack_140 = CONCAT44(fVar11,(undefined4)uStack_140);
            pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_140 + 4);
            return pIVar5;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_040e000a:
        il2cpp_runtime_helper_022b2ca0();
        CustomLogic_BuiltinComponentInstance___ctor
                  ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_70 = (System_Object_array *)0x40df9e0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_70 = (System_Object_array *)0x40df9f2;
      pSVar2 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    }
    if ((pSVar8 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      if (pSVar2 != (System_String_o *)0x0) {
        pSStack_70 = (System_Object_array *)0x40dfa0f;
        UnityEngine_Animation__Stop_4da18d0((UnityEngine_Animation_o *)__this,pSVar2,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_040dfa1d;
    }
  }
  pSStack_70 = (System_Object_array *)0x40dfa1d;
  il2cpp_runtime_helper_022b2c90();
label_040dfa1d:
  pSStack_70 = (System_Object_array *)0x40dfa24;
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationQueued>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40df8e0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_AnimationState_o *pUVar2;
  MethodInfo_24EED20 *pMVar3;
  Il2CppObject *pIVar4;
  MethodInfo_24EED20 *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long lVar5;
  CustomLogic_CustomLogicEvaluator_c *obj;
  CustomLogic_CustomLogicEvaluator_c *pCVar6;
  MethodInfo_24EEB40 *pMVar7;
  MethodInfo_24EEB40 *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  MethodInfo_24EED20 *unaff_R15;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_108;
  long lStack_100;
  MethodInfo_24EED20 *pMStack_f8;
  float fStack_e4;
  long lStack_e0;
  MethodInfo_24EED20 *pMStack_d8;
  MethodInfo_24EED20 *pMStack_d0;
  float fStack_bc;
  CustomLogic_CustomLogicEvaluator_c *pCStack_b8;
  MethodInfo_24EED20 *pMStack_b0;
  MethodInfo_24EED20 *pMStack_a8;
  undefined8 uStack_a0;
  CustomLogic_CustomLogicEvaluator_c *pCStack_98;
  MethodInfo_24EED20 *pMStack_90;
  undefined8 uStack_88;
  CustomLogic_CustomLogicEvaluator_c *pCStack_80;
  MethodInfo_24EED20 *pMStack_78;
  undefined8 uStack_70;
  long lStack_68;
  MethodInfo_24EED20 *pMStack_60;
  float fStack_4c;
  long lStack_48;
  MethodInfo_24EED20 *pMStack_40;
  
  pMVar7 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057ac6b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040df96d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = MethodInfo_String_ConvertTo_String;
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      __this_00 = (__c->fields).Value;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (UnityEngine_Animation_o *)0x0) {
        UnityEngine_Animation__PlayQueued(__this_00,pSVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040df96d;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar3 = (MethodInfo_24EED20 *)pMVar7;
  if (g_data_057ac6b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b8 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(long *)(extraout_RDX + 0x18) == 0) {
      pSVar1 = (System_String_o *)0x0;
    }
    else {
      if ((int)*(long *)(extraout_RDX + 0x18) == 0) {
        il2cpp_runtime_helper_022b2ca0();
        pMVar8 = (MethodInfo_24EEB40 *)pMVar3;
        lStack_48 = extraout_RDX;
        pMStack_40 = (MethodInfo_24EED20 *)pMVar7;
        if (g_data_057ac6b9 == '\0') {
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfa64;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfa70;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfa7c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6b9 = '\x01';
        }
        if (extraout_RDX_00 == 0) {
label_040dfb1f:
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfb24;
          il2cpp_runtime_helper_022b2c90();
          name = unaff_R15;
        }
        else {
          name = unaff_R15;
          if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
            name = *(MethodInfo_24EED20 **)(extraout_RDX_00 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pMStack_60 = (MethodInfo_24EED20 *)0x40dfab2;
              il2cpp_runtime_helper_02337ed0();
            }
            pMStack_60 = (MethodInfo_24EED20 *)0x40dfac4;
            pMVar8 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)name;
            unaff_R15 = (MethodInfo_24EED20 *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)name,MethodInfo_String_ConvertTo_String)
            ;
            if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
              pMStack_60 = (MethodInfo_24EED20 *)0x40dfae0;
              pMVar8 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
              fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single)
              ;
              if ((pMVar3 != (MethodInfo_24EED20 *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar3->rgctx_data,
                 fStack_4c = fVar10, (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
                pMStack_60 = (MethodInfo_24EED20 *)0x40dfafe;
                pMVar8 = (MethodInfo_24EEB40 *)unaff_R15;
                pUVar2 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                    (MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                  pMStack_60 = (MethodInfo_24EED20 *)0x40dfb13;
                  UnityEngine_AnimationState__set_speed(pUVar2,fStack_4c,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfb1f;
            }
          }
        }
        pMStack_60 = (MethodInfo_24EED20 *)0x40dfb29;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        pCVar6 = auVar11._8_8_;
        uStack_70 = auVar11._0_8_;
        pMVar7 = pMVar8;
        lStack_68 = extraout_RDX_00;
        pMStack_60 = pMVar3;
        if (g_data_057ac6ba == '\0') {
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfb4f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfb5b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6ba = '\x01';
        }
        if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfbe5:
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfbea;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
          pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_78 = (MethodInfo_24EED20 *)0x40dfb89;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfb9b;
          pMVar7 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
          if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar8)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_78 = (MethodInfo_24EED20 *)0x40dfbb3;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar7 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_78 = (MethodInfo_24EED20 *)0x40dfbc2;
              fVar10 = UnityEngine_AnimationState__get_speed(pUVar2,(MethodInfo *)0x0);
              uStack_70 = CONCAT44(fVar10,(undefined4)uStack_70);
              pMStack_78 = (MethodInfo_24EED20 *)0x40dfbdd;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
              return pIVar4;
            }
          }
          goto label_040dfbe5;
        }
        pMStack_78 = (MethodInfo_24EED20 *)0x40dfbef;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        obj = auVar11._8_8_;
        uStack_88 = auVar11._0_8_;
        pMVar9 = pMVar7;
        pCStack_80 = pCVar6;
        pMStack_78 = (MethodInfo_24EED20 *)pMVar8;
        if (g_data_057ac6bb == '\0') {
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfc0f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfc1b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bb = '\x01';
        }
        if (obj == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfca5:
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfcaa;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&obj->_1 + 0x18) != 0) {
          obj = ((Il2CppType *)((long)&obj->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_90 = (MethodInfo_24EED20 *)0x40dfc49;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfc5b;
          pMVar9 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)obj;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
          if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar7)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_90 = (MethodInfo_24EED20 *)0x40dfc73;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar9 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_90 = (MethodInfo_24EED20 *)0x40dfc82;
              fVar10 = UnityEngine_AnimationState__get_length(pUVar2,(MethodInfo *)0x0);
              uStack_88 = CONCAT44(fVar10,(undefined4)uStack_88);
              pMStack_90 = (MethodInfo_24EED20 *)0x40dfc9d;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_88 + 4);
              return pIVar4;
            }
          }
          goto label_040dfca5;
        }
        pMStack_90 = (MethodInfo_24EED20 *)0x40dfcaf;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        pCVar6 = auVar11._8_8_;
        uStack_a0 = auVar11._0_8_;
        pMVar8 = pMVar9;
        pCStack_98 = obj;
        pMStack_90 = (MethodInfo_24EED20 *)pMVar7;
        if (g_data_057ac6bc == '\0') {
          pMStack_a8 = (MethodInfo_24EED20 *)0x40dfccf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_a8 = (MethodInfo_24EED20 *)0x40dfcdb;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bc = '\x01';
        }
        if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfd65:
          pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd6a;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
          pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd09;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd1b;
          pMVar8 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
          if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd33;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar8 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd42;
              fVar10 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
              uStack_a0 = CONCAT44(fVar10,(undefined4)uStack_a0);
              pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd5d;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a0 + 4);
              return pIVar4;
            }
          }
          goto label_040dfd65;
        }
        pMStack_a8 = (MethodInfo_24EED20 *)0x40dfd6f;
        il2cpp_runtime_helper_022b2ca0();
        pMVar7 = pMVar8;
        pCStack_b8 = pCVar6;
        pMStack_b0 = (MethodInfo_24EED20 *)pMVar9;
        pMStack_a8 = name;
        if (g_data_057ac6bd == '\0') {
          pMStack_d0 = (MethodInfo_24EED20 *)0x40dfd94;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_d0 = (MethodInfo_24EED20 *)0x40dfda0;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_d0 = (MethodInfo_24EED20 *)0x40dfdac;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bd = '\x01';
        }
        if (extraout_RDX_01 == 0) {
label_040dfe4f:
          pMStack_d0 = (MethodInfo_24EED20 *)0x40dfe54;
          il2cpp_runtime_helper_022b2c90();
          pMVar3 = name;
        }
        else {
          pMVar3 = name;
          if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
            pMVar3 = *(MethodInfo_24EED20 **)(extraout_RDX_01 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pMStack_d0 = (MethodInfo_24EED20 *)0x40dfde2;
              il2cpp_runtime_helper_02337ed0();
            }
            pMStack_d0 = (MethodInfo_24EED20 *)0x40dfdf4;
            pMVar7 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar3;
            name = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar3,MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
              pMStack_d0 = (MethodInfo_24EED20 *)0x40dfe10;
              pMVar7 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
              fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single)
              ;
              if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                           ((MethodInfo_24EED20 *)pMVar8)->rgctx_data, fStack_bc = fVar10,
                 (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
                pMStack_d0 = (MethodInfo_24EED20 *)0x40dfe2e;
                pMVar7 = (MethodInfo_24EEB40 *)name;
                pUVar2 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)name,
                                    (MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                  pMStack_d0 = (MethodInfo_24EED20 *)0x40dfe43;
                  UnityEngine_AnimationState__set_normalizedTime(pUVar2,fStack_bc,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfe4f;
            }
          }
        }
        pMStack_d0 = (MethodInfo_24EED20 *)0x40dfe59;
        il2cpp_runtime_helper_022b2ca0();
        pMVar9 = pMVar7;
        lStack_e0 = extraout_RDX_01;
        pMStack_d8 = (MethodInfo_24EED20 *)pMVar8;
        pMStack_d0 = pMVar3;
        if (g_data_057ac6be == '\0') {
          pMStack_f8 = (MethodInfo_24EED20 *)0x40dfe84;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_f8 = (MethodInfo_24EED20 *)0x40dfe90;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_f8 = (MethodInfo_24EED20 *)0x40dfe9c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6be = '\x01';
        }
        if (extraout_RDX_02 == 0) {
label_040dff3f:
          pMStack_f8 = (MethodInfo_24EED20 *)0x40dff44;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_f8 = (MethodInfo_24EED20 *)0x40dfed2;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_f8 = (MethodInfo_24EED20 *)0x40dfee4;
          pMVar9 = MethodInfo_String_ConvertTo_String;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
          if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
            __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
            pMStack_f8 = (MethodInfo_24EED20 *)0x40dff00;
            pMVar9 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
            fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
            if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
               (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                         ((MethodInfo_24EED20 *)pMVar7)->rgctx_data, fStack_e4 = fVar10,
               (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
              pMStack_f8 = (MethodInfo_24EED20 *)0x40dff1e;
              pUVar2 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,
                                  (MethodInfo *)0x0);
              pMVar9 = (MethodInfo_24EEB40 *)pMVar3;
              if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                pMStack_f8 = (MethodInfo_24EED20 *)0x40dff33;
                UnityEngine_AnimationState__set_weight(pUVar2,fStack_e4,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_040dff3f;
          }
        }
        pMStack_f8 = (MethodInfo_24EED20 *)0x40dff49;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        lVar5 = auVar11._8_8_;
        uStack_108 = auVar11._0_8_;
        lStack_100 = extraout_RDX_02;
        pMStack_f8 = (MethodInfo_24EED20 *)pMVar7;
        if (g_data_057ac6bf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bf = '\x01';
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) goto label_040e000a;
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar5 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar1 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
          if (((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
              (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                        ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
              (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) &&
             (pUVar2 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,pSVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_AnimationState_o *)0x0)) {
            fVar10 = UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
            uStack_108 = CONCAT44(fVar10,(undefined4)uStack_108);
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_108 + 4);
            return pIVar4;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_040e000a:
        il2cpp_runtime_helper_022b2ca0();
        CustomLogic_BuiltinComponentInstance___ctor
                  ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    }
    if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar7)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      if (pSVar1 != (System_String_o *)0x0) {
        UnityEngine_Animation__Stop_4da18d0((UnityEngine_Animation_o *)__this,pSVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_040dfa1d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040dfa1d:
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopAnimation>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40df980

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_AnimationState_o *pUVar2;
  MethodInfo_24EED20 *pMVar3;
  Il2CppObject *pIVar4;
  MethodInfo_24EED20 *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long lVar5;
  CustomLogic_CustomLogicEvaluator_c *obj;
  CustomLogic_CustomLogicEvaluator_c *pCVar6;
  MethodInfo_24EEB40 *pMVar7;
  MethodInfo_24EEB40 *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  MethodInfo_24EED20 *unaff_R15;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_f0;
  long lStack_e8;
  MethodInfo_24EED20 *pMStack_e0;
  float fStack_cc;
  long lStack_c8;
  MethodInfo_24EED20 *pMStack_c0;
  MethodInfo_24EED20 *pMStack_b8;
  float fStack_a4;
  CustomLogic_CustomLogicEvaluator_c *pCStack_a0;
  MethodInfo_24EED20 *pMStack_98;
  MethodInfo_24EED20 *pMStack_90;
  undefined8 uStack_88;
  CustomLogic_CustomLogicEvaluator_c *pCStack_80;
  MethodInfo_24EED20 *pMStack_78;
  undefined8 uStack_70;
  CustomLogic_CustomLogicEvaluator_c *pCStack_68;
  MethodInfo_24EED20 *pMStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_24EED20 *pMStack_48;
  float fStack_34;
  System_Object_array *pSStack_30;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_28;
  
  pMVar3 = (MethodInfo_24EED20 *)__c;
  if (g_data_057ac6b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      pSVar1 = (System_String_o *)0x0;
    }
    else {
      if ((int)__a->max_length == 0) {
        il2cpp_runtime_helper_022b2ca0();
        pMVar7 = (MethodInfo_24EEB40 *)pMVar3;
        pSStack_30 = __a;
        pCStack_28 = __c;
        if (g_data_057ac6b9 == '\0') {
          pMStack_48 = (MethodInfo_24EED20 *)0x40dfa64;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_48 = (MethodInfo_24EED20 *)0x40dfa70;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_48 = (MethodInfo_24EED20 *)0x40dfa7c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6b9 = '\x01';
        }
        if (extraout_RDX == 0) {
label_040dfb1f:
          pMStack_48 = (MethodInfo_24EED20 *)0x40dfb24;
          il2cpp_runtime_helper_022b2c90();
          name = unaff_R15;
        }
        else {
          name = unaff_R15;
          if (*(int *)(extraout_RDX + 0x18) != 0) {
            name = *(MethodInfo_24EED20 **)(extraout_RDX + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pMStack_48 = (MethodInfo_24EED20 *)0x40dfab2;
              il2cpp_runtime_helper_02337ed0();
            }
            pMStack_48 = (MethodInfo_24EED20 *)0x40dfac4;
            pMVar7 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)name;
            unaff_R15 = (MethodInfo_24EED20 *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)name,MethodInfo_String_ConvertTo_String)
            ;
            if (1 < *(uint *)(extraout_RDX + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
              pMStack_48 = (MethodInfo_24EED20 *)0x40dfae0;
              pMVar7 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
              fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single)
              ;
              if ((pMVar3 != (MethodInfo_24EED20 *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar3->rgctx_data,
                 fStack_34 = fVar10, (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
                pMStack_48 = (MethodInfo_24EED20 *)0x40dfafe;
                pMVar7 = (MethodInfo_24EEB40 *)unaff_R15;
                pUVar2 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                    (MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                  pMStack_48 = (MethodInfo_24EED20 *)0x40dfb13;
                  UnityEngine_AnimationState__set_speed(pUVar2,fStack_34,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfb1f;
            }
          }
        }
        pMStack_48 = (MethodInfo_24EED20 *)0x40dfb29;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        pCVar6 = auVar11._8_8_;
        uStack_58 = auVar11._0_8_;
        pMVar8 = pMVar7;
        lStack_50 = extraout_RDX;
        pMStack_48 = pMVar3;
        if (g_data_057ac6ba == '\0') {
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfb4f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfb5b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6ba = '\x01';
        }
        if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfbe5:
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfbea;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
          pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_60 = (MethodInfo_24EED20 *)0x40dfb89;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_60 = (MethodInfo_24EED20 *)0x40dfb9b;
          pMVar8 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
          if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar7)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_60 = (MethodInfo_24EED20 *)0x40dfbb3;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar8 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_60 = (MethodInfo_24EED20 *)0x40dfbc2;
              fVar10 = UnityEngine_AnimationState__get_speed(pUVar2,(MethodInfo *)0x0);
              uStack_58 = CONCAT44(fVar10,(undefined4)uStack_58);
              pMStack_60 = (MethodInfo_24EED20 *)0x40dfbdd;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_58 + 4);
              return pIVar4;
            }
          }
          goto label_040dfbe5;
        }
        pMStack_60 = (MethodInfo_24EED20 *)0x40dfbef;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        obj = auVar11._8_8_;
        uStack_70 = auVar11._0_8_;
        pMVar9 = pMVar8;
        pCStack_68 = pCVar6;
        pMStack_60 = (MethodInfo_24EED20 *)pMVar7;
        if (g_data_057ac6bb == '\0') {
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfc0f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfc1b;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bb = '\x01';
        }
        if (obj == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfca5:
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfcaa;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&obj->_1 + 0x18) != 0) {
          obj = ((Il2CppType *)((long)&obj->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_78 = (MethodInfo_24EED20 *)0x40dfc49;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_78 = (MethodInfo_24EED20 *)0x40dfc5b;
          pMVar9 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)obj;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
          if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar8)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_78 = (MethodInfo_24EED20 *)0x40dfc73;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar9 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_78 = (MethodInfo_24EED20 *)0x40dfc82;
              fVar10 = UnityEngine_AnimationState__get_length(pUVar2,(MethodInfo *)0x0);
              uStack_70 = CONCAT44(fVar10,(undefined4)uStack_70);
              pMStack_78 = (MethodInfo_24EED20 *)0x40dfc9d;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
              return pIVar4;
            }
          }
          goto label_040dfca5;
        }
        pMStack_78 = (MethodInfo_24EED20 *)0x40dfcaf;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        pCVar6 = auVar11._8_8_;
        uStack_88 = auVar11._0_8_;
        pMVar7 = pMVar9;
        pCStack_80 = obj;
        pMStack_78 = (MethodInfo_24EED20 *)pMVar8;
        if (g_data_057ac6bc == '\0') {
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfccf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfcdb;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bc = '\x01';
        }
        if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfd65:
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfd6a;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
          pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_90 = (MethodInfo_24EED20 *)0x40dfd09;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_90 = (MethodInfo_24EED20 *)0x40dfd1b;
          pMVar7 = MethodInfo_String_ConvertTo_String;
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
          if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
             (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                       ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
             (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
            pMStack_90 = (MethodInfo_24EED20 *)0x40dfd33;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,(MethodInfo *)0x0)
            ;
            pMVar7 = (MethodInfo_24EEB40 *)pMVar3;
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_90 = (MethodInfo_24EED20 *)0x40dfd42;
              fVar10 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
              uStack_88 = CONCAT44(fVar10,(undefined4)uStack_88);
              pMStack_90 = (MethodInfo_24EED20 *)0x40dfd5d;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_88 + 4);
              return pIVar4;
            }
          }
          goto label_040dfd65;
        }
        pMStack_90 = (MethodInfo_24EED20 *)0x40dfd6f;
        il2cpp_runtime_helper_022b2ca0();
        pMVar8 = pMVar7;
        pCStack_a0 = pCVar6;
        pMStack_98 = (MethodInfo_24EED20 *)pMVar9;
        pMStack_90 = name;
        if (g_data_057ac6bd == '\0') {
          pMStack_b8 = (MethodInfo_24EED20 *)0x40dfd94;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_b8 = (MethodInfo_24EED20 *)0x40dfda0;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_b8 = (MethodInfo_24EED20 *)0x40dfdac;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bd = '\x01';
        }
        if (extraout_RDX_00 == 0) {
label_040dfe4f:
          pMStack_b8 = (MethodInfo_24EED20 *)0x40dfe54;
          il2cpp_runtime_helper_022b2c90();
          pMVar3 = name;
        }
        else {
          pMVar3 = name;
          if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
            pMVar3 = *(MethodInfo_24EED20 **)(extraout_RDX_00 + 0x20);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              pMStack_b8 = (MethodInfo_24EED20 *)0x40dfde2;
              il2cpp_runtime_helper_02337ed0();
            }
            pMStack_b8 = (MethodInfo_24EED20 *)0x40dfdf4;
            pMVar8 = MethodInfo_String_ConvertTo_String;
            __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar3;
            name = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar3,MethodInfo_String_ConvertTo_String);
            if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
              __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
              pMStack_b8 = (MethodInfo_24EED20 *)0x40dfe10;
              pMVar8 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
              fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single)
              ;
              if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
                 (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                           ((MethodInfo_24EED20 *)pMVar7)->rgctx_data, fStack_a4 = fVar10,
                 (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
                pMStack_b8 = (MethodInfo_24EED20 *)0x40dfe2e;
                pMVar8 = (MethodInfo_24EEB40 *)name;
                pUVar2 = UnityEngine_Animation__get_Item
                                   ((UnityEngine_Animation_o *)__this,(System_String_o *)name,
                                    (MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                  pMStack_b8 = (MethodInfo_24EED20 *)0x40dfe43;
                  UnityEngine_AnimationState__set_normalizedTime(pUVar2,fStack_a4,(MethodInfo *)0x0);
                  return (Il2CppObject *)0x0;
                }
              }
              goto label_040dfe4f;
            }
          }
        }
        pMStack_b8 = (MethodInfo_24EED20 *)0x40dfe59;
        il2cpp_runtime_helper_022b2ca0();
        pMVar9 = pMVar8;
        lStack_c8 = extraout_RDX_00;
        pMStack_c0 = (MethodInfo_24EED20 *)pMVar7;
        pMStack_b8 = pMVar3;
        if (g_data_057ac6be == '\0') {
          pMStack_e0 = (MethodInfo_24EED20 *)0x40dfe84;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
          pMStack_e0 = (MethodInfo_24EED20 *)0x40dfe90;
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          pMStack_e0 = (MethodInfo_24EED20 *)0x40dfe9c;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6be = '\x01';
        }
        if (extraout_RDX_01 == 0) {
label_040dff3f:
          pMStack_e0 = (MethodInfo_24EED20 *)0x40dff44;
          il2cpp_runtime_helper_022b2c90();
        }
        else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            pMStack_e0 = (MethodInfo_24EED20 *)0x40dfed2;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_e0 = (MethodInfo_24EED20 *)0x40dfee4;
          pMVar9 = MethodInfo_String_ConvertTo_String;
          pMVar3 = (MethodInfo_24EED20 *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
          if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
            __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
            pMStack_e0 = (MethodInfo_24EED20 *)0x40dff00;
            pMVar9 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
            fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
            if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
               (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                         ((MethodInfo_24EED20 *)pMVar8)->rgctx_data, fStack_cc = fVar10,
               (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
              pMStack_e0 = (MethodInfo_24EED20 *)0x40dff1e;
              pUVar2 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar3,
                                  (MethodInfo *)0x0);
              pMVar9 = (MethodInfo_24EEB40 *)pMVar3;
              if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
                pMStack_e0 = (MethodInfo_24EED20 *)0x40dff33;
                UnityEngine_AnimationState__set_weight(pUVar2,fStack_cc,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_040dff3f;
          }
        }
        pMStack_e0 = (MethodInfo_24EED20 *)0x40dff49;
        auVar11 = il2cpp_runtime_helper_022b2ca0();
        lVar5 = auVar11._8_8_;
        uStack_f0 = auVar11._0_8_;
        lStack_e8 = extraout_RDX_01;
        pMStack_e0 = (MethodInfo_24EED20 *)pMVar8;
        if (g_data_057ac6bf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
          il2cpp_runtime_helper_023445d0();
          g_data_057ac6bf = '\x01';
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) goto label_040e000a;
          __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar5 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar1 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
          if (((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
              (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                        ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
              (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) &&
             (pUVar2 = UnityEngine_Animation__get_Item
                                 ((UnityEngine_Animation_o *)__this,pSVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_AnimationState_o *)0x0)) {
            fVar10 = UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
            uStack_f0 = CONCAT44(fVar10,(undefined4)uStack_f0);
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_f0 + 4);
            return pIVar4;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_040e000a:
        il2cpp_runtime_helper_022b2ca0();
        CustomLogic_BuiltinComponentInstance___ctor
                  ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      if (pSVar1 != (System_String_o *)0x0) {
        UnityEngine_Animation__Stop_4da18d0((UnityEngine_Animation_o *)__this,pSVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_040dfa1d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040dfa1d:
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfa40

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  MethodInfo_24EED20 *pMVar2;
  Il2CppObject *pIVar3;
  MethodInfo_24EED20 *pMVar4;
  System_String_o *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar5;
  CustomLogic_CustomLogicEvaluator_c *obj;
  CustomLogic_CustomLogicEvaluator_c *pCVar6;
  MethodInfo_24EEB40 *pMVar7;
  MethodInfo_24EEB40 *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  MethodInfo_24EED20 *unaff_R15;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_d8;
  long lStack_d0;
  MethodInfo_24EED20 *pMStack_c8;
  float fStack_b4;
  long lStack_b0;
  MethodInfo_24EED20 *pMStack_a8;
  MethodInfo_24EED20 *pMStack_a0;
  float fStack_8c;
  CustomLogic_CustomLogicEvaluator_c *pCStack_88;
  MethodInfo_24EED20 *pMStack_80;
  MethodInfo_24EED20 *pMStack_78;
  undefined8 uStack_70;
  CustomLogic_CustomLogicEvaluator_c *pCStack_68;
  MethodInfo_24EED20 *pMStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicEvaluator_c *pCStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_30;
  float fStack_1c;
  
  pMVar7 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057ac6b9 == '\0') {
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfa64;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfa70;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfa7c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6b9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dfb1f:
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb24;
    il2cpp_runtime_helper_022b2c90();
    pMVar4 = unaff_R15;
  }
  else {
    pMVar4 = unaff_R15;
    if ((int)__a->max_length != 0) {
      pMVar4 = (MethodInfo_24EED20 *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfab2;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfac4;
      pMVar7 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar4;
      unaff_R15 = (MethodInfo_24EED20 *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar4,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[1];
        pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfae0;
        pMVar7 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
        fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
        if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value;
          fStack_1c = fVar10;
          if ((MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0) {
            pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfafe;
            pMVar7 = (MethodInfo_24EEB40 *)unaff_R15;
            pUVar1 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                (MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
              pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb13;
              UnityEngine_AnimationState__set_speed(pUVar1,fStack_1c,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfb1f;
      }
    }
  }
  pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb29;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pCVar6 = auVar11._8_8_;
  uStack_40 = auVar11._0_8_;
  pMVar8 = pMVar7;
  pSStack_38 = __a;
  pCStack_30 = __c;
  if (g_data_057ac6ba == '\0') {
    pMStack_48 = (MethodInfo_24EED20 *)0x40dfb4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_48 = (MethodInfo_24EED20 *)0x40dfb5b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6ba = '\x01';
  }
  if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfbe5:
    pMStack_48 = (MethodInfo_24EED20 *)0x40dfbea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
    pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_48 = (MethodInfo_24EED20 *)0x40dfb89;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_48 = (MethodInfo_24EED20 *)0x40dfb9b;
    pMVar8 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
    pMVar2 = (MethodInfo_24EED20 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
    if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar7)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      pMStack_48 = (MethodInfo_24EED20 *)0x40dfbb3;
      pUVar1 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar2,(MethodInfo *)0x0);
      pMVar8 = (MethodInfo_24EEB40 *)pMVar2;
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        pMStack_48 = (MethodInfo_24EED20 *)0x40dfbc2;
        fVar10 = UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
        uStack_40 = CONCAT44(fVar10,(undefined4)uStack_40);
        pMStack_48 = (MethodInfo_24EED20 *)0x40dfbdd;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
        return pIVar3;
      }
    }
    goto label_040dfbe5;
  }
  pMStack_48 = (MethodInfo_24EED20 *)0x40dfbef;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  obj = auVar11._8_8_;
  uStack_58 = auVar11._0_8_;
  pMVar9 = pMVar8;
  pCStack_50 = pCVar6;
  pMStack_48 = (MethodInfo_24EED20 *)pMVar7;
  if (g_data_057ac6bb == '\0') {
    pMStack_60 = (MethodInfo_24EED20 *)0x40dfc0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_60 = (MethodInfo_24EED20 *)0x40dfc1b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bb = '\x01';
  }
  if (obj == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfca5:
    pMStack_60 = (MethodInfo_24EED20 *)0x40dfcaa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)((long)&obj->_1 + 0x18) != 0) {
    obj = ((Il2CppType *)((long)&obj->_1 + 0x20))->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_60 = (MethodInfo_24EED20 *)0x40dfc49;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_60 = (MethodInfo_24EED20 *)0x40dfc5b;
    pMVar9 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)obj;
    pMVar2 = (MethodInfo_24EED20 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
    if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar8)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      pMStack_60 = (MethodInfo_24EED20 *)0x40dfc73;
      pUVar1 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar2,(MethodInfo *)0x0);
      pMVar9 = (MethodInfo_24EEB40 *)pMVar2;
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        pMStack_60 = (MethodInfo_24EED20 *)0x40dfc82;
        fVar10 = UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
        uStack_58 = CONCAT44(fVar10,(undefined4)uStack_58);
        pMStack_60 = (MethodInfo_24EED20 *)0x40dfc9d;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_58 + 4);
        return pIVar3;
      }
    }
    goto label_040dfca5;
  }
  pMStack_60 = (MethodInfo_24EED20 *)0x40dfcaf;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  pCVar6 = auVar11._8_8_;
  uStack_70 = auVar11._0_8_;
  pMVar7 = pMVar9;
  pCStack_68 = obj;
  pMStack_60 = (MethodInfo_24EED20 *)pMVar8;
  if (g_data_057ac6bc == '\0') {
    pMStack_78 = (MethodInfo_24EED20 *)0x40dfccf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_78 = (MethodInfo_24EED20 *)0x40dfcdb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bc = '\x01';
  }
  if (pCVar6 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_040dfd65:
    pMStack_78 = (MethodInfo_24EED20 *)0x40dfd6a;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)((long)&pCVar6->_1 + 0x18) != 0) {
    pCVar6 = ((Il2CppType *)((long)&pCVar6->_1 + 0x20))->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_78 = (MethodInfo_24EED20 *)0x40dfd09;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_78 = (MethodInfo_24EED20 *)0x40dfd1b;
    pMVar7 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pCVar6;
    pMVar2 = (MethodInfo_24EED20 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pCVar6,MethodInfo_String_ConvertTo_String);
    if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      pMStack_78 = (MethodInfo_24EED20 *)0x40dfd33;
      pUVar1 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar2,(MethodInfo *)0x0);
      pMVar7 = (MethodInfo_24EEB40 *)pMVar2;
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        pMStack_78 = (MethodInfo_24EED20 *)0x40dfd42;
        fVar10 = UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
        uStack_70 = CONCAT44(fVar10,(undefined4)uStack_70);
        pMStack_78 = (MethodInfo_24EED20 *)0x40dfd5d;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
        return pIVar3;
      }
    }
    goto label_040dfd65;
  }
  pMStack_78 = (MethodInfo_24EED20 *)0x40dfd6f;
  il2cpp_runtime_helper_022b2ca0();
  pMVar8 = pMVar7;
  pCStack_88 = pCVar6;
  pMStack_80 = (MethodInfo_24EED20 *)pMVar9;
  pMStack_78 = pMVar4;
  if (g_data_057ac6bd == '\0') {
    pMStack_a0 = (MethodInfo_24EED20 *)0x40dfd94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_a0 = (MethodInfo_24EED20 *)0x40dfda0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_a0 = (MethodInfo_24EED20 *)0x40dfdac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bd = '\x01';
  }
  if (extraout_RDX == 0) {
label_040dfe4f:
    pMStack_a0 = (MethodInfo_24EED20 *)0x40dfe54;
    il2cpp_runtime_helper_022b2c90();
    pMVar2 = pMVar4;
  }
  else {
    pMVar2 = pMVar4;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pMVar2 = *(MethodInfo_24EED20 **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_a0 = (MethodInfo_24EED20 *)0x40dfde2;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_a0 = (MethodInfo_24EED20 *)0x40dfdf4;
      pMVar8 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar2;
      pMVar4 = (MethodInfo_24EED20 *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar2,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pMStack_a0 = (MethodInfo_24EED20 *)0x40dfe10;
        pMVar8 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
        fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
        if (pMVar7 != (MethodInfo_24EEB40 *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                   ((MethodInfo_24EED20 *)pMVar7)->rgctx_data;
          fStack_8c = fVar10;
          if ((MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0) {
            pMStack_a0 = (MethodInfo_24EED20 *)0x40dfe2e;
            pMVar8 = (MethodInfo_24EEB40 *)pMVar4;
            pUVar1 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar4,(MethodInfo *)0x0)
            ;
            if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_a0 = (MethodInfo_24EED20 *)0x40dfe43;
              UnityEngine_AnimationState__set_normalizedTime(pUVar1,fStack_8c,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfe4f;
      }
    }
  }
  pMStack_a0 = (MethodInfo_24EED20 *)0x40dfe59;
  il2cpp_runtime_helper_022b2ca0();
  pMVar9 = pMVar8;
  lStack_b0 = extraout_RDX;
  pMStack_a8 = (MethodInfo_24EED20 *)pMVar7;
  pMStack_a0 = pMVar2;
  if (g_data_057ac6be == '\0') {
    pMStack_c8 = (MethodInfo_24EED20 *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_c8 = (MethodInfo_24EED20 *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c8 = (MethodInfo_24EED20 *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040dff3f:
    pMStack_c8 = (MethodInfo_24EED20 *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_c8 = (MethodInfo_24EED20 *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_c8 = (MethodInfo_24EED20 *)0x40dfee4;
    pMVar9 = MethodInfo_String_ConvertTo_String;
    pMVar4 = (MethodInfo_24EED20 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
      pMStack_c8 = (MethodInfo_24EED20 *)0x40dff00;
      pMVar9 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
      fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
      if (pMVar8 != (MethodInfo_24EEB40 *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar8)->rgctx_data;
        fStack_b4 = fVar10;
        if ((MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0) {
          pMStack_c8 = (MethodInfo_24EED20 *)0x40dff1e;
          pUVar1 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar4,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo_24EEB40 *)pMVar4;
          if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
            pMStack_c8 = (MethodInfo_24EED20 *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar1,fStack_b4,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pMStack_c8 = (MethodInfo_24EED20 *)0x40dff49;
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar5 = auVar11._8_8_;
  uStack_d8 = auVar11._0_8_;
  lStack_d0 = extraout_RDX_00;
  pMStack_c8 = (MethodInfo_24EED20 *)pMVar8;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar5 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar9)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      pUVar1 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        fVar10 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        uStack_d8 = CONCAT44(fVar10,(undefined4)uStack_d8);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_d8 + 4);
        return pIVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfb30

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 in_EAX;
  System_Object_array *pSVar1;
  UnityEngine_AnimationState_o *pUVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  System_Object_array *pSVar5;
  System_String_o *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar6;
  System_Object_array *pSVar7;
  System_Object_array *pSVar8;
  System_Object_array *unaff_R15;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  System_Object_array *pSStack_a0;
  float fStack_8c;
  long lStack_88;
  System_Object_array *pSStack_80;
  System_Object_array *pSStack_78;
  float fStack_64;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  undefined8 uStack_48;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_20;
  undefined4 uStack_18;
  float fStack_14;
  
  pSVar5 = (System_Object_array *)__c;
  uStack_18 = in_EAX;
  if (g_data_057ac6ba == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb5b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6ba = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dfbe5:
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfbea;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb89;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfb9b;
    pSVar5 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
    pSVar1 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value,
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfbb3;
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar1,(MethodInfo *)0x0);
      pSVar5 = pSVar1;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfbc2;
        fVar9 = UnityEngine_AnimationState__get_speed(pUVar2,(MethodInfo *)0x0);
        _uStack_18 = CONCAT44(fVar9,uStack_18);
        pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfbdd;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_14);
        return pIVar3;
      }
    }
    goto label_040dfbe5;
  }
  pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfbef;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  pSVar1 = auVar10._8_8_;
  uStack_30 = auVar10._0_8_;
  pSVar7 = pSVar5;
  pSStack_28 = __a;
  pCStack_20 = __c;
  if (g_data_057ac6bb == '\0') {
    pSStack_38 = (System_Object_array *)0x40dfc0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_38 = (System_Object_array *)0x40dfc1b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bb = '\x01';
  }
  if (pSVar1 == (System_Object_array *)0x0) {
label_040dfca5:
    pSStack_38 = (System_Object_array *)0x40dfcaa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar1->max_length != 0) {
    pSVar1 = ((Il2CppType *)pSVar1->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_38 = (System_Object_array *)0x40dfc49;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_38 = (System_Object_array *)0x40dfc5b;
    pSVar7 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1;
    pSVar4 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar1->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar5 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pSStack_38 = (System_Object_array *)0x40dfc73;
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar4,(MethodInfo *)0x0);
      pSVar7 = pSVar4;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        pSStack_38 = (System_Object_array *)0x40dfc82;
        fVar9 = UnityEngine_AnimationState__get_length(pUVar2,(MethodInfo *)0x0);
        uStack_30 = CONCAT44(fVar9,(undefined4)uStack_30);
        pSStack_38 = (System_Object_array *)0x40dfc9d;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_30 + 4);
        return pIVar3;
      }
    }
    goto label_040dfca5;
  }
  pSStack_38 = (System_Object_array *)0x40dfcaf;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  pSVar4 = auVar10._8_8_;
  uStack_48 = auVar10._0_8_;
  pSVar8 = pSVar7;
  pSStack_40 = pSVar1;
  pSStack_38 = pSVar5;
  if (g_data_057ac6bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bc = '\x01';
  }
  if (pSVar4 == (System_Object_array *)0x0) {
label_040dfd65:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar4->max_length != 0) {
    pSVar4 = ((Il2CppType *)pSVar4->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4;
    pSVar5 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar4->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar7 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar5,(MethodInfo *)0x0);
      pSVar8 = pSVar5;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        fVar9 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
        uStack_48 = CONCAT44(fVar9,(undefined4)uStack_48);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
        return pIVar3;
      }
    }
    goto label_040dfd65;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar5 = pSVar8;
  pSStack_60 = pSVar4;
  pSStack_58 = pSVar7;
  if (g_data_057ac6bd == '\0') {
    pSStack_78 = (System_Object_array *)0x40dfd94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_78 = (System_Object_array *)0x40dfda0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_78 = (System_Object_array *)0x40dfdac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bd = '\x01';
  }
  if (extraout_RDX == 0) {
label_040dfe4f:
    pSStack_78 = (System_Object_array *)0x40dfe54;
    il2cpp_runtime_helper_022b2c90();
    pSVar1 = unaff_R15;
  }
  else {
    pSVar1 = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pSVar1 = *(System_Object_array **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_78 = (System_Object_array *)0x40dfde2;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_78 = (System_Object_array *)0x40dfdf4;
      pSVar5 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1;
      unaff_R15 = (System_Object_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (&pSVar1->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pSStack_78 = (System_Object_array *)0x40dfe10;
        pSVar5 = MethodInfo_Single_ConvertTo_Single;
        fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pSVar8 != (System_Object_array *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar8->m_Items[3];
          fStack_64 = fVar9;
          if ((System_Object_array *)__this != (System_Object_array *)0x0) {
            pSStack_78 = (System_Object_array *)0x40dfe2e;
            pSVar5 = unaff_R15;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                (MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_78 = (System_Object_array *)0x40dfe43;
              UnityEngine_AnimationState__set_normalizedTime(pUVar2,fStack_64,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfe4f;
      }
    }
  }
  pSStack_78 = (System_Object_array *)0x40dfe59;
  il2cpp_runtime_helper_022b2ca0();
  pSVar7 = pSVar5;
  lStack_88 = extraout_RDX;
  pSStack_80 = pSVar8;
  pSStack_78 = pSVar1;
  if (g_data_057ac6be == '\0') {
    pSStack_a0 = (System_Object_array *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_a0 = (System_Object_array *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_a0 = (System_Object_array *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040dff3f:
    pSStack_a0 = (System_Object_array *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_a0 = (System_Object_array *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_a0 = (System_Object_array *)0x40dfee4;
    pSVar7 = MethodInfo_String_ConvertTo_String;
    pSVar1 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
      pSStack_a0 = (System_Object_array *)0x40dff00;
      pSVar7 = MethodInfo_Single_ConvertTo_Single;
      fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      if (pSVar5 != (System_Object_array *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5->m_Items[3];
        fStack_8c = fVar9;
        if ((System_Object_array *)__this != (System_Object_array *)0x0) {
          pSStack_a0 = (System_Object_array *)0x40dff1e;
          pUVar2 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar1,(MethodInfo *)0x0);
          pSVar7 = pSVar1;
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            pSStack_a0 = (System_Object_array *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar2,fStack_8c,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pSStack_a0 = (System_Object_array *)0x40dff49;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar10._8_8_;
  uStack_b0 = auVar10._0_8_;
  lStack_a8 = extraout_RDX_00;
  pSStack_a0 = pSVar5;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar6 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar7 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        fVar9 = UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
        uStack_b0 = CONCAT44(fVar9,(undefined4)uStack_b0);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_b0 + 4);
        return pIVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfbf0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 in_EAX;
  System_Object_array *pSVar1;
  UnityEngine_AnimationState_o *pUVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  System_Object_array *pSVar5;
  System_String_o *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar6;
  System_Object_array *pSVar7;
  System_Object_array *unaff_R15;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_98;
  long lStack_90;
  System_Object_array *pSStack_88;
  float fStack_74;
  long lStack_70;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  float fStack_4c;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_20;
  undefined4 uStack_18;
  float fStack_14;
  
  pSVar5 = (System_Object_array *)__c;
  uStack_18 = in_EAX;
  if (g_data_057ac6bb == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc1b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dfca5:
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfcaa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc49;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc5b;
    pSVar5 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
    pSVar1 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value,
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc73;
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar1,(MethodInfo *)0x0);
      pSVar5 = pSVar1;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc82;
        fVar8 = UnityEngine_AnimationState__get_length(pUVar2,(MethodInfo *)0x0);
        _uStack_18 = CONCAT44(fVar8,uStack_18);
        pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfc9d;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_14);
        return pIVar3;
      }
    }
    goto label_040dfca5;
  }
  pCStack_20 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfcaf;
  auVar9 = il2cpp_runtime_helper_022b2ca0();
  pSVar1 = auVar9._8_8_;
  uStack_30 = auVar9._0_8_;
  pSVar7 = pSVar5;
  pSStack_28 = __a;
  pCStack_20 = __c;
  if (g_data_057ac6bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bc = '\x01';
  }
  if (pSVar1 == (System_Object_array *)0x0) {
label_040dfd65:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pSVar1->max_length != 0) {
    pSVar1 = ((Il2CppType *)pSVar1->m_Items)->data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1;
    pSVar4 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (&pSVar1->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar5 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar4,(MethodInfo *)0x0);
      pSVar7 = pSVar4;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        fVar8 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
        uStack_30 = CONCAT44(fVar8,(undefined4)uStack_30);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_30 + 4);
        return pIVar3;
      }
    }
    goto label_040dfd65;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar4 = pSVar7;
  pSStack_48 = pSVar1;
  pSStack_40 = pSVar5;
  if (g_data_057ac6bd == '\0') {
    pSStack_60 = (System_Object_array *)0x40dfd94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_60 = (System_Object_array *)0x40dfda0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_60 = (System_Object_array *)0x40dfdac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bd = '\x01';
  }
  if (extraout_RDX == 0) {
label_040dfe4f:
    pSStack_60 = (System_Object_array *)0x40dfe54;
    il2cpp_runtime_helper_022b2c90();
    pSVar5 = unaff_R15;
  }
  else {
    pSVar5 = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pSVar5 = *(System_Object_array **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_60 = (System_Object_array *)0x40dfde2;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_60 = (System_Object_array *)0x40dfdf4;
      pSVar4 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar5;
      unaff_R15 = (System_Object_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (&pSVar5->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pSStack_60 = (System_Object_array *)0x40dfe10;
        pSVar4 = MethodInfo_Single_ConvertTo_Single;
        fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pSVar7 != (System_Object_array *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar7->m_Items[3];
          fStack_4c = fVar8;
          if ((System_Object_array *)__this != (System_Object_array *)0x0) {
            pSStack_60 = (System_Object_array *)0x40dfe2e;
            pSVar4 = unaff_R15;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                (MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_60 = (System_Object_array *)0x40dfe43;
              UnityEngine_AnimationState__set_normalizedTime(pUVar2,fStack_4c,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfe4f;
      }
    }
  }
  pSStack_60 = (System_Object_array *)0x40dfe59;
  il2cpp_runtime_helper_022b2ca0();
  pSVar1 = pSVar4;
  lStack_70 = extraout_RDX;
  pSStack_68 = pSVar7;
  pSStack_60 = pSVar5;
  if (g_data_057ac6be == '\0') {
    pSStack_88 = (System_Object_array *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_88 = (System_Object_array *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_88 = (System_Object_array *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040dff3f:
    pSStack_88 = (System_Object_array *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_88 = (System_Object_array *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_88 = (System_Object_array *)0x40dfee4;
    pSVar1 = MethodInfo_String_ConvertTo_String;
    pSVar5 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
      pSStack_88 = (System_Object_array *)0x40dff00;
      pSVar1 = MethodInfo_Single_ConvertTo_Single;
      fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      if (pSVar4 != (System_Object_array *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4->m_Items[3];
        fStack_74 = fVar8;
        if ((System_Object_array *)__this != (System_Object_array *)0x0) {
          pSStack_88 = (System_Object_array *)0x40dff1e;
          pUVar2 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar5,(MethodInfo *)0x0);
          pSVar1 = pSVar5;
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            pSStack_88 = (System_Object_array *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar2,fStack_74,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pSStack_88 = (System_Object_array *)0x40dff49;
  auVar9 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar9._8_8_;
  uStack_98 = auVar9._0_8_;
  lStack_90 = extraout_RDX_00;
  pSStack_88 = pSVar4;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar6 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar1 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        fVar8 = UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
        uStack_98 = CONCAT44(fVar8,(undefined4)uStack_98);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_98 + 4);
        return pIVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfcb0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Object_array *pSVar1;
  UnityEngine_AnimationState_o *pUVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  System_String_o *name;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar5;
  System_Object_array *pSVar6;
  System_Object_array *unaff_R15;
  System_Object_array *obj;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  long lStack_78;
  System_Object_array *pSStack_70;
  float fStack_5c;
  long lStack_58;
  System_Object_array *pSStack_50;
  System_Object_array *pSStack_48;
  float fStack_34;
  System_Object_array *pSStack_30;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_28;
  undefined1 auStack_14 [4];
  
  pSVar4 = (System_Object_array *)__c;
  if (g_data_057ac6bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dfd65:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a;
    pSVar1 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value,
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar1,(MethodInfo *)0x0);
      pSVar4 = pSVar1;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_14);
        return pIVar3;
      }
    }
    goto label_040dfd65;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar1 = pSVar4;
  pSStack_30 = __a;
  pCStack_28 = __c;
  if (g_data_057ac6bd == '\0') {
    pSStack_48 = (System_Object_array *)0x40dfd94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_48 = (System_Object_array *)0x40dfda0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_48 = (System_Object_array *)0x40dfdac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bd = '\x01';
  }
  if (extraout_RDX == 0) {
label_040dfe4f:
    pSStack_48 = (System_Object_array *)0x40dfe54;
    il2cpp_runtime_helper_022b2c90();
    obj = unaff_R15;
  }
  else {
    obj = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      obj = *(System_Object_array **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_48 = (System_Object_array *)0x40dfde2;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = (System_Object_array *)0x40dfdf4;
      pSVar1 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)obj;
      unaff_R15 = (System_Object_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (&obj->obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pSStack_48 = (System_Object_array *)0x40dfe10;
        pSVar1 = MethodInfo_Single_ConvertTo_Single;
        fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pSVar4 != (System_Object_array *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar4->m_Items[3];
          fStack_34 = fVar7;
          if ((System_Object_array *)__this != (System_Object_array *)0x0) {
            pSStack_48 = (System_Object_array *)0x40dfe2e;
            pSVar1 = unaff_R15;
            pUVar2 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                (MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
              pSStack_48 = (System_Object_array *)0x40dfe43;
              UnityEngine_AnimationState__set_normalizedTime(pUVar2,fStack_34,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfe4f;
      }
    }
  }
  pSStack_48 = (System_Object_array *)0x40dfe59;
  il2cpp_runtime_helper_022b2ca0();
  pSVar6 = pSVar1;
  lStack_58 = extraout_RDX;
  pSStack_50 = pSVar4;
  pSStack_48 = obj;
  if (g_data_057ac6be == '\0') {
    pSStack_70 = (System_Object_array *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_70 = (System_Object_array *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_70 = (System_Object_array *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040dff3f:
    pSStack_70 = (System_Object_array *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_70 = (System_Object_array *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_70 = (System_Object_array *)0x40dfee4;
    pSVar6 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
      pSStack_70 = (System_Object_array *)0x40dff00;
      pSVar6 = MethodInfo_Single_ConvertTo_Single;
      fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      if (pSVar1 != (System_Object_array *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar1->m_Items[3];
        fStack_5c = fVar7;
        if ((System_Object_array *)__this != (System_Object_array *)0x0) {
          pSStack_70 = (System_Object_array *)0x40dff1e;
          pUVar2 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)pSVar4,(MethodInfo *)0x0);
          pSVar6 = pSVar4;
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            pSStack_70 = (System_Object_array *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar2,fStack_5c,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pSStack_70 = (System_Object_array *)0x40dff49;
  auVar8 = il2cpp_runtime_helper_022b2ca0();
  lVar5 = auVar8._8_8_;
  uStack_80 = auVar8._0_8_;
  lStack_78 = extraout_RDX_00;
  pSStack_70 = pSVar1;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar5 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pSVar6 != (System_Object_array *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pSVar6->m_Items[3],
       (System_Object_array *)__this != (System_Object_array *)0x0)) {
      pUVar2 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        fVar7 = UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
        uStack_80 = CONCAT44(fVar7,(undefined4)uStack_80);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
        return pIVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfd70

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  MethodInfo_24EED20 *pMVar2;
  System_String_o *name;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  long lVar4;
  MethodInfo_24EEB40 *pMVar5;
  MethodInfo_24EEB40 *pMVar6;
  MethodInfo_24EED20 *unaff_R15;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  long lStack_60;
  MethodInfo_24EED20 *pMStack_58;
  float fStack_44;
  System_Object_array *pSStack_40;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_38;
  MethodInfo_24EED20 *pMStack_30;
  float fStack_1c;
  
  pMVar5 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057ac6bd == '\0') {
    pMStack_30 = (MethodInfo_24EED20 *)0x40dfd94;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_30 = (MethodInfo_24EED20 *)0x40dfda0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_30 = (MethodInfo_24EED20 *)0x40dfdac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dfe4f:
    pMStack_30 = (MethodInfo_24EED20 *)0x40dfe54;
    il2cpp_runtime_helper_022b2c90();
    pMVar2 = unaff_R15;
  }
  else {
    pMVar2 = unaff_R15;
    if ((int)__a->max_length != 0) {
      pMVar2 = (MethodInfo_24EED20 *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_30 = (MethodInfo_24EED20 *)0x40dfde2;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_30 = (MethodInfo_24EED20 *)0x40dfdf4;
      pMVar5 = MethodInfo_String_ConvertTo_String;
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)pMVar2;
      unaff_R15 = (MethodInfo_24EED20 *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar2,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[1];
        pMStack_30 = (MethodInfo_24EED20 *)0x40dfe10;
        pMVar5 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
        fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
        if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
          __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value;
          fStack_1c = fVar7;
          if ((MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0) {
            pMStack_30 = (MethodInfo_24EED20 *)0x40dfe2e;
            pMVar5 = (MethodInfo_24EEB40 *)unaff_R15;
            pUVar1 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this,(System_String_o *)unaff_R15,
                                (MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
              pMStack_30 = (MethodInfo_24EED20 *)0x40dfe43;
              UnityEngine_AnimationState__set_normalizedTime(pUVar1,fStack_1c,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
          }
        }
        goto label_040dfe4f;
      }
    }
  }
  pMStack_30 = (MethodInfo_24EED20 *)0x40dfe59;
  il2cpp_runtime_helper_022b2ca0();
  pMVar6 = pMVar5;
  pSStack_40 = __a;
  pCStack_38 = __c;
  pMStack_30 = pMVar2;
  if (g_data_057ac6be == '\0') {
    pMStack_58 = (MethodInfo_24EED20 *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_58 = (MethodInfo_24EED20 *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_58 = (MethodInfo_24EED20 *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (extraout_RDX == 0) {
label_040dff3f:
    pMStack_58 = (MethodInfo_24EED20 *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_58 = (MethodInfo_24EED20 *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_58 = (MethodInfo_24EED20 *)0x40dfee4;
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pMVar2 = (MethodInfo_24EED20 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX + 0x18)) {
      __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
      pMStack_58 = (MethodInfo_24EED20 *)0x40dff00;
      pMVar6 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
      fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
      if (pMVar5 != (MethodInfo_24EEB40 *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar5)->rgctx_data;
        fStack_44 = fVar7;
        if ((MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0) {
          pMStack_58 = (MethodInfo_24EED20 *)0x40dff1e;
          pUVar1 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)pMVar2,(MethodInfo *)0x0);
          pMVar6 = (MethodInfo_24EEB40 *)pMVar2;
          if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
            pMStack_58 = (MethodInfo_24EED20 *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar1,fStack_44,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pMStack_58 = (MethodInfo_24EED20 *)0x40dff49;
  auVar8 = il2cpp_runtime_helper_022b2ca0();
  lVar4 = auVar8._8_8_;
  uStack_68 = auVar8._0_8_;
  lStack_60 = extraout_RDX;
  pMStack_58 = (MethodInfo_24EED20 *)pMVar5;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar4 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if ((pMVar6 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar6)->rgctx_data,
       (MethodInfo_24EED20 *)__this != (MethodInfo_24EED20 *)0x0)) {
      pUVar1 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        fVar7 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        uStack_68 = CONCAT44(fVar7,(undefined4)uStack_68);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
        return pIVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeight>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dfe60

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  MethodInfo_24EED20 *name;
  UnityEngine_AnimationState_o *pUVar1;
  System_String_o *name_00;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  long lVar3;
  MethodInfo_24EEB40 *pMVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCStack_30;
  float fStack_1c;
  
  pMVar4 = (MethodInfo_24EEB40 *)__c;
  if (g_data_057ac6be == '\0') {
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfe84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfe90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfe9c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6be = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040dff3f:
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dff44;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfed2;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dfee4;
    pMVar4 = MethodInfo_String_ConvertTo_String;
    name = (MethodInfo_24EED20 *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[1];
      pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dff00;
      pMVar4 = (MethodInfo_24EEB40 *)MethodInfo_Single_ConvertTo_Single;
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value;
        fStack_1c = fVar5;
        if ((CustomLogic_BuiltinComponentInstance_o *)__this != (CustomLogic_BuiltinComponentInstance_o *)0x0)
        {
          pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dff1e;
          pUVar1 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this,(System_String_o *)name,(MethodInfo *)0x0);
          pMVar4 = (MethodInfo_24EEB40 *)name;
          if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
            pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dff33;
            UnityEngine_AnimationState__set_weight(pUVar1,fStack_1c,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_040dff3f;
    }
  }
  pCStack_30 = (CustomLogic_CustomLogicAnimationBuiltin_o *)0x40dff49;
  auVar6 = il2cpp_runtime_helper_022b2ca0();
  lVar3 = auVar6._8_8_;
  uStack_40 = auVar6._0_8_;
  pSStack_38 = __a;
  pCStack_30 = __c;
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) goto label_040e000a;
    __this = *(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o **)(lVar3 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name_00 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if ((pMVar4 != (MethodInfo_24EEB40 *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)
                 ((MethodInfo_24EED20 *)pMVar4)->rgctx_data,
       (CustomLogic_BuiltinComponentInstance_o *)__this != (CustomLogic_BuiltinComponentInstance_o *)0x0)) {
      pUVar1 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name_00,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        fVar5 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        uStack_40 = CONCAT44(fVar5,(undefined4)uStack_40);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
        return pIVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetWeight>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40dff50

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  undefined1 auStack_14 [4];
  
  if (g_data_057ac6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac6bf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_040e000a;
    __this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)(__c->fields).Value,
       (CustomLogic_BuiltinComponentInstance_o *)__this != (CustomLogic_BuiltinComponentInstance_o *)0x0)) {
      __this_00 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this,name,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(__this_00,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_14);
        return pIVar1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e000a:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40ddd30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ac6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"PlayAnimationAt");
    il2cpp_runtime_helper_023445d0(&"PlayAnimation");
    il2cpp_runtime_helper_023445d0(&"StopAnimation");
    il2cpp_runtime_helper_023445d0(&"SetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationLength");
    il2cpp_runtime_helper_023445d0(&"GetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"SetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"PlayAnimationQueued");
    il2cpp_runtime_helper_023445d0(&"SetWeight");
    il2cpp_runtime_helper_023445d0(&"GetWeight");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac6a5 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x55aebb4f) {
    if (uVar3 < 0x1c21234c) {
      if (uVar3 == 0x812156f) {
        bVar4 = System_String__op_Equality(name,"SetAnimationNormalizedTime",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac6af == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationNormalizedTime);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6af = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if (uVar3 == 0x1ae30f5a) {
        bVar4 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac6ac == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationSpeed_b__8_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6ac = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x1c21234b) &&
              (bVar4 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6ae == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationNormalizedTime);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ae = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x492a3ccf) {
      bVar4 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6ad == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationLength_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ad = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x4f3aab3d) {
      bVar4 = System_String__op_Equality(name,"StopAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6aa == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StopAnimation_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6aa = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x55aebb4e) &&
            (bVar4 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationAt_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6a8 = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0xe1cff600) {
    if (uVar3 == 0xcb515bd3) {
      bVar4 = System_String__op_Equality(name,"GetWeight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6b1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetWeight_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6b1 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0xd64c477b) {
      bVar4 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimation_b__3_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6a7 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0xe1cff5ff) &&
            (bVar4 = System_String__op_Equality(name,"SetWeight",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6b0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetWeight_b__12_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6b0 = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xf6be6fea) {
    bVar4 = System_String__op_Equality(name,"PlayAnimationQueued",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationQueued_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6a9 = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xe5b11b66) {
    bVar4 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6ab == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationSpeed_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac6ab = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xe4b35065) &&
          (bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAnimationBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac6a6 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de369;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de375;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de381;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de38d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsPlaying_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de399;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de3bc;
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de30b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de327;
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de341;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de35b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de3e2;
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40de3fa;
  CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x40de2c0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsPlaying_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x40de410

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimation_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x40de560

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationAt_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationQueued
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued (const MethodInfo* method);
// 0x40de6b0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayAnimationQueued_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6a9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__StopAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation (const MethodInfo* method);
// 0x40de800

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StopAnimation_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6aa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x40de950

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationSpeed_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6ab = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x40deaa0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationSpeed_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6ac = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x40debf0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationLength_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6ad = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x40ded40

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetAnimationNormalizedTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6ae = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime (const MethodInfo* method);
// 0x40dee90

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetAnimationNormalizedTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6af = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight (const MethodInfo* method);
// 0x40defe0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetWeight_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6b0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight (const MethodInfo* method);
// 0x40df130

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (g_data_057ac6b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetWeight_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6b1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnimationBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40df280

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ac6b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"PlayAnimationAt");
    il2cpp_runtime_helper_023445d0(&"PlayAnimation");
    il2cpp_runtime_helper_023445d0(&"StopAnimation");
    il2cpp_runtime_helper_023445d0(&"SetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationLength");
    il2cpp_runtime_helper_023445d0(&"GetAnimationSpeed");
    il2cpp_runtime_helper_023445d0(&"GetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"SetAnimationNormalizedTime");
    il2cpp_runtime_helper_023445d0(&"PlayAnimationQueued");
    il2cpp_runtime_helper_023445d0(&"SetWeight");
    il2cpp_runtime_helper_023445d0(&"GetWeight");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac6b2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"IsPlaying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PlayAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PlayAnimationAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PlayAnimationQueued",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"StopAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetAnimationLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetWeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetWeight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6b3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x40dd870

void CustomLogic_CustomLogicAnimationBuiltin___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animation_o* animation, const MethodInfo* method);
// 0x40dd880

void CustomLogic_CustomLogicAnimationBuiltin___ctor_3fdd880
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Animation_o *animation,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_Animation_c *pUVar2;
  
  if (g_data_057ac6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animation);
    g_data_057ac6a2 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animation,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_Animation;
  pUVar1 = (UnityEngine_Animation_o *)(__this->fields).Component;
  if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
    if ((pUVar1->klass == TypeInfo_Animation) && ((__this->fields).Value = pUVar1, pUVar1->klass == pUVar2))
    goto label_040dd8fb;
    il2cpp_runtime_helper_022b2fd0(pUVar1,pUVar2);
  }
  (__this->fields).Value = (UnityEngine_Animation_o *)0x0;
label_040dd8fb:
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40dd910

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__IsPlaying
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  bool_conflict extraout_EAX_07;
  bool_conflict extraout_EAX_08;
  bool_conflict extraout_EAX_09;
  UnityEngine_AnimationState_o *pUVar2;
  int32_t value;
  uint value_00;
  System_String_o *animation;
  System_String_o *name;
  UnityEngine_Animation_o *pUVar3;
  UnityEngine_Animation_o *__this_00;
  float fVar4;
  float in_XMM1_Da;
  
  pUVar3 = (__this->fields).Value;
  if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
    bVar1 = UnityEngine_Animation__IsPlaying(pUVar3,anim,(MethodInfo *)0x0);
    return bVar1;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_Animation_o *)0x0;
  animation = anim;
  if (pUVar3[2].monitor != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar3[2].monitor,anim,fVar4,(MethodInfo *)0x0);
    __this_00 = pUVar3[2].monitor;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
      animation = anim;
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(pUVar2,value,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UnityEngine_Animation_o *)0x0;
  name = animation;
  if (__this_00[2].monitor != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(__this_00[2].monitor,animation,in_XMM1_Da,(MethodInfo *)0x0);
    pUVar3 = __this_00[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      name = animation;
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,animation,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        name = (System_String_o *)(ulong)value_00;
        UnityEngine_AnimationState__set_layer(pUVar2,value_00,(MethodInfo *)0x0);
        pUVar3 = __this_00[2].monitor;
        if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
          pUVar2 = UnityEngine_Animation__get_Item(pUVar3,animation,(MethodInfo *)0x0);
          name = animation;
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(pUVar2,fVar4,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = pUVar3[2].monitor;
  if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
    pUVar2 = UnityEngine_Animation__PlayQueued(pUVar3,name,(MethodInfo *)0x0);
    return (bool_conflict)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = pUVar3[2].monitor;
  if (pUVar3 == (UnityEngine_Animation_o *)0x0) {
    fVar4 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_speed(pUVar2,fVar4,(MethodInfo *)0x0);
        return extraout_EAX_03;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(pUVar2,(MethodInfo *)0x0);
        return extraout_EAX_04;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(pUVar2,(MethodInfo *)0x0);
        return extraout_EAX_05;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
        return extraout_EAX_06;
      }
    }
    fVar4 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar2,fVar4,(MethodInfo *)0x0);
        return extraout_EAX_07;
      }
    }
    fVar4 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar3 = pUVar3[2].monitor;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_weight(pUVar2,fVar4,(MethodInfo *)0x0);
        return extraout_EAX_08;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (pUVar3[2].monitor != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar3[2].monitor,name,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(pUVar2,(MethodInfo *)0x0);
        return extraout_EAX_09;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac6a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Animation");
      g_data_057ac6a3 = '\x01';
    }
    return (bool_conflict)"Animation";
  }
  if (name != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop_4da18d0(pUVar3,name,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  UnityEngine_Animation__Stop(pUVar3,(MethodInfo *)0x0);
  return extraout_EAX_02;
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x40dd930

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  uint value;
  System_String_o *animation;
  System_String_o *name;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  float in_XMM1_Da;
  
  pUVar2 = (__this->fields).Value;
  __this_00 = (UnityEngine_Animation_o *)0x0;
  animation = anim;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar2,anim,fade,(MethodInfo *)0x0);
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
      animation = anim;
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(pUVar1,layer,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Animation_o *)0x0;
  name = animation;
  if (__this_00[2].monitor != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(__this_00[2].monitor,animation,in_XMM1_Da,(MethodInfo *)0x0);
    pUVar2 = __this_00[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      name = animation;
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,animation,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        name = (System_String_o *)(ulong)value;
        UnityEngine_AnimationState__set_layer(pUVar1,value,(MethodInfo *)0x0);
        pUVar2 = __this_00[2].monitor;
        if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
          pUVar1 = UnityEngine_Animation__get_Item(pUVar2,animation,(MethodInfo *)0x0);
          name = animation;
          if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__PlayQueued(pUVar2,name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 == (UnityEngine_Animation_o *)0x0) {
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_speed(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac6a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Animation");
      g_data_057ac6a3 = '\x01';
    }
    return;
  }
  if (name != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop_4da18d0(pUVar2,name,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Animation__Stop(pUVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x40dd980

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  System_String_o *name;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields).Value;
  __this_00 = (UnityEngine_Animation_o *)0x0;
  name = anim;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar2,anim,fade,(MethodInfo *)0x0);
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      name = anim;
      pUVar1 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        name = (System_String_o *)(ulong)(uint)layer;
        UnityEngine_AnimationState__set_layer(pUVar1,layer,(MethodInfo *)0x0);
        __this_00 = (__this->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          pUVar1 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
          name = anim;
          if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(pUVar1,normalizedTime,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = __this_00[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__PlayQueued(pUVar2,name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 == (UnityEngine_Animation_o *)0x0) {
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_speed(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,name,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac6a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Animation");
      g_data_057ac6a3 = '\x01';
    }
    return;
  }
  if (name != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop_4da18d0(pUVar2,name,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Animation__Stop(pUVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationQueued
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40dda10

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__PlayQueued(pUVar2,anim,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    if (anim != (System_String_o *)0x0) {
      UnityEngine_Animation__Stop_4da18d0(pUVar2,anim,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Animation__Stop(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_speed(pUVar1,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$StopAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40dda30

void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 == (UnityEngine_Animation_o *)0x0) {
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_speed(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    fVar3 = (float)il2cpp_runtime_helper_022b2c90();
    pUVar2 = pUVar2[2].monitor;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
      pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,anim,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac6a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Animation");
      g_data_057ac6a3 = '\x01';
    }
    return;
  }
  if (anim != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop_4da18d0(pUVar2,anim,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Animation__Stop(pUVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x40dda60

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,float speed,
               MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_speed(pUVar1,speed,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40ddaa0

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_speed(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,name,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    fVar3 = (float)il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return fVar3;
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40ddad0

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_length(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    fVar3 = (float)il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return fVar3;
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40ddb00

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_normalizedTime(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,fVar3,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      fVar3 = UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    fVar3 = (float)il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return fVar3;
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationNormalizedTime
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, const MethodInfo* method);
// 0x40ddb30

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  float value;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(pUVar1,normalizedTime,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(pUVar2[2].monitor,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetWeight
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float weight, const MethodInfo* method);
// 0x40ddb70

void CustomLogic_CustomLogicAnimationBuiltin__SetWeight
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float weight,
               MethodInfo *method)

{
  UnityEngine_AnimationState_o *pUVar1;
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(pUVar1,weight,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00[2].monitor != (UnityEngine_Animation_o *)0x0) {
    pUVar1 = UnityEngine_Animation__get_Item(__this_00[2].monitor,anim,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__get_weight(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetWeight
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x40ddbb0

float CustomLogic_CustomLogicAnimationBuiltin__GetWeight
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  fVar1 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6a3 == '\0') {
    fVar1 = (float)il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return fVar1;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimationBuiltin__get_ClassName (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x40ddbe0

System_String_o *
CustomLogic_CustomLogicAnimationBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Animation");
    g_data_057ac6a3 = '\x01';
  }
  return "Animation";
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x40ddc10

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x40ddc20

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x40ddc30

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


