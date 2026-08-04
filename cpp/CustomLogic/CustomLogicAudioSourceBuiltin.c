// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAudioSourceBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAudioSourceBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40e4aa0

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar9;
  System_Func_T__object__o *pSVar10;
  System_Action_T__object__o *pSVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac6f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAudioSourceBuiltin);
    g_data_057ac6f7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAudioSourceBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar5,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAudioSourceBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAudioSourceBuiltin_CreateInstance);
  pSVar9 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac6f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Unpause");
    il2cpp_runtime_helper_023445d0(&"Play");
    il2cpp_runtime_helper_023445d0(&"PlayDelayed");
    il2cpp_runtime_helper_023445d0(&"Time");
    il2cpp_runtime_helper_023445d0(&"Pitch");
    il2cpp_runtime_helper_023445d0(&"Stop");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057ac6f8 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar9,(MethodInfo *)0x0);
  if (uVar3 < 0x7324416d) {
    if (uVar3 < 0x44f9bf2e) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac6fd == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__6_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6fd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = message;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
          }
          pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          return pCVar5;
        }
      }
      else if ((uVar3 == 0x44f9bf2d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Pause",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac700 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac700 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x4b7f7705) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Stop",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac6ff == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ff = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
        }
        pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x7324416c) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Unpause",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac701 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Unpause_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac701 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
      }
      pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0x785a8152) {
    if (uVar3 == 0x74f576af) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Volume",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar9 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar9 = pSStack_28;
        }
        goto CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume;
      }
    }
    else if ((uVar3 == 0x785a8151) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Pitch",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6fb == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pitch_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Pitch_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fb = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xdfe4e404) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Time",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac6fa == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fa = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xe4b35065) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"IsPlaying",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar9;
      if (g_data_057ac6fc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fc = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return pCVar5;
    }
  }
  else if ((uVar3 == 0xf0f90de3) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"PlayDelayed",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ac6fe == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayDelayed_b__7_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac6fe = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = message;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
    }
    pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    return pCVar5;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAudioSourceBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar6,(System_String_o *)pSVar9,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar9,(System_String_o *)message,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar9;
  if (g_data_057ac6f9 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e500a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e5016;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Volume_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e5022;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Volume_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e502e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e503a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e5046;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6f9 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e505c;
  pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e5075;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e5084;
  pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e509d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e50ac;
  pCVar5 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40e50c7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return pCVar5;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40e5e20

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40e5e90

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40e5ea0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AudioSource_o *__this_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  MethodInfo_24EED20 *pMVar2;
  float delay;
  
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    __this_00 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (MethodInfo_24EED20 *)__c;
  if (g_data_057ac707 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac707 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_040e5f4f;
    __this = *(CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar2 = MethodInfo_Single_ConvertTo_Single;
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
    if ((MethodInfo_24EED20 *)__c != (MethodInfo_24EED20 *)0x0) {
      __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
      if ((UnityEngine_AudioSource_o *)((MethodInfo_24EED20 *)__c)->rgctx_data !=
          (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__PlayDelayed
                  ((UnityEngine_AudioSource_o *)((MethodInfo_24EED20 *)__c)->rgctx_data,delay,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e5f4f:
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Stop_4daa470((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0)
      ;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Pause((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__UnPause((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac708 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac708 = '\x01';
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


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayDelayed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40e5ec0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AudioSource_o *__this_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *pMVar2;
  float delay;
  
  pMVar2 = (MethodInfo_24EED20 *)__c;
  if (g_data_057ac707 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac707 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_040e5f4f;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar2 = MethodInfo_Single_ConvertTo_Single;
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
      __this_00 = (__c->fields).Value;
      __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__PlayDelayed(__this_00,delay,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040e5f4f:
  il2cpp_runtime_helper_022b2ca0();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Stop_4daa470((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0)
      ;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Pause((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo_24EED20 *)0x0) {
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if ((UnityEngine_AudioSource_o *)pMVar2->rgctx_data != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__UnPause((UnityEngine_AudioSource_o *)pMVar2->rgctx_data,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac708 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac708 = '\x01';
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


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40e5f60

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AudioSource_o *pUVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Stop_4daa470(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Pause(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__UnPause(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac708 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac708 = '\x01';
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


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40e5f80

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AudioSource_o *pUVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Pause(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__UnPause(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac708 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac708 = '\x01';
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


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unpause>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40e5fa0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AudioSource_o *__this_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  
  if (__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    __this_00 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac708 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac708 = '\x01';
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


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40e4b90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 *puStack_18;
  
  if (g_data_057ac6f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Unpause");
    il2cpp_runtime_helper_023445d0(&"Play");
    il2cpp_runtime_helper_023445d0(&"PlayDelayed");
    il2cpp_runtime_helper_023445d0(&"Time");
    il2cpp_runtime_helper_023445d0(&"Pitch");
    il2cpp_runtime_helper_023445d0(&"Stop");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057ac6f8 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7324416d) {
    if (uVar3 < 0x44f9bf2e) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac6fd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__6_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac6fd = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x44f9bf2d) &&
              (bVar4 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac700 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac700 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x4b7f7705) {
      bVar4 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac6ff == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac6ff = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x7324416c) &&
            (bVar4 = System_String__op_Equality(name,"Unpause",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac701 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Unpause_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac701 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x785a8152) {
    if (uVar3 == 0x74f576af) {
      bVar4 = System_String__op_Equality(name,"Volume",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume;
      }
    }
    else if ((uVar3 == 0x785a8151) &&
            (bVar4 = System_String__op_Equality(name,"Pitch",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6fb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pitch_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Pitch_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fb = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xdfe4e404) {
    bVar4 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6fa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fa = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xe4b35065) {
    bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac6fc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
        g_data_057ac6fc = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar6,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf0f90de3) &&
          (bVar4 = System_String__op_Equality(name,"PlayDelayed",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac6fe == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayDelayed_b__7_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac6fe = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAudioSourceBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac6f9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e500a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e5016;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Volume_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e5022;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Volume_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e502e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e503a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e5046;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6f9 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e505c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e5075;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e5084;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e509d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e50ac;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40e50c7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Volume
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume (const MethodInfo* method);
// 0x40e4ff0

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Volume_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Volume_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x40e50d0

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Pitch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch (const MethodInfo* method);
// 0x40e51b0

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pitch_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Pitch_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6fb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x40e5290

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
    g_data_057ac6fc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x40e5330

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6fd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__PlayDelayed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed (const MethodInfo* method);
// 0x40e5480

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PlayDelayed_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6fe = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x40e55d0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac6ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac6ff = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x40e5720

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac700 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac700 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Unpause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause (const MethodInfo* method);
// 0x40e5870

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (g_data_057ac701 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Unpause_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac701 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAudioSourceBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40e59c0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor(MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *__this_01;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EED20 *obj_01;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  long lVar3;
  MethodInfo_33E0570 *pMVar4;
  long lVar5;
  MethodInfo_24EED20 *pMVar6;
  float fVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  MethodInfo_24EED20 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac702 == '\0') {
    uStack_20 = 0x40e59dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40e59e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40e59f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40e5a01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40e5a0d;
    il2cpp_runtime_helper_023445d0(&"Unpause");
    uStack_20 = 0x40e5a19;
    il2cpp_runtime_helper_023445d0(&"Play");
    uStack_20 = 0x40e5a25;
    il2cpp_runtime_helper_023445d0(&"PlayDelayed");
    uStack_20 = 0x40e5a31;
    il2cpp_runtime_helper_023445d0(&"Time");
    uStack_20 = 0x40e5a3d;
    il2cpp_runtime_helper_023445d0(&"Pitch");
    uStack_20 = 0x40e5a49;
    il2cpp_runtime_helper_023445d0(&"Stop");
    uStack_20 = 0x40e5a55;
    il2cpp_runtime_helper_023445d0(&"Pause");
    uStack_20 = 0x40e5a61;
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    uStack_20 = 0x40e5a6d;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057ac702 = '\x01';
  }
  uStack_20 = 0x40e5a83;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40e5a98;
  obj = MethodInfo_HashSet_1_System_String;
  pSVar2 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40e5abd;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Volume",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5ad2;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Time",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5ae7;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Pitch",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5afc;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsPlaying",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5b11;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Play",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5b26;
    System_Collections_Generic_HashSet_object___Add(__this_00,"PlayDelayed",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5b3b;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Stop",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5b50;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Pause",MethodInfo_Boolean_Add);
    uStack_20 = 0x40e5b65;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Unpause",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  uStack_20 = 0x40e5b97;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (__this = *(UnityEngine_AudioSource_o **)&(pSVar2->fields)._version,
     __this != (UnityEngine_AudioSource_o *)0x0)) {
    fVar7 = UnityEngine_AudioSource__get_volume(__this,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar7,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar3 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_00;
  if (g_data_057ac703 == '\0') {
    uStack_40 = 0x40e5bff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40e5c0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac703 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40e5c2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40e5c3c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = obj;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (pMVar4 = (MethodInfo_33E0570 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_volume(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar7,(MethodInfo *)0x0)
    ;
    return;
  }
  uStack_40 = 0x40e5c5d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar4 != (MethodInfo_33E0570 *)0x0) && (pMVar4->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_48 = (MethodInfo_33E0570 *)0x40e5c76;
    fVar7 = UnityEngine_AudioSource__get_time
                      ((UnityEngine_AudioSource_o *)pMVar4->rgctx_data,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar7,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_33E0570 *)0x40e5c91;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  lVar5 = 0;
  pMStack_48 = (MethodInfo_33E0570 *)0x40e5c98;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar3;
  pMStack_48 = obj;
  if (g_data_057ac704 == '\0') {
    uStack_60 = 0x40e5cbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40e5ccb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac704 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40e5cea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40e5cfc;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  pMVar6 = obj_00;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (pMVar6 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar5 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(*(UnityEngine_AudioSource_o **)(lVar5 + 0x38),fVar7,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40e5d1d;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)pMVar6->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    pMStack_68 = (MethodInfo_24EED20 *)0x40e5d36;
    fVar7 = UnityEngine_AudioSource__get_pitch
                      ((UnityEngine_AudioSource_o *)pMVar6->rgctx_data,(MethodInfo *)0x0);
    uStack_60 = CONCAT44(fVar7,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EED20 *)0x40e5d51;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  lVar3 = 0;
  pMStack_68 = (MethodInfo_24EED20 *)0x40e5d58;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  lStack_70 = lVar5;
  pMStack_68 = obj_00;
  if (g_data_057ac705 == '\0') {
    uStack_80 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_80 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40e5dbc;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (obj_01 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar7,(MethodInfo *)0x0);
    return;
  }
  uStack_80 = 0x40e5ddd;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)obj_01->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_80 = CONCAT17((char)bVar1,(undefined7)uStack_80);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x40e5ba0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar3;
  MethodInfo *pMVar4;
  long lVar5;
  MethodInfo_24EED20 *pMVar6;
  float fVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo_24EED20 *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_volume(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac703 == '\0') {
    uStack_28 = 0x40e5bff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40e5c0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac703 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40e5c2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40e5c3c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = method;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (pMVar4 = (MethodInfo *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_volume(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar7,(MethodInfo *)0x0)
    ;
    return extraout_RAX;
  }
  uStack_28 = 0x40e5c5d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar4 != (MethodInfo *)0x0) && ((pMVar4->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40e5c76;
    fVar7 = UnityEngine_AudioSource__get_time
                      ((UnityEngine_AudioSource_o *)(pMVar4->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar7,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40e5c91;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar2;
  }
  lVar5 = 0;
  pMStack_30 = (MethodInfo *)0x40e5c98;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar3;
  pMStack_30 = method;
  if (g_data_057ac704 == '\0') {
    uStack_48 = 0x40e5cbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40e5ccb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac704 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40e5cea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40e5cfc;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar6 = obj;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (pMVar6 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar5 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(*(UnityEngine_AudioSource_o **)(lVar5 + 0x38),fVar7,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40e5d1d;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)pMVar6->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    pMStack_50 = (MethodInfo_24EED20 *)0x40e5d36;
    fVar7 = UnityEngine_AudioSource__get_pitch
                      ((UnityEngine_AudioSource_o *)pMVar6->rgctx_data,(MethodInfo *)0x0);
    uStack_48 = CONCAT44(fVar7,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo_24EED20 *)0x40e5d51;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  pMStack_50 = (MethodInfo_24EED20 *)0x40e5d58;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar5;
  pMStack_50 = obj;
  if (g_data_057ac705 == '\0') {
    uStack_68 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40e5dbc;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (obj_00 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar7,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_68 = 0x40e5ddd;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)obj_00->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_68 = CONCAT17((char)bVar1,(undefined7)uStack_68);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40e5be0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar3;
  MethodInfo_24EED20 *pMVar4;
  long lVar5;
  float fVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac703 == '\0') {
    uStack_20 = 0x40e5bff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40e5c0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac703 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40e5c2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40e5c3c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar2 = __v;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar2 = (Il2CppObject *)0x0, __this != (UnityEngine_AudioSource_o *)0x0))
  {
    UnityEngine_AudioSource__set_volume(__this,fVar6,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40e5c5d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[3].monitor != (UnityEngine_AudioSource_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40e5c76;
    fVar6 = UnityEngine_AudioSource__get_time(pIVar2[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar6,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40e5c91;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar3 = 0;
  pIStack_28 = (Il2CppObject *)0x40e5c98;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac704 == '\0') {
    uStack_40 = 0x40e5cbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40e5ccb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac704 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40e5cea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40e5cfc;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = obj;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (pMVar4 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar6,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40e5d1d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar4 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)pMVar4->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    pMStack_48 = (MethodInfo_24EED20 *)0x40e5d36;
    fVar6 = UnityEngine_AudioSource__get_pitch
                      ((UnityEngine_AudioSource_o *)pMVar4->rgctx_data,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar6,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EED20 *)0x40e5d51;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  lVar5 = 0;
  pMStack_48 = (MethodInfo_24EED20 *)0x40e5d58;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar3;
  pMStack_48 = obj;
  if (g_data_057ac705 == '\0') {
    uStack_60 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40e5dbc;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (obj_00 = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar5 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar5 + 0x38),fVar6,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40e5ddd;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)obj_00->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_60 = CONCAT17((char)bVar1,(undefined7)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x40e5c60

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar3;
  MethodInfo *pMVar4;
  long lVar5;
  float fVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac704 == '\0') {
    uStack_28 = 0x40e5cbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40e5ccb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac704 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40e5cea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40e5cfc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = method;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (pMVar4 = (MethodInfo *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar6,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40e5d1d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar4 != (MethodInfo *)0x0) && ((pMVar4->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40e5d36;
    fVar6 = UnityEngine_AudioSource__get_pitch
                      ((UnityEngine_AudioSource_o *)(pMVar4->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar6,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40e5d51;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar2;
  }
  lVar5 = 0;
  pMStack_30 = (MethodInfo *)0x40e5d58;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar3;
  pMStack_30 = method;
  if (g_data_057ac705 == '\0') {
    uStack_48 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40e5dbc;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (obj = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar5 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar5 + 0x38),fVar6,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40e5ddd;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)obj->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_48 = CONCAT17((char)bVar1,(undefined7)uStack_48);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40e5ca0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  MethodInfo_24EED20 *obj;
  long lVar3;
  float fVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac704 == '\0') {
    uStack_20 = 0x40e5cbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40e5ccb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac704 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40e5cea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40e5cfc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar2 = __v;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar2 = (Il2CppObject *)0x0, __this != (UnityEngine_AudioSource_o *)0x0))
  {
    UnityEngine_AudioSource__set_time(__this,fVar4,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40e5d1d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[3].monitor != (UnityEngine_AudioSource_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40e5d36;
    fVar4 = UnityEngine_AudioSource__get_pitch(pIVar2[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar4,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40e5d51;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar3 = 0;
  pIStack_28 = (Il2CppObject *)0x40e5d58;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac705 == '\0') {
    uStack_40 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40e5dbc;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (obj = (MethodInfo_24EED20 *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),fVar4,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40e5ddd;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_AudioSource_o *)obj->rgctx_data != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_40 = CONCAT17((char)bVar1,(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x40e5d20

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  long lVar3;
  float value;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_pitch(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac705 == '\0') {
    uStack_28 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40e5dbc;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_AudioSource_o **)(lVar3 + 0x38) != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(*(UnityEngine_AudioSource_o **)(lVar3 + 0x38),value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40e5ddd;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying
                      ((UnityEngine_AudioSource_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = CONCAT17((char)bVar1,(undefined7)uStack_28);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40e5d60

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  float value;
  undefined8 uStack_20;
  
  if (g_data_057ac705 == '\0') {
    uStack_20 = 0x40e5d7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40e5d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac705 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40e5daa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40e5dbc;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __v = (Il2CppObject *)0x0, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(__this,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40e5ddd;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].monitor != (UnityEngine_AudioSource_o *)0x0)) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying(__v[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT17((char)bVar1,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x40e5de0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_AudioSource__get_isPlaying(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac706 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac706 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4820

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_AudioSource_o* audioSource, const MethodInfo* method);
// 0x40e4830

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor_3fe4830
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_AudioSource_o *audioSource,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  UnityEngine_Component_c *pUVar2;
  
  if (g_data_057ac6f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioSource);
    g_data_057ac6f5 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)audioSource,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_AudioSource;
  pUVar1 = (__this->fields).Component;
  if (pUVar1 != (UnityEngine_Component_o *)0x0) {
    if ((pUVar1->klass == TypeInfo_AudioSource) &&
       ((__this->fields).Value = (UnityEngine_AudioSource_o *)pUVar1, pUVar1->klass == pUVar2))
    goto label_040e48ab;
    il2cpp_runtime_helper_022b2fd0(pUVar1,pUVar2);
  }
  (__this->fields).Value = (UnityEngine_AudioSource_o *)0x0;
label_040e48ab:
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Volume
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e48c0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_volume(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_volume(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_time(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_pitch(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    fVar2 = (float)il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return fVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Volume
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40e48e0

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_volume(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_time(pUVar1,(MethodInfo *)0x0);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(pUVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_pitch(pUVar1,(MethodInfo *)0x0);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4900

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_time(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_pitch(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    fVar2 = (float)il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return fVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40e4920

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_pitch(pUVar1,(MethodInfo *)0x0);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Pitch
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4940

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    fVar2 = UnityEngine_AudioSource__get_pitch(pUVar1,(MethodInfo *)0x0);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    fVar2 = (float)il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return fVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Pitch
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40e4960

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float delay;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  delay = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,delay,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4980

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  UnityEngine_AudioSource_o *pUVar2;
  float delay;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  delay = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar2,delay,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar2[2].monitor;
  if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar2[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar2[2].monitor,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return (bool_conflict)"AudioSource";
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Play (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e49a0

void CustomLogic_CustomLogicAudioSourceBuiltin__Play
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  float delay;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_4daa2c0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  delay = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,delay,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$PlayDelayed
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float seconds, const MethodInfo* method);
// 0x40e49c0

void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float seconds,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(pUVar1,seconds,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Stop (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e49e0

void CustomLogic_CustomLogicAudioSourceBuiltin__Stop
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_4daa470(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar1[2].monitor;
  if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar1[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(pUVar1[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Pause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a00

void CustomLogic_CustomLogicAudioSourceBuiltin__Pause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00[2].monitor != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(__this_00[2].monitor,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Unpause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a20

void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a40

System_String_o *
CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AudioSource");
    g_data_057ac6f6 = '\x01';
  }
  return "AudioSource";
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a70

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a80

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x40e4a90

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


