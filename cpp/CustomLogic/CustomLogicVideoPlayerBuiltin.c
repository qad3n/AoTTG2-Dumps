// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVideoPlayerBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVideoPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVideoPlayerBuiltin_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40fce80

CustomLogic_CustomLogicVideoPlayerBuiltin_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar9;
  System_Action_T__object__o *pSVar10;
  System_Func_T__object__o *pSVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac838 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVideoPlayerBuiltin);
    g_data_057ac838 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVideoPlayerBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar5,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicVideoPlayerBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVideoPlayerBuiltin_CreateInstance);
  pSVar9 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac839 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Frame");
    il2cpp_runtime_helper_023445d0(&"FrameRate");
    il2cpp_runtime_helper_023445d0(&"Prepare");
    il2cpp_runtime_helper_023445d0(&"IsPaused");
    il2cpp_runtime_helper_023445d0(&"PlaybackSpeed");
    il2cpp_runtime_helper_023445d0(&"Play");
    il2cpp_runtime_helper_023445d0(&"StepForward");
    il2cpp_runtime_helper_023445d0(&"Time");
    il2cpp_runtime_helper_023445d0(&"IsLooping");
    il2cpp_runtime_helper_023445d0(&"Length");
    il2cpp_runtime_helper_023445d0(&"Stop");
    il2cpp_runtime_helper_023445d0(&"IsPrepared");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"FrameCount");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac839 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar9,(MethodInfo *)0x0);
  if (uVar3 < 0x4b7f7706) {
    if (uVar3 < 0x14b5b196) {
      if (uVar3 == 0x170e53d) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"IsLooping",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac83d == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsLooping_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsLooping_g____setter_5_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
            g_data_057ac83d = '\x01';
            message = pSStack_28;
          }
          pSStack_28 = message;
          pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
          System_Action_object__object____ctor();
          pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          return pCVar5;
        }
      }
      else if (uVar3 == 0x202277c) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"StepForward",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac847 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StepForward_b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac847 = '\x01';
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
          }
          pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return pCVar5;
        }
      }
      else if ((uVar3 == 0x14b5b195) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"FrameCount",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar9;
        if (g_data_057ac83b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameCount_g____getter_3);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83b = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 < 0x3eeb76a5) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac845 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac845 = '\x01';
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
          }
          pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return pCVar5;
        }
      }
      else if ((uVar3 == 0x3eeb76a4) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"FrameRate",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar9;
        if (g_data_057ac83c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameRate_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83c = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x44f9bf2d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Pause",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac844 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac844 = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
        }
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x4b7f7705) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Stop",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac848 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__16_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac848 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
      }
      pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0xcc5e1936) {
    if (uVar3 < 0x7ea7e87c) {
      if (uVar3 == 0x5e7ac146) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Frame",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar9 = pSStack_28;
          goto CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame;
        }
      }
      else if ((uVar3 == 0x7ea7e87b) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"IsPaused",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar9;
        if (g_data_057ac83e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPaused_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83e = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x9e978e07) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"PlaybackSpeed",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        pSStack_28 = message;
        if (g_data_057ac842 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PlaybackSpeed_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PlaybackSpeed_g____setter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac842 = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0xcc5e1935) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Length",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar9;
      if (g_data_057ac841 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Length_g____getter_9_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac841 = '\x01';
      }
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0xdfe4e405) {
    if (uVar3 == 0xd5463178) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"IsPrepared",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar9;
        if (g_data_057ac840 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPrepared_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac840 = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0xdfe4e404) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Time",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_11_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac843 = '\x01';
      }
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
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
      if (g_data_057ac83f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac83f = '\x01';
      }
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
      return pCVar5;
    }
  }
  else if ((uVar3 == 0xf222bf7c) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Prepare",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ac846 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Prepare_b__14_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac846 = '\x01';
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
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
    }
    pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    return pCVar5;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicVideoPlayerBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar6,(System_String_o *)pSVar9,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar9,(System_String_o *)message,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar9;
  if (g_data_057ac83a == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5b6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Frame_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5c2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Frame_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83a = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd5fc;
  pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd615;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd624;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd63d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd64c;
  pCVar5 = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40fd667;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return pCVar5;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40fea90

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40feb00

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40feb10

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *player;
  void *pvVar3;
  UnityEngine_Transform_o *pUVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *vtableDispatch;
  undefined1 uVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  undefined4 extraout_var_02;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var_03;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_03;
  undefined4 extraout_var_04;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_05;
  Il2CppObject *extraout_RAX_05;
  undefined4 extraout_var_06;
  Il2CppObject *extraout_RAX_06;
  undefined4 extraout_var_07;
  Il2CppObject *extraout_RAX_07;
  undefined4 extraout_var_08;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  undefined4 extraout_var_09;
  Il2CppObject *extraout_RAX_10;
  undefined4 extraout_var_10;
  Il2CppObject *extraout_RAX_11;
  undefined4 extraout_var_11;
  Il2CppObject *extraout_RAX_12;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  System_String_o *pSVar11;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_04;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  Il2CppObject *extraout_RAX_13;
  undefined4 extraout_var_16;
  Il2CppObject *extraout_RAX_14;
  Il2CppObject *extraout_RAX_15;
  undefined4 extraout_var_17;
  Il2CppObject *extraout_RAX_16;
  undefined4 extraout_var_18;
  Il2CppObject *extraout_RAX_17;
  Il2CppObject *extraout_RAX_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  Il2CppObject *extraout_RAX_19;
  undefined4 extraout_var_21;
  Il2CppObject *extraout_RAX_20;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  Il2CppObject *extraout_RAX_21;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_22;
  undefined4 extraout_var_27;
  Il2CppObject *extraout_RAX_23;
  undefined4 extraout_var_28;
  Il2CppObject *extraout_RAX_24;
  undefined4 extraout_var_29;
  int32_t *piVar12;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_25;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_ArgumentException_o *pSVar15;
  long lVar16;
  Il2CppObject *extraout_RAX_26;
  Il2CppObject *extraout_RAX_27;
  Il2CppObject *extraout_RAX_28;
  undefined4 extraout_var_30;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  System_String_o *value;
  System_String_o *value_00;
  int32_t mode;
  System_String_o *pSVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *__this_05;
  Characters_BaseCharacter_o *pCVar20;
  Characters_BaseCharacter_o *pCVar21;
  Characters_BaseCharacter_o *__this_06;
  long *plVar22;
  long lVar23;
  Characters_AnimationHandler_o *pCVar24;
  Characters_AnimationHandler_o *pCVar25;
  UnityEngine_Rigidbody_o *pUVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float activeTime;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar33;
  UnityEngine_Color_o UVar34;
  int32_t iStack_56c;
  undefined1 auStack_568 [16];
  undefined1 auStack_558 [16];
  System_String_o *pSStack_548;
  System_String_o *pSStack_540;
  Characters_BaseCharacter_o *pCStack_538;
  undefined8 uStack_530;
  int32_t iStack_51c;
  int32_t iStack_518;
  int32_t iStack_514;
  long lStack_510;
  undefined8 uStack_40;
  
  if (__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Pause(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Play(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac84f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass =
       (CustomLogic_BuiltinClassInstance_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__c);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((CustomLogic_BuiltinClassInstance_o *)__this)->fields).Variables;
  uStack_40 = CONCAT17(1,(undefined7)uStack_40);
  pSVar11 = (System_String_o *)((long)&uStack_40 + 7);
  lVar16 = g_data_057b9b98;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,"IsCharacter",pIVar9,MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar16 + 0x30) + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar21,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  if (pSVar11 == (System_String_o *)0x0) {
    pSVar11 = g_data_057b9c00->static_fields->Empty;
  }
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar20,pSVar11,(MethodInfo *)0x0);
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (lVar16 != 0) {
      pIVar9 = extraout_RAX_01;
      if (*(char *)(lVar16 + 0x78) != '\0') {
        if (extraout_DL == '\0') {
          pIVar9 = (Il2CppObject *)0x0;
        }
        else {
          bVar8 = System_String__IsNullOrWhiteSpace(*(System_String_o **)(lVar16 + 0x40),(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),(char)bVar8) ^ 1);
        }
        *(char *)(lVar16 + 0x48) = (char)pIVar9;
      }
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return *(Il2CppObject **)(lVar16 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  puVar18 = *(undefined8 **)&(pCVar20->fields).MaxFootstepDistance;
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[10] = pSVar11;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(puVar18 + 10);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar19 = puVar18;
  if (g_data_057ac850 == '\0') {
    puVar19 = &TypeInfo_CustomLogicPlayerBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac850 = '\x01';
  }
  if (((puVar18[6] != 0) && (lVar16 = *(long *)(puVar18[6] + 0x70), lVar16 != 0)) &&
     (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar16 + 0x80);
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = puVar19[6];
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x78));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac851 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac851 = '\x01';
  }
  x = (UnityEngine_Object_o *)puVar19[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (puVar19[6] != 0) {
    return (Il2CppObject *)(ulong)(*(char *)(puVar19[6] + 0x68) == '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (((x[2].klass != (UnityEngine_Object_c *)0x0) &&
      (pvVar3 = ((x[2].klass)->_1).interopData, pvVar3 != (void *)0x0)) &&
     (lVar16 = *(long *)((long)pvVar3 + 0x20), lVar16 != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x94);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = x[2].klass;
  if (__this_05 != (UnityEngine_Object_c *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = (__this_05->_1).this_arg.data;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMainCharacter(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_01,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac852 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicTransformBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac852 = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac853 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac853 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac854 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac854 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
      euler.fields.x = UVar32.fields.x * 57.29578;
      euler.fields.y = UVar32.fields.y * 57.29578;
      euler.fields.z = UVar32.fields.z * 57.29578;
      UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UVar32.fields.x = SUB84(pSVar17[2].klass,0) * 0.017453292;
      UVar32.fields.y = (float)((ulong)pSVar17[2].klass >> 0x20) * 0.017453292;
      UVar32.fields.z = *(float *)&pSVar17[2].monitor * 0.017453292;
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      UVar33 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar32,(MethodInfo *)0x0);
      in_XMM1_Da = UVar33.fields.z;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar4,UVar33,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac855 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac855 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      __this_03 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_03,UVar33,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar4,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac856 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac856 = '\x01';
  }
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    UVar32 = Characters_BaseCharacter__GetVelocity(pCVar21,(MethodInfo *)0x0);
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  __this_06 = (Characters_BaseCharacter_o *)0x0;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar8);
    }
    __this_06 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
      pSVar11 = (System_String_o *)0x0;
      Characters_BaseCharacter__SetKinematic(__this_06,0,1.0,(MethodInfo *)0x0);
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         (pSVar17 != (System_String_o *)0x0)) {
        pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        __this_06 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar26 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar26,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = __this_06;
  if (g_data_057ac857 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac857 = '\x01';
  }
  lVar16 = *(long *)&(__this_06->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_forward
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac858 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac858 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_right
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_07;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac859 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac859 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_up(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_up
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_08;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xcc));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac85a = '\x01';
  }
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar22 + 0x728))();
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_01.fields.z = in_XMM1_Da;
    value_01.fields.x = (float)(int)uVar14;
    value_01.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_01,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar17 != (System_String_o *)0x0) {
    lVar16 = plVar22[6];
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar33 = UnityEngine_Quaternion__LookRotation_4debb20
                       ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),(MethodInfo *)0x0)
    ;
    UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
    euler_00.fields.x = UVar32.fields.x * 57.29578;
    euler_00.fields.y = UVar32.fields.y * 57.29578;
    euler_00.fields.z = UVar32.fields.z * 57.29578;
    plVar22 = (long *)0x0;
    UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    in_XMM1_Da = UVar32.fields.z;
    if (lVar16 != 0) {
      *(float *)(lVar16 + 200) = UVar32.fields.y;
      return extraout_RAX_09;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar22[6] != 0) {
    return *(Il2CppObject **)(plVar22[6] + 0x88);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar8);
    }
    if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam((Characters_BaseCharacter_o *)plVar22[6],pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_10;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_10,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_11;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_12;
    }
  }
  lVar23 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)(lVar23 + 0x30);
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x69));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar23 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    uVar5 = SUB81(pSVar11,0);
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_12,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar23 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(undefined1 *)((long)&pIVar9[6].monitor + 1) = uVar5;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x6c);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar8);
    }
    pIVar9 = *(Il2CppObject **)&(pCVar21->fields).MaxFootstepDistance;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(int *)((long)&pIVar9[6].monitor + 4) = (int)pSVar11;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = Characters_BaseCharacter__GetCurrentAnimation(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xc4));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac85b == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicRigidbodyBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac85b = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
    __this_04 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_3ff72f0
              (__this_04,(CustomLogic_BuiltinClassInstance_o *)pCVar21,pUVar26,method);
    return (Il2CppObject *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x6a8))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = (long *)plVar22[6];
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x698))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
    }
    plVar22 = (long *)plVar22[6];
    if (plVar22 != (long *)0x0) {
      if ((char)plVar22[0xd] != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x598);
      pIVar9 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (plVar22,pSVar17,*(undefined8 *)(*plVar22 + 0x5a0),UNRECOVERED_JUMPTABLE_00);
      return pIVar9;
    }
  }
  lVar16 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar11,fVar28,0.0,(MethodInfo *)0x0);
      return extraout_RAX_13;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  fVar28 = in_XMM1_Da;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
      }
      if (extraout_DL_00 == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_15;
      }
      Characters_BaseCharacter__CrossFade(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_14;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
      }
      Characters_BaseCharacter__GetAnimationSpeed(pCVar21,pSVar11,(MethodInfo *)0x0);
      return extraout_RAX_16;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
      }
      if (extraout_DL_01 == '\0') {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_18;
      }
      Characters_BaseCharacter__SetAnimationSpeed(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_17;
    }
  }
  pCVar24 = (Characters_AnimationHandler_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  if (pSVar17 != (System_String_o *)0x0) {
    pCVar25 = pSVar17[7].monitor;
    pCVar24 = (Characters_AnimationHandler_o *)0x0;
    if (pCVar25 != (Characters_AnimationHandler_o *)0x0) {
      bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  pCVar25 = pCVar24;
  if ((pSVar17 != (System_String_o *)0x0) &&
     (pCVar25 = pSVar17[7].monitor, pCVar25 != (Characters_AnimationHandler_o *)0x0)) {
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar8);
    }
    pSVar17 = (pCVar24->fields)._currentAnimation;
    if (pSVar17 != (System_String_o *)0x0) {
      pCVar24 = pSVar17[7].monitor;
      pCVar25 = (Characters_AnimationHandler_o *)0x0;
      if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar24,(MethodInfo *)0x0);
        return extraout_RAX_19;
      }
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2c90();
  pCVar21 = (Characters_BaseCharacter_o *)(pCVar25->fields)._currentAnimation;
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
    }
    pSVar13 = (pCVar25->fields)._currentAnimation;
    if (pSVar13 != (System_String_o *)0x0) {
      if (*(char *)&pSVar13[4].monitor != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
      }
      vtableDispatch = pSVar13->klass[1].vtable._24_ToString.method;
      pIVar9 = (Il2CppObject *)
               (*(code *)vtableDispatch)
                         (uVar30,pSVar13,pSVar11,
                          pSVar13->klass[1].vtable._25_System_IConvertible_ToType.methodPtr,
                          vtableDispatch);
      return pIVar9;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    pCVar24 = *(Characters_AnimationHandler_o **)(*(long *)(lVar16 + 0x30) + 0xb0);
    lVar16 = 0;
    if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetLength(pCVar24,pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar17,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_22,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
      }
      pSVar11 = pSVar17;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar17,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_24,bVar8);
      }
      pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
      if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar21,pSVar17,(MethodInfo *)0x0);
        return extraout_RAX_21;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
      }
      pSVar17 = pSVar11;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar8);
      }
      if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__StopSound
                  (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),pSVar11,(MethodInfo *)0x0);
        return extraout_RAX_22;
      }
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
      }
      Characters_BaseCharacter__FadeSound(pCVar21,pSVar17,fVar29,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_23;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_28,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar16 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar9[6].monitor != '\0') {
        return pIVar9;
      }
      if ((pIVar9[7].klass != (Il2CppClass *)0x0) && (pSVar11 != (System_String_o *)0x0)) {
        pUVar4 = (UnityEngine_Transform_o *)((pIVar9[7].klass)->_1).name;
        pCVar21 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__LookAt_4e0aa40
                    (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_24;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_510 = lVar16;
  if (g_data_057ac85c == '\0') {
    uStack_530 = 0x40fffec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ForceMode);
    uStack_530 = 0x40ffff8;
    il2cpp_runtime_helper_023445d0(&TypeRef_ForceMode);
    g_data_057ac85c = '\x01';
  }
  iStack_51c = 0;
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = value;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
label_0410019c:
    uStack_530 = 0x41001a1;
    il2cpp_runtime_helper_022b2c90();
label_041001a1:
    puVar27 = &"Invalid force mode: {0}";
label_041001e2:
    uStack_530 = 0x41001e7;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar27);
    uStack_530 = 0x41001f4;
    pSVar11 = System_String__Format(pSVar13,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    uStack_530 = 0x410001b;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_29,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_0410019c;
    uStack_530 = 0x4100041;
    Characters_BaseCharacter__SetKinematic(pCVar20,0,1.0,(MethodInfo *)0x0);
    if (value == (System_String_o *)0x0) goto label_041001a1;
    if (value->klass == g_data_057b9bb8) {
      uStack_530 = 0x41000ec;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      handle.fields.value = TypeRef_ForceMode.fields.value;
      mode = *piVar12;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        uStack_530 = 0x410010e;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_530 = 0x4100118;
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_530 = 0x410012e;
      iStack_514 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_514);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        uStack_530 = 0x4100146;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_530 = 0x4100153;
      bVar8 = System_Enum__IsDefined(enumType,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
        if ((((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
            (pSVar17 != (System_String_o *)0x0)) &&
           (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0)
           ) {
          fVar28 = *(float *)&pSVar17[2].monitor;
          uVar30 = SUB84(pSVar17[2].klass,0);
          uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
label_04100186:
          uStack_530 = 0x410018d;
          force.fields.y = (float)uVar31;
          force.fields.x = (float)uVar30;
          force.fields.z = fVar28;
          UnityEngine_Rigidbody__AddForce(pUVar26,force,mode,(MethodInfo *)0x0);
          return extraout_RAX_25;
        }
        goto label_0410019c;
      }
      uStack_530 = 0x41001d8;
      iStack_518 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_518);
      puVar27 = &"Unknown force mode: {0}";
      goto label_041001e2;
    }
    if (value->klass != g_data_057b9c00) goto label_041001a1;
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      uStack_530 = 0x4100080;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_530 = 0x4100097;
    bVar8 = System_Enum__TryParse_Int32Enum_(value,&iStack_51c,MethodInfo_Boolean_TryParse_ForceMode);
    if ((char)bVar8 != '\0') {
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         ((pSVar17 != (System_String_o *)0x0 &&
          (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0))
         )) {
        fVar28 = *(float *)&pSVar17[2].monitor;
        uVar30 = SUB84(pSVar17[2].klass,0);
        uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
        mode = iStack_51c;
        goto label_04100186;
      }
      goto label_0410019c;
    }
    uStack_530 = 0x41001b6;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown force mode: ");
    uStack_530 = 0x41001c3;
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value,(MethodInfo *)0x0);
  }
  uStack_530 = 0x4100203;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  uStack_530 = 0x410020b;
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  uStack_530 = 0x410021b;
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  uStack_530 = 0x4100227;
  lVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddForce);
  uStack_530 = 0x4100232;
  uStack_530 = il2cpp_runtime_helper_022b2b10();
  pCVar20 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(pCVar20,0.0,activeTime,(MethodInfo *)0x0);
    return extraout_RAX_26;
  }
  pCStack_538 = (Characters_BaseCharacter_o *)0x410025d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_548 = pSVar11;
  pSStack_540 = pSVar17;
  pCStack_538 = pCVar21;
  if (g_data_057ac85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_Outline_Mode);
    g_data_057ac85d = '\x01';
  }
  iStack_56c = 0;
  if (lVar16 == 0) {
    auStack_558 = ZEXT816(0x3f8000003f800000);
    auStack_568 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
joined_r0x0410033e:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_Enum__TryParse_Int32Enum_(value_00,&iStack_56c,MethodInfo_Boolean_TryParse_Outline_Mode);
    auVar7 = auStack_558;
    auVar6 = auStack_568;
    if ((char)bVar8 == '\0') goto label_04100347;
    pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      UVar34.fields.b = (float)auStack_568._0_4_;
      UVar34.fields.a = (float)auStack_568._4_4_;
      UVar34.fields.r = (float)auStack_558._0_4_;
      UVar34.fields.g = (float)auStack_558._4_4_;
      auStack_568 = auVar6;
      auStack_558 = auVar7;
      Characters_BaseCharacter__AddOutlineWithColor(pCVar21,UVar34,iStack_56c,(MethodInfo *)0x0);
      return extraout_RAX_27;
    }
  }
  else if (*(Utility_Color255_o **)(lVar16 + 0x30) != (Utility_Color255_o *)0x0) {
    UVar34 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    auStack_558._8_4_ = extraout_XMM0_Dc;
    auStack_558._0_8_ = UVar34.fields._0_8_;
    auStack_558._12_4_ = extraout_XMM0_Dd;
    auStack_568._8_4_ = in_XMM1_Dc;
    auStack_568._0_8_ = UVar34.fields._8_8_;
    auStack_568._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
    goto joined_r0x0410033e;
  }
  il2cpp_runtime_helper_022b2c90();
