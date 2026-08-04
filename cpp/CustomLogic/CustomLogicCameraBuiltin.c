// Type: CustomLogic.CustomLogicCameraBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCameraBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCameraBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraBuiltin_o* CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41b31d0

CustomLogic_CustomLogicCameraBuiltin_o *
CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  System_Func_T__object__o *pSVar10;
  System_Action_T__object__o *pSVar11;
  CustomLogic_CustomLogicCameraBuiltin_o *pCVar12;
  System_Func_T__object____object__o *pSVar13;
  System_ArgumentException_o **ppSVar14;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad53f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraBuiltin);
    g_data_057ad53f = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCameraBuiltin);
    if (g_data_057ad526 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad526 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCameraBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCameraBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCameraBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar14 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad540 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetCursorVisible");
    il2cpp_runtime_helper_023445d0(&"ResetDistance");
    il2cpp_runtime_helper_023445d0(&"Right");
    il2cpp_runtime_helper_023445d0(&"SetCameraMode");
    il2cpp_runtime_helper_023445d0(&"SetRotation");
    il2cpp_runtime_helper_023445d0(&"IsManual");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Forward");
    il2cpp_runtime_helper_023445d0(&"SetVelocity");
    il2cpp_runtime_helper_023445d0(&"ResetCameraMode");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    il2cpp_runtime_helper_023445d0(&"Up");
    il2cpp_runtime_helper_023445d0(&"SetPosition");
    il2cpp_runtime_helper_023445d0(&"SetCameraLocked");
    il2cpp_runtime_helper_023445d0(&"Velocity");
    il2cpp_runtime_helper_023445d0(&"SetFOV");
    il2cpp_runtime_helper_023445d0(&"FOV");
    il2cpp_runtime_helper_023445d0(&"FollowDistance");
    il2cpp_runtime_helper_023445d0(&"SetManual");
    il2cpp_runtime_helper_023445d0(&"CameraMode");
    il2cpp_runtime_helper_023445d0(&"LookAt");
    g_data_057ad540 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x6dd1aa8b) {
    if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 == 0x232777f) {
          bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Rotation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
            }
            pSStack_30 = pSVar8;
            if (g_data_057ad543 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_4_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
              g_data_057ad543 = '\x01';
            }
            pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
            System_Func_object__object____ctor();
            pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0
                       ,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            return pCVar12;
          }
        }
        else if ((uVar3 == 0x1e9e9f85) &&
                (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Right",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          if (g_data_057ad548 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Right_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
            g_data_057ad548 = '\x01';
          }
          pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
          System_Func_object__object____ctor();
          pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
          System_Action_object__object____ctor();
          pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return pCVar12;
        }
      }
      else if (uVar3 == 0x24a169e7) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetCameraMode",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad551 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraMode_b__18_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad551 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          else {
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar13;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar13);
          }
          pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return pCVar12;
        }
      }
      else if (uVar3 == 0x2e32cf0b) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FollowDistance",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          if (g_data_057ad54a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FollowDistance_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FollowDistance_g____setter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
            g_data_057ad54a = '\x01';
          }
          pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
          System_Func_object__object____ctor();
          pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
          System_Action_object__object____ctor();
          pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return pCVar12;
        }
      }
      else if ((uVar3 == 0x42f35940) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Up",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        if (g_data_057ad549 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Up_g____setter_10_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad549 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
        System_Action_object__object____ctor();
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 < 0x56e974f5) {
      if (uVar3 == 0x51f457ad) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetCursorVisible",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad555 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCursorVisible_b__22_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad555 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          else {
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar13;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar13);
          }
          pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return pCVar12;
        }
      }
      else if ((uVar3 == 0x56e974f4) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetVelocity",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad54e == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetVelocity_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0x5853691b) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ResetDistance",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad552 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetDistance_b__19_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad552 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0x5e2c4c73) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"LookAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad54f == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookAt_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if ((uVar3 == 0x6dd1aa8a) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetCameraLocked",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad554 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraLocked_b__21_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad554 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      else {
        pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
      }
      if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar13;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar13);
      }
      pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 < 0xd6a213a9) {
    if (uVar3 < 0x8adad751) {
      if (uVar3 == 0x8adad750) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad54c == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPosition_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad54c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar13;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar13);
          }
          pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return pCVar12;
        }
      }
      else if ((uVar3 == 0x6fcec725) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetManual",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad54b == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetManual_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0xba408252) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Velocity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad544 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Velocity_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad544 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0xd11e3ab2) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetFOV",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad550 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetFOV_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad550 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if ((uVar3 == 0xd6a213a8) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ResetCameraMode",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad553 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetCameraMode_b__20_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad553 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar13;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar13);
      }
      pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 < 0xe27f342b) {
    if (uVar3 == 0xdc33653d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad54d == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetRotation_b__14_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar13 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar13 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar13;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar13);
        }
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar13,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0xdeef5e95) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"CameraMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad546 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CameraMode_g____getter_7);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad546 = '\x01';
        }
        pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return pCVar12;
      }
    }
    else if ((uVar3 == 0xe27f342a) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Position",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ad542 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad542 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 == 0xe50883ba) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Forward",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
      if (g_data_057ad547 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_8_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Forward_g____setter_8_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad547 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pSVar11 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
      System_Action_object__object____ctor();
      pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,pSVar11,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 == 0xf3cda0fc) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FOV",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ad545 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FOV_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad545 = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return pCVar12;
    }
  }
  else if ((uVar3 == 0xf1bacbd3) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsManual",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    puVar9 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    ppSVar14 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
    goto CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCameraBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual:
  *(System_String_o **)((long)ppSVar14 + -8) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar14 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppSVar14 + -0x18) = puVar9;
  if (g_data_057ad541 == '\0') {
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsManual_g____getter_2_0);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad541 = '\x01';
  }
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b43;
  pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b6b;
  pCVar12 = (CustomLogic_CustomLogicCameraBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41b3b85;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar10,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return pCVar12;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41b58c0

void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad55b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41b5930

void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetManual>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5940

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  Il2CppObject *pIVar8;
  System_String_o *mode;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  MethodInfo *pMVar9;
  Cameras_InGameCamera_o *__this_00;
  float fVar10;
  
  if (g_data_057ad55c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar8 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar8,MethodInfo_Boolean_ConvertTo_Boolean);
    if (g_data_057ad695 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad695 = '\x01';
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = (char)bVar6;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55d = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__SetPosition(pCVar7,pMVar9);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55e = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__SetRotation(pCVar7,pMVar9);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55f = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) == 0) goto label_041b5c02;
    pIVar8 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (g_data_057ad537 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad537 = '\x01';
    }
    if (pIVar8 != (Il2CppObject *)0x0) {
      uVar3 = *(undefined4 *)&pIVar8[3].monitor;
      pIVar4 = pIVar8[3].klass;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(undefined4 *)(lVar5 + 0x74) = uVar3;
      *(Il2CppClass **)(lVar5 + 0x6c) = pIVar4;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b5c02:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad560 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__LookAt(pCVar7,pMVar9);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar8,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar10;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,pMVar9);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5a20

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  System_String_o *mode;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  MethodInfo *pMVar8;
  Cameras_InGameCamera_o *__this_00;
  float fVar9;
  
  if (g_data_057ad55d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar7 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__SetPosition(pCVar6,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55e = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__SetRotation(pCVar6,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55f = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) == 0) goto label_041b5c02;
    pIVar7 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (g_data_057ad537 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad537 = '\x01';
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      uVar2 = *(undefined4 *)&pIVar7[3].monitor;
      pIVar4 = pIVar7[3].klass;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(undefined4 *)(lVar5 + 0x74) = uVar2;
      *(Il2CppClass **)(lVar5 + 0x6c) = pIVar4;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b5c02:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad560 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__LookAt(pCVar6,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar7,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar9;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5aa0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  System_String_o *mode;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  MethodInfo *pMVar8;
  Cameras_InGameCamera_o *__this_00;
  float fVar9;
  
  if (g_data_057ad55e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar7 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__SetRotation(pCVar6,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad55f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55f = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041b5c02;
    pIVar7 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (g_data_057ad537 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad537 = '\x01';
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      uVar2 = *(undefined4 *)&pIVar7[3].monitor;
      pIVar4 = pIVar7[3].klass;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(undefined4 *)(lVar5 + 0x74) = uVar2;
      *(Il2CppClass **)(lVar5 + 0x6c) = pIVar4;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b5c02:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad560 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__LookAt(pCVar6,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar7,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar9;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar7 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar7,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,pMVar8);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetVelocity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5b20

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  System_String_o *mode;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *pMVar7;
  Cameras_InGameCamera_o *__this_00;
  float fVar8;
  
  if (g_data_057ad55f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041b5c02;
    pIVar6 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (g_data_057ad537 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad537 = '\x01';
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
      uVar2 = *(undefined4 *)&pIVar6[3].monitor;
      pIVar4 = pIVar6[3].klass;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(undefined4 *)(lVar5 + 0x74) = uVar2;
      *(Il2CppClass **)(lVar5 + 0x6c) = pIVar4;
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b5c02:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad560 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar6 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__LookAt(position,pMVar7);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar6 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar6,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar8;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar6 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar6,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,pMVar7);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5c10

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  System_String_o *mode;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *pMVar4;
  Cameras_InGameCamera_o *__this_00;
  float fVar5;
  
  if (g_data_057ad560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad560 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    CustomLogic_CustomLogicCameraBuiltin__LookAt(position,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar3,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar5;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,pMVar4);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFOV>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5c90

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  System_String_o *mode;
  long extraout_RDX;
  MethodInfo *method_00;
  Cameras_InGameCamera_o *__this_00;
  float fVar4;
  
  if (g_data_057ad561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad561 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(pIVar3,MethodInfo_Single_ConvertTo_Single);
    if (g_data_057ad696 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad696 = '\x01';
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fVar4;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraMode>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5d90

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  System_String_o *mode;
  MethodInfo *method_00;
  Cameras_InGameCamera_o *__this_00;
  
  if (g_data_057ad562 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad562 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    mode = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetDistance>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5e10

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  System_Object_array *extraout_RDX;
  Cameras_InGameCamera_o *__this_00;
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
    __a = extraout_RDX;
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0(__this_00,TypeInfo_InGameCamera,__a);
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCameraMode>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5ea0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraLocked>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5eb0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool_conflict bVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  
  if (g_data_057ad563 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad563 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    if (g_data_057ad697 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad697 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80) = (char)bVar3;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad564 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar2,MethodInfo_Boolean_ConvertTo_Boolean);
    if (g_data_057ad698 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad698 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x81) = (char)bVar3;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad565 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad565 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCursorVisible>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b5f90

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  bool_conflict bVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  
  if (g_data_057ad564 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad564 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (g_data_057ad698 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad698 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x81) = (char)bVar2;
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad565 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad565 = '\x01';
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


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41b32f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  undefined8 *puVar6;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad540 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetCursorVisible");
    il2cpp_runtime_helper_023445d0(&"ResetDistance");
    il2cpp_runtime_helper_023445d0(&"Right");
    il2cpp_runtime_helper_023445d0(&"SetCameraMode");
    il2cpp_runtime_helper_023445d0(&"SetRotation");
    il2cpp_runtime_helper_023445d0(&"IsManual");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Forward");
    il2cpp_runtime_helper_023445d0(&"SetVelocity");
    il2cpp_runtime_helper_023445d0(&"ResetCameraMode");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    il2cpp_runtime_helper_023445d0(&"Up");
    il2cpp_runtime_helper_023445d0(&"SetPosition");
    il2cpp_runtime_helper_023445d0(&"SetCameraLocked");
    il2cpp_runtime_helper_023445d0(&"Velocity");
    il2cpp_runtime_helper_023445d0(&"SetFOV");
    il2cpp_runtime_helper_023445d0(&"FOV");
    il2cpp_runtime_helper_023445d0(&"FollowDistance");
    il2cpp_runtime_helper_023445d0(&"SetManual");
    il2cpp_runtime_helper_023445d0(&"CameraMode");
    il2cpp_runtime_helper_023445d0(&"LookAt");
    g_data_057ad540 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6dd1aa8b) {
    if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 == 0x232777f) {
          bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad543 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_4_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
              g_data_057ad543 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1e9e9f85) &&
                (bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad548 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Right_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
            g_data_057ad548 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
          System_Func_object__object____ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
          System_Action_object__object____ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x24a169e7) {
        bVar4 = System_String__op_Equality(name,"SetCameraMode",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad551 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraMode_b__18_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad551 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2e32cf0b) {
        bVar4 = System_String__op_Equality(name,"FollowDistance",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad54a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FollowDistance_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FollowDistance_g____setter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
            g_data_057ad54a = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
          System_Func_object__object____ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
          System_Action_object__object____ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x42f35940) &&
              (bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad549 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Up_g____setter_10_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad549 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x56e974f5) {
      if (uVar3 == 0x51f457ad) {
        bVar4 = System_String__op_Equality(name,"SetCursorVisible",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad555 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCursorVisible_b__22_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad555 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x56e974f4) &&
              (bVar4 = System_String__op_Equality(name,"SetVelocity",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad54e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetVelocity_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x5853691b) {
      bVar4 = System_String__op_Equality(name,"ResetDistance",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad552 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetDistance_b__19_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad552 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x5e2c4c73) {
      bVar4 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad54f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookAt_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x6dd1aa8a) &&
            (bVar4 = System_String__op_Equality(name,"SetCameraLocked",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad554 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraLocked_b__21_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad554 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xd6a213a9) {
    if (uVar3 < 0x8adad751) {
      if (uVar3 == 0x8adad750) {
        bVar4 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad54c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPosition_b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad54c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x6fcec725) &&
              (bVar4 = System_String__op_Equality(name,"SetManual",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad54b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetManual_b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xba408252) {
      bVar4 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad544 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Velocity_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad544 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd11e3ab2) {
      bVar4 = System_String__op_Equality(name,"SetFOV",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad550 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetFOV_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad550 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xd6a213a8) &&
            (bVar4 = System_String__op_Equality(name,"ResetCameraMode",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad553 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetCameraMode_b__20_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad553 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe27f342b) {
    if (uVar3 == 0xdc33653d) {
      bVar4 = System_String__op_Equality(name,"SetRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad54d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetRotation_b__14_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad54d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xdeef5e95) {
      bVar4 = System_String__op_Equality(name,"CameraMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad546 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CameraMode_g____getter_7);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
          g_data_057ad546 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe27f342a) &&
            (bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad542 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad542 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe50883ba) {
    bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad547 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_8_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Forward_g____setter_8_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad547 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
      System_Action_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf3cda0fc) {
    bVar4 = System_String__op_Equality(name,"FOV",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad545 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FOV_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
        g_data_057ad545 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf1bacbd3) &&
          (bVar4 = System_String__op_Equality(name,"IsManual",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCameraBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ad541 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsManual_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad541 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b43;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b6b;
  pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b3b85;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar9;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__IsManual
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual (const MethodInfo* method);
// 0x41b3af0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad541 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsManual_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad541 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x41b3b90

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad542 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad542 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x41b3c30

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad543 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rotation_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad543 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x41b3cd0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad544 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Velocity_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad544 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FOV
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV (const MethodInfo* method);
// 0x41b3d70

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad545 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FOV_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad545 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__CameraMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode (const MethodInfo* method);
// 0x41b3e10

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad546 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CameraMode_g____getter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad546 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x41b3eb0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad547 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Forward_g____setter_8_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad547 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x41b3f90

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad548 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Right_g____setter_9_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad548 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x41b4070

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad549 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Up_g____setter_10_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad549 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FollowDistance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance (const MethodInfo* method);
// 0x41b4150

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicCameraBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FollowDistance_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FollowDistance_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object);
    g_data_057ad54a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicCameraBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetManual
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual (const MethodInfo* method);
// 0x41b4230

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetManual_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad54b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x41b4380

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPosition_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad54c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation (const MethodInfo* method);
// 0x41b44d0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetRotation_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad54d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetVelocity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity (const MethodInfo* method);
// 0x41b4620

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetVelocity_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad54e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x41b4770

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad54f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookAt_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad54f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetFOV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV (const MethodInfo* method);
// 0x41b48c0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad550 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetFOV_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad550 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode (const MethodInfo* method);
// 0x41b4a10

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad551 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraMode_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad551 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetDistance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance (const MethodInfo* method);
// 0x41b4b60

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad552 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetDistance_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad552 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode (const MethodInfo* method);
// 0x41b4cb0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad553 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ResetCameraMode_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad553 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraLocked
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked (const MethodInfo* method);
// 0x41b4e00

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad554 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCameraLocked_b__21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad554 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCursorVisible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible (const MethodInfo* method);
// 0x41b4f50

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (g_data_057ad555 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetCursorVisible_b__22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad555 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41b50a0

void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined1 uStack_21;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ad556 == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50ed;
    il2cpp_runtime_helper_023445d0(&"SetCursorVisible");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b50f9;
    il2cpp_runtime_helper_023445d0(&"ResetDistance");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5105;
    il2cpp_runtime_helper_023445d0(&"Right");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5111;
    il2cpp_runtime_helper_023445d0(&"SetCameraMode");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b511d;
    il2cpp_runtime_helper_023445d0(&"SetRotation");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5129;
    il2cpp_runtime_helper_023445d0(&"IsManual");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5135;
    il2cpp_runtime_helper_023445d0(&"Position");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5141;
    il2cpp_runtime_helper_023445d0(&"Forward");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b514d;
    il2cpp_runtime_helper_023445d0(&"SetVelocity");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5159;
    il2cpp_runtime_helper_023445d0(&"ResetCameraMode");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5165;
    il2cpp_runtime_helper_023445d0(&"Rotation");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5171;
    il2cpp_runtime_helper_023445d0(&"Up");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b517d;
    il2cpp_runtime_helper_023445d0(&"SetPosition");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5189;
    il2cpp_runtime_helper_023445d0(&"SetCameraLocked");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5195;
    il2cpp_runtime_helper_023445d0(&"Velocity");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51a1;
    il2cpp_runtime_helper_023445d0(&"SetFOV");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51ad;
    il2cpp_runtime_helper_023445d0(&"FOV");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51b9;
    il2cpp_runtime_helper_023445d0(&"FollowDistance");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51c5;
    il2cpp_runtime_helper_023445d0(&"SetManual");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51d1;
    il2cpp_runtime_helper_023445d0(&"CameraMode");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51dd;
    il2cpp_runtime_helper_023445d0(&"LookAt");
    g_data_057ad556 = '\x01';
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b51f3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5208;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5403;
    il2cpp_runtime_helper_022b2c90();
    pSStack_20 = __this;
    if (g_data_057ad693 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057ad693 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_21 = *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b522d;
  System_Collections_Generic_HashSet_object___Add(__this,"IsManual",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5242;
  System_Collections_Generic_HashSet_object___Add(__this,"Position",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5257;
  System_Collections_Generic_HashSet_object___Add(__this,"Rotation",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b526c;
  System_Collections_Generic_HashSet_object___Add(__this,"Velocity",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5281;
  System_Collections_Generic_HashSet_object___Add(__this,"FOV",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5296;
  System_Collections_Generic_HashSet_object___Add(__this,"CameraMode",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b52ab;
  System_Collections_Generic_HashSet_object___Add(__this,"Forward",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b52c0;
  System_Collections_Generic_HashSet_object___Add(__this,"Right",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b52d5;
  System_Collections_Generic_HashSet_object___Add(__this,"Up",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b52ea;
  System_Collections_Generic_HashSet_object___Add(__this,"FollowDistance",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b52ff;
  System_Collections_Generic_HashSet_object___Add(__this,"SetManual",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5314;
  System_Collections_Generic_HashSet_object___Add(__this,"SetPosition",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5329;
  System_Collections_Generic_HashSet_object___Add(__this,"SetRotation",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b533e;
  System_Collections_Generic_HashSet_object___Add(__this,"SetVelocity",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5353;
  System_Collections_Generic_HashSet_object___Add(__this,"LookAt",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5368;
  System_Collections_Generic_HashSet_object___Add(__this,"SetFOV",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b537d;
  System_Collections_Generic_HashSet_object___Add(__this,"SetCameraMode",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b5392;
  System_Collections_Generic_HashSet_object___Add(__this,"ResetDistance",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b53a7;
  System_Collections_Generic_HashSet_object___Add(__this,"ResetCameraMode",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b53bc;
  System_Collections_Generic_HashSet_object___Add(__this,"SetCameraLocked",MethodInfo_Boolean_Add);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x41b53d1;
  System_Collections_Generic_HashSet_object___Add(__this,"SetCursorVisible",MethodInfo_Boolean_Add);
  **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__IsManual>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b5410

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (g_data_057ad693 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad693 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_9 = *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b5490

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Position(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b54a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Rotation(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b54b0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (g_data_057ad52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x6c);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FOV>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b5550

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  undefined4 local_c;
  
  if (g_data_057ad694 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad694 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_c = *(undefined4 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_c);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__CameraMode>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b55d0

System_String_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0
          (MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(method);
  return pSVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b55e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Forward(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41b55f0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  long *plVar4;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *pIVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined4 uVar9;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  
  if (g_data_057ad557 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad557 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (g_data_057ad52f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad52f = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar8 == (long *)0x0) {
label_041b229f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar8[5] != 0) &&
         ((pIVar6 != (Il2CppObject *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_forward
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar6 + 3),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar8 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b22a4;
          if ((plVar8[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar10 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
            euler.fields.x = UVar11.fields.x * 57.29578;
            euler.fields.y = UVar11.fields.y * 57.29578;
            euler.fields.z = UVar11.fields.z * 57.29578;
            UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar11.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar11.fields.z;
            return;
          }
        }
      }
      goto label_041b229f;
    }
  }
label_041b22a4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad530 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad530 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar8 == (long *)0x0) {
label_041b2391:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar8[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10), plVar8 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar11 = UnityEngine_Transform__get_right(pUVar2,(MethodInfo *)0x0);
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar11,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2391;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar4[5] != 0) &&
         ((plVar8 != (long *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar8 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar8 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar8[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar10 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
            euler_00.fields.x = UVar11.fields.x * 57.29578;
            euler_00.fields.y = UVar11.fields.y * 57.29578;
            euler_00.fields.z = UVar11.fields.z * 57.29578;
            UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar11.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar11.fields.z;
            return;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar8 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar8[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10), plVar8 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar11 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar11,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar4[5] != 0) &&
       ((plVar8 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar8 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar8 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar8[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar8[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar10 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
          euler_01.fields.x = UVar11.fields.x * 57.29578;
          euler_01.fields.y = UVar11.fields.y * 57.29578;
          euler_01.fields.z = UVar11.fields.z * 57.29578;
          UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar11.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar11.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar8 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar8 + 0x6c) = uVar9;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar7 = SUB81(plVar8,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar7;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b5650

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Right(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41b5660

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  long *plVar4;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppObject *pIVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined4 uVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  
  if (g_data_057ad558 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad558 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar7[5] != 0) &&
         ((pIVar5 != (Il2CppObject *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar5 + 3),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar7 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar7[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
            euler.fields.x = UVar10.fields.x * 57.29578;
            euler.fields.y = UVar10.fields.y * 57.29578;
            euler.fields.z = UVar10.fields.z * 57.29578;
            UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar10.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar10.fields.z;
            return;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar7[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), plVar7 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar10 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,UVar10,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar4[5] != 0) &&
       ((plVar7 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar7 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar7 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar7[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar9 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
          euler_00.fields.x = UVar10.fields.x * 57.29578;
          euler_00.fields.y = UVar10.fields.y * 57.29578;
          euler_00.fields.z = UVar10.fields.z * 57.29578;
          UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar10.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar10.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar7 + 0x6c) = uVar8;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar6 = SUB81(plVar7,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar6;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b56c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Up(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41b56d0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Cameras_InGameCamera_o *__this;
  Il2CppObject *pIVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined4 uVar7;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ad559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad559 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar6[5] != 0) &&
       ((pIVar4 != (Il2CppObject *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar6 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar6[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar8.fields.x * 57.29578;
          euler.fields.y = UVar8.fields.y * 57.29578;
          euler.fields.z = UVar8.fields.z * 57.29578;
          UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar8.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar8.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar6 + 0x6c) = uVar7;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar5 = SUB81(plVar6,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar5;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x41b5730

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  long *plVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  undefined1 auStack_4 [4];
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
      return pIVar3;
    }
    method = (MethodInfo *)TypeInfo_InGameCamera;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar2 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (pIVar3 = *(Il2CppObject **)(*plVar2 + 200),
       *(Il2CppClass **)((long)pIVar3 + (ulong)bVar1 * 8 + -8) == TypeInfo_InGameCamera)) {
      *(float *)((long)plVar2 + 0x6c) = fVar4;
      return pIVar3;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad55b = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41b57d0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  long *plVar1;
  Il2CppObject *__this;
  float fVar2;
  
  if (g_data_057ad55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad55a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)
       ) {
      *(float *)((long)plVar1 + 0x6c) = fVar2;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad55b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin___ctor (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x41b1a30

void CustomLogic_CustomLogicCameraBuiltin___ctor
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad526 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad526 = '\x01';
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


// CustomLogic.CustomLogicCameraBuiltin$$get_CurrentCamera
// il2cpp: Cameras_InGameCamera_o* CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera (const MethodInfo* method);
// 0x41b1aa0

Cameras_InGameCamera_o * CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_InGameCamera_o *pCVar3;
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  pCVar3 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (pCVar3 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if (((pCVar3->klass->_2).naturalAligment < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
      il2cpp_runtime_helper_022b2fd0(pCVar3);
      if (g_data_057ad528 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad528 = '\x01';
        iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar2 != 0) {
        return (Cameras_InGameCamera_o *)
               CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                        *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49));
      }
      il2cpp_runtime_helper_02337ed0();
      return (Cameras_InGameCamera_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49));
    }
  }
  return pCVar3;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsManual
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual (const MethodInfo* method);
// 0x41b1b20

bool_conflict CustomLogic_CustomLogicCameraBuiltin__get_IsManual(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad528 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad528 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49));
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Position (const MethodInfo* method);
// 0x41b1b90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Position(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ad529 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad529 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 == (long *)0x0) {
label_041b1c71:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
          (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
           TypeInfo_InGameCamera)) {
    if ((plVar1[5] != 0) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,UVar4,(MethodInfo *)0x0);
      return pCVar3;
    }
    goto label_041b1c71;
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad52a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52a = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) != TypeInfo_InGameCamera)
       ) goto label_041b1d8b;
    if ((plVar1[5] != 0) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar4.fields.x * 57.29578;
      euler.fields.y = UVar4.fields.y * 57.29578;
      euler.fields.z = UVar4.fields.z * 57.29578;
      UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,UVar4,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b1d8b:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x6c);
  pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return pCVar3;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Rotation (const MethodInfo* method);
// 0x41b1c80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Rotation(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ad52a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52a = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) != TypeInfo_InGameCamera)
       ) goto label_041b1d8b;
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10), __this != (UnityEngine_Transform_o *)0x0)) {
      rotation = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar3.fields.x * 57.29578;
      euler.fields.y = UVar3.fields.y * 57.29578;
      euler.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar2,UVar3,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b1d8b:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x6c);
  pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar2,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Velocity (const MethodInfo* method);
// 0x41b1d90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Velocity(MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (g_data_057ad52b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x6c);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FOV
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FOV (const MethodInfo* method);
// 0x41b1e30

float CustomLogic_CustomLogicCameraBuiltin__get_FOV(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad52c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad52c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CameraMode
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_CameraMode (const MethodInfo* method);
// 0x41b1ea0

System_String_o * CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(MethodInfo *method)

{
  byte bVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *pUVar3;
  long *plVar4;
  Cameras_InGameCamera_o *__this;
  char cVar5;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  System_String_o *extraout_RAX;
  undefined1 uVar8;
  long *plVar9;
  undefined4 extraout_XMM0_Da;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  undefined8 uStack_158;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (g_data_057ad52d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CameraInputMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CameraInputMode_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057ad52d = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_041b1ec1;
label_041b1f23:
    il2cpp_runtime_helper_02337ed0();
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    cVar5 = (char)uVar2;
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_041b1f23;
label_041b1ec1:
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    cVar5 = (char)uVar2;
  }
  if (cVar5 != '\0') {
    local_10 = (undefined4)((ulong)uVar2 >> 0x20);
label_041b1fa9:
    local_20.klass = TypeInfo_CameraInputMode;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSVar6 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar6;
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      local_10 = (undefined4)plVar9[0xd];
      goto label_041b1fa9;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad52e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52e = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 == (long *)0x0) {
label_041b20d1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if (plVar9[5] != 0) {
        pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10);
        plVar9 = (long *)0x0;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
          pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar11,(MethodInfo *)0x0);
          return (System_String_o *)pCVar7;
        }
      }
      goto label_041b20d1;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad52f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad52f = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 == (long *)0x0) {
label_041b229f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar4[5] != 0) &&
         ((plVar9 != (long *)0x0 &&
          (pUVar3 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_forward
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar9 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar9 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b22a4;
          if ((plVar9[5] != 0) &&
             (pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
            UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
            euler.fields.x = UVar11.fields.x * 57.29578;
            euler.fields.y = UVar11.fields.y * 57.29578;
            euler.fields.z = UVar11.fields.z * 57.29578;
            UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = *(System_String_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pSVar6[4].klass = UVar11.fields._0_8_;
            *(float *)&pSVar6[4].monitor = UVar11.fields.z;
            return pSVar6;
          }
        }
      }
      goto label_041b229f;
    }
  }
label_041b22a4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad530 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad530 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 == (long *)0x0) {
label_041b2391:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if (plVar9[5] != 0) {
        pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10);
        plVar9 = (long *)0x0;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_right(pUVar3,(MethodInfo *)0x0);
          pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar11,(MethodInfo *)0x0);
          return (System_String_o *)pCVar7;
        }
      }
      goto label_041b2391;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar4[5] != 0) &&
         ((plVar9 != (long *)0x0 &&
          (pUVar3 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar9 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar9 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar9[5] != 0) &&
             (pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
            UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
            euler_00.fields.x = UVar11.fields.x * 57.29578;
            euler_00.fields.y = UVar11.fields.y * 57.29578;
            euler_00.fields.z = UVar11.fields.z * 57.29578;
            UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = *(System_String_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pSVar6[4].klass = UVar11.fields._0_8_;
            *(float *)&pSVar6[4].monitor = UVar11.fields.z;
            return pSVar6;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if (plVar9[5] != 0) {
        pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10);
        plVar9 = (long *)0x0;
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_up(pUVar3,(MethodInfo *)0x0);
          pCVar7 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
          CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar7,UVar11,(MethodInfo *)0x0);
          return (System_String_o *)pCVar7;
        }
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar4[5] != 0) &&
       ((plVar9 != (long *)0x0 &&
        (pUVar3 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar3,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar9 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar9 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar9[5] != 0) &&
           (pUVar3 = *(UnityEngine_Transform_o **)(plVar9[5] + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
          UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
          euler_01.fields.x = UVar11.fields.x * 57.29578;
          euler_01.fields.y = UVar11.fields.y * 57.29578;
          euler_01.fields.z = UVar11.fields.z * 57.29578;
          UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = *(System_String_o **)(TypeInfo_CustomLogicManager + 0xb8);
          pSVar6[4].klass = UVar11.fields._0_8_;
          *(float *)&pSVar6[4].monitor = UVar11.fields.z;
          return pSVar6;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uStack_158 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    uStack_158 = (System_String_o *)CONCAT44(extraout_XMM0_Da,SUB84(uStack_158,0));
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar9 + 0x6c) = extraout_XMM0_Da;
      return uStack_158;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar8 = SUB81(plVar9,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)((long)&pSVar6[3].klass + 1) = uVar8;
  return pSVar6;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Forward (const MethodInfo* method);
// 0x41b1ff0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Forward(MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long *plVar3;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX;
  undefined1 uVar5;
  long *plVar6;
  undefined4 extraout_XMM0_Da;
  UnityEngine_Quaternion_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  undefined8 uStack_130;
  
  if (g_data_057ad52e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad52e = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b20d1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_forward(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b20d1;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad52f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad52f = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 == (long *)0x0) {
label_041b229f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar3[5] != 0) &&
         ((plVar6 != (long *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_forward
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar6 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b22a4;
          if ((plVar6[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar7 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar7,(MethodInfo *)0x0);
            euler.fields.x = UVar8.fields.x * 57.29578;
            euler.fields.y = UVar8.fields.y * 57.29578;
            euler.fields.z = UVar8.fields.z * 57.29578;
            UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pCVar4[1].fields._containsTypeOverride = (int)UVar8.fields._0_8_;
            pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
                 (int)((ulong)UVar8.fields._0_8_ >> 0x20);
            pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar8.fields.z;
            return pCVar4;
          }
        }
      }
      goto label_041b229f;
    }
  }
label_041b22a4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad530 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad530 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2391:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_right(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b2391;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar3[5] != 0) &&
         ((plVar6 != (long *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar6 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar6[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar7 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar7,(MethodInfo *)0x0);
            euler_00.fields.x = UVar8.fields.x * 57.29578;
            euler_00.fields.y = UVar8.fields.y * 57.29578;
            euler_00.fields.z = UVar8.fields.z * 57.29578;
            UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pCVar4[1].fields._containsTypeOverride = (int)UVar8.fields._0_8_;
            pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
                 (int)((ulong)UVar8.fields._0_8_ >> 0x20);
            pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar8.fields.z;
            return pCVar4;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar3[5] != 0) &&
       ((plVar6 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar6 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar6[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar7 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar7,(MethodInfo *)0x0);
          euler_01.fields.x = UVar8.fields.x * 57.29578;
          euler_01.fields.y = UVar8.fields.y * 57.29578;
          euler_01.fields.z = UVar8.fields.z * 57.29578;
          UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
          pCVar4[1].fields._containsTypeOverride = (int)UVar8.fields._0_8_;
          pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
               (int)((ulong)UVar8.fields._0_8_ >> 0x20);
          pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar8.fields.z;
          return pCVar4;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uStack_130 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    uStack_130 = (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_XMM0_Da,SUB84(uStack_130,0));
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar6 + 0x6c) = extraout_XMM0_Da;
      return uStack_130;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar5 = SUB81(plVar6,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)((long)&pCVar4[1].monitor + 1) = uVar5;
  return pCVar4;
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Forward (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x41b20e0

void CustomLogic_CustomLogicCameraBuiltin__set_Forward
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  long *plVar4;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined4 uVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  
  if (g_data_057ad52f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad52f = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 == (long *)0x0) {
label_041b229f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar7[5] != 0) &&
         ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_forward
                  (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar7 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b22a4;
          if ((plVar7[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
            euler.fields.x = UVar10.fields.x * 57.29578;
            euler.fields.y = UVar10.fields.y * 57.29578;
            euler.fields.z = UVar10.fields.z * 57.29578;
            UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar10.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar10.fields.z;
            return;
          }
        }
      }
      goto label_041b229f;
    }
  }
label_041b22a4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad530 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad530 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 == (long *)0x0) {
label_041b2391:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar7[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), plVar7 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar10 = UnityEngine_Transform__get_right(pUVar2,(MethodInfo *)0x0);
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar10,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2391;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar4[5] != 0) &&
         ((plVar7 != (long *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar7 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar7 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar7[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
            euler_00.fields.x = UVar10.fields.x * 57.29578;
            euler_00.fields.y = UVar10.fields.y * 57.29578;
            euler_00.fields.z = UVar10.fields.z * 57.29578;
            UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar10.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar10.fields.z;
            return;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar7[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), plVar7 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar10 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,UVar10,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar4[5] != 0) &&
       ((plVar7 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar7 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar7 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar7[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar7[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar9 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
          euler_01.fields.x = UVar10.fields.x * 57.29578;
          euler_01.fields.y = UVar10.fields.y * 57.29578;
          euler_01.fields.z = UVar10.fields.z * 57.29578;
          UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar10.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar10.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar7 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar7 + 0x6c) = uVar8;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar6 = SUB81(plVar7,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar6;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Right (const MethodInfo* method);
// 0x41b22b0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Right(MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long *plVar3;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX;
  undefined1 uVar5;
  long *plVar6;
  undefined4 extraout_XMM0_Da;
  UnityEngine_Quaternion_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  undefined8 uStack_d0;
  
  if (g_data_057ad530 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad530 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2391:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_right(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b2391;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar3[5] != 0) &&
         ((plVar6 != (long *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0
                  );
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar6 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar6[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar7 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar7,(MethodInfo *)0x0);
            euler.fields.x = UVar8.fields.x * 57.29578;
            euler.fields.y = UVar8.fields.y * 57.29578;
            euler.fields.z = UVar8.fields.z * 57.29578;
            UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pCVar4[1].fields._containsTypeOverride = (int)UVar8.fields._0_8_;
            pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
                 (int)((ulong)UVar8.fields._0_8_ >> 0x20);
            pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar8.fields.z;
            return pCVar4;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar8,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar3[5] != 0) &&
       ((plVar6 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar6 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar6[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar7 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar7,(MethodInfo *)0x0);
          euler_00.fields.x = UVar8.fields.x * 57.29578;
          euler_00.fields.y = UVar8.fields.y * 57.29578;
          euler_00.fields.z = UVar8.fields.z * 57.29578;
          UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
          pCVar4[1].fields._containsTypeOverride = (int)UVar8.fields._0_8_;
          pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
               (int)((ulong)UVar8.fields._0_8_ >> 0x20);
          pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar8.fields.z;
          return pCVar4;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    uStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_XMM0_Da,SUB84(uStack_d0,0));
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar6 + 0x6c) = extraout_XMM0_Da;
      return uStack_d0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar5 = SUB81(plVar6,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)((long)&pCVar4[1].monitor + 1) = uVar5;
  return pCVar4;
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Right (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x41b23a0

void CustomLogic_CustomLogicCameraBuiltin__set_Right
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  long *plVar4;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  undefined1 uVar5;
  long *plVar6;
  undefined4 uVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  
  if (g_data_057ad531 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad531 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b255f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
          (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)
          ))) {
        UnityEngine_Transform__set_right
                  (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        if (g_data_057ad527 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          g_data_057ad527 = '\x01';
        }
        plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (plVar6 != (long *)0x0) {
          bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
          goto label_041b2564;
          if ((plVar6[5] != 0) &&
             (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UVar8 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
            UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
            euler.fields.x = UVar9.fields.x * 57.29578;
            euler.fields.y = UVar9.fields.y * 57.29578;
            euler.fields.z = UVar9.fields.z * 57.29578;
            UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
            *(long *)(lVar3 + 0x60) = UVar9.fields._0_8_;
            *(float *)(lVar3 + 0x68) = UVar9.fields.z;
            return;
          }
        }
      }
      goto label_041b255f;
    }
  }
label_041b2564:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,UVar9,(MethodInfo *)0x0);
        return;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar4[5] != 0) &&
       ((plVar6 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar6 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar6[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar8 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
          euler_00.fields.x = UVar9.fields.x * 57.29578;
          euler_00.fields.y = UVar9.fields.y * 57.29578;
          euler_00.fields.z = UVar9.fields.z * 57.29578;
          UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar9.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar9.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar6 + 0x6c) = uVar7;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar5 = SUB81(plVar6,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar5;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Up (const MethodInfo* method);
// 0x41b2570

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Up(MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long *plVar3;
  Cameras_InGameCamera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX;
  undefined1 uVar5;
  long *plVar6;
  undefined4 extraout_XMM0_Da;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_70;
  
  if (g_data_057ad532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ad532 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 == (long *)0x0) {
label_041b2651:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      if ((plVar6[5] != 0) &&
         (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), plVar6 = (long *)0x0,
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar7 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
        pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar4,UVar7,(MethodInfo *)0x0);
        return pCVar4;
      }
      goto label_041b2651;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar3[5] != 0) &&
       ((plVar6 != (long *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(plVar6 + 6),(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar6 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar6[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar6[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar7.fields.x * 57.29578;
          euler.fields.y = UVar7.fields.y * 57.29578;
          euler.fields.z = UVar7.fields.z * 57.29578;
          UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
          pCVar4[1].fields._containsTypeOverride = (int)UVar7.fields._0_8_;
          pCVar4[1].fields._Namespace_k__BackingField.fields.hasValue =
               (int)((ulong)UVar7.fields._0_8_ >> 0x20);
          pCVar4[1].fields._Namespace_k__BackingField.fields.value = (int32_t)UVar7.fields.z;
          return pCVar4;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    uStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_XMM0_Da,SUB84(uStack_70,0));
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar6 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar6 + 0x6c) = extraout_XMM0_Da;
      return uStack_70;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar5 = SUB81(plVar6,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = *(CustomLogic_CustomLogicVector3Builtin_o **)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)((long)&pCVar4[1].monitor + 1) = uVar5;
  return pCVar4;
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Up (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x41b2660

void CustomLogic_CustomLogicCameraBuiltin__set_Up
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Cameras_InGameCamera_o *__this;
  undefined1 uVar4;
  long *plVar5;
  undefined4 uVar6;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ad533 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad533 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2824;
    if ((plVar5[5] != 0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar5 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2824;
        if ((plVar5[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar7.fields.x * 57.29578;
          euler.fields.y = UVar7.fields.y * 57.29578;
          euler.fields.z = UVar7.fields.z * 57.29578;
          UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar7.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar7.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2824:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(undefined4 *)((long)plVar5 + 0x6c) = uVar6;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar4 = SUB81(plVar5,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar4;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FollowDistance
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance (const MethodInfo* method);
// 0x41b2830

float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  undefined1 uVar2;
  long *plVar3;
  float fVar4;
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      fVar4 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return fVar4;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar3 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_InGameCamera)) {
      *(float *)((long)plVar3 + 0x6c) = fVar4;
      return fVar4;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar2 = SUB81(plVar3,0);
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    fVar4 = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    fVar4 = (float)il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar2;
  return fVar4;
}


// CustomLogic.CustomLogicCameraBuiltin$$set_FollowDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance (float value, const MethodInfo* method);
// 0x41b28b0

void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance(float value,MethodInfo *method)

{
  undefined1 uVar1;
  long *plVar2;
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)
       ) {
      *(float *)((long)plVar2 + 0x6c) = value;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar1 = SUB81(plVar2,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = uVar1;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetManual
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetManual (bool manual, const MethodInfo* method);
// 0x41b2940

void CustomLogic_CustomLogicCameraBuiltin__SetManual(bool_conflict manual,MethodInfo *method)

{
  if (g_data_057ad534 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad534 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x49) = (char)manual;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetPosition (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x41b2990

void CustomLogic_CustomLogicCameraBuiltin__SetPosition
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  UnityEngine_Transform_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Vector3_Fields value;
  bool_conflict bVar4;
  long *plVar5;
  undefined8 *unaff_RBX;
  undefined8 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  UnityEngine_Transform_o *pUVar10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uVar11;
  float fVar12;
  UnityEngine_Quaternion_o UVar13;
  undefined1 auVar14 [12];
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o euler;
  undefined8 local_18;
  float local_10;
  
  pCVar8 = position;
  if (g_data_057ad535 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad535 = '\x01';
  }
  puVar6 = (undefined8 *)0x0;
  if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_041b2a65:
    il2cpp_runtime_helper_022b2c90();
    pCVar9 = pCVar8;
  }
  else {
    local_10 = (position->fields).Value.fields.z;
    local_18._0_4_ = (position->fields).Value.fields.x;
    local_18._4_4_ = (position->fields).Value.fields.y;
    puVar6 = &TypeInfo_CustomLogicManager;
    if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = ((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr;
    *(float *)(lVar3 + 0x5c) = local_10;
    *(undefined8 *)(lVar3 + 0x54) = local_18;
    pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (pCVar8 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_041b2a65;
    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
    pCVar9 = pCVar8;
    if ((bVar2 <= (pCVar8->klass->_2).naturalAligment) &&
       ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameCamera))
    goto Cameras_InGameCamera__SyncCustomPosition;
  }
  unaff_RBX = puVar6;
  il2cpp_runtime_helper_022b2fd0();
  pCVar8 = pCVar9;
  if (g_data_057ad536 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad536 = '\x01';
  }
  if (pCVar9 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_041b2b45:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    fVar12 = (pCVar9->fields).Value.fields.z;
    uVar1 = *(undefined8 *)&(pCVar9->fields).Value.fields;
    if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = ((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr;
    *(float *)(lVar3 + 0x68) = fVar12;
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (pCVar8 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_041b2b45;
    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar2 <= (pCVar8->klass->_2).naturalAligment) &&
       ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameCamera)) {
      register0x00000020 = (BADSPACEBASE *)&local_18;
Cameras_InGameCamera__SyncCustomPosition:
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
      *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
      *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_RBX;
      if (g_data_057ae864 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x447777d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ae864 = '\x01';
      }
      pUVar7 = *(UnityEngine_Transform_o **)&(pCVar8->fields)._containsTypeOverride;
      if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44777a0;
        il2cpp_runtime_helper_02337ed0();
      }
      fVar12 = *(float *)(((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr + 0x4c);
      pUVar10 = TypeInfo_CustomLogicManager;
      if (fVar12 <= 0.0) {
        fVar12 = 50.0;
      }
      else if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44777c5;
        il2cpp_runtime_helper_02337ed0();
        fVar12 = *(float *)(((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr + 0x4c);
      }
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44777f9;
        pUVar10 = pUVar7;
        UnityEngine_Camera__set_fieldOfView((UnityEngine_Camera_o *)pUVar7,fVar12,(MethodInfo *)0x0);
        lVar3 = *(long *)&(pCVar8->fields)._Namespace_k__BackingField.fields.value;
        if (lVar3 != 0) {
          pUVar7 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x447781b;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar10 = TypeInfo_CustomLogicManager;
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            value = *(UnityEngine_Vector3_Fields *)
                     (((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr + 0x54);
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x447783e;
            pUVar10 = pUVar7;
            UnityEngine_Transform__set_position(pUVar7,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
            lVar3 = *(long *)&(pCVar8->fields)._Namespace_k__BackingField.fields.value;
            if (lVar3 != 0) {
              __this = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
              lVar3 = ((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr;
              uVar1 = *(undefined8 *)(lVar3 + 0x60);
              UVar15.fields.x = (float)uVar1 * 0.017453292;
              UVar15.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.017453292;
              UVar15.fields.z = *(float *)(lVar3 + 0x68) * 0.017453292;
              pUVar10 = (UnityEngine_Transform_o *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4477875;
              UVar13 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar15,(MethodInfo *)0x0);
              pUVar7 = (UnityEngine_Transform_o *)0x0;
              if (__this != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_rotation(__this,UVar13,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x447788e;
      il2cpp_runtime_helper_022b2c90();
      *(UnityEngine_Transform_o ***)((long)register0x00000020 + -0x20) = &TypeInfo_CustomLogicManager;
      *(CustomLogic_CustomLogicVector3Builtin_o **)((long)register0x00000020 + -0x28) = pCVar8;
      *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x30) = pUVar7;
      if (g_data_057ae865 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44778b1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44778bd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44778c9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapLight_get_Current);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44778d5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44778e1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
        g_data_057ae865 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      lVar3 = ((UnityEngine_Camera_Fields *)&pUVar10[1].fields)->m_CachedPtr;
      if (lVar3 != 0) {
        pUVar7 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477921;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477949;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x50),
                     __this_00,MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
          while( true ) {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x447795b;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o)
                               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                                ((long)register0x00000020 + -0x50),
                               (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x50));
            if ((char)bVar4 == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477987;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)
                          ((long)register0x00000020 + -0x50),
                         (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x50));
              return;
            }
            if (*(Map_MapLight_o **)((long)register0x00000020 + -0x40) == (Map_MapLight_o *)0x0) break;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477973;
            Map_MapLight__UpdateCull
                      (*(Map_MapLight_o **)((long)register0x00000020 + -0x40),pUVar7,(MethodInfo *)0x0);
          }
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477996;
          il2cpp_runtime_helper_022b2c90();
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x447799b;
      auVar14 = il2cpp_runtime_helper_022b2c90();
      if (auVar14._8_4_ == 1) {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44779bf;
        plVar5 = (long *)__cxa_begin_catch(auVar14._0_8_);
        lVar3 = *plVar5;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44779c7;
        __cxa_end_catch();
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44779d9;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)
                    ((long)register0x00000020 + -0x50),
                   (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x50));
        if (lVar3 == 0) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44779e6;
        il2cpp_runtime_helper_022fefe0(lVar3);
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44779ff;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)
                  ((long)register0x00000020 + -0x50),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x50))
      ;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4477a0c;
      _Unwind_Resume(auVar14._0_8_);
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pCVar9 = pCVar8;
  if (g_data_057ad537 == '\0') {
    pCVar9 = (CustomLogic_CustomLogicVector3Builtin_o *)&TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad537 = '\x01';
  }
  if (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar12 = (pCVar8->fields).Value.fields.z;
    uVar1 = *(undefined8 *)&(pCVar8->fields).Value.fields;
    if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = ((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr;
    *(float *)(lVar3 + 0x74) = fVar12;
    *(undefined8 *)(lVar3 + 0x6c) = uVar1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad538 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad538 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
       (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_InGameCamera))
    goto label_041b2d94;
    if ((plVar5[5] != 0) &&
       ((pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar7 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar7 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__LookAt_4e0aa40
                (pUVar7,(UnityEngine_Vector3_o)(pCVar9->fields).Value.fields,(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar5 != (long *)0x0) {
        bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_InGameCamera))
        goto label_041b2d94;
        if ((plVar5[5] != 0) &&
           (pUVar7 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar7 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar13 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
          UVar15 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar13,(MethodInfo *)0x0);
          euler.fields.x = UVar15.fields.x * 57.29578;
          euler.fields.y = UVar15.fields.y * 57.29578;
          euler.fields.z = UVar15.fields.z * 57.29578;
          UVar15 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = ((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr;
          *(long *)(lVar3 + 0x60) = UVar15.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar15.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2d94:
  uVar11 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad539 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad539 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined4 *)(((UnityEngine_Camera_Fields *)&TypeInfo_CustomLogicManager[7].fields)->m_CachedPtr + 0x4c) = uVar11;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetRotation
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetRotation (CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x41b2a70

void CustomLogic_CustomLogicCameraBuiltin__SetRotation
               (CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  UnityEngine_Transform_o **ppUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  undefined4 uVar9;
  float fVar10;
  UnityEngine_Quaternion_o UVar11;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o euler;
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppMethodPointer pIVar15;
  Map_MapLight_o *__this_04;
  
  plVar5 = (long *)rotation;
  if (g_data_057ad536 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    plVar5 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad536 = '\x01';
  }
  if (rotation == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_041b2b45:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    fVar10 = (rotation->fields).Value.fields.z;
    uVar2 = *(undefined8 *)&(rotation->fields).Value.fields;
    if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = TypeInfo_CustomLogicManager[7].fields.m_CachedPtr;
    *(float *)(lVar3 + 0x68) = fVar10;
    *(undefined8 *)(lVar3 + 0x60) = uVar2;
    plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((CustomLogic_CustomLogicVector3Builtin_o *)plVar5 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)
    goto label_041b2b45;
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->klass->_2).naturalAligment) &&
       ((((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        TypeInfo_InGameCamera)) {
      if (g_data_057ae864 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ae864 = '\x01';
      }
      pUVar7 = *(UnityEngine_Transform_o **)
                &(((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->fields)._containsTypeOverride;
      if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar10 = *(float *)(TypeInfo_CustomLogicManager[7].fields.m_CachedPtr + 0x4c);
      pUVar8 = TypeInfo_CustomLogicManager;
      if (fVar10 <= 0.0) {
        fVar10 = 50.0;
      }
      else if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        fVar10 = *(float *)(TypeInfo_CustomLogicManager[7].fields.m_CachedPtr + 0x4c);
      }
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Camera__set_fieldOfView((UnityEngine_Camera_o *)pUVar7,fVar10,(MethodInfo *)0x0);
        lVar3 = *(long *)&(((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->fields).
                          _Namespace_k__BackingField.fields.value;
        pUVar8 = pUVar7;
        if (lVar3 != 0) {
          pUVar7 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar8 = TypeInfo_CustomLogicManager;
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (pUVar7,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(TypeInfo_CustomLogicManager[7].fields.m_CachedPtr + 0x54),
                       (MethodInfo *)0x0);
            lVar3 = *(long *)&(((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->fields).
                              _Namespace_k__BackingField.fields.value;
            pUVar8 = pUVar7;
            if (lVar3 != 0) {
              pUVar7 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
              lVar3 = TypeInfo_CustomLogicManager[7].fields.m_CachedPtr;
              uVar2 = *(undefined8 *)(lVar3 + 0x60);
              UVar13.fields.x = (float)uVar2 * 0.017453292;
              UVar13.fields.y = (float)((ulong)uVar2 >> 0x20) * 0.017453292;
              UVar13.fields.z = *(float *)(lVar3 + 0x68) * 0.017453292;
              pUVar8 = (UnityEngine_Transform_o *)0x0;
              UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar13,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_rotation(pUVar7,UVar11,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae865 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapLight_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
        g_data_057ae865 = '\x01';
      }
      pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
      pIVar15 = (Il2CppMethodPointer)0x0;
      __this_04 = (Map_MapLight_o *)0x0;
      lVar3 = ((UnityEngine_Camera_Fields *)&pUVar8[1].fields)->m_CachedPtr;
      if (lVar3 != 0) {
        pUVar7 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this,
                     MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
          while( true ) {
            __this_00.fields._8_8_ = pIVar15;
            __this_00.fields._list = pSVar14;
            __this_00.fields._current = (Il2CppObject *)__this_04;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = pIVar15;
              __this_01.fields._list = pSVar14;
              __this_01.fields._current = (Il2CppObject *)__this_04;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
              return;
            }
            if (__this_04 == (Map_MapLight_o *)0x0) break;
            Map_MapLight__UpdateCull(__this_04,pUVar7,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ == 1) {
        plVar5 = (long *)__cxa_begin_catch(auVar12._0_8_);
        lVar3 = *plVar5;
        __cxa_end_catch();
        __this_02.fields._8_8_ = pIVar15;
        __this_02.fields._list = pSVar14;
        __this_02.fields._current = (Il2CppObject *)__this_04;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
        if (lVar3 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar3);
      }
      __this_03.fields._8_8_ = pIVar15;
      __this_03.fields._list = pSVar14;
      __this_03.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
      _Unwind_Resume(auVar12._0_8_);
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  ppUVar6 = (UnityEngine_Transform_o **)plVar5;
  if (g_data_057ad537 == '\0') {
    ppUVar6 = &TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad537 = '\x01';
  }
  if ((CustomLogic_CustomLogicVector3Builtin_o *)plVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar10 = (((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->fields).Value.fields.z;
    uVar2 = *(undefined8 *)&(((CustomLogic_CustomLogicVector3Builtin_o *)plVar5)->fields).Value.fields;
    if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = TypeInfo_CustomLogicManager[7].fields.m_CachedPtr;
    *(float *)(lVar3 + 0x74) = fVar10;
    *(undefined8 *)(lVar3 + 0x6c) = uVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad538 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad538 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
    goto label_041b2d94;
    if ((plVar5[5] != 0) &&
       (((CustomLogic_CustomLogicVector3Builtin_o *)ppUVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0
        && (pUVar7 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar7 != (UnityEngine_Transform_o *)0x0
           )))) {
      UnityEngine_Transform__LookAt_4e0aa40
                (pUVar7,(UnityEngine_Vector3_o)
                        (((CustomLogic_CustomLogicVector3Builtin_o *)ppUVar6)->fields).Value.fields,
                 (MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar5 != (long *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_InGameCamera))
        goto label_041b2d94;
        if ((plVar5[5] != 0) &&
           (pUVar7 = *(UnityEngine_Transform_o **)(plVar5[5] + 0x10), pUVar7 != (UnityEngine_Transform_o *)0x0
           )) {
          UVar11 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
          UVar13 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar11,(MethodInfo *)0x0);
          euler.fields.x = UVar13.fields.x * 57.29578;
          euler.fields.y = UVar13.fields.y * 57.29578;
          euler.fields.z = UVar13.fields.z * 57.29578;
          UVar13 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = TypeInfo_CustomLogicManager[7].fields.m_CachedPtr;
          *(long *)(lVar3 + 0x60) = UVar13.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar13.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2d94:
  uVar9 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad539 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad539 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined4 *)(TypeInfo_CustomLogicManager[7].fields.m_CachedPtr + 0x4c) = uVar9;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetVelocity
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetVelocity (CustomLogic_CustomLogicVector3Builtin_o* velocity, const MethodInfo* method);
// 0x41b2b50

void CustomLogic_CustomLogicCameraBuiltin__SetVelocity
               (CustomLogic_CustomLogicVector3Builtin_o *velocity,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  undefined4 uVar7;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  
  pCVar6 = velocity;
  if (g_data_057ad537 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)&TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad537 = '\x01';
  }
  if (velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar1 = (velocity->fields).Value.fields.z;
    uVar2 = *(undefined8 *)&(velocity->fields).Value.fields;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(float *)(lVar3 + 0x74) = fVar1;
    *(undefined8 *)(lVar3 + 0x6c) = uVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad538 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad538 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) != TypeInfo_InGameCamera)
       ) goto label_041b2d94;
    if ((plVar4[5] != 0) &&
       ((pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar5 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar5 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__LookAt_4e0aa40
                (pUVar5,(UnityEngine_Vector3_o)(pCVar6->fields).Value.fields,(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto label_041b2d94;
        if ((plVar4[5] != 0) &&
           (pUVar5 = *(UnityEngine_Transform_o **)(plVar4[5] + 0x10), pUVar5 != (UnityEngine_Transform_o *)0x0
           )) {
          rotation = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar8.fields.x * 57.29578;
          euler.fields.y = UVar8.fields.y * 57.29578;
          euler.fields.z = UVar8.fields.z * 57.29578;
          UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar8.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar8.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2d94:
  uVar7 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad539 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad539 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined4 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = uVar7;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__LookAt (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x41b2bd0

void CustomLogic_CustomLogicCameraBuiltin__LookAt
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  undefined4 uVar4;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ad538 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad538 = '\x01';
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) != TypeInfo_InGameCamera)
       ) goto label_041b2d94;
    if ((plVar1[5] != 0) &&
       ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0)))
       ) {
      UnityEngine_Transform__LookAt_4e0aa40
                (pUVar2,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
      if (g_data_057ad527 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        g_data_057ad527 = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto label_041b2d94;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
           )) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar5.fields.x * 57.29578;
          euler.fields.y = UVar5.fields.y * 57.29578;
          euler.fields.z = UVar5.fields.z * 57.29578;
          UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x60) = UVar5.fields._0_8_;
          *(float *)(lVar3 + 0x68) = UVar5.fields.z;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b2d94:
  uVar4 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad539 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad539 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined4 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = uVar4;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetFOV
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetFOV (float fov, const MethodInfo* method);
// 0x41b2da0

void CustomLogic_CustomLogicCameraBuiltin__SetFOV(float fov,MethodInfo *method)

{
  if (g_data_057ad539 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad539 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x4c) = fov;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode (System_String_o* mode, const MethodInfo* method);
// 0x41b2e10

void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(System_String_o *mode,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t value;
  undefined8 local_10;
  
  if (g_data_057ad53a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CameraInputMode_Parse_CameraInputMode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Settings_CameraInputMode);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057ad53a = '\x01';
  }
  bVar1 = System_String__op_Equality(mode,"null",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
    return;
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = System_Enum__Parse_Int32Enum_(mode,MethodInfo_CameraInputMode_Parse_CameraInputMode);
  local_10 = 0;
  System_Nullable_Int32Enum____ctor((System_Nullable_Int32Enum__o)&local_10,value,MethodInfo_Nullable_1_Settings_CameraInputMode);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = local_10;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetDistance (const MethodInfo* method);
// 0x41b2f20

void CustomLogic_CustomLogicCameraBuiltin__ResetDistance(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  Cameras_InGameCamera_o *pCVar4;
  
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  pCVar4 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (pCVar4 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(pCVar4,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad53b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53b = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  pCVar4 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (pCVar4 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetCameraMode(pCVar4,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar3 = SUB81(pCVar4,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad53c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80) = uVar3;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode (const MethodInfo* method);
// 0x41b2fa0

void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  Cameras_InGameCamera_o *__this;
  
  if (g_data_057ad53b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53b = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
  }
  if (g_data_057ad527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ad527 = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetCameraMode(__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar3 = SUB81(__this,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad53c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80) = uVar3;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraLocked
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked (bool locked, const MethodInfo* method);
// 0x41b30b0

void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked(bool_conflict locked,MethodInfo *method)

{
  if (g_data_057ad53c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80) = (char)locked;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCursorVisible
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible (bool visible, const MethodInfo* method);
// 0x41b3110

void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible(bool_conflict visible,MethodInfo *method)

{
  if (g_data_057ad53d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad53d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x81) = (char)visible;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_ClassName (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x41b3170

System_String_o *
CustomLogic_CustomLogicCameraBuiltin__get_ClassName
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad53e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Camera");
    g_data_057ad53e = '\x01';
  }
  return "Camera";
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x41b31a0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsStatic (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x41b31b0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x41b31c0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