label_04100347:
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown outline mode: ");
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value_00,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOutline);
  il2cpp_runtime_helper_022b2b10();
  pCVar21 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    bVar8 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                      ((CustomLogic_CustomLogicCharacterBuiltin_o *)pCVar21,(Il2CppObject *)pCVar21,pIVar9,
                       method);
    return (Il2CppObject *)CONCAT44(extraout_var_30,bVar8);
  }
  Characters_BaseCharacter__RemoveOutline(pCVar21,(MethodInfo *)0x0);
  return extraout_RAX_28;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40feb30

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *player;
  void *pvVar3;
  UnityEngine_Transform_o *pUVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *vtableDispatch;
  undefined1 uVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  undefined4 extraout_var_02;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var_03;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_03;
  undefined4 extraout_var_04;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_05;
  Il2CppObject *extraout_RAX_05;
  undefined4 extraout_var_06;
  Il2CppObject *extraout_RAX_06;
  undefined4 extraout_var_07;
  Il2CppObject *extraout_RAX_07;
  undefined4 extraout_var_08;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  undefined4 extraout_var_09;
  Il2CppObject *extraout_RAX_10;
  undefined4 extraout_var_10;
  Il2CppObject *extraout_RAX_11;
  undefined4 extraout_var_11;
  Il2CppObject *extraout_RAX_12;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  System_String_o *pSVar11;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_04;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  Il2CppObject *extraout_RAX_13;
  undefined4 extraout_var_16;
  Il2CppObject *extraout_RAX_14;
  Il2CppObject *extraout_RAX_15;
  undefined4 extraout_var_17;
  Il2CppObject *extraout_RAX_16;
  undefined4 extraout_var_18;
  Il2CppObject *extraout_RAX_17;
  Il2CppObject *extraout_RAX_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  Il2CppObject *extraout_RAX_19;
  undefined4 extraout_var_21;
  Il2CppObject *extraout_RAX_20;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  Il2CppObject *extraout_RAX_21;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_22;
  undefined4 extraout_var_27;
  Il2CppObject *extraout_RAX_23;
  undefined4 extraout_var_28;
  Il2CppObject *extraout_RAX_24;
  undefined4 extraout_var_29;
  int32_t *piVar12;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_25;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_ArgumentException_o *pSVar15;
  long lVar16;
  Il2CppObject *extraout_RAX_26;
  Il2CppObject *extraout_RAX_27;
  Il2CppObject *extraout_RAX_28;
  undefined4 extraout_var_30;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  System_String_o *value;
  System_String_o *value_00;
  int32_t mode;
  System_String_o *pSVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *__this_05;
  Characters_BaseCharacter_o *pCVar20;
  Characters_BaseCharacter_o *pCVar21;
  Characters_BaseCharacter_o *__this_06;
  long *plVar22;
  long lVar23;
  Characters_AnimationHandler_o *pCVar24;
  Characters_AnimationHandler_o *pCVar25;
  UnityEngine_Rigidbody_o *pUVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float activeTime;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar33;
  UnityEngine_Color_o UVar34;
  int32_t iStack_564;
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [16];
  System_String_o *pSStack_540;
  System_String_o *pSStack_538;
  Characters_BaseCharacter_o *pCStack_530;
  undefined8 uStack_528;
  int32_t iStack_514;
  int32_t iStack_510;
  int32_t iStack_50c;
  long lStack_508;
  undefined8 uStack_38;
  
  if (__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Play(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac84f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass =
       (CustomLogic_BuiltinClassInstance_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__c);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((CustomLogic_BuiltinClassInstance_o *)__this)->fields).Variables;
  uStack_38 = CONCAT17(1,(undefined7)uStack_38);
  pSVar11 = (System_String_o *)((long)&uStack_38 + 7);
  lVar16 = g_data_057b9b98;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,"IsCharacter",pIVar9,MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar16 + 0x30) + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar21,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  if (pSVar11 == (System_String_o *)0x0) {
    pSVar11 = g_data_057b9c00->static_fields->Empty;
  }
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar20,pSVar11,(MethodInfo *)0x0);
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (lVar16 != 0) {
      pIVar9 = extraout_RAX_01;
      if (*(char *)(lVar16 + 0x78) != '\0') {
        if (extraout_DL == '\0') {
          pIVar9 = (Il2CppObject *)0x0;
        }
        else {
          bVar8 = System_String__IsNullOrWhiteSpace(*(System_String_o **)(lVar16 + 0x40),(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),(char)bVar8) ^ 1);
        }
        *(char *)(lVar16 + 0x48) = (char)pIVar9;
      }
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return *(Il2CppObject **)(lVar16 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  puVar18 = *(undefined8 **)&(pCVar20->fields).MaxFootstepDistance;
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[10] = pSVar11;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(puVar18 + 10);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar19 = puVar18;
  if (g_data_057ac850 == '\0') {
    puVar19 = &TypeInfo_CustomLogicPlayerBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac850 = '\x01';
  }
  if (((puVar18[6] != 0) && (lVar16 = *(long *)(puVar18[6] + 0x70), lVar16 != 0)) &&
     (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar16 + 0x80);
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = puVar19[6];
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x78));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac851 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac851 = '\x01';
  }
  x = (UnityEngine_Object_o *)puVar19[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (puVar19[6] != 0) {
    return (Il2CppObject *)(ulong)(*(char *)(puVar19[6] + 0x68) == '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (((x[2].klass != (UnityEngine_Object_c *)0x0) &&
      (pvVar3 = ((x[2].klass)->_1).interopData, pvVar3 != (void *)0x0)) &&
     (lVar16 = *(long *)((long)pvVar3 + 0x20), lVar16 != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x94);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = x[2].klass;
  if (__this_05 != (UnityEngine_Object_c *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = (__this_05->_1).this_arg.data;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMainCharacter(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_01,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac852 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicTransformBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac852 = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac853 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac853 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac854 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac854 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
      euler.fields.x = UVar32.fields.x * 57.29578;
      euler.fields.y = UVar32.fields.y * 57.29578;
      euler.fields.z = UVar32.fields.z * 57.29578;
      UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UVar32.fields.x = SUB84(pSVar17[2].klass,0) * 0.017453292;
      UVar32.fields.y = (float)((ulong)pSVar17[2].klass >> 0x20) * 0.017453292;
      UVar32.fields.z = *(float *)&pSVar17[2].monitor * 0.017453292;
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      UVar33 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar32,(MethodInfo *)0x0);
      in_XMM1_Da = UVar33.fields.z;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar4,UVar33,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac855 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac855 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      __this_03 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_03,UVar33,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar4,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac856 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac856 = '\x01';
  }
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    UVar32 = Characters_BaseCharacter__GetVelocity(pCVar21,(MethodInfo *)0x0);
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  __this_06 = (Characters_BaseCharacter_o *)0x0;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar8);
    }
    __this_06 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
      pSVar11 = (System_String_o *)0x0;
      Characters_BaseCharacter__SetKinematic(__this_06,0,1.0,(MethodInfo *)0x0);
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         (pSVar17 != (System_String_o *)0x0)) {
        pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        __this_06 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar26 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar26,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = __this_06;
  if (g_data_057ac857 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac857 = '\x01';
  }
  lVar16 = *(long *)&(__this_06->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_forward
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac858 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac858 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_right
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_07;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac859 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac859 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_up(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_up
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_08;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xcc));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac85a = '\x01';
  }
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar22 + 0x728))();
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_01.fields.z = in_XMM1_Da;
    value_01.fields.x = (float)(int)uVar14;
    value_01.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_01,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar17 != (System_String_o *)0x0) {
    lVar16 = plVar22[6];
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar33 = UnityEngine_Quaternion__LookRotation_4debb20
                       ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),(MethodInfo *)0x0)
    ;
    UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
    euler_00.fields.x = UVar32.fields.x * 57.29578;
    euler_00.fields.y = UVar32.fields.y * 57.29578;
    euler_00.fields.z = UVar32.fields.z * 57.29578;
    plVar22 = (long *)0x0;
    UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    in_XMM1_Da = UVar32.fields.z;
    if (lVar16 != 0) {
      *(float *)(lVar16 + 200) = UVar32.fields.y;
      return extraout_RAX_09;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar22[6] != 0) {
    return *(Il2CppObject **)(plVar22[6] + 0x88);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar8);
    }
    if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam((Characters_BaseCharacter_o *)plVar22[6],pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_10;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_10,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_11;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_12;
    }
  }
  lVar23 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)(lVar23 + 0x30);
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x69));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar23 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    uVar5 = SUB81(pSVar11,0);
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_12,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar23 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(undefined1 *)((long)&pIVar9[6].monitor + 1) = uVar5;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x6c);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar8);
    }
    pIVar9 = *(Il2CppObject **)&(pCVar21->fields).MaxFootstepDistance;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(int *)((long)&pIVar9[6].monitor + 4) = (int)pSVar11;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = Characters_BaseCharacter__GetCurrentAnimation(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xc4));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac85b == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicRigidbodyBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac85b = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
    __this_04 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_3ff72f0
              (__this_04,(CustomLogic_BuiltinClassInstance_o *)pCVar21,pUVar26,method);
    return (Il2CppObject *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x6a8))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = (long *)plVar22[6];
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x698))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
    }
    plVar22 = (long *)plVar22[6];
    if (plVar22 != (long *)0x0) {
      if ((char)plVar22[0xd] != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x598);
      pIVar9 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (plVar22,pSVar17,*(undefined8 *)(*plVar22 + 0x5a0),UNRECOVERED_JUMPTABLE_00);
      return pIVar9;
    }
  }
  lVar16 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar11,fVar28,0.0,(MethodInfo *)0x0);
      return extraout_RAX_13;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  fVar28 = in_XMM1_Da;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
      }
      if (extraout_DL_00 == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_15;
      }
      Characters_BaseCharacter__CrossFade(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_14;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
      }
      Characters_BaseCharacter__GetAnimationSpeed(pCVar21,pSVar11,(MethodInfo *)0x0);
      return extraout_RAX_16;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
      }
      if (extraout_DL_01 == '\0') {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_18;
      }
      Characters_BaseCharacter__SetAnimationSpeed(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_17;
    }
  }
  pCVar24 = (Characters_AnimationHandler_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  if (pSVar17 != (System_String_o *)0x0) {
    pCVar25 = pSVar17[7].monitor;
    pCVar24 = (Characters_AnimationHandler_o *)0x0;
    if (pCVar25 != (Characters_AnimationHandler_o *)0x0) {
      bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  pCVar25 = pCVar24;
  if ((pSVar17 != (System_String_o *)0x0) &&
     (pCVar25 = pSVar17[7].monitor, pCVar25 != (Characters_AnimationHandler_o *)0x0)) {
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar8);
    }
    pSVar17 = (pCVar24->fields)._currentAnimation;
    if (pSVar17 != (System_String_o *)0x0) {
      pCVar24 = pSVar17[7].monitor;
      pCVar25 = (Characters_AnimationHandler_o *)0x0;
      if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar24,(MethodInfo *)0x0);
        return extraout_RAX_19;
      }
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2c90();
  pCVar21 = (Characters_BaseCharacter_o *)(pCVar25->fields)._currentAnimation;
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
    }
    pSVar13 = (pCVar25->fields)._currentAnimation;
    if (pSVar13 != (System_String_o *)0x0) {
      if (*(char *)&pSVar13[4].monitor != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
      }
      vtableDispatch = pSVar13->klass[1].vtable._24_ToString.method;
      pIVar9 = (Il2CppObject *)
               (*(code *)vtableDispatch)
                         (uVar30,pSVar13,pSVar11,
                          pSVar13->klass[1].vtable._25_System_IConvertible_ToType.methodPtr,
                          vtableDispatch);
      return pIVar9;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    pCVar24 = *(Characters_AnimationHandler_o **)(*(long *)(lVar16 + 0x30) + 0xb0);
    lVar16 = 0;
    if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetLength(pCVar24,pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar17,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_22,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
      }
      pSVar11 = pSVar17;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar17,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_24,bVar8);
      }
      pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
      if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar21,pSVar17,(MethodInfo *)0x0);
        return extraout_RAX_21;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
      }
      pSVar17 = pSVar11;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar8);
      }
      if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__StopSound
                  (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),pSVar11,(MethodInfo *)0x0);
        return extraout_RAX_22;
      }
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
      }
      Characters_BaseCharacter__FadeSound(pCVar21,pSVar17,fVar29,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_23;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_28,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar16 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar9[6].monitor != '\0') {
        return pIVar9;
      }
      if ((pIVar9[7].klass != (Il2CppClass *)0x0) && (pSVar11 != (System_String_o *)0x0)) {
        pUVar4 = (UnityEngine_Transform_o *)((pIVar9[7].klass)->_1).name;
        pCVar21 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__LookAt_4e0aa40
                    (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_24;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_508 = lVar16;
  if (g_data_057ac85c == '\0') {
    uStack_528 = 0x40fffec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ForceMode);
    uStack_528 = 0x40ffff8;
    il2cpp_runtime_helper_023445d0(&TypeRef_ForceMode);
    g_data_057ac85c = '\x01';
  }
  iStack_514 = 0;
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = value;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
label_0410019c:
    uStack_528 = 0x41001a1;
    il2cpp_runtime_helper_022b2c90();
label_041001a1:
    puVar27 = &"Invalid force mode: {0}";
label_041001e2:
    uStack_528 = 0x41001e7;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar27);
    uStack_528 = 0x41001f4;
    pSVar11 = System_String__Format(pSVar13,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    uStack_528 = 0x410001b;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_29,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_0410019c;
    uStack_528 = 0x4100041;
    Characters_BaseCharacter__SetKinematic(pCVar20,0,1.0,(MethodInfo *)0x0);
    if (value == (System_String_o *)0x0) goto label_041001a1;
    if (value->klass == g_data_057b9bb8) {
      uStack_528 = 0x41000ec;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      handle.fields.value = TypeRef_ForceMode.fields.value;
      mode = *piVar12;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        uStack_528 = 0x410010e;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_528 = 0x4100118;
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_528 = 0x410012e;
      iStack_50c = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_50c);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        uStack_528 = 0x4100146;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_528 = 0x4100153;
      bVar8 = System_Enum__IsDefined(enumType,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
        if ((((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
            (pSVar17 != (System_String_o *)0x0)) &&
           (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0)
           ) {
          fVar28 = *(float *)&pSVar17[2].monitor;
          uVar30 = SUB84(pSVar17[2].klass,0);
          uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
label_04100186:
          uStack_528 = 0x410018d;
          force.fields.y = (float)uVar31;
          force.fields.x = (float)uVar30;
          force.fields.z = fVar28;
          UnityEngine_Rigidbody__AddForce(pUVar26,force,mode,(MethodInfo *)0x0);
          return extraout_RAX_25;
        }
        goto label_0410019c;
      }
      uStack_528 = 0x41001d8;
      iStack_510 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_510);
      puVar27 = &"Unknown force mode: {0}";
      goto label_041001e2;
    }
    if (value->klass != g_data_057b9c00) goto label_041001a1;
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      uStack_528 = 0x4100080;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_528 = 0x4100097;
    bVar8 = System_Enum__TryParse_Int32Enum_(value,&iStack_514,MethodInfo_Boolean_TryParse_ForceMode);
    if ((char)bVar8 != '\0') {
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         ((pSVar17 != (System_String_o *)0x0 &&
          (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0))
         )) {
        fVar28 = *(float *)&pSVar17[2].monitor;
        uVar30 = SUB84(pSVar17[2].klass,0);
        uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
        mode = iStack_514;
        goto label_04100186;
      }
      goto label_0410019c;
    }
    uStack_528 = 0x41001b6;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown force mode: ");
    uStack_528 = 0x41001c3;
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value,(MethodInfo *)0x0);
  }
  uStack_528 = 0x4100203;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  uStack_528 = 0x410020b;
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  uStack_528 = 0x410021b;
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  uStack_528 = 0x4100227;
  lVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddForce);
  uStack_528 = 0x4100232;
  uStack_528 = il2cpp_runtime_helper_022b2b10();
  pCVar20 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(pCVar20,0.0,activeTime,(MethodInfo *)0x0);
    return extraout_RAX_26;
  }
  pCStack_530 = (Characters_BaseCharacter_o *)0x410025d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_540 = pSVar11;
  pSStack_538 = pSVar17;
  pCStack_530 = pCVar21;
  if (g_data_057ac85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_Outline_Mode);
    g_data_057ac85d = '\x01';
  }
  iStack_564 = 0;
  if (lVar16 == 0) {
    auStack_550 = ZEXT816(0x3f8000003f800000);
    auStack_560 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
joined_r0x0410033e:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_Enum__TryParse_Int32Enum_(value_00,&iStack_564,MethodInfo_Boolean_TryParse_Outline_Mode);
    auVar7 = auStack_550;
    auVar6 = auStack_560;
    if ((char)bVar8 == '\0') goto label_04100347;
    pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      UVar34.fields.b = (float)auStack_560._0_4_;
      UVar34.fields.a = (float)auStack_560._4_4_;
      UVar34.fields.r = (float)auStack_550._0_4_;
      UVar34.fields.g = (float)auStack_550._4_4_;
      auStack_560 = auVar6;
      auStack_550 = auVar7;
      Characters_BaseCharacter__AddOutlineWithColor(pCVar21,UVar34,iStack_564,(MethodInfo *)0x0);
      return extraout_RAX_27;
    }
  }
  else if (*(Utility_Color255_o **)(lVar16 + 0x30) != (Utility_Color255_o *)0x0) {
    UVar34 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    auStack_550._8_4_ = extraout_XMM0_Dc;
    auStack_550._0_8_ = UVar34.fields._0_8_;
    auStack_550._12_4_ = extraout_XMM0_Dd;
    auStack_560._8_4_ = in_XMM1_Dc;
    auStack_560._0_8_ = UVar34.fields._8_8_;
    auStack_560._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
    goto joined_r0x0410033e;
  }
  il2cpp_runtime_helper_022b2c90();
label_04100347:
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown outline mode: ");
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value_00,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOutline);
  il2cpp_runtime_helper_022b2b10();
  pCVar21 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    bVar8 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                      ((CustomLogic_CustomLogicCharacterBuiltin_o *)pCVar21,(Il2CppObject *)pCVar21,pIVar9,
                       method);
    return (Il2CppObject *)CONCAT44(extraout_var_30,bVar8);
  }
  Characters_BaseCharacter__RemoveOutline(pCVar21,(MethodInfo *)0x0);
  return extraout_RAX_28;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Prepare>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40feb50

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *player;
  void *pvVar3;
  UnityEngine_Transform_o *pUVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *vtableDispatch;
  undefined1 uVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  undefined4 extraout_var_02;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var_03;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_03;
  undefined4 extraout_var_04;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_05;
  Il2CppObject *extraout_RAX_05;
  undefined4 extraout_var_06;
  Il2CppObject *extraout_RAX_06;
  undefined4 extraout_var_07;
  Il2CppObject *extraout_RAX_07;
  undefined4 extraout_var_08;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  undefined4 extraout_var_09;
  Il2CppObject *extraout_RAX_10;
  undefined4 extraout_var_10;
  Il2CppObject *extraout_RAX_11;
  undefined4 extraout_var_11;
  Il2CppObject *extraout_RAX_12;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  System_String_o *pSVar11;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_04;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  Il2CppObject *extraout_RAX_13;
  undefined4 extraout_var_16;
  Il2CppObject *extraout_RAX_14;
  Il2CppObject *extraout_RAX_15;
  undefined4 extraout_var_17;
  Il2CppObject *extraout_RAX_16;
  undefined4 extraout_var_18;
  Il2CppObject *extraout_RAX_17;
  Il2CppObject *extraout_RAX_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  Il2CppObject *extraout_RAX_19;
  undefined4 extraout_var_21;
  Il2CppObject *extraout_RAX_20;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  Il2CppObject *extraout_RAX_21;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_22;
  undefined4 extraout_var_27;
  Il2CppObject *extraout_RAX_23;
  undefined4 extraout_var_28;
  Il2CppObject *extraout_RAX_24;
  undefined4 extraout_var_29;
  int32_t *piVar12;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_25;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_ArgumentException_o *pSVar15;
  long lVar16;
  Il2CppObject *extraout_RAX_26;
  Il2CppObject *extraout_RAX_27;
  Il2CppObject *extraout_RAX_28;
  undefined4 extraout_var_30;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  System_String_o *value;
  System_String_o *value_00;
  int32_t mode;
  System_String_o *pSVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *__this_05;
  Characters_BaseCharacter_o *pCVar20;
  Characters_BaseCharacter_o *pCVar21;
  Characters_BaseCharacter_o *__this_06;
  long *plVar22;
  long lVar23;
  Characters_AnimationHandler_o *pCVar24;
  Characters_AnimationHandler_o *pCVar25;
  UnityEngine_Rigidbody_o *pUVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float activeTime;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar33;
  UnityEngine_Color_o UVar34;
  int32_t iStack_55c;
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [16];
  System_String_o *pSStack_538;
  System_String_o *pSStack_530;
  Characters_BaseCharacter_o *pCStack_528;
  undefined8 uStack_520;
  int32_t iStack_50c;
  int32_t iStack_508;
  int32_t iStack_504;
  long lStack_500;
  undefined8 uStack_30;
  
  if (__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac84f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass =
       (CustomLogic_BuiltinClassInstance_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__c);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((CustomLogic_BuiltinClassInstance_o *)__this)->fields).Variables;
  uStack_30 = CONCAT17(1,(undefined7)uStack_30);
  pSVar11 = (System_String_o *)((long)&uStack_30 + 7);
  lVar16 = g_data_057b9b98;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,"IsCharacter",pIVar9,MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar16 + 0x30) + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar21,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  if (pSVar11 == (System_String_o *)0x0) {
    pSVar11 = g_data_057b9c00->static_fields->Empty;
  }
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar20,pSVar11,(MethodInfo *)0x0);
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (lVar16 != 0) {
      pIVar9 = extraout_RAX_01;
      if (*(char *)(lVar16 + 0x78) != '\0') {
        if (extraout_DL == '\0') {
          pIVar9 = (Il2CppObject *)0x0;
        }
        else {
          bVar8 = System_String__IsNullOrWhiteSpace(*(System_String_o **)(lVar16 + 0x40),(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),(char)bVar8) ^ 1);
        }
        *(char *)(lVar16 + 0x48) = (char)pIVar9;
      }
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return *(Il2CppObject **)(lVar16 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  puVar18 = *(undefined8 **)&(pCVar20->fields).MaxFootstepDistance;
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[10] = pSVar11;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(puVar18 + 10);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar19 = puVar18;
  if (g_data_057ac850 == '\0') {
    puVar19 = &TypeInfo_CustomLogicPlayerBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac850 = '\x01';
  }
  if (((puVar18[6] != 0) && (lVar16 = *(long *)(puVar18[6] + 0x70), lVar16 != 0)) &&
     (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar16 + 0x80);
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = puVar19[6];
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x78));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac851 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac851 = '\x01';
  }
  x = (UnityEngine_Object_o *)puVar19[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (puVar19[6] != 0) {
    return (Il2CppObject *)(ulong)(*(char *)(puVar19[6] + 0x68) == '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (((x[2].klass != (UnityEngine_Object_c *)0x0) &&
      (pvVar3 = ((x[2].klass)->_1).interopData, pvVar3 != (void *)0x0)) &&
     (lVar16 = *(long *)((long)pvVar3 + 0x20), lVar16 != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x94);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = x[2].klass;
  if (__this_05 != (UnityEngine_Object_c *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = (__this_05->_1).this_arg.data;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMainCharacter(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_01,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac852 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicTransformBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac852 = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac853 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac853 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac854 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac854 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
      euler.fields.x = UVar32.fields.x * 57.29578;
      euler.fields.y = UVar32.fields.y * 57.29578;
      euler.fields.z = UVar32.fields.z * 57.29578;
      UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UVar32.fields.x = SUB84(pSVar17[2].klass,0) * 0.017453292;
      UVar32.fields.y = (float)((ulong)pSVar17[2].klass >> 0x20) * 0.017453292;
      UVar32.fields.z = *(float *)&pSVar17[2].monitor * 0.017453292;
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      UVar33 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar32,(MethodInfo *)0x0);
      in_XMM1_Da = UVar33.fields.z;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar4,UVar33,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac855 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac855 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      __this_03 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_03,UVar33,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar4,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac856 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac856 = '\x01';
  }
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    UVar32 = Characters_BaseCharacter__GetVelocity(pCVar21,(MethodInfo *)0x0);
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  __this_06 = (Characters_BaseCharacter_o *)0x0;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar8);
    }
    __this_06 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
      pSVar11 = (System_String_o *)0x0;
      Characters_BaseCharacter__SetKinematic(__this_06,0,1.0,(MethodInfo *)0x0);
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         (pSVar17 != (System_String_o *)0x0)) {
        pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        __this_06 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar26 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar26,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = __this_06;
  if (g_data_057ac857 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac857 = '\x01';
  }
  lVar16 = *(long *)&(__this_06->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_forward
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac858 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac858 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_right
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_07;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac859 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac859 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_up(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_up
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_08;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xcc));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac85a = '\x01';
  }
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar22 + 0x728))();
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_01.fields.z = in_XMM1_Da;
    value_01.fields.x = (float)(int)uVar14;
    value_01.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_01,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar17 != (System_String_o *)0x0) {
    lVar16 = plVar22[6];
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar33 = UnityEngine_Quaternion__LookRotation_4debb20
                       ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),(MethodInfo *)0x0)
    ;
    UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
    euler_00.fields.x = UVar32.fields.x * 57.29578;
    euler_00.fields.y = UVar32.fields.y * 57.29578;
    euler_00.fields.z = UVar32.fields.z * 57.29578;
    plVar22 = (long *)0x0;
    UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    in_XMM1_Da = UVar32.fields.z;
    if (lVar16 != 0) {
      *(float *)(lVar16 + 200) = UVar32.fields.y;
      return extraout_RAX_09;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar22[6] != 0) {
    return *(Il2CppObject **)(plVar22[6] + 0x88);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar8);
    }
    if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam((Characters_BaseCharacter_o *)plVar22[6],pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_10;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_10,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_11;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_12;
    }
  }
  lVar23 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)(lVar23 + 0x30);
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x69));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar23 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    uVar5 = SUB81(pSVar11,0);
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_12,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar23 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(undefined1 *)((long)&pIVar9[6].monitor + 1) = uVar5;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x6c);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar8);
    }
    pIVar9 = *(Il2CppObject **)&(pCVar21->fields).MaxFootstepDistance;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(int *)((long)&pIVar9[6].monitor + 4) = (int)pSVar11;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = Characters_BaseCharacter__GetCurrentAnimation(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xc4));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac85b == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicRigidbodyBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac85b = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
    __this_04 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_3ff72f0
              (__this_04,(CustomLogic_BuiltinClassInstance_o *)pCVar21,pUVar26,method);
    return (Il2CppObject *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x6a8))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = (long *)plVar22[6];
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x698))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
    }
    plVar22 = (long *)plVar22[6];
    if (plVar22 != (long *)0x0) {
      if ((char)plVar22[0xd] != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x598);
      pIVar9 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (plVar22,pSVar17,*(undefined8 *)(*plVar22 + 0x5a0),UNRECOVERED_JUMPTABLE_00);
      return pIVar9;
    }
  }
  lVar16 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar11,fVar28,0.0,(MethodInfo *)0x0);
      return extraout_RAX_13;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  fVar28 = in_XMM1_Da;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
      }
      if (extraout_DL_00 == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_15;
      }
      Characters_BaseCharacter__CrossFade(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_14;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
      }
      Characters_BaseCharacter__GetAnimationSpeed(pCVar21,pSVar11,(MethodInfo *)0x0);
      return extraout_RAX_16;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
      }
      if (extraout_DL_01 == '\0') {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_18;
      }
      Characters_BaseCharacter__SetAnimationSpeed(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_17;
    }
  }
  pCVar24 = (Characters_AnimationHandler_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  if (pSVar17 != (System_String_o *)0x0) {
    pCVar25 = pSVar17[7].monitor;
    pCVar24 = (Characters_AnimationHandler_o *)0x0;
    if (pCVar25 != (Characters_AnimationHandler_o *)0x0) {
      bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  pCVar25 = pCVar24;
  if ((pSVar17 != (System_String_o *)0x0) &&
     (pCVar25 = pSVar17[7].monitor, pCVar25 != (Characters_AnimationHandler_o *)0x0)) {
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar8);
    }
    pSVar17 = (pCVar24->fields)._currentAnimation;
    if (pSVar17 != (System_String_o *)0x0) {
      pCVar24 = pSVar17[7].monitor;
      pCVar25 = (Characters_AnimationHandler_o *)0x0;
      if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar24,(MethodInfo *)0x0);
        return extraout_RAX_19;
      }
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2c90();
  pCVar21 = (Characters_BaseCharacter_o *)(pCVar25->fields)._currentAnimation;
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
    }
    pSVar13 = (pCVar25->fields)._currentAnimation;
    if (pSVar13 != (System_String_o *)0x0) {
      if (*(char *)&pSVar13[4].monitor != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
      }
      vtableDispatch = pSVar13->klass[1].vtable._24_ToString.method;
      pIVar9 = (Il2CppObject *)
               (*(code *)vtableDispatch)
                         (uVar30,pSVar13,pSVar11,
                          pSVar13->klass[1].vtable._25_System_IConvertible_ToType.methodPtr,
                          vtableDispatch);
      return pIVar9;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    pCVar24 = *(Characters_AnimationHandler_o **)(*(long *)(lVar16 + 0x30) + 0xb0);
    lVar16 = 0;
    if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetLength(pCVar24,pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar17,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_22,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
      }
      pSVar11 = pSVar17;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar17,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_24,bVar8);
      }
      pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
      if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar21,pSVar17,(MethodInfo *)0x0);
        return extraout_RAX_21;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
      }
      pSVar17 = pSVar11;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar8);
      }
      if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__StopSound
                  (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),pSVar11,(MethodInfo *)0x0);
        return extraout_RAX_22;
      }
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
      }
      Characters_BaseCharacter__FadeSound(pCVar21,pSVar17,fVar29,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_23;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_28,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar16 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar9[6].monitor != '\0') {
        return pIVar9;
      }
      if ((pIVar9[7].klass != (Il2CppClass *)0x0) && (pSVar11 != (System_String_o *)0x0)) {
        pUVar4 = (UnityEngine_Transform_o *)((pIVar9[7].klass)->_1).name;
        pCVar21 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__LookAt_4e0aa40
                    (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_24;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_500 = lVar16;
  if (g_data_057ac85c == '\0') {
    uStack_520 = 0x40fffec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ForceMode);
    uStack_520 = 0x40ffff8;
    il2cpp_runtime_helper_023445d0(&TypeRef_ForceMode);
    g_data_057ac85c = '\x01';
  }
  iStack_50c = 0;
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = value;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
label_0410019c:
    uStack_520 = 0x41001a1;
    il2cpp_runtime_helper_022b2c90();
label_041001a1:
    puVar27 = &"Invalid force mode: {0}";
label_041001e2:
    uStack_520 = 0x41001e7;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar27);
    uStack_520 = 0x41001f4;
    pSVar11 = System_String__Format(pSVar13,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    uStack_520 = 0x410001b;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_29,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_0410019c;
    uStack_520 = 0x4100041;
    Characters_BaseCharacter__SetKinematic(pCVar20,0,1.0,(MethodInfo *)0x0);
    if (value == (System_String_o *)0x0) goto label_041001a1;
    if (value->klass == g_data_057b9bb8) {
      uStack_520 = 0x41000ec;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      handle.fields.value = TypeRef_ForceMode.fields.value;
      mode = *piVar12;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        uStack_520 = 0x410010e;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_520 = 0x4100118;
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_520 = 0x410012e;
      iStack_504 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_504);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        uStack_520 = 0x4100146;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_520 = 0x4100153;
      bVar8 = System_Enum__IsDefined(enumType,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
        if ((((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
            (pSVar17 != (System_String_o *)0x0)) &&
           (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0)
           ) {
          fVar28 = *(float *)&pSVar17[2].monitor;
          uVar30 = SUB84(pSVar17[2].klass,0);
          uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
label_04100186:
          uStack_520 = 0x410018d;
          force.fields.y = (float)uVar31;
          force.fields.x = (float)uVar30;
          force.fields.z = fVar28;
          UnityEngine_Rigidbody__AddForce(pUVar26,force,mode,(MethodInfo *)0x0);
          return extraout_RAX_25;
        }
        goto label_0410019c;
      }
      uStack_520 = 0x41001d8;
      iStack_508 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_508);
      puVar27 = &"Unknown force mode: {0}";
      goto label_041001e2;
    }
    if (value->klass != g_data_057b9c00) goto label_041001a1;
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      uStack_520 = 0x4100080;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_520 = 0x4100097;
    bVar8 = System_Enum__TryParse_Int32Enum_(value,&iStack_50c,MethodInfo_Boolean_TryParse_ForceMode);
    if ((char)bVar8 != '\0') {
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         ((pSVar17 != (System_String_o *)0x0 &&
          (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0))
         )) {
        fVar28 = *(float *)&pSVar17[2].monitor;
        uVar30 = SUB84(pSVar17[2].klass,0);
        uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
        mode = iStack_50c;
        goto label_04100186;
      }
      goto label_0410019c;
    }
    uStack_520 = 0x41001b6;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown force mode: ");
    uStack_520 = 0x41001c3;
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value,(MethodInfo *)0x0);
  }
  uStack_520 = 0x4100203;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  uStack_520 = 0x410020b;
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  uStack_520 = 0x410021b;
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  uStack_520 = 0x4100227;
  lVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddForce);
  uStack_520 = 0x4100232;
  uStack_520 = il2cpp_runtime_helper_022b2b10();
  pCVar20 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(pCVar20,0.0,activeTime,(MethodInfo *)0x0);
    return extraout_RAX_26;
  }
  pCStack_528 = (Characters_BaseCharacter_o *)0x410025d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_538 = pSVar11;
  pSStack_530 = pSVar17;
  pCStack_528 = pCVar21;
  if (g_data_057ac85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_Outline_Mode);
    g_data_057ac85d = '\x01';
  }
  iStack_55c = 0;
  if (lVar16 == 0) {
    auStack_548 = ZEXT816(0x3f8000003f800000);
    auStack_558 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
joined_r0x0410033e:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_Enum__TryParse_Int32Enum_(value_00,&iStack_55c,MethodInfo_Boolean_TryParse_Outline_Mode);
    auVar7 = auStack_548;
    auVar6 = auStack_558;
    if ((char)bVar8 == '\0') goto label_04100347;
    pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      UVar34.fields.b = (float)auStack_558._0_4_;
      UVar34.fields.a = (float)auStack_558._4_4_;
      UVar34.fields.r = (float)auStack_548._0_4_;
      UVar34.fields.g = (float)auStack_548._4_4_;
      auStack_558 = auVar6;
      auStack_548 = auVar7;
      Characters_BaseCharacter__AddOutlineWithColor(pCVar21,UVar34,iStack_55c,(MethodInfo *)0x0);
      return extraout_RAX_27;
    }
  }
  else if (*(Utility_Color255_o **)(lVar16 + 0x30) != (Utility_Color255_o *)0x0) {
    UVar34 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    auStack_548._8_4_ = extraout_XMM0_Dc;
    auStack_548._0_8_ = UVar34.fields._0_8_;
    auStack_548._12_4_ = extraout_XMM0_Dd;
    auStack_558._8_4_ = in_XMM1_Dc;
    auStack_558._0_8_ = UVar34.fields._8_8_;
    auStack_558._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
    goto joined_r0x0410033e;
  }
  il2cpp_runtime_helper_022b2c90();
label_04100347:
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown outline mode: ");
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value_00,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOutline);
  il2cpp_runtime_helper_022b2b10();
  pCVar21 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    bVar8 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                      ((CustomLogic_CustomLogicCharacterBuiltin_o *)pCVar21,(Il2CppObject *)pCVar21,pIVar9,
                       method);
    return (Il2CppObject *)CONCAT44(extraout_var_30,bVar8);
  }
  Characters_BaseCharacter__RemoveOutline(pCVar21,(MethodInfo *)0x0);
  return extraout_RAX_28;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__StepForward>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40feb70

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *player;
  void *pvVar3;
  UnityEngine_Transform_o *pUVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *vtableDispatch;
  undefined1 uVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  undefined4 extraout_var_02;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var_03;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_03;
  undefined4 extraout_var_04;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_05;
  Il2CppObject *extraout_RAX_05;
  undefined4 extraout_var_06;
  Il2CppObject *extraout_RAX_06;
  undefined4 extraout_var_07;
  Il2CppObject *extraout_RAX_07;
  undefined4 extraout_var_08;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  undefined4 extraout_var_09;
  Il2CppObject *extraout_RAX_10;
  undefined4 extraout_var_10;
  Il2CppObject *extraout_RAX_11;
  undefined4 extraout_var_11;
  Il2CppObject *extraout_RAX_12;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  System_String_o *pSVar11;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_04;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  Il2CppObject *extraout_RAX_13;
  undefined4 extraout_var_16;
  Il2CppObject *extraout_RAX_14;
  Il2CppObject *extraout_RAX_15;
  undefined4 extraout_var_17;
  Il2CppObject *extraout_RAX_16;
  undefined4 extraout_var_18;
  Il2CppObject *extraout_RAX_17;
  Il2CppObject *extraout_RAX_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  Il2CppObject *extraout_RAX_19;
  undefined4 extraout_var_21;
  Il2CppObject *extraout_RAX_20;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  Il2CppObject *extraout_RAX_21;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_22;
  undefined4 extraout_var_27;
  Il2CppObject *extraout_RAX_23;
  undefined4 extraout_var_28;
  Il2CppObject *extraout_RAX_24;
  undefined4 extraout_var_29;
  int32_t *piVar12;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_25;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_ArgumentException_o *pSVar15;
  long lVar16;
  Il2CppObject *extraout_RAX_26;
  Il2CppObject *extraout_RAX_27;
  Il2CppObject *extraout_RAX_28;
  undefined4 extraout_var_30;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  System_String_o *value;
  System_String_o *value_00;
  int32_t mode;
  System_String_o *pSVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *__this_05;
  Characters_BaseCharacter_o *pCVar20;
  Characters_BaseCharacter_o *pCVar21;
  Characters_BaseCharacter_o *__this_06;
  long *plVar22;
  long lVar23;
  Characters_AnimationHandler_o *pCVar24;
  Characters_AnimationHandler_o *pCVar25;
  UnityEngine_Rigidbody_o *pUVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float activeTime;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar33;
  UnityEngine_Color_o UVar34;
  int32_t iStack_554;
  undefined1 auStack_550 [16];
  undefined1 auStack_540 [16];
  System_String_o *pSStack_530;
  System_String_o *pSStack_528;
  Characters_BaseCharacter_o *pCStack_520;
  undefined8 uStack_518;
  int32_t iStack_504;
  int32_t iStack_500;
  int32_t iStack_4fc;
  long lStack_4f8;
  undefined8 uStack_28;
  
  if (__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) {
    pUVar2 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_BuiltinClassInstance_c *)__c != (CustomLogic_BuiltinClassInstance_c *)0x0) {
    pUVar2 = *(UnityEngine_Video_VideoPlayer_o **)
              &(((CustomLogic_BuiltinClassInstance_c *)__c)->_1).this_arg.bits;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac84f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass =
       (CustomLogic_BuiltinClassInstance_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__c);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((CustomLogic_BuiltinClassInstance_o *)__this)->fields).Variables;
  uStack_28 = CONCAT17(1,(undefined7)uStack_28);
  pSVar11 = (System_String_o *)((long)&uStack_28 + 7);
  lVar16 = g_data_057b9b98;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,"IsCharacter",pIVar9,MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar16 + 0x30) + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar21,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  if (pSVar11 == (System_String_o *)0x0) {
    pSVar11 = g_data_057b9c00->static_fields->Empty;
  }
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar20,pSVar11,(MethodInfo *)0x0);
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (lVar16 != 0) {
      pIVar9 = extraout_RAX_01;
      if (*(char *)(lVar16 + 0x78) != '\0') {
        if (extraout_DL == '\0') {
          pIVar9 = (Il2CppObject *)0x0;
        }
        else {
          bVar8 = System_String__IsNullOrWhiteSpace(*(System_String_o **)(lVar16 + 0x40),(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),(char)bVar8) ^ 1);
        }
        *(char *)(lVar16 + 0x48) = (char)pIVar9;
      }
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return *(Il2CppObject **)(lVar16 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  puVar18 = *(undefined8 **)&(pCVar20->fields).MaxFootstepDistance;
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[10] = pSVar11;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(puVar18 + 10);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar19 = puVar18;
  if (g_data_057ac850 == '\0') {
    puVar19 = &TypeInfo_CustomLogicPlayerBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac850 = '\x01';
  }
  if (((puVar18[6] != 0) && (lVar16 = *(long *)(puVar18[6] + 0x70), lVar16 != 0)) &&
     (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar16 + 0x80);
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = puVar19[6];
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x78));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac851 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac851 = '\x01';
  }
  x = (UnityEngine_Object_o *)puVar19[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (puVar19[6] != 0) {
    return (Il2CppObject *)(ulong)(*(char *)(puVar19[6] + 0x68) == '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (((x[2].klass != (UnityEngine_Object_c *)0x0) &&
      (pvVar3 = ((x[2].klass)->_1).interopData, pvVar3 != (void *)0x0)) &&
     (lVar16 = *(long *)((long)pvVar3 + 0x20), lVar16 != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x94);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = x[2].klass;
  if (__this_05 != (UnityEngine_Object_c *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = (__this_05->_1).this_arg.data;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsMainCharacter(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_01,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac852 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicTransformBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac852 = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac853 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac853 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac854 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac854 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
      euler.fields.x = UVar32.fields.x * 57.29578;
      euler.fields.y = UVar32.fields.y * 57.29578;
      euler.fields.z = UVar32.fields.z * 57.29578;
      UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UVar32.fields.x = SUB84(pSVar17[2].klass,0) * 0.017453292;
      UVar32.fields.y = (float)((ulong)pSVar17[2].klass >> 0x20) * 0.017453292;
      UVar32.fields.z = *(float *)&pSVar17[2].monitor * 0.017453292;
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      UVar33 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar32,(MethodInfo *)0x0);
      in_XMM1_Da = UVar33.fields.z;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar4,UVar33,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac855 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac855 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar33 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
      __this_03 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_03,UVar33,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar4,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac856 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac856 = '\x01';
  }
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    UVar32 = Characters_BaseCharacter__GetVelocity(pCVar21,(MethodInfo *)0x0);
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  __this_06 = (Characters_BaseCharacter_o *)0x0;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar8);
    }
    __this_06 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
      pSVar11 = (System_String_o *)0x0;
      Characters_BaseCharacter__SetKinematic(__this_06,0,1.0,(MethodInfo *)0x0);
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         (pSVar17 != (System_String_o *)0x0)) {
        pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        __this_06 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar26 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar26,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = __this_06;
  if (g_data_057ac857 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac857 = '\x01';
  }
  lVar16 = *(long *)&(__this_06->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_forward
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac858 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac858 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_right(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar17 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_right
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_07;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = pCVar20;
  if (g_data_057ac859 == '\0') {
    pCVar21 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac859 = '\x01';
  }
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    pCVar21 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_up(pUVar4,(MethodInfo *)0x0);
      pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar8);
    }
    lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
    if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
       (pSVar11 != (System_String_o *)0x0)) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
      pCVar20 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_up
                  (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_08;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xcc));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac85a = '\x01';
  }
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar22 + 0x728))();
    pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_01.fields.z = in_XMM1_Da;
    value_01.fields.x = (float)(int)uVar14;
    value_01.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar10,value_01,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar17 != (System_String_o *)0x0) {
    lVar16 = plVar22[6];
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar33 = UnityEngine_Quaternion__LookRotation_4debb20
                       ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar17 + 2),(MethodInfo *)0x0)
    ;
    UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar33,(MethodInfo *)0x0);
    euler_00.fields.x = UVar32.fields.x * 57.29578;
    euler_00.fields.y = UVar32.fields.y * 57.29578;
    euler_00.fields.z = UVar32.fields.z * 57.29578;
    plVar22 = (long *)0x0;
    UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    in_XMM1_Da = UVar32.fields.z;
    if (lVar16 != 0) {
      *(float *)(lVar16 + 200) = UVar32.fields.y;
      return extraout_RAX_09;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar22[6] != 0) {
    return *(Il2CppObject **)(plVar22[6] + 0x88);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar8);
    }
    if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam((Characters_BaseCharacter_o *)plVar22[6],pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_10;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_10,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_11;
    }
  }
  lVar16 = 0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    return pIVar9;
  }
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar8);
    }
    if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth
                (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(int)fVar28,(MethodInfo *)0x0);
      return extraout_RAX_12;
    }
  }
  lVar23 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)(lVar23 + 0x30);
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0x69));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar23 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    uVar5 = SUB81(pSVar11,0);
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_12,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar23 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(undefined1 *)((long)&pIVar9[6].monitor + 1) = uVar5;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar16 + 0x6c);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar17 = pSVar11;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar8);
    }
    pIVar9 = *(Il2CppObject **)&(pCVar21->fields).MaxFootstepDistance;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(int *)((long)&pIVar9[6].monitor + 4) = (int)pSVar11;
      return pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = Characters_BaseCharacter__GetCurrentAnimation(pCVar21,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if (lVar16 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar16 >> 8),*(undefined1 *)(lVar16 + 0xc4));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar21;
  if (g_data_057ac85b == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicRigidbodyBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac85b = '\x01';
  }
  lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
    pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
    __this_04 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_3ff72f0
              (__this_04,(CustomLogic_BuiltinClassInstance_o *)pCVar21,pUVar26,method);
    return (Il2CppObject *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = *(long **)&(pCVar20->fields).MaxFootstepDistance;
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x6a8))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar22 = (long *)plVar22[6];
  if (plVar22 != (long *)0x0) {
    pIVar9 = (Il2CppObject *)(**(code **)(*plVar22 + 0x698))();
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if ((Characters_BaseCharacter_o *)plVar22[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar22[6],(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
    }
    plVar22 = (long *)plVar22[6];
    if (plVar22 != (long *)0x0) {
      if ((char)plVar22[0xd] != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_14,bVar8);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x598);
      pIVar9 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (plVar22,pSVar17,*(undefined8 *)(*plVar22 + 0x5a0),UNRECOVERED_JUMPTABLE_00);
      return pIVar9;
    }
  }
  lVar16 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_15,bVar8);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar11,fVar28,0.0,(MethodInfo *)0x0);
      return extraout_RAX_13;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  fVar28 = in_XMM1_Da;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_16,bVar8);
      }
      if (extraout_DL_00 == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_15;
      }
      Characters_BaseCharacter__CrossFade(pCVar21,pSVar17,in_XMM1_Da,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_14;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_17,bVar8);
      }
      Characters_BaseCharacter__GetAnimationSpeed(pCVar21,pSVar11,(MethodInfo *)0x0);
      return extraout_RAX_16;
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_18,bVar8);
      }
      if (extraout_DL_01 == '\0') {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
        return extraout_RAX_18;
      }
      Characters_BaseCharacter__SetAnimationSpeed(pCVar21,pSVar17,fVar29,(MethodInfo *)0x0);
      return extraout_RAX_17;
    }
  }
  pCVar24 = (Characters_AnimationHandler_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  if (pSVar17 != (System_String_o *)0x0) {
    pCVar25 = pSVar17[7].monitor;
    pCVar24 = (Characters_AnimationHandler_o *)0x0;
    if (pCVar25 != (Characters_AnimationHandler_o *)0x0) {
      bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (pCVar24->fields)._currentAnimation;
  pCVar25 = pCVar24;
  if ((pSVar17 != (System_String_o *)0x0) &&
     (pCVar25 = pSVar17[7].monitor, pCVar25 != (Characters_AnimationHandler_o *)0x0)) {
    bVar8 = Characters_AnimationHandler__IsPlaying(pCVar25,pSVar11,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar8);
    }
    pSVar17 = (pCVar24->fields)._currentAnimation;
    if (pSVar17 != (System_String_o *)0x0) {
      pCVar24 = pSVar17[7].monitor;
      pCVar25 = (Characters_AnimationHandler_o *)0x0;
      if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar24,(MethodInfo *)0x0);
        return extraout_RAX_19;
      }
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2c90();
  pCVar21 = (Characters_BaseCharacter_o *)(pCVar25->fields)._currentAnimation;
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
    }
    pSVar13 = (pCVar25->fields)._currentAnimation;
    if (pSVar13 != (System_String_o *)0x0) {
      if (*(char *)&pSVar13[4].monitor != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_21,bVar8);
      }
      vtableDispatch = pSVar13->klass[1].vtable._24_ToString.method;
      pIVar9 = (Il2CppObject *)
               (*(code *)vtableDispatch)
                         (uVar30,pSVar13,pSVar11,
                          pSVar13->klass[1].vtable._25_System_IConvertible_ToType.methodPtr,
                          vtableDispatch);
      return pIVar9;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar16 + 0x30) != 0) {
    pCVar24 = *(Characters_AnimationHandler_o **)(*(long *)(lVar16 + 0x30) + 0xb0);
    lVar16 = 0;
    if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetLength(pCVar24,pSVar17,(MethodInfo *)0x0);
      return extraout_RAX_20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar17,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_22,bVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = pSVar17;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_23,bVar8);
      }
      pSVar11 = pSVar17;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar17,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_24,bVar8);
      }
      pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
      if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar21,pSVar17,(MethodInfo *)0x0);
        return extraout_RAX_21;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar11;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_25,bVar8);
      }
      pSVar17 = pSVar11;
      bVar8 = Characters_BaseCharacter__IsPlayingSound(pCVar21,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar8);
      }
      if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__StopSound
                  (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),pSVar11,(MethodInfo *)0x0);
        return extraout_RAX_22;
      }
    }
  }
  lVar16 = 0;
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar17;
  if (*(Characters_BaseCharacter_o **)(lVar16 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
    }
    pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar21->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_27,bVar8);
      }
      Characters_BaseCharacter__FadeSound(pCVar21,pSVar17,fVar29,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_23;
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_BaseCharacter_o **)(lVar16 + 0x30);
  pSVar17 = pSVar11;
  if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = (System_String_o *)0x0;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar21,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_28,bVar8);
    }
    pIVar9 = *(Il2CppObject **)(lVar16 + 0x30);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar9[6].monitor != '\0') {
        return pIVar9;
      }
      if ((pIVar9[7].klass != (Il2CppClass *)0x0) && (pSVar11 != (System_String_o *)0x0)) {
        pUVar4 = (UnityEngine_Transform_o *)((pIVar9[7].klass)->_1).name;
        pCVar21 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__LookAt_4e0aa40
                    (pUVar4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar11 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_24;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_4f8 = lVar16;
  if (g_data_057ac85c == '\0') {
    uStack_518 = 0x40fffec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ForceMode);
    uStack_518 = 0x40ffff8;
    il2cpp_runtime_helper_023445d0(&TypeRef_ForceMode);
    g_data_057ac85c = '\x01';
  }
  iStack_504 = 0;
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
  pSVar11 = value;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
label_0410019c:
    uStack_518 = 0x41001a1;
    il2cpp_runtime_helper_022b2c90();
label_041001a1:
    puVar27 = &"Invalid force mode: {0}";
label_041001e2:
    uStack_518 = 0x41001e7;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar27);
    uStack_518 = 0x41001f4;
    pSVar11 = System_String__Format(pSVar13,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    uStack_518 = 0x410001b;
    bVar8 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_29,bVar8);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar21->fields).MaxFootstepDistance;
    if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_0410019c;
    uStack_518 = 0x4100041;
    Characters_BaseCharacter__SetKinematic(pCVar20,0,1.0,(MethodInfo *)0x0);
    if (value == (System_String_o *)0x0) goto label_041001a1;
    if (value->klass == g_data_057b9bb8) {
      uStack_518 = 0x41000ec;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      handle.fields.value = TypeRef_ForceMode.fields.value;
      mode = *piVar12;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        uStack_518 = 0x410010e;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_518 = 0x4100118;
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_518 = 0x410012e;
      iStack_4fc = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4fc);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        uStack_518 = 0x4100146;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_518 = 0x4100153;
      bVar8 = System_Enum__IsDefined(enumType,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
        if ((((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
            (pSVar17 != (System_String_o *)0x0)) &&
           (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0)
           ) {
          fVar28 = *(float *)&pSVar17[2].monitor;
          uVar30 = SUB84(pSVar17[2].klass,0);
          uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
label_04100186:
          uStack_518 = 0x410018d;
          force.fields.y = (float)uVar31;
          force.fields.x = (float)uVar30;
          force.fields.z = fVar28;
          UnityEngine_Rigidbody__AddForce(pUVar26,force,mode,(MethodInfo *)0x0);
          return extraout_RAX_25;
        }
        goto label_0410019c;
      }
      uStack_518 = 0x41001d8;
      iStack_500 = mode;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_500);
      puVar27 = &"Unknown force mode: {0}";
      goto label_041001e2;
    }
    if (value->klass != g_data_057b9c00) goto label_041001a1;
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      uStack_518 = 0x4100080;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_518 = 0x4100097;
    bVar8 = System_Enum__TryParse_Int32Enum_(value,&iStack_504,MethodInfo_Boolean_TryParse_ForceMode);
    if ((char)bVar8 != '\0') {
      lVar16 = *(long *)&(pCVar21->fields).MaxFootstepDistance;
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) &&
         ((pSVar17 != (System_String_o *)0x0 &&
          (pUVar26 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18), pUVar26 != (UnityEngine_Rigidbody_o *)0x0))
         )) {
        fVar28 = *(float *)&pSVar17[2].monitor;
        uVar30 = SUB84(pSVar17[2].klass,0);
        uVar31 = (undefined4)((ulong)pSVar17[2].klass >> 0x20);
        mode = iStack_504;
        goto label_04100186;
      }
      goto label_0410019c;
    }
    uStack_518 = 0x41001b6;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown force mode: ");
    uStack_518 = 0x41001c3;
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value,(MethodInfo *)0x0);
  }
  uStack_518 = 0x4100203;
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  uStack_518 = 0x410020b;
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  uStack_518 = 0x410021b;
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  uStack_518 = 0x4100227;
  lVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddForce);
  uStack_518 = 0x4100232;
  uStack_518 = il2cpp_runtime_helper_022b2b10();
  pCVar20 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(pCVar20,0.0,activeTime,(MethodInfo *)0x0);
    return extraout_RAX_26;
  }
  pCStack_520 = (Characters_BaseCharacter_o *)0x410025d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_530 = pSVar11;
  pSStack_528 = pSVar17;
  pCStack_520 = pCVar21;
  if (g_data_057ac85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_Outline_Mode);
    g_data_057ac85d = '\x01';
  }
  iStack_554 = 0;
  if (lVar16 == 0) {
    auStack_540 = ZEXT816(0x3f8000003f800000);
    auStack_550 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
joined_r0x0410033e:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_Enum__TryParse_Int32Enum_(value_00,&iStack_554,MethodInfo_Boolean_TryParse_Outline_Mode);
    auVar7 = auStack_540;
    auVar6 = auStack_550;
    if ((char)bVar8 == '\0') goto label_04100347;
    pCVar21 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar21 != (Characters_BaseCharacter_o *)0x0) {
      UVar34.fields.b = (float)auStack_550._0_4_;
      UVar34.fields.a = (float)auStack_550._4_4_;
      UVar34.fields.r = (float)auStack_540._0_4_;
      UVar34.fields.g = (float)auStack_540._4_4_;
      auStack_550 = auVar6;
      auStack_540 = auVar7;
      Characters_BaseCharacter__AddOutlineWithColor(pCVar21,UVar34,iStack_554,(MethodInfo *)0x0);
      return extraout_RAX_27;
    }
  }
  else if (*(Utility_Color255_o **)(lVar16 + 0x30) != (Utility_Color255_o *)0x0) {
    UVar34 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar16 + 0x30),(MethodInfo *)0x0);
    auStack_540._8_4_ = extraout_XMM0_Dc;
    auStack_540._0_8_ = UVar34.fields._0_8_;
    auStack_540._12_4_ = extraout_XMM0_Dd;
    auStack_550._8_4_ = in_XMM1_Dc;
    auStack_550._0_8_ = UVar34.fields._8_8_;
    auStack_550._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
    goto joined_r0x0410033e;
  }
  il2cpp_runtime_helper_022b2c90();
label_04100347:
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown outline mode: ");
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,value_00,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar15 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_ArgumentException___ctor_3c12490(pSVar15,pSVar11,(MethodInfo *)0x0);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOutline);
  il2cpp_runtime_helper_022b2b10();
  pCVar21 = (Characters_BaseCharacter_o *)(pSVar15->fields)._helpURL;
  if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    bVar8 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                      ((CustomLogic_CustomLogicCharacterBuiltin_o *)pCVar21,(Il2CppObject *)pCVar21,pIVar9,
                       method);
    return (Il2CppObject *)CONCAT44(extraout_var_30,bVar8);
  }
  Characters_BaseCharacter__RemoveOutline(pCVar21,(MethodInfo *)0x0);
  return extraout_RAX_28;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40feb90

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Video_VideoPlayer_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Photon_Realtime_Player_o *player;
  void *pvVar2;
  UnityEngine_Transform_o *pUVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *vtableDispatch;
  undefined1 uVar4;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_02;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_03;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  undefined4 extraout_var_02;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var_03;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_04;
  undefined4 extraout_var_04;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_05;
  Il2CppObject *extraout_RAX_05;
  undefined4 extraout_var_06;
  Il2CppObject *extraout_RAX_06;
  undefined4 extraout_var_07;
  Il2CppObject *extraout_RAX_07;
  undefined4 extraout_var_08;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  undefined4 extraout_var_09;
  Il2CppObject *extraout_RAX_10;
  undefined4 extraout_var_10;
  Il2CppObject *extraout_RAX_11;
  undefined4 extraout_var_11;
  Il2CppObject *extraout_RAX_12;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  System_String_o *pSVar10;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_05;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  Il2CppObject *extraout_RAX_13;
  undefined4 extraout_var_16;
  Il2CppObject *extraout_RAX_14;
  Il2CppObject *extraout_RAX_15;
  undefined4 extraout_var_17;
  Il2CppObject *extraout_RAX_16;
  undefined4 extraout_var_18;
  Il2CppObject *extraout_RAX_17;
  Il2CppObject *extraout_RAX_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  Il2CppObject *extraout_RAX_19;
  undefined4 extraout_var_21;
  Il2CppObject *extraout_RAX_20;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  Il2CppObject *extraout_RAX_21;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  Il2CppObject *extraout_RAX_22;
  undefined4 extraout_var_27;
  Il2CppObject *extraout_RAX_23;
  undefined4 extraout_var_28;
  Il2CppObject *extraout_RAX_24;
  undefined4 extraout_var_29;
  int32_t *piVar11;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_25;
  System_String_o *pSVar12;
  undefined8 uVar13;
  System_ArgumentException_o *pSVar14;
  long lVar15;
  Il2CppObject *extraout_RAX_26;
  Il2CppObject *extraout_RAX_27;
  Il2CppObject *extraout_RAX_28;
  undefined4 extraout_var_30;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  System_String_o *value;
  System_String_o *value_00;
  int32_t mode;
  System_String_o *pSVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *__this_06;
  Characters_BaseCharacter_o *pCVar19;
  Characters_BaseCharacter_o *pCVar20;
  Characters_BaseCharacter_o *__this_07;
  long *plVar21;
  long lVar22;
  Characters_AnimationHandler_o *pCVar23;
  Characters_AnimationHandler_o *pCVar24;
  UnityEngine_Rigidbody_o *pUVar25;
  undefined *puVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float activeTime;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar32;
  UnityEngine_Color_o UVar33;
  int32_t iStack_54c;
  undefined1 auStack_548 [16];
  undefined1 auStack_538 [16];
  System_String_o *pSStack_528;
  System_String_o *pSStack_520;
  Characters_BaseCharacter_o *pCStack_518;
  undefined8 uStack_510;
  int32_t iStack_4fc;
  int32_t iStack_4f8;
  int32_t iStack_4f4;
  long lStack_4f0;
  undefined8 uStack_20;
  
  if (__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) {
    __this_00 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac84f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass =
       (CustomLogic_BuiltinClassInstance_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__c);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((CustomLogic_BuiltinClassInstance_o *)__this)->fields).Variables;
  uStack_20 = CONCAT17(1,(undefined7)uStack_20);
  pSVar10 = (System_String_o *)((long)&uStack_20 + 7);
  lVar15 = g_data_057b9b98;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_01,"IsCharacter",pIVar8,MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return *(Il2CppObject **)(*(long *)(lVar15 + 0x30) + 0x38);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar20,pSVar10,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  if (pSVar10 == (System_String_o *)0x0) {
    pSVar10 = g_data_057b9c00->static_fields->Empty;
  }
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar19,pSVar10,(MethodInfo *)0x0);
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (lVar15 != 0) {
      pIVar8 = extraout_RAX_01;
      if (*(char *)(lVar15 + 0x78) != '\0') {
        if (extraout_DL == '\0') {
          pIVar8 = (Il2CppObject *)0x0;
        }
        else {
          bVar7 = System_String__IsNullOrWhiteSpace(*(System_String_o **)(lVar15 + 0x40),(MethodInfo *)0x0);
          pIVar8 = (Il2CppObject *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar7) >> 8),(char)bVar7) ^ 1);
        }
        *(char *)(lVar15 + 0x48) = (char)pIVar8;
      }
      return pIVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if (lVar15 != 0) {
    return *(Il2CppObject **)(lVar15 + 0x50);
  }
  il2cpp_runtime_helper_022b2c90();
  puVar17 = *(undefined8 **)&(pCVar19->fields).MaxFootstepDistance;
  if (puVar17 != (undefined8 *)0x0) {
    puVar17[10] = pSVar10;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(puVar17 + 10);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar18 = puVar17;
  if (g_data_057ac850 == '\0') {
    puVar18 = &TypeInfo_CustomLogicPlayerBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac850 = '\x01';
  }
  if (((puVar17[6] != 0) && (lVar15 = *(long *)(puVar17[6] + 0x70), lVar15 != 0)) &&
     (lVar15 = *(long *)(lVar15 + 0x20), lVar15 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar15 + 0x80);
    __this_02 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_02,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = puVar18[6];
  if (lVar15 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x78));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac851 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac851 = '\x01';
  }
  x = (UnityEngine_Object_o *)puVar18[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (puVar18[6] != 0) {
    return (Il2CppObject *)(ulong)(*(char *)(puVar18[6] + 0x68) == '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (((x[2].klass != (UnityEngine_Object_c *)0x0) &&
      (pvVar2 = ((x[2].klass)->_1).interopData, pvVar2 != (void *)0x0)) &&
     (lVar15 = *(long *)((long)pvVar2 + 0x20), lVar15 != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar15 + 0x94);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_06 = x[2].klass;
  if (__this_06 != (UnityEngine_Object_c *)0x0) {
    bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_06,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = (__this_06->_1).this_arg.data;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    bVar7 = Characters_BaseCharacter__IsMainCharacter(pCVar20,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_01,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = pCVar20;
  if (g_data_057ac852 == '\0') {
    pCVar19 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicTransformBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac852 = '\x01';
  }
  lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    __this_03 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_03,pUVar3,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057ac853 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac853 = '\x01';
  }
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar31 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar16 = pSVar10;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_02,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar10 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar10 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057ac854 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac854 = '\x01';
  }
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
      UVar31 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar32,(MethodInfo *)0x0);
      euler.fields.x = UVar31.fields.x * 57.29578;
      euler.fields.y = UVar31.fields.y * 57.29578;
      euler.fields.z = UVar31.fields.z * 57.29578;
      UVar31 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar10 = pSVar16;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_03,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar16 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UVar31.fields.x = SUB84(pSVar16[2].klass,0) * 0.017453292;
      UVar31.fields.y = (float)((ulong)pSVar16[2].klass >> 0x20) * 0.017453292;
      UVar31.fields.z = *(float *)&pSVar16[2].monitor * 0.017453292;
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      UVar32 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar31,(MethodInfo *)0x0);
      in_XMM1_Da = UVar32.fields.z;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar3,UVar32,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057ac855 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac855 = '\x01';
  }
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar32 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
      __this_04 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_04,UVar32,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_04;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar16 = pSVar10;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_04,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar10 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar3,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pSVar10 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac856 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac856 = '\x01';
  }
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields).MaxFootstepDistance;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    UVar31 = Characters_BaseCharacter__GetVelocity(pCVar20,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  __this_07 = (Characters_BaseCharacter_o *)0x0;
  pSVar10 = pSVar16;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_05,bVar7);
    }
    __this_07 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (__this_07 != (Characters_BaseCharacter_o *)0x0) {
      pSVar10 = (System_String_o *)0x0;
      Characters_BaseCharacter__SetKinematic(__this_07,0,1.0,(MethodInfo *)0x0);
      lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
      if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
         (pSVar16 != (System_String_o *)0x0)) {
        pUVar25 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18);
        __this_07 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar25 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar25,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar16 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = __this_07;
  if (g_data_057ac857 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac857 = '\x01';
  }
  lVar15 = *(long *)&(__this_07->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar31 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
      pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar16 = pSVar10;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_06,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar10 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_forward
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar10 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057ac858 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac858 = '\x01';
  }
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar31 = UnityEngine_Transform__get_right(pUVar3,(MethodInfo *)0x0);
      pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar10 = pSVar16;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_07,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar16 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_right
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar16 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_07;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = pCVar19;
  if (g_data_057ac859 == '\0') {
    pCVar20 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac859 = '\x01';
  }
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
    pCVar20 = (Characters_BaseCharacter_o *)0x0;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar31 = UnityEngine_Transform__get_up(pUVar3,(MethodInfo *)0x0);
      pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,UVar31,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar16 = pSVar10;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_08,bVar7);
    }
    lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
       (pSVar10 != (System_String_o *)0x0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
      pCVar19 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_up
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar10 + 2),
                   (MethodInfo *)0x0);
        return extraout_RAX_08;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)&(pCVar19->fields).MaxFootstepDistance;
  if (lVar15 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0xcc));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac85a = '\x01';
  }
  plVar21 = *(long **)&(pCVar19->fields).MaxFootstepDistance;
  if (plVar21 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar21 + 0x728))();
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_01.fields.z = in_XMM1_Da;
    value_01.fields.x = (float)(int)uVar13;
    value_01.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar9,value_01,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar16 != (System_String_o *)0x0) {
    lVar15 = plVar21[6];
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar32 = UnityEngine_Quaternion__LookRotation_4debb20
                       ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar16 + 2),(MethodInfo *)0x0)
    ;
    UVar31 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar32,(MethodInfo *)0x0);
    euler_00.fields.x = UVar31.fields.x * 57.29578;
    euler_00.fields.y = UVar31.fields.y * 57.29578;
    euler_00.fields.z = UVar31.fields.z * 57.29578;
    plVar21 = (long *)0x0;
    UVar31 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    in_XMM1_Da = UVar31.fields.z;
    if (lVar15 != 0) {
      *(float *)(lVar15 + 200) = UVar31.fields.y;
      return extraout_RAX_09;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar21[6] != 0) {
    return *(Il2CppObject **)(plVar21[6] + 0x88);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar16;
  if ((Characters_BaseCharacter_o *)plVar21[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar21[6],(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_09,bVar7);
    }
    if ((Characters_BaseCharacter_o *)plVar21[6] != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam((Characters_BaseCharacter_o *)plVar21[6],pSVar16,(MethodInfo *)0x0);
      return extraout_RAX_10;
    }
  }
  lVar15 = 0;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return pIVar8;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_10,bVar7);
    }
    if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth
                (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(int)fVar27,(MethodInfo *)0x0);
      return extraout_RAX_11;
    }
  }
  lVar15 = 0;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    return pIVar8;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_11,bVar7);
    }
    if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth
                (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(int)fVar27,(MethodInfo *)0x0);
      return extraout_RAX_12;
    }
  }
  lVar22 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)(lVar22 + 0x30);
  if (lVar15 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x69));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)(lVar22 + 0x30);
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    uVar4 = SUB81(pSVar10,0);
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_12,bVar7);
    }
    pIVar8 = *(Il2CppObject **)(lVar22 + 0x30);
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(undefined1 *)((long)&pIVar8[6].monitor + 1) = uVar4;
      return pIVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar15 != 0) {
    return (Il2CppObject *)(ulong)*(uint *)(lVar15 + 0x6c);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar16 = pSVar10;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_13,bVar7);
    }
    pIVar8 = *(Il2CppObject **)&(pCVar20->fields).MaxFootstepDistance;
    if (pIVar8 != (Il2CppObject *)0x0) {
      *(int *)((long)&pIVar8[6].monitor + 4) = (int)pSVar10;
      return pIVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields).MaxFootstepDistance;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = Characters_BaseCharacter__GetCurrentAnimation(pCVar20,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if (lVar15 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0xc4));
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = pCVar20;
  if (g_data_057ac85b == '\0') {
    pCVar19 = (Characters_BaseCharacter_o *)&TypeInfo_CustomLogicRigidbodyBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac85b = '\x01';
  }
  lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    pUVar25 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18);
    __this_05 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_3ff72f0
              (__this_05,(CustomLogic_BuiltinClassInstance_o *)pCVar20,pUVar25,method);
    return (Il2CppObject *)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar21 = *(long **)&(pCVar19->fields).MaxFootstepDistance;
  if (plVar21 != (long *)0x0) {
    pIVar8 = (Il2CppObject *)(**(code **)(*plVar21 + 0x6a8))();
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar21 = (long *)plVar21[6];
  if (plVar21 != (long *)0x0) {
    pIVar8 = (Il2CppObject *)(**(code **)(*plVar21 + 0x698))();
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar16;
  if ((Characters_BaseCharacter_o *)plVar21[6] != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)plVar21[6],(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_14,bVar7);
    }
    plVar21 = (long *)plVar21[6];
    if (plVar21 != (long *)0x0) {
      if ((char)plVar21[0xd] != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_14,bVar7);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar21 + 0x598);
      pIVar8 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (plVar21,pSVar16,*(undefined8 *)(*plVar21 + 0x5a0),UNRECOVERED_JUMPTABLE_00);
      return pIVar8;
    }
  }
  lVar15 = 0;
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar10;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_15,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_15,bVar7);
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar20,pSVar10,fVar27,0.0,(MethodInfo *)0x0);
      return extraout_RAX_13;
    }
  }
  lVar15 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar16;
  fVar27 = in_XMM1_Da;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_16,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_16,bVar7);
      }
      if (extraout_DL_00 == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar20,pSVar16,in_XMM1_Da,fVar28,(MethodInfo *)0x0);
        return extraout_RAX_15;
      }
      Characters_BaseCharacter__CrossFade(pCVar20,pSVar16,in_XMM1_Da,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_14;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar10;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_17,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_17,bVar7);
      }
      Characters_BaseCharacter__GetAnimationSpeed(pCVar20,pSVar10,(MethodInfo *)0x0);
      return extraout_RAX_16;
    }
  }
  lVar15 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar16;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_18,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_18,bVar7);
      }
      if (extraout_DL_01 == '\0') {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar20,pSVar16,fVar28,(MethodInfo *)0x0);
        return extraout_RAX_18;
      }
      Characters_BaseCharacter__SetAnimationSpeed(pCVar20,pSVar16,fVar28,(MethodInfo *)0x0);
      return extraout_RAX_17;
    }
  }
  pCVar23 = (Characters_AnimationHandler_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = (pCVar23->fields)._currentAnimation;
  if (pSVar16 != (System_String_o *)0x0) {
    pCVar24 = pSVar16[7].monitor;
    pCVar23 = (Characters_AnimationHandler_o *)0x0;
    if (pCVar24 != (Characters_AnimationHandler_o *)0x0) {
      bVar7 = Characters_AnimationHandler__IsPlaying(pCVar24,pSVar10,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_19,bVar7);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = (pCVar23->fields)._currentAnimation;
  pCVar24 = pCVar23;
  if ((pSVar16 != (System_String_o *)0x0) &&
     (pCVar24 = pSVar16[7].monitor, pCVar24 != (Characters_AnimationHandler_o *)0x0)) {
    bVar7 = Characters_AnimationHandler__IsPlaying(pCVar24,pSVar10,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_20,bVar7);
    }
    pSVar16 = (pCVar23->fields)._currentAnimation;
    if (pSVar16 != (System_String_o *)0x0) {
      pCVar23 = pSVar16[7].monitor;
      pCVar24 = (Characters_AnimationHandler_o *)0x0;
      if (pCVar23 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar23,(MethodInfo *)0x0);
        return extraout_RAX_19;
      }
    }
  }
  uVar29 = il2cpp_runtime_helper_022b2c90();
  pCVar20 = (Characters_BaseCharacter_o *)(pCVar24->fields)._currentAnimation;
  pSVar16 = pSVar10;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_21,bVar7);
    }
    pSVar12 = (pCVar24->fields)._currentAnimation;
    if (pSVar12 != (System_String_o *)0x0) {
      if (*(char *)&pSVar12[4].monitor != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_21,bVar7);
      }
      vtableDispatch = pSVar12->klass[1].vtable._24_ToString.method;
      pIVar8 = (Il2CppObject *)
               (*(code *)vtableDispatch)
                         (uVar29,pSVar12,pSVar10,
                          pSVar12->klass[1].vtable._25_System_IConvertible_ToType.methodPtr,
                          vtableDispatch);
      return pIVar8;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar15 + 0x30) != 0) {
    pCVar23 = *(Characters_AnimationHandler_o **)(*(long *)(lVar15 + 0x30) + 0xb0);
    lVar15 = 0;
    if (pCVar23 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__GetLength(pCVar23,pSVar16,(MethodInfo *)0x0);
      return extraout_RAX_20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    bVar7 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar16,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_22,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar10 = pSVar16;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_23,bVar7);
    }
    pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar19->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_23,bVar7);
      }
      pSVar10 = pSVar16;
      bVar7 = Characters_BaseCharacter__IsPlayingSound(pCVar19,pSVar16,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_24,bVar7);
      }
      pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
      if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar20,pSVar16,(MethodInfo *)0x0);
        return extraout_RAX_21;
      }
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar10;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_25,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_25,bVar7);
      }
      pSVar16 = pSVar10;
      bVar7 = Characters_BaseCharacter__IsPlayingSound(pCVar20,pSVar10,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_26,bVar7);
      }
      if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__StopSound
                  (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),pSVar10,(MethodInfo *)0x0);
        return extraout_RAX_22;
      }
    }
  }
  lVar15 = 0;
  fVar28 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar16;
  if (*(Characters_BaseCharacter_o **)(lVar15 + 0x30) != (Characters_BaseCharacter_o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine
                      (*(Characters_BaseCharacter_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_27,bVar7);
    }
    pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_27,bVar7);
      }
      Characters_BaseCharacter__FadeSound(pCVar20,pSVar16,fVar28,fVar27,(MethodInfo *)0x0);
      return extraout_RAX_23;
    }
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCVar20 = *(Characters_BaseCharacter_o **)(lVar15 + 0x30);
  pSVar16 = pSVar10;
  if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
    pSVar16 = (System_String_o *)0x0;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_28,bVar7);
    }
    pIVar8 = *(Il2CppObject **)(lVar15 + 0x30);
    if (pIVar8 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar8[6].monitor != '\0') {
        return pIVar8;
      }
      if ((pIVar8[7].klass != (Il2CppClass *)0x0) && (pSVar10 != (System_String_o *)0x0)) {
        pUVar3 = (UnityEngine_Transform_o *)((pIVar8[7].klass)->_1).name;
        pCVar20 = (Characters_BaseCharacter_o *)0x0;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__LookAt_4e0aa40
                    (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pSVar10 + 2),
                     (MethodInfo *)0x0);
          return extraout_RAX_24;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_4f0 = lVar15;
  if (g_data_057ac85c == '\0') {
    uStack_510 = 0x40fffec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ForceMode);
    uStack_510 = 0x40ffff8;
    il2cpp_runtime_helper_023445d0(&TypeRef_ForceMode);
    g_data_057ac85c = '\x01';
  }
  iStack_4fc = 0;
  pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
  pSVar10 = value;
  if (pCVar19 == (Characters_BaseCharacter_o *)0x0) {
label_0410019c:
    uStack_510 = 0x41001a1;
    il2cpp_runtime_helper_022b2c90();
label_041001a1:
    puVar26 = &"Invalid force mode: {0}";
label_041001e2:
    uStack_510 = 0x41001e7;
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar26);
    uStack_510 = 0x41001f4;
    pSVar10 = System_String__Format(pSVar12,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
  }
  else {
    uStack_510 = 0x410001b;
    bVar7 = Characters_BaseCharacter__IsMine(pCVar19,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var_29,bVar7);
    }
    pCVar19 = *(Characters_BaseCharacter_o **)&(pCVar20->fields).MaxFootstepDistance;
    if (pCVar19 == (Characters_BaseCharacter_o *)0x0) goto label_0410019c;
    uStack_510 = 0x4100041;
    Characters_BaseCharacter__SetKinematic(pCVar19,0,1.0,(MethodInfo *)0x0);
    if (value == (System_String_o *)0x0) goto label_041001a1;
    if (value->klass == g_data_057b9bb8) {
      uStack_510 = 0x41000ec;
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      handle.fields.value = TypeRef_ForceMode.fields.value;
      mode = *piVar11;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        uStack_510 = 0x410010e;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_510 = 0x4100118;
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_510 = 0x410012e;
      iStack_4f4 = mode;
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4f4);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        uStack_510 = 0x4100146;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_510 = 0x4100153;
      bVar7 = System_Enum__IsDefined(enumType,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
        if ((((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
            (pSVar16 != (System_String_o *)0x0)) &&
           (pUVar25 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18), pUVar25 != (UnityEngine_Rigidbody_o *)0x0)
           ) {
          fVar27 = *(float *)&pSVar16[2].monitor;
          uVar29 = SUB84(pSVar16[2].klass,0);
          uVar30 = (undefined4)((ulong)pSVar16[2].klass >> 0x20);
label_04100186:
          uStack_510 = 0x410018d;
          force.fields.y = (float)uVar30;
          force.fields.x = (float)uVar29;
          force.fields.z = fVar27;
          UnityEngine_Rigidbody__AddForce(pUVar25,force,mode,(MethodInfo *)0x0);
          return extraout_RAX_25;
        }
        goto label_0410019c;
      }
      uStack_510 = 0x41001d8;
      iStack_4f8 = mode;
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4f8);
      puVar26 = &"Unknown force mode: {0}";
      goto label_041001e2;
    }
    if (value->klass != g_data_057b9c00) goto label_041001a1;
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      uStack_510 = 0x4100080;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_510 = 0x4100097;
    bVar7 = System_Enum__TryParse_Int32Enum_(value,&iStack_4fc,MethodInfo_Boolean_TryParse_ForceMode);
    if ((char)bVar7 != '\0') {
      lVar15 = *(long *)&(pCVar20->fields).MaxFootstepDistance;
      if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) &&
         ((pSVar16 != (System_String_o *)0x0 &&
          (pUVar25 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18), pUVar25 != (UnityEngine_Rigidbody_o *)0x0))
         )) {
        fVar27 = *(float *)&pSVar16[2].monitor;
        uVar29 = SUB84(pSVar16[2].klass,0);
        uVar30 = (undefined4)((ulong)pSVar16[2].klass >> 0x20);
        mode = iStack_4fc;
        goto label_04100186;
      }
      goto label_0410019c;
    }
    uStack_510 = 0x41001b6;
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown force mode: ");
    uStack_510 = 0x41001c3;
    pSVar10 = System_String__Concat_3ae5ba0(pSVar10,value,(MethodInfo *)0x0);
  }
  uStack_510 = 0x4100203;
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  uStack_510 = 0x410020b;
  pSVar14 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
  uStack_510 = 0x410021b;
  System_ArgumentException___ctor_3c12490(pSVar14,pSVar10,(MethodInfo *)0x0);
  uStack_510 = 0x4100227;
  lVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddForce);
  uStack_510 = 0x4100232;
  uStack_510 = il2cpp_runtime_helper_022b2b10();
  pCVar19 = (Characters_BaseCharacter_o *)(pSVar14->fields)._helpURL;
  if (pCVar19 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(pCVar19,0.0,activeTime,(MethodInfo *)0x0);
    return extraout_RAX_26;
  }
  pCStack_518 = (Characters_BaseCharacter_o *)0x410025d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_528 = pSVar10;
  pSStack_520 = pSVar16;
  pCStack_518 = pCVar20;
  if (g_data_057ac85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_Outline_Mode);
    g_data_057ac85d = '\x01';
  }
  iStack_54c = 0;
  if (lVar15 == 0) {
    auStack_538 = ZEXT816(0x3f8000003f800000);
    auStack_548 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
joined_r0x0410033e:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = System_Enum__TryParse_Int32Enum_(value_00,&iStack_54c,MethodInfo_Boolean_TryParse_Outline_Mode);
    auVar6 = auStack_538;
    auVar5 = auStack_548;
    if ((char)bVar7 == '\0') goto label_04100347;
    pCVar20 = *(Characters_BaseCharacter_o **)&(pCVar19->fields).MaxFootstepDistance;
    if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
      UVar33.fields.b = (float)auStack_548._0_4_;
      UVar33.fields.a = (float)auStack_548._4_4_;
      UVar33.fields.r = (float)auStack_538._0_4_;
      UVar33.fields.g = (float)auStack_538._4_4_;
      auStack_548 = auVar5;
      auStack_538 = auVar6;
      Characters_BaseCharacter__AddOutlineWithColor(pCVar20,UVar33,iStack_54c,(MethodInfo *)0x0);
      return extraout_RAX_27;
    }
  }
  else if (*(Utility_Color255_o **)(lVar15 + 0x30) != (Utility_Color255_o *)0x0) {
    UVar33 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar15 + 0x30),(MethodInfo *)0x0);
    auStack_538._8_4_ = extraout_XMM0_Dc;
    auStack_538._0_8_ = UVar33.fields._0_8_;
    auStack_538._12_4_ = extraout_XMM0_Dd;
    auStack_548._8_4_ = in_XMM1_Dc;
    auStack_548._0_8_ = UVar33.fields._8_8_;
    auStack_548._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(g_data_057b9c08 + 0xe4);
    goto joined_r0x0410033e;
  }
  il2cpp_runtime_helper_022b2c90();
label_04100347:
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown outline mode: ");
  pSVar10 = System_String__Concat_3ae5ba0(pSVar10,value_00,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar14 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
  System_ArgumentException___ctor_3c12490(pSVar14,pSVar10,(MethodInfo *)0x0);
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOutline);
  il2cpp_runtime_helper_022b2b10();
  pCVar20 = (Characters_BaseCharacter_o *)(pSVar14->fields)._helpURL;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    bVar7 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                      ((CustomLogic_CustomLogicCharacterBuiltin_o *)pCVar20,(Il2CppObject *)pCVar20,pIVar8,
                       method);
    return (Il2CppObject *)CONCAT44(extraout_var_30,bVar7);
  }
  Characters_BaseCharacter__RemoveOutline(pCVar20,(MethodInfo *)0x0);
  return extraout_RAX_28;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40fcf70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Action_T__object__o *pSVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 *puStack_18;
  
  if (g_data_057ac839 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Frame");
    il2cpp_runtime_helper_023445d0(&"FrameRate");
    il2cpp_runtime_helper_023445d0(&"Prepare");
    il2cpp_runtime_helper_023445d0(&"IsPaused");
    il2cpp_runtime_helper_023445d0(&"PlaybackSpeed");
    il2cpp_runtime_helper_023445d0(&"Play");
    il2cpp_runtime_helper_023445d0(&"StepForward");
    il2cpp_runtime_helper_023445d0(&"Time");
    il2cpp_runtime_helper_023445d0(&"IsLooping");
    il2cpp_runtime_helper_023445d0(&"Length");
    il2cpp_runtime_helper_023445d0(&"Stop");
    il2cpp_runtime_helper_023445d0(&"IsPrepared");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"FrameCount");
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac839 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x4b7f7706) {
    if (uVar3 < 0x14b5b196) {
      if (uVar3 == 0x170e53d) {
        bVar4 = System_String__op_Equality(name,"IsLooping",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac83d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsLooping_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsLooping_g____setter_5_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
            g_data_057ac83d = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          System_Func_object__object____ctor();
          pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x202277c) {
        bVar4 = System_String__op_Equality(name,"StepForward",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac847 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StepForward_b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac847 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x14b5b195) &&
              (bVar4 = System_String__op_Equality(name,"FrameCount",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac83b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameCount_g____getter_3);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83b = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x3eeb76a5) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac845 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac845 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x3eeb76a4) &&
              (bVar4 = System_String__op_Equality(name,"FrameRate",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac83c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameRate_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83c = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x44f9bf2d) {
      bVar4 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac844 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac844 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x4b7f7705) &&
            (bVar4 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac848 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__16_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac848 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xcc5e1936) {
    if (uVar3 < 0x7ea7e87c) {
      if (uVar3 == 0x5e7ac146) {
        bVar4 = System_String__op_Equality(name,"Frame",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame;
        }
      }
      else if ((uVar3 == 0x7ea7e87b) &&
              (bVar4 = System_String__op_Equality(name,"IsPaused",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac83e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPaused_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac83e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x9e978e07) {
      bVar4 = System_String__op_Equality(name,"PlaybackSpeed",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac842 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PlaybackSpeed_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PlaybackSpeed_g____setter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac842 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xcc5e1935) &&
            (bVar4 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac841 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Length_g____getter_9_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac841 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xdfe4e405) {
    if (uVar3 == 0xd5463178) {
      bVar4 = System_String__op_Equality(name,"IsPrepared",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac840 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPrepared_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
          g_data_057ac840 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xdfe4e404) &&
            (bVar4 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_11_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac843 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
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
      if (g_data_057ac83f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
        g_data_057ac83f = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf222bf7c) &&
          (bVar4 = System_String__op_Equality(name,"Prepare",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac846 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Prepare_b__14_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac846 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicVideoPlayerBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac83a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5b6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Frame_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5c2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Frame_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd5fc;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd615;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd624;
  pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd63d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd64c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40fd667;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Frame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame (const MethodInfo* method);
// 0x40fd590

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Frame_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Frame_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount (const MethodInfo* method);
// 0x40fd670

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameCount_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate (const MethodInfo* method);
// 0x40fd710

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameRate_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsLooping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping (const MethodInfo* method);
// 0x40fd7b0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsLooping_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsLooping_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPaused
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused (const MethodInfo* method);
// 0x40fd890

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPaused_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x40fd930

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac83f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPlaying_g____getter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac83f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPrepared
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared (const MethodInfo* method);
// 0x40fd9d0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsPrepared_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac840 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Length
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length (const MethodInfo* method);
// 0x40fda70

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Length_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac841 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__PlaybackSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed (const MethodInfo* method);
// 0x40fdb10

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac842 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PlaybackSpeed_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PlaybackSpeed_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac842 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x40fdbf0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Time_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Time_g____setter_11_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
    g_data_057ac843 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x40fdcd0

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac844 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Pause_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac844 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x40fde20

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac845 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Play_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac845 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Prepare
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare (const MethodInfo* method);
// 0x40fdf70

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac846 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Prepare_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac846 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__StepForward
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward (const MethodInfo* method);
// 0x40fe0c0

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac847 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__StepForward_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac847 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x40fe210

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (g_data_057ac848 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Stop_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac848 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicVideoPlayerBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40fe360

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  bool_conflict bVar2;
  uint uVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  int64_t iVar4;
  Il2CppObject *__this_01;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EE950 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EED20 *obj_02;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  long lVar6;
  MethodInfo_33E0570 *pMVar7;
  long lVar8;
  MethodInfo_24EE950 *pMVar9;
  float fVar10;
  double dVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  MethodInfo_24EE950 *pMStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  MethodInfo_33E0570 *pMStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac849 == '\0') {
    uStack_20 = 0x40fe37d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40fe389;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe395;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40fe3a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40fe3ad;
    il2cpp_runtime_helper_023445d0(&"Frame");
    uStack_20 = 0x40fe3b9;
    il2cpp_runtime_helper_023445d0(&"FrameRate");
    uStack_20 = 0x40fe3c5;
    il2cpp_runtime_helper_023445d0(&"Prepare");
    uStack_20 = 0x40fe3d1;
    il2cpp_runtime_helper_023445d0(&"IsPaused");
    uStack_20 = 0x40fe3dd;
    il2cpp_runtime_helper_023445d0(&"PlaybackSpeed");
    uStack_20 = 0x40fe3e9;
    il2cpp_runtime_helper_023445d0(&"Play");
    uStack_20 = 0x40fe3f5;
    il2cpp_runtime_helper_023445d0(&"StepForward");
    uStack_20 = 0x40fe401;
    il2cpp_runtime_helper_023445d0(&"Time");
    uStack_20 = 0x40fe40d;
    il2cpp_runtime_helper_023445d0(&"IsLooping");
    uStack_20 = 0x40fe419;
    il2cpp_runtime_helper_023445d0(&"Length");
    uStack_20 = 0x40fe425;
    il2cpp_runtime_helper_023445d0(&"Stop");
    uStack_20 = 0x40fe431;
    il2cpp_runtime_helper_023445d0(&"IsPrepared");
    uStack_20 = 0x40fe43d;
    il2cpp_runtime_helper_023445d0(&"Pause");
    uStack_20 = 0x40fe449;
    il2cpp_runtime_helper_023445d0(&"FrameCount");
    uStack_20 = 0x40fe455;
    il2cpp_runtime_helper_023445d0(&"IsPlaying");
    g_data_057ac849 = '\x01';
  }
  uStack_20 = 0x40fe46b;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40fe480;
  obj = MethodInfo_HashSet_1_System_String;
  pSVar5 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40fe4a5;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Frame",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe4ba;
    System_Collections_Generic_HashSet_object___Add(__this_00,"FrameCount",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe4cf;
    System_Collections_Generic_HashSet_object___Add(__this_00,"FrameRate",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe4e4;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsLooping",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe4f9;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsPaused",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe50e;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsPlaying",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe523;
    System_Collections_Generic_HashSet_object___Add(__this_00,"IsPrepared",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe538;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Length",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe54d;
    System_Collections_Generic_HashSet_object___Add(__this_00,"PlaybackSpeed",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe562;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Time",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe577;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Pause",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe58c;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Play",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe5a1;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Prepare",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe5b6;
    System_Collections_Generic_HashSet_object___Add(__this_00,"StepForward",MethodInfo_Boolean_Add);
    uStack_20 = 0x40fe5cb;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Stop",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  uStack_20 = 0x40fe5fd;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (__this = *(UnityEngine_Video_VideoPlayer_o **)&(pSVar5->fields)._version,
     __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    iVar4 = UnityEngine_Video_VideoPlayer__get_frame(__this,(MethodInfo *)0x0);
    uStack_20 = CONCAT44((int)iVar4,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  lVar6 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_00;
  if (g_data_057ac84a == '\0') {
    pcStack_40 = (code *)0x40fe65f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pcStack_40 = (code *)0x40fe66b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pcStack_40 = (code *)0x40fe68a;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_40 = (code *)0x40fe69c;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = obj;
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar6 != 0) &&
     (pMVar7 = (MethodInfo_33E0570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_frame
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(long)iVar1,(MethodInfo *)0x0);
    return;
  }
  pcStack_40 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0;
  pcStack_40 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo_33E0570 *)0x0) && (pMVar7->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_48 = 0x40fe6d6;
    pcStack_40 = (code *)UnityEngine_Video_VideoPlayer__get_frameCount
                                   ((UnityEngine_Video_VideoPlayer_o *)pMVar7->rgctx_data,(MethodInfo *)0x0);
    uStack_48 = 0x40fe6ed;
    il2cpp_runtime_helper_02304f30(g_data_057b9be0,&pcStack_40);
    return;
  }
  lVar8 = 0;
  uStack_48 = 0x40fe6f4;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((lVar8 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_50 = 0x40fe716;
    fVar10 = UnityEngine_Video_VideoPlayer__get_frameRate
                       (*(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38),(MethodInfo *)0x0);
    uStack_48 = CONCAT44(fVar10,(undefined4)uStack_48);
    uStack_50 = 0x40fe731;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return;
  }
  lVar8 = 0;
  uStack_50 = 0x40fe738;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  if ((lVar8 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_58 = (MethodInfo_33E0570 *)0x40fe756;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isLooping
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38),(MethodInfo *)0x0);
    uStack_50 = CONCAT17((char)bVar2,(undefined7)uStack_50);
    pMStack_58 = (MethodInfo_33E0570 *)0x40fe76f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_50 + 7);
    return;
  }
  lVar8 = 0;
  pMStack_58 = (MethodInfo_33E0570 *)0x40fe776;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar6;
  pMStack_58 = obj;
  if (g_data_057ac84b == '\0') {
    uStack_70 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_70 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_70 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = (code *)0x40fe7dc;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar9 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar8 != 0) &&
     (pMVar9 = (MethodInfo_24EE950 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_70 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_70 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EE950 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)pMVar9->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_78 = 0x40fe816;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)pMVar9->rgctx_data,(MethodInfo *)0x0);
    uStack_70 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_70);
    uStack_78 = 0x40fe82f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
    return;
  }
  lVar6 = 0;
  uStack_78 = 0x40fe836;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_80 = 0x40fe856;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_78 = CONCAT17((char)bVar2,(undefined7)uStack_78);
    uStack_80 = 0x40fe86f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
    return;
  }
  lVar6 = 0;
  uStack_80 = 0x40fe876;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_88 = 3.36712881830048e-316;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_80 = CONCAT17((char)bVar2,(undefined7)uStack_80);
    dStack_88 = 3.3671300534646e-316;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
    return;
  }
  lVar6 = 0;
  dStack_88 = 3.36713039931055e-316;
  dStack_88 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_90 = 0x40fe8d6;
    dStack_88 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_90 = 0x40fe8f1;
    il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_88);
    return;
  }
  lVar6 = 0;
  uStack_90 = 0x40fe8f8;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_98 = (MethodInfo_24EE950 *)0x40fe916;
    fVar10 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                       (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_90 = CONCAT44(fVar10,(undefined4)uStack_90);
    pMStack_98 = (MethodInfo_24EE950 *)0x40fe931;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_90 + 4);
    return;
  }
  lVar6 = 0;
  pMStack_98 = (MethodInfo_24EE950 *)0x40fe938;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  lStack_a0 = lVar8;
  pMStack_98 = obj_00;
  if (g_data_057ac84c == '\0') {
    uStack_b0 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_b0 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_b0 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b0 = 0x40fe99c;
  obj_02 = MethodInfo_Single_ConvertTo_Single;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),fVar10,(MethodInfo *)0x0);
    return;
  }
  uStack_b0 = 0x40fe9bd;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj_01->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar11 = UnityEngine_Video_VideoPlayer__get_time
                       ((UnityEngine_Video_VideoPlayer_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_b0 = CONCAT44((float)dVar11,(undefined4)uStack_b0);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_b0 + 4);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_02,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(double)fVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe600

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE570 *obj_00;
  MethodInfo_24EED20 *obj_01;
  long lVar5;
  MethodInfo *pMVar6;
  long lVar7;
  MethodInfo_24EE950 *pMVar8;
  float fVar9;
  double dVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  MethodInfo_24EE950 *pMStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  MethodInfo *pMStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_frame(__this,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar4;
  }
  lVar5 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84a == '\0') {
    pcStack_28 = (code *)0x40fe65f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pcStack_28 = (code *)0x40fe66b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pcStack_28 = (code *)0x40fe68a;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_28 = (code *)0x40fe69c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar6 = method;
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar5 != 0) &&
     (pMVar6 = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_frame
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(long)iVar1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pcStack_28 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0;
  pcStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo *)0x0) && ((pMVar6->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_30 = 0x40fe6d6;
    pcStack_28 = (code *)UnityEngine_Video_VideoPlayer__get_frameCount
                                   ((UnityEngine_Video_VideoPlayer_o *)(pMVar6->field7_0x38).rgctx_data,
                                    (MethodInfo *)0x0);
    uStack_30 = 0x40fe6ed;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be0,&pcStack_28);
    return pIVar4;
  }
  lVar7 = 0;
  uStack_30 = 0x40fe6f4;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_38 = 0x40fe716;
    fVar9 = UnityEngine_Video_VideoPlayer__get_frameRate
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_30 = CONCAT44(fVar9,(undefined4)uStack_30);
    uStack_38 = 0x40fe731;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_30 + 4);
    return pIVar4;
  }
  lVar7 = 0;
  uStack_38 = 0x40fe738;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_40 = (MethodInfo *)0x40fe756;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isLooping
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_38 = CONCAT17((char)bVar2,(undefined7)uStack_38);
    pMStack_40 = (MethodInfo *)0x40fe76f;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar4;
  }
  lVar7 = 0;
  pMStack_40 = (MethodInfo *)0x40fe776;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar5;
  pMStack_40 = method;
  if (g_data_057ac84b == '\0') {
    uStack_58 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_58 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_58 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = (code *)0x40fe7dc;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar8 = obj;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) &&
     (pMVar8 = (MethodInfo_24EE950 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_58 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_58 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar8 != (MethodInfo_24EE950 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)pMVar8->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_60 = 0x40fe816;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)pMVar8->rgctx_data,(MethodInfo *)0x0);
    uStack_58 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_58);
    uStack_60 = 0x40fe82f;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_58 + 7);
    return pIVar4;
  }
  lVar5 = 0;
  uStack_60 = 0x40fe836;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_68 = 0x40fe856;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_60 = CONCAT17((char)bVar2,(undefined7)uStack_60);
    uStack_68 = 0x40fe86f;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return pIVar4;
  }
  lVar5 = 0;
  uStack_68 = 0x40fe876;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_70 = 3.36712881830048e-316;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_68 = CONCAT17((char)bVar2,(undefined7)uStack_68);
    dStack_70 = 3.3671300534646e-316;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar4;
  }
  lVar5 = 0;
  dStack_70 = 3.36713039931055e-316;
  dStack_70 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_78 = 0x40fe8d6;
    dStack_70 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_78 = 0x40fe8f1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_70);
    return pIVar4;
  }
  lVar5 = 0;
  uStack_78 = 0x40fe8f8;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_80 = (MethodInfo_24EE950 *)0x40fe916;
    fVar9 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_78 = CONCAT44(fVar9,(undefined4)uStack_78);
    pMStack_80 = (MethodInfo_24EE950 *)0x40fe931;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_78 + 4);
    return pIVar4;
  }
  lVar5 = 0;
  pMStack_80 = (MethodInfo_24EE950 *)0x40fe938;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar7;
  pMStack_80 = obj;
  if (g_data_057ac84c == '\0') {
    uStack_98 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_98 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_98 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_98 = 0x40fe99c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (obj_00 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),fVar9,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_98 = 0x40fe9bd;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj_00->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar10 = UnityEngine_Video_VideoPlayer__get_time
                       ((UnityEngine_Video_VideoPlayer_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_98 = CONCAT44((float)dVar10,(undefined4)uStack_98);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_98 + 4);
    return pIVar4;
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(double)fVar9,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40fe640

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE570 *obj_00;
  MethodInfo_24EED20 *obj_01;
  long lVar5;
  MethodInfo_24EE950 *pMVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  MethodInfo_24EE950 *pMStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  code *apcStack_20 [2];
  
  if (g_data_057ac84a == '\0') {
    apcStack_20[0] = (code *)0x40fe65f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    apcStack_20[0] = (code *)0x40fe66b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    apcStack_20[0] = (code *)0x40fe68a;
    il2cpp_runtime_helper_02337ed0();
  }
  apcStack_20[0] = (code *)0x40fe69c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pIVar4 = __v;
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar4 = (Il2CppObject *)0x0,
     __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_frame(__this,(long)iVar1,(MethodInfo *)0x0);
    return;
  }
  apcStack_20[0] =
       CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0
  ;
  apcStack_20[0] = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[3].monitor != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_28 = 0x40fe6d6;
    apcStack_20[0] =
         (code *)UnityEngine_Video_VideoPlayer__get_frameCount(pIVar4[3].monitor,(MethodInfo *)0x0);
    uStack_28 = 0x40fe6ed;
    il2cpp_runtime_helper_02304f30(g_data_057b9be0,apcStack_20);
    return;
  }
  lVar5 = 0;
  uStack_28 = 0x40fe6f4;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_30 = 0x40fe716;
    fVar8 = UnityEngine_Video_VideoPlayer__get_frameRate
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar8,(undefined4)uStack_28);
    uStack_30 = 0x40fe731;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return;
  }
  lVar5 = 0;
  uStack_30 = 0x40fe738;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pIStack_38 = (Il2CppObject *)0x40fe756;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isLooping
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(MethodInfo *)0x0);
    uStack_30 = CONCAT17((char)bVar2,(undefined7)uStack_30);
    pIStack_38 = (Il2CppObject *)0x40fe76f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return;
  }
  lVar5 = 0;
  pIStack_38 = (Il2CppObject *)0x40fe776;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __i;
  pIStack_38 = __v;
  if (g_data_057ac84b == '\0') {
    uStack_50 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_50 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_50 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = (code *)0x40fe7dc;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar6 = obj;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar5 != 0) &&
     (pMVar6 = (MethodInfo_24EE950 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_50 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_50 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EE950 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)pMVar6->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_58 = 0x40fe816;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)pMVar6->rgctx_data,(MethodInfo *)0x0);
    uStack_50 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_50);
    uStack_58 = 0x40fe82f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_50 + 7);
    return;
  }
  lVar7 = 0;
  uStack_58 = 0x40fe836;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_60 = 0x40fe856;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_58 = CONCAT17((char)bVar2,(undefined7)uStack_58);
    uStack_60 = 0x40fe86f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_58 + 7);
    return;
  }
  lVar7 = 0;
  uStack_60 = 0x40fe876;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_68 = 3.36712881830048e-316;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_60 = CONCAT17((char)bVar2,(undefined7)uStack_60);
    dStack_68 = 3.3671300534646e-316;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  lVar7 = 0;
  dStack_68 = 3.36713039931055e-316;
  dStack_68 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_70 = 0x40fe8d6;
    dStack_68 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_70 = 0x40fe8f1;
    il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_68);
    return;
  }
  lVar7 = 0;
  uStack_70 = 0x40fe8f8;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  if ((lVar7 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_78 = (MethodInfo_24EE950 *)0x40fe916;
    fVar8 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),(MethodInfo *)0x0);
    uStack_70 = CONCAT44(fVar8,(undefined4)uStack_70);
    pMStack_78 = (MethodInfo_24EE950 *)0x40fe931;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
    return;
  }
  lVar7 = 0;
  pMStack_78 = (MethodInfo_24EE950 *)0x40fe938;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar5;
  pMStack_78 = obj;
  if (g_data_057ac84c == '\0') {
    uStack_90 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_90 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_90 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = 0x40fe99c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar7 != 0) &&
     (obj_00 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar7 + 0x38),fVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 0x40fe9bd;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj_00->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar9 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_90 = CONCAT44((float)dVar9,(undefined4)uStack_90);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_90 + 4);
    return;
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar5 + 0x38),(double)fVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameCount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe6c0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar4;
  MethodInfo *pMVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  MethodInfo *pMStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  uint64_t uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_10 = 0x40fe6d6;
    uStack_8 = UnityEngine_Video_VideoPlayer__get_frameCount(__this,(MethodInfo *)0x0);
    uStack_10 = 0x40fe6ed;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be0,&uStack_8);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_10 = 0x40fe6f4;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_18 = 0x40fe716;
    fVar7 = UnityEngine_Video_VideoPlayer__get_frameRate
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_10 = CONCAT44(fVar7,(undefined4)uStack_10);
    uStack_18 = 0x40fe731;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_10 + 4);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_18 = 0x40fe738;
  uStack_18 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84b == '\0') {
    uStack_38 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_38 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_38 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_38 = (code *)0x40fe7dc;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar5 = method;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar4 != 0) &&
     (pMVar5 = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),uVar2 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_38 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_38 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo *)0x0) && ((pMVar5->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_40 = 0x40fe816;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)(pMVar5->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_38 = (code *)CONCAT17((char)bVar1,(undefined7)uStack_38);
    uStack_40 = 0x40fe82f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_40 = 0x40fe836;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_48 = 0x40fe856;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_40 = CONCAT17((char)bVar1,(undefined7)uStack_40);
    uStack_48 = 0x40fe86f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_48 = 0x40fe876;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_50 = 3.36712881830048e-316;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_48 = CONCAT17((char)bVar1,(undefined7)uStack_48);
    dStack_50 = 3.3671300534646e-316;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  dStack_50 = 3.36713039931055e-316;
  dStack_50 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_58 = 0x40fe8d6;
    dStack_50 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_58 = 0x40fe8f1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_50);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_58 = 0x40fe8f8;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_60 = (MethodInfo *)0x40fe916;
    fVar7 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_58 = CONCAT44(fVar7,(undefined4)uStack_58);
    pMStack_60 = (MethodInfo *)0x40fe931;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_58 + 4);
    return pIVar3;
  }
  lVar6 = 0;
  pMStack_60 = (MethodInfo *)0x40fe938;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar4;
  pMStack_60 = method;
  if (g_data_057ac84c == '\0') {
    uStack_78 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_78 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_78 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = 0x40fe99c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),fVar7,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_78 = 0x40fe9bd;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar8 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_78 = CONCAT44((float)dVar8,(undefined4)uStack_78);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_78 + 4);
    return pIVar3;
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(double)fVar7,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameRate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe700

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  undefined4 in_EAX;
  bool_conflict bVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar4;
  MethodInfo *pMVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  MethodInfo *pMStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_10;
  undefined4 uStack_8;
  float fStack_4;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_10 = 0x40fe716;
    uStack_8 = in_EAX;
    fVar7 = UnityEngine_Video_VideoPlayer__get_frameRate(__this,(MethodInfo *)0x0);
    _uStack_8 = CONCAT44(fVar7,uStack_8);
    uStack_10 = 0x40fe731;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_4);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_10 = 0x40fe738;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_10 = CONCAT17((char)bVar1,(undefined7)uStack_10);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84b == '\0') {
    uStack_30 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_30 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_30 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = (code *)0x40fe7dc;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar5 = method;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar4 != 0) &&
     (pMVar5 = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),uVar2 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_30 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_30 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo *)0x0) && ((pMVar5->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_38 = 0x40fe816;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)(pMVar5->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_30 = (code *)CONCAT17((char)bVar1,(undefined7)uStack_30);
    uStack_38 = 0x40fe82f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_38 = 0x40fe836;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_40 = 0x40fe856;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_38 = CONCAT17((char)bVar1,(undefined7)uStack_38);
    uStack_40 = 0x40fe86f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_40 = 0x40fe876;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_48 = 3.36712881830048e-316;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_40 = CONCAT17((char)bVar1,(undefined7)uStack_40);
    dStack_48 = 3.3671300534646e-316;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  dStack_48 = 3.36713039931055e-316;
  dStack_48 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_50 = 0x40fe8d6;
    dStack_48 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_50 = 0x40fe8f1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_48);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_50 = 0x40fe8f8;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_58 = (MethodInfo *)0x40fe916;
    fVar7 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_50 = CONCAT44(fVar7,(undefined4)uStack_50);
    pMStack_58 = (MethodInfo *)0x40fe931;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_50 + 4);
    return pIVar3;
  }
  lVar6 = 0;
  pMStack_58 = (MethodInfo *)0x40fe938;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar4;
  pMStack_58 = method;
  if (g_data_057ac84c == '\0') {
    uStack_70 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_70 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_70 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = 0x40fe99c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),fVar7,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_70 = 0x40fe9bd;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar8 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_70 = CONCAT44((float)dVar8,(undefined4)uStack_70);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
    return pIVar3;
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(double)fVar7,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe740

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  uint uVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar4;
  MethodInfo *pMVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84b == '\0') {
    uStack_28 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = (code *)0x40fe7dc;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar5 = method;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar4 != 0) &&
     (pMVar5 = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),uVar2 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo *)0x0) && ((pMVar5->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_30 = 0x40fe816;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)(pMVar5->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = (code *)CONCAT17((char)bVar1,(undefined7)uStack_28);
    uStack_30 = 0x40fe82f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_30 = 0x40fe836;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_38 = 0x40fe856;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_30 = CONCAT17((char)bVar1,(undefined7)uStack_30);
    uStack_38 = 0x40fe86f;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_38 = 0x40fe876;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_40 = 3.36712881830048e-316;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_38 = CONCAT17((char)bVar1,(undefined7)uStack_38);
    dStack_40 = 3.3671300534646e-316;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar3;
  }
  lVar6 = 0;
  dStack_40 = 3.36713039931055e-316;
  dStack_40 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_48 = 0x40fe8d6;
    dStack_40 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_48 = 0x40fe8f1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_40);
    return pIVar3;
  }
  lVar6 = 0;
  uStack_48 = 0x40fe8f8;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pMStack_50 = (MethodInfo *)0x40fe916;
    fVar7 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),(MethodInfo *)0x0);
    uStack_48 = CONCAT44(fVar7,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x40fe931;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar3;
  }
  lVar6 = 0;
  pMStack_50 = (MethodInfo *)0x40fe938;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar4;
  pMStack_50 = method;
  if (g_data_057ac84c == '\0') {
    uStack_68 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40fe99c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar6 + 0x38),fVar7,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_68 = 0x40fe9bd;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar8 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_68 = CONCAT44((float)dVar8,(undefined4)uStack_68);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar3;
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(double)fVar7,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40fe780

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  uint uVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar4;
  float fVar5;
  double dVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *pCStack_50;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  double dStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac84b == '\0') {
    uStack_20 = (code *)0x40fe79f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = (code *)0x40fe7ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = (code *)0x40fe7ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = (code *)0x40fe7dc;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pIVar3 = __v;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar3 = (Il2CppObject *)0x0,
     __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].monitor != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_28 = 0x40fe816;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPaused(pIVar3[3].monitor,(MethodInfo *)0x0);
    uStack_20 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_20);
    uStack_28 = 0x40fe82f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  lVar4 = 0;
  uStack_28 = 0x40fe836;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_30 = 0x40fe856;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_28 = CONCAT17((char)bVar2,(undefined7)uStack_28);
    uStack_30 = 0x40fe86f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return;
  }
  lVar4 = 0;
  uStack_30 = 0x40fe876;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_38 = 3.36712881830048e-316;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_30 = CONCAT17((char)bVar2,(undefined7)uStack_30);
    dStack_38 = 3.3671300534646e-316;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return;
  }
  lVar4 = 0;
  dStack_38 = 3.36713039931055e-316;
  dStack_38 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_40 = 0x40fe8d6;
    dStack_38 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_40 = 0x40fe8f1;
    il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_38);
    return;
  }
  lVar4 = 0;
  uStack_40 = 0x40fe8f8;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    pIStack_48 = (Il2CppObject *)0x40fe916;
    fVar5 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar5,(undefined4)uStack_40);
    pIStack_48 = (Il2CppObject *)0x40fe931;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  lVar4 = 0;
  pIStack_48 = (Il2CppObject *)0x40fe938;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pCStack_50 = __i;
  pIStack_48 = __v;
  if (g_data_057ac84c == '\0') {
    uStack_60 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40fe99c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),fVar5,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40fe9bd;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar6 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_60 = CONCAT44((float)dVar6,(undefined4)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar4 + 0x38),(double)fVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPaused>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe800

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  double dStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_10 = 0x40fe816;
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    uStack_10 = 0x40fe82f;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_10 = 0x40fe836;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_18 = 0x40fe856;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_10 = CONCAT17((char)bVar1,(undefined7)uStack_10);
    uStack_18 = 0x40fe86f;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_18 = 0x40fe876;
  uStack_18 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_20 = 3.36712881830048e-316;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
    dStack_20 = 3.3671300534646e-316;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  dStack_20 = 3.36713039931055e-316;
  dStack_20 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_28 = 0x40fe8d6;
    dStack_20 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_28 = 0x40fe8f1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_20);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_28 = 0x40fe8f8;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    fVar4 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar4,(undefined4)uStack_28);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84c == '\0') {
    uStack_48 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),fVar4,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_48 = 0x40fe9bd;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    dVar5 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_48 = CONCAT44((float)dVar5,(undefined4)uStack_48);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(double)fVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe840

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_20;
  double dStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_10 = 0x40fe856;
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    uStack_10 = 0x40fe86f;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_10 = 0x40fe876;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_18 = 3.36712881830048e-316;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_10 = CONCAT17((char)bVar1,(undefined7)uStack_10);
    dStack_18 = 3.3671300534646e-316;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  dStack_18 = 3.36713039931055e-316;
  dStack_18 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_20 = 0x40fe8d6;
    dStack_18 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_20 = 0x40fe8f1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_18);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_20 = 0x40fe8f8;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    fVar4 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar4,(undefined4)uStack_20);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84c == '\0') {
    uStack_40 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),fVar4,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_40 = 0x40fe9bd;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    dVar5 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_40 = CONCAT44((float)dVar5,(undefined4)uStack_40);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(double)fVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPrepared>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe880

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_18;
  double dStack_10;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_10 = 3.36712881830048e-316;
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    dStack_10 = 3.3671300534646e-316;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar2;
  }
  lVar3 = 0;
  dStack_10 = 3.36713039931055e-316;
  dStack_10 = (double)il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_18 = 0x40fe8d6;
    dStack_10 = UnityEngine_Video_VideoPlayer__get_length
                          (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_18 = 0x40fe8f1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_10);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_18 = 0x40fe8f8;
  uStack_18 = il2cpp_runtime_helper_022b2c90();
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    fVar4 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
    uStack_18 = CONCAT44(fVar4,(undefined4)uStack_18);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_18 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84c == '\0') {
    uStack_38 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_38 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_38 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_38 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),fVar4,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_38 = 0x40fe9bd;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    dVar5 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_38 = CONCAT44((float)dVar5,(undefined4)uStack_38);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_38 + 4);
    return pIVar2;
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar3 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar3 + 0x38),(double)fVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Length>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe8c0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar2;
  float fVar3;
  double dVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_10;
  double dStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_10 = 0x40fe8d6;
    dStack_8 = UnityEngine_Video_VideoPlayer__get_length(__this,(MethodInfo *)0x0);
    uStack_10 = 0x40fe8f1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&dStack_8);
    return pIVar1;
  }
  lVar2 = 0;
  uStack_10 = 0x40fe8f8;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((lVar2 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    fVar3 = UnityEngine_Video_VideoPlayer__get_playbackSpeed
                      (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),(MethodInfo *)0x0);
    uStack_10 = CONCAT44(fVar3,(undefined4)uStack_10);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_10 + 4);
    return pIVar1;
  }
  lVar2 = 0;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84c == '\0') {
    uStack_30 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_30 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_30 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar2 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),fVar3,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_30 = 0x40fe9bd;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_30 = CONCAT44((float)dVar4,(undefined4)uStack_30);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_30 + 4);
    return pIVar1;
  }
  lVar2 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar2 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),(double)fVar3,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe900

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  long lVar2;
  float fVar3;
  double dVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  lVar2 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84c == '\0') {
    uStack_28 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar2 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),fVar3,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40fe9bd;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_time
                      ((UnityEngine_Video_VideoPlayer_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = CONCAT44((float)dVar4,(undefined4)uStack_28);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar1;
  }
  lVar2 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar2 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),(double)fVar3,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40fe940

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *__this_00;
  MethodInfo_24EED20 *obj;
  long lVar1;
  float fVar2;
  double dVar3;
  undefined8 uStack_20;
  
  if (g_data_057ac84c == '\0') {
    uStack_20 = 0x40fe95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40fe96b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40fe98a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40fe99c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __v = (Il2CppObject *)0x0,
     __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this,fVar2,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40fe9bd;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].monitor != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar3 = UnityEngine_Video_VideoPlayer__get_time(__v[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT44((float)dVar3,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar1 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar1 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar1 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar1 + 0x38),(double)fVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x40fe9c0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  long lVar2;
  float fVar3;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_time(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  lVar2 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar2 != 0) &&
     (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38) != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time
              (*(UnityEngine_Video_VideoPlayer_o **)(lVar2 + 0x38),(double)fVar3,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40fea00

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *__this_00;
  float fVar1;
  
  if (g_data_057ac84d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac84d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time(__this,(double)fVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac84e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcb20

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Video_VideoPlayer_o* videoPlayer, const MethodInfo* method);
// 0x40fcb30

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor_3ffcb30
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Video_VideoPlayer_o *videoPlayer,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Component_c *pUVar2;
  
  if (g_data_057ac836 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_VideoPlayer);
    g_data_057ac836 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)videoPlayer,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_VideoPlayer;
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(__this->fields).Component;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    if (((UnityEngine_Component_c *)pUVar1->klass == TypeInfo_VideoPlayer) &&
       ((__this->fields).Value = pUVar1, (UnityEngine_Component_c *)pUVar1->klass == pUVar2))
    goto label_040fcbab;
    il2cpp_runtime_helper_022b2fd0(pUVar1,pUVar2);
  }
  (__this->fields).Value = (UnityEngine_Video_VideoPlayer_o *)0x0;
label_040fcbab:
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Frame
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40fcbc0

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_frame(pUVar1,(long)value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_frame((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_frameCount(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_frameRate((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping(pUVar1,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isLooping((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPaused(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPlaying((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPrepared(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar1,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar1,(double)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Frame
// il2cpp: int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcbe0

int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame
                  (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar1;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  int32_t extraout_EAX_03;
  int32_t extraout_EAX_04;
  int32_t iVar2;
  int32_t extraout_EAX_05;
  int32_t extraout_EAX_06;
  int32_t extraout_EAX_07;
  int32_t extraout_EAX_08;
  int32_t extraout_EAX_09;
  int64_t iVar3;
  uint64_t uVar4;
  uint uVar5;
  UnityEngine_Video_VideoPlayer_o *pUVar6;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar7;
  float fVar8;
  
  uVar5 = (uint)method;
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    iVar3 = UnityEngine_Video_VideoPlayer__get_frame(pUVar6,(MethodInfo *)0x0);
    return (int32_t)iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    uVar4 = UnityEngine_Video_VideoPlayer__get_frameCount
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return (int32_t)uVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_frameRate(pUVar6,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              ((UnityEngine_Video_VideoPlayer_o *)pUVar7,uVar5 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(pUVar6,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar6,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length(pUVar6,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar6,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar7,(double)fVar8,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  iVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time(pUVar6,(MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar6,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Video_VideoPlayer_o *)(pUVar7->fields).extra_arg;
  if (pUVar6 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar6,(MethodInfo *)0x0);
    return extraout_EAX_08;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (pUVar6->fields).errorReceived;
  if (pUVar7 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar7,(MethodInfo *)0x0);
    return extraout_EAX_09;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return (int32_t)"VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameCount
// il2cpp: uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcc00

uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount
                   (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  uint64_t uVar2;
  uint64_t extraout_RAX;
  uint64_t extraout_RAX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint64_t extraout_RAX_01;
  uint64_t extraout_RAX_02;
  uint64_t extraout_RAX_03;
  uint64_t extraout_RAX_04;
  uint64_t extraout_RAX_05;
  uint64_t extraout_RAX_06;
  uint64_t extraout_RAX_07;
  uint64_t extraout_RAX_08;
  uint64_t extraout_RAX_09;
  uint uVar3;
  UnityEngine_Video_VideoPlayer_o *pUVar4;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar5;
  float fVar6;
  
  uVar3 = (uint)method;
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    uVar2 = UnityEngine_Video_VideoPlayer__get_frameCount(pUVar4,(MethodInfo *)0x0);
    return uVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_frameRate((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping(pUVar4,uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return CONCAT44(extraout_var,bVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(pUVar4,(MethodInfo *)0x0);
    return CONCAT44(extraout_var_00,bVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return CONCAT44(extraout_var_01,bVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(pUVar4,(MethodInfo *)0x0);
    return CONCAT44(extraout_var_02,bVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar4,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar4,(double)fVar6,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return uVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar4,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar4,(MethodInfo *)0x0);
    return extraout_RAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).errorReceived;
  if (pUVar5 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar5,(MethodInfo *)0x0);
    return extraout_RAX_08;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Video_VideoPlayer_o *)(pUVar5->fields).extra_arg;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar4,(MethodInfo *)0x0);
    return extraout_RAX_09;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameRate
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcc20

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  double dVar5;
  
  uVar1 = (uint)method;
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar4 = UnityEngine_Video_VideoPlayer__get_frameRate(pUVar2,(MethodInfo *)0x0);
    return fVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,uVar1 & 0xff,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isLooping(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPaused((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPrepared((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0)
    ;
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar5 = UnityEngine_Video_VideoPlayer__get_length(pUVar2,(MethodInfo *)0x0);
    return SUB84(dVar5,0);
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,fVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar4 = UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar2,(MethodInfo *)0x0);
    return fVar4;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(double)fVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar5 = UnityEngine_Video_VideoPlayer__get_time(pUVar2,(MethodInfo *)0x0);
    return (float)dVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_08;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_09;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_10;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    fVar4 = (float)il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return fVar4;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_IsLooping
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40fcc40

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping(pUVar1,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isLooping((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPaused(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPlaying((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_isPrepared(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar1,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar1,(double)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsLooping
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcc60

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

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
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar3;
  float fVar4;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,fVar4,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(double)fVar4,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return (bool_conflict)"VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPaused
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcc80

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

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
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar3;
  float fVar4;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar2,fVar4,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar2,(double)fVar4,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return (bool_conflict)"VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcca0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

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
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar3;
  float fVar4;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared
                      ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,fVar4,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(double)fVar4,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return (bool_conflict)"VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPrepared
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fccc0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

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
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar3;
  float fVar4;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_length((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar2,fVar4,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar2,(double)fVar4,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).errorReceived;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Video_VideoPlayer_o *)(pUVar3->fields).extra_arg;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return (bool_conflict)"VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Length
// il2cpp: double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcce0

double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length
                 (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float fVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qa_04;
  double extraout_XMM0_Qa_05;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_length(pUVar1,(MethodInfo *)0x0);
    return dVar4;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Qa;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar3 = UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar1,(MethodInfo *)0x0);
    return (double)CONCAT44(extraout_XMM0_Db,fVar3);
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,(double)fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_time(pUVar1,(MethodInfo *)0x0);
    return (double)CONCAT44((int)((ulong)dVar4 >> 0x20),(float)dVar4);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Qa_05;
  }
  dVar4 = (double)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    dVar4 = (double)il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return dVar4;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_PlaybackSpeed
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40fcd00

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar1,(double)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_PlaybackSpeed
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcd20

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  double dVar4;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar3 = UnityEngine_Video_VideoPlayer__get_playbackSpeed(pUVar1,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time
              ((UnityEngine_Video_VideoPlayer_o *)pUVar2,(double)fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_time(pUVar1,(MethodInfo *)0x0);
    return (float)dVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    fVar3 = (float)il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return fVar3;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40fcd40

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(pUVar1,(double)value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__get_time((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcd60

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar3;
  double dVar4;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar4 = UnityEngine_Video_VideoPlayer__get_time(pUVar1,(MethodInfo *)0x0);
    return (float)dVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar1,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    fVar3 = (float)il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return fVar3;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcd80

void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Play (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcda0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Play
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *pUVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(pUVar2->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar1->fields).errorReceived;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Prepare
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcdc0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (pUVar1->fields).errorReceived;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward((UnityEngine_Video_VideoPlayer_o *)__this_00,(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(__this_00->fields).extra_arg;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$StepForward
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fcde0

void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *__this_00;
  UnityEngine_Video_VideoPlayer_o *__this_01;
  
  __this_01 = (__this->fields).Value;
  if (__this_01 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (__this_01->fields).errorReceived;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop((UnityEngine_Video_VideoPlayer_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fce00

void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fce20

System_String_o *
CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac837 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ac837 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fce50

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fce60

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x40fce70

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


