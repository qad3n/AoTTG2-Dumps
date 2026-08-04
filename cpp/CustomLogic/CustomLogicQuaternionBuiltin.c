// Type: CustomLogic.CustomLogicQuaternionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicQuaternionBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicQuaternionBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicQuaternionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40c58e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar9;
  il2cpp_array_size_t iVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *str2;
  undefined8 uVar13;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar14;
  System_Func_T__object__o *pSVar15;
  System_Action_T__object__o *pSVar16;
  System_Func_T__object____object__o *pSVar17;
  System_ArgumentException_o **ppSVar18;
  undefined8 *unaff_R15;
  System_ArgumentException_o *pSStack_50;
  System_ArgumentException_o *pSStack_48;
  System_String_o *pSStack_40;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (g_data_057ac5a0 == '\0') {
    pSStack_40 = (System_String_o *)0x40c5901;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pSStack_40 = (System_String_o *)0x40c590d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    pSStack_40 = (System_String_o *)0x40c5919;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac5a0 = '\x01';
  }
  local_2c = 0;
  if (args == (System_Object_array *)0x0) {
label_040c5b1a:
    pSStack_40 = (System_String_o *)0x40c5b1f;
    iVar10 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar10 = args->max_length;
    if (iVar10 == 0) {
      pSStack_40 = (System_String_o *)0x40c5a93;
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac597 == '\0') {
        pSStack_40 = (System_String_o *)0x40c5aab;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac597 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pSStack_40 = (System_String_o *)0x40c5ac7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      pfVar2 = *(float **)(TypeInfo_Quaternion + 0xb8);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      (pCVar9->fields).Value.fields.x = *pfVar2;
      (pCVar9->fields).Value.fields.y = fVar4;
      (pCVar9->fields).Value.fields.z = fVar5;
      (pCVar9->fields).Value.fields.w = fVar6;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x40c5afe;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_String_o *)0x40c5b08;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
      return pCVar9;
    }
    if ((int)iVar10 == 4) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x40c5963;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_Single_ConvertTo_Single;
      pSStack_40 = (System_String_o *)0x40c5975;
      local_1c = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(obj,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)args->max_length) {
        pSStack_40 = (System_String_o *)0x40c5991;
        local_20 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(args->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)args->max_length) {
          pSStack_40 = (System_String_o *)0x40c59ad;
          local_24 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(args->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (3 < (uint)args->max_length) {
            pSStack_40 = (System_String_o *)0x40c59c9;
            local_28 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(args->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            pSStack_40 = (System_String_o *)0x40c59de;
            pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
            if (g_data_057ac598 == '\0') {
              pSStack_40 = (System_String_o *)0x40c59f6;
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac598 = '\x01';
            }
            if (g_data_057a6843 == '\0') {
              pSStack_40 = (System_String_o *)0x40c5a12;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar2 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar4 = pfVar2[1];
            fVar5 = pfVar2[2];
            fVar6 = pfVar2[3];
            (pCVar9->fields).Value.fields.x = *pfVar2;
            (pCVar9->fields).Value.fields.y = fVar4;
            (pCVar9->fields).Value.fields.z = fVar5;
            (pCVar9->fields).Value.fields.w = fVar6;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              pSStack_40 = (System_String_o *)0x40c5a49;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_40 = (System_String_o *)0x40c5a53;
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
            (pCVar9->fields).Value.fields.x = local_1c;
            (pCVar9->fields).Value.fields.y = local_20;
            (pCVar9->fields).Value.fields.z = local_24;
            (pCVar9->fields).Value.fields.w = local_28;
            return pCVar9;
          }
        }
      }
      pSStack_40 = (System_String_o *)0x40c5b1a;
      il2cpp_runtime_helper_022b2ca0();
      goto label_040c5b1a;
    }
  }
  local_2c = (undefined4)iVar10;
  pSStack_40 = (System_String_o *)0x40c5b2f;
  pSVar11 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40c5b3e;
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicQuaternionBuiltin constructor found that takes ");
  pSStack_40 = (System_String_o *)0x40c5b4d;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_40 = (System_String_o *)0x40c5b5d;
  pSVar11 = System_String__Concat_3af7150(pSVar12,pSVar11,str2,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40c5b6c;
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_40 = (System_String_o *)0x40c5b74;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
  pSStack_40 = (System_String_o *)0x40c5b84;
  System_ArgumentException___ctor_3c12490(__this,pSVar11,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40c5b90;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_CreateInstance);
  pSStack_40 = (System_String_o *)0x40c5b9b;
  pSVar14 = __this;
  pSStack_50 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar18 = &pSStack_50;
  pSStack_48 = __this;
  pSStack_40 = pSVar11;
  if (g_data_057ac5a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FromToRotation");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Slerp");
    il2cpp_runtime_helper_023445d0(&"Inverse");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Lerp");
    il2cpp_runtime_helper_023445d0(&"LerpUnclamped");
    il2cpp_runtime_helper_023445d0(&"Euler");
    il2cpp_runtime_helper_023445d0(&"FromEuler");
    il2cpp_runtime_helper_023445d0(&"LookRotation");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"SlerpUnclamped");
    il2cpp_runtime_helper_023445d0(&"Identity");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"AngleAxis");
    il2cpp_runtime_helper_023445d0(&"RotateTowards");
    il2cpp_runtime_helper_023445d0(&"Angle");
    g_data_057ac5a1 = '\x01';
  }
  uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar14,(MethodInfo *)0x0);
  if (uVar7 < 0x91ba4e13) {
    if (uVar7 < 0x39c493b9) {
      if (uVar7 < 0x18c37b42) {
        if (uVar7 == 0x18535612) {
          bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Euler",(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_50 = pSStack_48;
            pSStack_48 = (System_ArgumentException_o *)pSStack_40;
            pSStack_40 = (System_String_o *)unaff_R15;
            if (g_data_057ac5a6 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Euler_g____getter_6_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Euler_g____setter_6_1);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
              g_data_057ac5a6 = '\x01';
            }
            pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
            System_Func_object__object____ctor();
            pSVar16 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
            System_Action_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,pSVar16,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
            return pCVar9;
          }
        }
        else if ((uVar7 == 0x18c37b41) &&
                (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"__Mul__",(MethodInfo *)0x0)
                , (char)bVar8 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_ArgumentException_o *)pSStack_40;
          if (g_data_057ac5b4 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__20_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b4 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x68) = pSVar17;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x68,pSVar17);
          }
          pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return pCVar9;
        }
      }
      else if (uVar7 == 0x27b48c82) {
        bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"FromEuler",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_ArgumentException_o *)pSStack_40;
          if (g_data_057ac5ac == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromEuler_b__12_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ac = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x28) = pSVar17;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x28,pSVar17);
          }
          pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return pCVar9;
        }
      }
      else if (uVar7 == 0x39907617) {
        bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Slerp",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_ArgumentException_o *)pSStack_40;
          if (g_data_057ac5aa == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Slerp_b__10_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5aa = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x18) = pSVar17;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x18,pSVar17);
          }
          pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return pCVar9;
        }
      }
      else if ((uVar7 == 0x39c493b8) &&
              (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Angle",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5b2 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Angle_b__18_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5b2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x58) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x58,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 < 0x549f4d11) {
      if (uVar7 == 0x3c0ea91a) {
        bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"RotateTowards",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_ArgumentException_o *)pSStack_40;
          if (g_data_057ac5b0 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RotateTowards_b__16_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b0 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x48) = pSVar17;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x48,pSVar17);
          }
          pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return pCVar9;
        }
      }
      else if ((uVar7 == 0x549f4d10) &&
              (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"__Copy__",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5b3 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__19_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5b3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x60) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x60,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 == 0x91ba4e12) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"FromToRotation",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5ae == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromToRotation_b__14_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ae = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x38) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x38,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 == 0x6a4c91d6) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"SlerpUnclamped",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5ab == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SlerpUnclamped_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ab = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x20) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x20,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if ((uVar7 == 0x792a6491) &&
            (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"__Hash__",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_ArgumentException_o *)pSStack_40;
      if (g_data_057ac5b6 == '\0') {
        pSStack_40 = (System_String_o *)unaff_R15;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__22_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5b6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = (System_String_o *)unaff_R15;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
      }
      else {
        pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
      }
      if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x78) = pSVar17;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar17);
      }
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return pCVar9;
    }
  }
  else if (uVar7 < 0xd20c0cd7) {
    if (uVar7 < 0x9e956089) {
      if (uVar7 == 0x91efe6d7) {
        bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_ArgumentException_o *)pSStack_40;
          if (g_data_057ac5b5 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__21_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b5 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          else {
            pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar3 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar3 + 0x70) = pSVar17;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar17);
          }
          pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return pCVar9;
        }
      }
      else if ((uVar7 == 0x9e956088) &&
              (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Lerp",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5a8 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5a8 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 8) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 8,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 == 0xbcf8f25c) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"LookRotation",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5ad == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookRotation_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ad = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x30) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x30,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 == 0xc95e1923) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Inverse",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        if (g_data_057ac5af == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Inverse_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5af = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar3 + 0x40) = pSVar17;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x40,pSVar17);
        }
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if ((uVar7 == 0xd20c0cd6) &&
            (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"W",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_ArgumentException_o *)pSStack_40;
      pSStack_40 = (System_String_o *)unaff_R15;
      if (g_data_057ac5a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__W_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__W_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a5 = '\x01';
      }
      pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pSVar16 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
      System_Action_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,pSVar16,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return pCVar9;
    }
  }
  else if (uVar7 < 0xdf0c214e) {
    if (uVar7 == 0xdc0c1c94) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Y",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_ArgumentException_o *)pSStack_40;
        pSStack_40 = (System_String_o *)unaff_R15;
        if (g_data_057ac5a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Y_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Y_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
          g_data_057ac5a3 = '\x01';
        }
        pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor();
        pSVar16 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,pSVar16,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        return pCVar9;
      }
    }
    else if (uVar7 == 0xdd0c1e27) {
      bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"X",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppSVar18 = (System_ArgumentException_o **)auStack_38;
        pSVar14 = pSStack_48;
        pSVar11 = pSStack_40;
        goto CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X;
      }
    }
    else if ((uVar7 == 0xdf0c214d) &&
            (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Z",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_ArgumentException_o *)pSStack_40;
      pSStack_40 = (System_String_o *)unaff_R15;
      if (g_data_057ac5a4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Z_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Z_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a4 = '\x01';
      }
      pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pSVar16 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
      System_Action_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,pSVar16,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return pCVar9;
    }
  }
  else if (uVar7 == 0xdfc1d0bb) {
    bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"Identity",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pSVar14 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar14 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSVar14;
      if (g_data_057ac5a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Identity_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a7 = '\x01';
      }
      pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return pCVar9;
    }
  }
  else if (uVar7 == 0xf4248f7b) {
    bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"LerpUnclamped",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_ArgumentException_o *)pSStack_40;
      if (g_data_057ac5a9 == '\0') {
        pSStack_40 = (System_String_o *)unaff_R15;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LerpUnclamped_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5a9 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = (System_String_o *)unaff_R15;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar3 + 0x10) = pSVar17;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar17);
      }
      pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return pCVar9;
    }
  }
  else if ((uVar7 == 0xf6586339) &&
          (bVar8 = System_String__op_Equality((System_String_o *)pSVar14,"AngleAxis",(MethodInfo *)0x0),
          (char)bVar8 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_50 = pSStack_48;
    pSStack_48 = (System_ArgumentException_o *)pSStack_40;
    if (g_data_057ac5b1 == '\0') {
      pSStack_40 = (System_String_o *)unaff_R15;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AngleAxis_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac5b1 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_40 = (System_String_o *)unaff_R15;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    }
    else {
      pSVar17 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    }
    if (pSVar17 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar3 + 0x50) = pSVar17;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x50,pSVar17);
    }
    pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar17,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    return pCVar9;
  }
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicQuaternionBuiltin not found");
  pSVar11 = System_String__Concat_3af7150(pSVar11,(System_String_o *)pSVar14,pSVar12,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar14 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar14,pSVar11,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar14,uVar13);
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X:
  *(undefined8 **)((long)ppSVar18 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar18 + -0x10) = pSVar11;
  *(System_ArgumentException_o **)((long)ppSVar18 + -0x18) = pSVar14;
  if (g_data_057ac5a2 == '\0') {
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63c6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__X_g____getter_2_0);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63d2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__X_g____setter_2_1);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63de;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c63f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a2 = '\x01';
  }
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c640c;
  pSVar15 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c6425;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c6434;
  pSVar16 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c644d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c645c;
  pCVar9 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40c6477;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar15,pSVar16,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40c83a0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac5bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5bd = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40c8410

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8420

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_EAX;
  uint uVar14;
  int32_t iVar15;
  int32_t iVar16;
  int32_t iVar17;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar18;
  System_Exception_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar22;
  Il2CppObject *pIVar23;
  float extraout_var;
  long *plVar24;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  long extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  long extraout_RDX_08;
  long lVar25;
  long *plVar26;
  Il2CppObject *pIVar27;
  MethodInfo *pMVar28;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  Il2CppObject *unaff_R15;
  float angle;
  float fVar29;
  float fVar30;
  float fVar31;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar32;
  float fVar34;
  float fVar36;
  float fVar35;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 local_1a8;
  MethodInfo *pMStack_1a0;
  undefined8 local_198;
  Il2CppObject *pIStack_190;
  undefined8 uStack_180;
  MethodInfo *pMStack_178;
  long lStack_170;
  Il2CppObject *pIStack_168;
  undefined8 uStack_160;
  float local_14c;
  MethodInfo *pMStack_148;
  MethodInfo *pMStack_140;
  Il2CppObject *pIStack_138;
  undefined4 uStack_130;
  float local_12c;
  long lStack_128;
  MethodInfo *pMStack_120;
  Il2CppObject *pIStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  Il2CppClass *local_e8;
  undefined8 uStack_e0;
  Il2CppRGCTXData *local_d8;
  undefined8 uStack_d0;
  MethodInfo *local_c8;
  MethodInfo *pMStack_c0;
  Il2CppObject *pIStack_b8;
  MethodInfo *pMStack_b0;
  MethodInfo *pMStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  MethodInfo *pMStack_88;
  float fVar33;
  
  if (g_data_057ac5be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5be = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pIVar23 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (MethodInfo *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[2];
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__Lerp
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c8509;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8509:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5bf = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__LerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c85f9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c85f9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c0 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_01 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__Slerp
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c86e9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c86e9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c1 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_02 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__SlerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c87d9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c87d9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c2 = '\x01';
  }
  pMVar21 = extraout_RDX_03;
  if (extraout_RDX_03 == (MethodInfo *)0x0) {
label_040c8870:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_03->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pIVar23 != (Il2CppObject *)0x0) {
      UVar45.fields.x = SUB84(pIVar23[3].klass,0) * 0.017453292;
      UVar45.fields.y = (float)((ulong)pIVar23[3].klass >> 0x20) * 0.017453292;
      UVar45.fields.z = *(float *)&pIVar23[3].monitor * 0.017453292;
      pMVar21 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar45,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8870;
  }
  auVar44 = il2cpp_runtime_helper_022b2ca0();
  pMVar28 = auVar44._8_8_;
  local_90 = auVar44._0_8_;
  pMStack_88 = pMVar21;
  if (g_data_057ac5c3 == '\0') {
    uStack_98 = (Il2CppObject *)0x40c88a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_98 = (Il2CppObject *)0x40c88ac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (pMVar28 == (MethodInfo *)0x0) {
    uStack_98 = (Il2CppObject *)0x40c8936;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar28->name != 0) {
    pIVar23 = (Il2CppObject *)pMVar28->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_98 = (Il2CppObject *)0x40c88da;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_98 = (Il2CppObject *)0x40c88ed;
    pMVar21 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (*(int *)&pMVar28->name < 2) {
      pIVar23 = (Il2CppObject *)0x0;
    }
    else {
      pIVar23 = (Il2CppObject *)pMVar28->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_98 = (Il2CppObject *)0x40c890f;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_98 = (Il2CppObject *)0x40c891b;
      pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar27 = pIVar23;
    pMVar28 = pMVar21;
    if (g_data_057ac59a == '\0') {
      pMVar28 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pMStack_a8 = (MethodInfo *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar21 != (MethodInfo *)0x0) {
      uVar38 = 0;
      uVar39 = 0;
      if (pIVar23 == (Il2CppObject *)0x0) {
        pMStack_a8 = (MethodInfo *)0x40c4f5d;
        UVar43 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      else {
        pMStack_a8 = (MethodInfo *)0x40c4f54;
        UVar43 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      local_90 = CONCAT44(fVar32,fVar30);
      local_a0 = (MethodInfo *)CONCAT44(fVar31,fVar33);
      uStack_98 = (Il2CppObject *)CONCAT44(uVar39,uVar38);
      pMStack_a8 = (MethodInfo *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pMStack_a8 = (MethodInfo *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pMStack_a8 = (MethodInfo *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar38 = puVar8[1];
      uVar39 = puVar8[2];
      uVar10 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar38;
      *(undefined4 *)&__this_00[1].monitor = uVar39;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar10;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pMStack_a8 = (MethodInfo *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_a8 = (MethodInfo *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = (undefined4)local_90;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = local_90._4_4_;
      *(int *)&__this_00[1].monitor = (int)local_a0;
      *(int *)((long)&__this_00[1].monitor + 4) = (int)((ulong)local_a0 >> 0x20);
      return (Il2CppObject *)__this_00;
    }
    pMStack_a8 = (MethodInfo *)0x40c5008;
    pMStack_a8 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      pMStack_b0 = (MethodInfo *)0x40c5036;
      UVar43 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar27 + 3),
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pMStack_b0 = (MethodInfo *)0x40c5041;
    pMStack_b0 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_b8 = (Il2CppObject *)0x40c5067;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&pMVar28->parameters,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_b8 = (Il2CppObject *)0x40c5072;
    uVar38 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      ppIVar1 = pMVar28->parameters;
      pIVar2 = (pMVar28->field7_0x38).rgctx_data;
      pIVar3 = pIVar27[3].klass;
      fVar32 = SUB84(pIVar3,0);
      fVar33 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar27[3].monitor;
      fVar31 = SUB84(pIVar4,0);
      fVar36 = (float)((ulong)pIVar4 >> 0x20);
      fVar30 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar36 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar33 + SUB84(ppIVar1,0) * fVar32 +
                   SUB84(pIVar2,0) * fVar31);
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        uStack_d0 = 0;
        pMStack_c0 = (MethodInfo *)0x0;
        uStack_100 = CONCAT44(uVar38,(undefined4)uStack_100);
        uStack_f0 = 0;
        uStack_e0 = 0;
        uStack_110 = 0x40c5107;
        local_f8 = pIVar4;
        local_e8 = pIVar3;
        local_d8 = pIVar2;
        local_c8 = (MethodInfo *)ppIVar1;
        fVar30 = acosf(fVar30);
        fVar30 = (fVar30 + fVar30) * 57.29578;
        if ((fVar30 == 0.0) && (!NAN(fVar30))) {
          UVar43.fields._8_8_ = local_f8;
          UVar43.fields._0_8_ = local_e8;
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
          return (Il2CppObject *)pCVar22;
        }
        fVar32 = 1.0;
        if (uStack_100._4_4_ / fVar30 <= 1.0) {
          fVar32 = uStack_100._4_4_ / fVar30;
        }
        pMVar28 = (MethodInfo *)0x0;
        uStack_110 = 0x40c514e;
        a.fields._8_8_ = local_d8;
        a.fields._0_8_ = local_c8;
        b.fields._8_8_ = local_f8;
        b.fields._0_8_ = local_e8;
        UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar32,(MethodInfo *)0x0);
        fVar31 = UVar43.fields.z;
        fVar36 = UVar43.fields.w;
        fVar32 = UVar43.fields.x;
        fVar33 = UVar43.fields.y;
      }
      q.fields.y = fVar33;
      q.fields.x = fVar32;
      q.fields.w = fVar36;
      q.fields.z = fVar31;
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,pMVar28);
      return (Il2CppObject *)pCVar22;
    }
    uStack_110 = 0x40c5178;
    uStack_110 = il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_118 = (Il2CppObject *)0x40c5197;
      UVar43 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_118 = (Il2CppObject *)0x40c51a2;
    pIStack_118 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      fVar30 = ABS((float)((ulong)pIVar27[3].monitor >> 0x20) * SUB84(pMVar28->field7_0x38,4) +
                   (float)((ulong)pIVar27[3].klass >> 0x20) * (float)((ulong)pMVar28->parameters >> 0x20) +
                   SUB84(pIVar27[3].klass,0) * SUB84(pMVar28->parameters,0) +
                   SUB84(pIVar27[3].monitor,0) * SUB84(pMVar28->field7_0x38,0));
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        pMStack_120 = (MethodInfo *)0x40c520c;
        acosf(fVar30);
      }
      return pIStack_118;
    }
    pMStack_120 = (MethodInfo *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&pMVar28->parameters,0,0,0);
    return pIVar23;
  }
  uStack_98 = (Il2CppObject *)0x40c893b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_a8 = pMVar28;
  local_a0 = unaff_R14;
  uStack_98 = unaff_R15;
  if (g_data_057ac5c4 == '\0') {
    pMStack_b0 = (MethodInfo *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_b0 = (MethodInfo *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (extraout_RDX_04 == (MethodInfo *)0x0) {
label_040c89ef:
    pMStack_b0 = (MethodInfo *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pMVar21 = pMVar28;
  }
  else {
    pMVar21 = pMVar28;
    if (*(int *)&extraout_RDX_04->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_04->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_b0 = (MethodInfo *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMStack_b0 = (MethodInfo *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)&extraout_RDX_04->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_04->return_type;
        pMStack_b0 = (MethodInfo *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((pMVar28 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          pMVar21 = (MethodInfo *)0x0;
          pMStack_b0 = (MethodInfo *)0x40c89e5;
          UVar43 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c89ef;
      }
    }
  }
  pMStack_b0 = (MethodInfo *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_b0 = pMVar21;
  if (g_data_057ac5c5 == '\0') {
    pIStack_b8 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_b8 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pMVar21 = extraout_RDX_05;
  if (extraout_RDX_05 == (MethodInfo *)0x0) {
label_040c8a81:
    pIStack_b8 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_05->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_05->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_b8 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_b8 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar23 != (Il2CppObject *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_b8 = (Il2CppObject *)0x40c8a7b;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar23 + 3),(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8a81;
  }
  pIStack_b8 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  local_c8 = pMVar21;
  pMStack_c0 = extraout_RDX_04;
  pIStack_b8 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pMStack_120 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_120 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_120 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pMVar21 = extraout_RDX_04;
  if (extraout_RDX_06 != 0) {
    pMVar21 = extraout_RDX_04;
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
      pMVar21 = *(MethodInfo **)(extraout_RDX_06 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_120 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_120 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_06 + 0x28);
        pMStack_120 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pMVar21 = pMVar28;
        if (2 < *(uint *)(extraout_RDX_06 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_06 + 0x30);
          pMStack_120 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar28 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pMVar28->parameters;
            pIVar3 = (Il2CppClass *)(pMVar28->field7_0x38).rgctx_data;
            pIVar4 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar32 = (float)((ulong)pvVar5 >> 0x20);
            fVar31 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar32 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar33 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar31) {
              fVar31 = 1.0;
            }
            fVar36 = SUB84(pvVar5,0);
            fVar40 = SUB84(pIVar4,0);
            if (fVar31 <= 0.999999) {
              uStack_e0 = 0;
              uStack_d0 = 0;
              uStack_110 = CONCAT44(fVar30,(undefined4)uStack_110);
              uStack_100 = 0;
              uStack_f0 = 0;
              pMStack_120 = (MethodInfo *)0x40c8bd1;
              local_108 = pvVar5;
              local_f8 = pIVar4;
              local_e8 = pIVar3;
              local_d8 = pIVar2;
              fVar30 = acosf(fVar31);
              fVar30 = (fVar30 + fVar30) * 57.29578;
              if ((fVar30 != 0.0) || (NAN(fVar30))) {
                fVar32 = 1.0;
                if (uStack_110._4_4_ / fVar30 <= 1.0) {
                  fVar32 = uStack_110._4_4_ / fVar30;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_120 = (MethodInfo *)0x40c8c18;
                a_00.fields._8_8_ = local_e8;
                a_00.fields._0_8_ = local_d8;
                b_00.fields._8_8_ = local_108;
                b_00.fields._0_8_ = local_f8;
                UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar32,(MethodInfo *)0x0);
                fVar36 = UVar43.fields.z;
                fVar32 = UVar43.fields.w;
                fVar40 = UVar43.fields.x;
                fVar33 = UVar43.fields.y;
              }
              else {
                fVar36 = (float)local_108;
                fVar32 = local_108._4_4_;
                fVar40 = (float)local_f8;
                fVar33 = local_f8._4_4_;
              }
            }
            q_00.fields.y = fVar33;
            q_00.fields.x = fVar40;
            q_00.fields.w = fVar32;
            q_00.fields.z = fVar36;
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar23;
    pMStack_120 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_120 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_128 = extraout_RDX_06;
  pMStack_120 = pMVar21;
  uStack_130 = extraout_EAX;
  local_12c = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_138 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_138 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_138 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_07 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_07->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_07->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_138 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_138 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      local_12c = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar21,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_07->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_07->return_type;
        pIStack_138 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar23 != (Il2CppObject *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          pIStack_138 = (Il2CppObject *)0x40c8d03;
          UVar43 = UnityEngine_Quaternion__AngleAxis
                             (local_12c,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c8d14;
      }
    }
    pIStack_138 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_138 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_148 = extraout_RDX_07;
  pMStack_140 = pMVar21;
  pIStack_138 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_160 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_160 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar21 = extraout_RDX_07;
  if (extraout_RDX_08 == 0) {
label_040c8e47:
    uStack_160 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = pMVar21;
  }
  else {
    pMVar28 = extraout_RDX_07;
    if (*(int *)(extraout_RDX_08 + 0x18) != 0) {
      pMVar28 = *(MethodInfo **)(extraout_RDX_08 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_160 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_160 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar28;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar28,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_08 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_08 + 0x28);
        uStack_160 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar21 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          fVar30 = ABS((float)((ulong)pIVar23[3].monitor >> 0x20) *
                       (float)((ulong)pMVar21->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar23[3].klass >> 0x20) * (float)((ulong)pMVar21->parameters >> 0x20)
                       + SUB84(pIVar23[3].klass,0) * SUB84(pMVar21->parameters,0) +
                       SUB84(pIVar23[3].monitor,0) * SUB84(pMVar21->field7_0x38,0));
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          local_14c = 0.0;
          if (fVar30 <= 0.999999) {
            uStack_160 = 0x40c8e13;
            fVar30 = acosf(fVar30);
            local_14c = (fVar30 + fVar30) * 57.29578;
          }
          uStack_160 = 0x40c8e3d;
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_14c);
          return pIVar23;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_160 = 0x40c8e51;
  uStack_160 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar23 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar23;
  }
  pIStack_168 = (Il2CppObject *)0x40c8e74;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  pIStack_168 = auVar44._0_8_;
  pMStack_178 = pMVar28;
  lStack_170 = extraout_RDX_08;
  if (lVar25 != 0) {
    if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
      lStack_170 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar23 = *(Il2CppObject **)(lVar25 + 0x20);
      pIVar27 = *(Il2CppObject **)(lVar25 + 0x28);
      pIStack_168 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar23 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar23->klass->_2).naturalAligment) && (pIVar27 != (Il2CppObject *)0x0)) &&
           ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar27->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            UVar45 = UnityEngine_Quaternion__op_Multiply_4debdf0
                               ((UnityEngine_Quaternion_o)pIVar23[3],
                                *(UnityEngine_Vector3_Fields *)(pIVar27 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,UVar45,(MethodInfo *)0x0);
          }
          else {
            fVar36 = SUB84(pIVar23[3].monitor,0);
            fVar40 = (float)((ulong)pIVar23[3].monitor >> 0x20);
            fVar30 = SUB84(pIVar27[3].klass,0);
            fVar32 = (float)((ulong)pIVar27[3].klass >> 0x20);
            fVar33 = SUB84(pIVar27[3].monitor,0);
            fVar31 = (float)((ulong)pIVar27[3].monitor >> 0x20);
            uStack_180 = 0;
            fVar41 = SUB84(pIVar23[3].klass,0);
            fVar42 = (float)((ulong)pIVar23[3].klass >> 0x20);
            local_1a8 = CONCAT44(fVar42 * fVar31 + fVar40 * fVar32,fVar41 * fVar31 + fVar40 * fVar30);
            pMStack_1a0 = (MethodInfo *)0x0;
            local_198 = CONCAT44(fVar33,fVar32);
            pIStack_190 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar35 = fVar33 * fVar42 + (float)local_1a8;
            fVar37 = fVar30 * fVar36 + local_1a8._4_4_;
            fVar29 = fVar36 * (float)local_198;
            fVar34 = fVar41 * local_198._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar11 = pfVar9[1];
            fVar12 = pfVar9[2];
            fVar13 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar11;
            (__this_01->fields).Value.fields.z = fVar12;
            *(float *)&(__this_01->fields).field_0x2c = fVar13;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar35 - fVar29;
            (__this_01->fields).Value.fields.y = fVar37 - fVar34;
            (__this_01->fields).Value.fields.z =
                 (fVar41 * fVar32 + fVar36 * fVar31 + fVar40 * fVar33) - fVar42 * fVar30;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar31 * fVar40 - fVar41 * fVar30) - fVar32 * fVar42) - fVar36 * fVar33;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,pIVar27,(MethodInfo *)0x0);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,rhs,(MethodInfo *)0x0);
      plVar20 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar26 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar26 = (long *)0x0;
          }
          if ((((plVar20 != (long *)0x0) && (plVar26 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar20 + 0x130))) &&
             (lVar25 = *(long *)(*plVar20 + 200),
             *(Il2CppClass **)(lVar25 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar25 >> 8),
                            0.999999 <
                            (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                            (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                            (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_170 = 0x40c8eaf;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  uStack_180 = auVar44._0_8_;
  lStack_170 = extraout_RDX_08;
  if (lVar25 == 0) {
label_040c8fc7:
    local_1a8 = il2cpp_runtime_helper_022b2c90();
    pMStack_1a0 = pMVar28;
    local_198 = extraout_RDX_08;
    pIStack_190 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar14 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar15 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar16 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar17 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    local_1a8 = CONCAT44(iVar17 >> 1 ^ iVar16 >> 2 ^ iVar15 << 2 ^ uVar14,(float)local_1a8);
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&local_1a8 + 4);
    return pIVar23;
  }
  if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar20 = *(long **)(lVar25 + 0x20);
  plVar26 = *(long **)(lVar25 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar26 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar26 + 0x130)) {
      plVar24 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar26 = plVar24;
      }
      if ((plVar20 == (long *)0x0) || (plVar26 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar20 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar20 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar24 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                                 (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                                 (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar24 = (long *)0x0;
label_040c8f21:
  uStack_180 = CONCAT17((char)plVar24,(undefined7)uStack_180);
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_180 + 7);
  return pIVar23;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8510

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_EAX;
  uint uVar14;
  int32_t iVar15;
  int32_t iVar16;
  int32_t iVar17;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar18;
  System_Exception_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar22;
  Il2CppObject *pIVar23;
  float extraout_var;
  long *plVar24;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  long extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  long extraout_RDX_07;
  long lVar25;
  long *plVar26;
  Il2CppObject *pIVar27;
  MethodInfo *pMVar28;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  Il2CppObject *unaff_R15;
  float angle;
  float fVar29;
  float fVar30;
  float fVar31;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar32;
  float fVar34;
  float fVar36;
  float fVar35;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 uStack_190;
  MethodInfo *pMStack_188;
  undefined8 uStack_180;
  Il2CppObject *pIStack_178;
  undefined8 uStack_168;
  MethodInfo *pMStack_160;
  long lStack_158;
  Il2CppObject *pIStack_150;
  undefined8 uStack_148;
  float fStack_134;
  MethodInfo *pMStack_130;
  MethodInfo *pMStack_128;
  Il2CppObject *pIStack_120;
  undefined4 uStack_118;
  float fStack_114;
  long lStack_110;
  MethodInfo *pMStack_108;
  Il2CppObject *pIStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  Il2CppClass *pIStack_d0;
  undefined8 uStack_c8;
  Il2CppRGCTXData *pIStack_c0;
  undefined8 uStack_b8;
  MethodInfo *pMStack_b0;
  MethodInfo *pMStack_a8;
  Il2CppObject *pIStack_a0;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo *pMStack_70;
  float fVar33;
  
  if (g_data_057ac5bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5bf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pIVar23 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (MethodInfo *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[2];
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__LerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c85f9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c85f9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c0 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__Slerp
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c86e9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c86e9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c1 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_01 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__SlerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c87d9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c87d9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c2 = '\x01';
  }
  pMVar21 = extraout_RDX_02;
  if (extraout_RDX_02 == (MethodInfo *)0x0) {
label_040c8870:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_02->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pIVar23 != (Il2CppObject *)0x0) {
      UVar45.fields.x = SUB84(pIVar23[3].klass,0) * 0.017453292;
      UVar45.fields.y = (float)((ulong)pIVar23[3].klass >> 0x20) * 0.017453292;
      UVar45.fields.z = *(float *)&pIVar23[3].monitor * 0.017453292;
      pMVar21 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar45,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8870;
  }
  auVar44 = il2cpp_runtime_helper_022b2ca0();
  pMVar28 = auVar44._8_8_;
  uStack_78 = auVar44._0_8_;
  pMStack_70 = pMVar21;
  if (g_data_057ac5c3 == '\0') {
    uStack_80 = (Il2CppObject *)0x40c88a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_80 = (Il2CppObject *)0x40c88ac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (pMVar28 == (MethodInfo *)0x0) {
    uStack_80 = (Il2CppObject *)0x40c8936;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar28->name != 0) {
    pIVar23 = (Il2CppObject *)pMVar28->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = (Il2CppObject *)0x40c88da;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = (Il2CppObject *)0x40c88ed;
    pMVar21 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (*(int *)&pMVar28->name < 2) {
      pIVar23 = (Il2CppObject *)0x0;
    }
    else {
      pIVar23 = (Il2CppObject *)pMVar28->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_80 = (Il2CppObject *)0x40c890f;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_80 = (Il2CppObject *)0x40c891b;
      pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar27 = pIVar23;
    pMVar28 = pMVar21;
    if (g_data_057ac59a == '\0') {
      pMVar28 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pMStack_90 = (MethodInfo *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar21 != (MethodInfo *)0x0) {
      uVar38 = 0;
      uVar39 = 0;
      if (pIVar23 == (Il2CppObject *)0x0) {
        pMStack_90 = (MethodInfo *)0x40c4f5d;
        UVar43 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      else {
        pMStack_90 = (MethodInfo *)0x40c4f54;
        UVar43 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      uStack_78 = CONCAT44(fVar32,fVar30);
      uStack_88 = (MethodInfo *)CONCAT44(fVar31,fVar33);
      uStack_80 = (Il2CppObject *)CONCAT44(uVar39,uVar38);
      pMStack_90 = (MethodInfo *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pMStack_90 = (MethodInfo *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pMStack_90 = (MethodInfo *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar38 = puVar8[1];
      uVar39 = puVar8[2];
      uVar10 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar38;
      *(undefined4 *)&__this_00[1].monitor = uVar39;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar10;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pMStack_90 = (MethodInfo *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_90 = (MethodInfo *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = (undefined4)uStack_78;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_78._4_4_;
      *(int *)&__this_00[1].monitor = (int)uStack_88;
      *(int *)((long)&__this_00[1].monitor + 4) = (int)((ulong)uStack_88 >> 0x20);
      return (Il2CppObject *)__this_00;
    }
    pMStack_90 = (MethodInfo *)0x40c5008;
    pMStack_90 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      pMStack_98 = (MethodInfo *)0x40c5036;
      UVar43 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar27 + 3),
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pMStack_98 = (MethodInfo *)0x40c5041;
    pMStack_98 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_a0 = (Il2CppObject *)0x40c5067;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&pMVar28->parameters,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_a0 = (Il2CppObject *)0x40c5072;
    uVar38 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      ppIVar1 = pMVar28->parameters;
      pIVar2 = (pMVar28->field7_0x38).rgctx_data;
      pIVar3 = pIVar27[3].klass;
      fVar32 = SUB84(pIVar3,0);
      fVar33 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar27[3].monitor;
      fVar31 = SUB84(pIVar4,0);
      fVar36 = (float)((ulong)pIVar4 >> 0x20);
      fVar30 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar36 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar33 + SUB84(ppIVar1,0) * fVar32 +
                   SUB84(pIVar2,0) * fVar31);
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        uStack_b8 = 0;
        pMStack_a8 = (MethodInfo *)0x0;
        uStack_e8 = CONCAT44(uVar38,(undefined4)uStack_e8);
        uStack_d8 = 0;
        uStack_c8 = 0;
        uStack_f8 = 0x40c5107;
        uStack_e0 = pIVar4;
        pIStack_d0 = pIVar3;
        pIStack_c0 = pIVar2;
        pMStack_b0 = (MethodInfo *)ppIVar1;
        fVar30 = acosf(fVar30);
        fVar30 = (fVar30 + fVar30) * 57.29578;
        if ((fVar30 == 0.0) && (!NAN(fVar30))) {
          UVar43.fields._8_8_ = uStack_e0;
          UVar43.fields._0_8_ = pIStack_d0;
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
          return (Il2CppObject *)pCVar22;
        }
        fVar32 = 1.0;
        if (uStack_e8._4_4_ / fVar30 <= 1.0) {
          fVar32 = uStack_e8._4_4_ / fVar30;
        }
        pMVar28 = (MethodInfo *)0x0;
        uStack_f8 = 0x40c514e;
        a.fields._8_8_ = pIStack_c0;
        a.fields._0_8_ = pMStack_b0;
        b.fields._8_8_ = uStack_e0;
        b.fields._0_8_ = pIStack_d0;
        UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar32,(MethodInfo *)0x0);
        fVar31 = UVar43.fields.z;
        fVar36 = UVar43.fields.w;
        fVar32 = UVar43.fields.x;
        fVar33 = UVar43.fields.y;
      }
      q.fields.y = fVar33;
      q.fields.x = fVar32;
      q.fields.w = fVar36;
      q.fields.z = fVar31;
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,pMVar28);
      return (Il2CppObject *)pCVar22;
    }
    uStack_f8 = 0x40c5178;
    uStack_f8 = il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_100 = (Il2CppObject *)0x40c5197;
      UVar43 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_100 = (Il2CppObject *)0x40c51a2;
    pIStack_100 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      fVar30 = ABS((float)((ulong)pIVar27[3].monitor >> 0x20) * SUB84(pMVar28->field7_0x38,4) +
                   (float)((ulong)pIVar27[3].klass >> 0x20) * (float)((ulong)pMVar28->parameters >> 0x20) +
                   SUB84(pIVar27[3].klass,0) * SUB84(pMVar28->parameters,0) +
                   SUB84(pIVar27[3].monitor,0) * SUB84(pMVar28->field7_0x38,0));
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        pMStack_108 = (MethodInfo *)0x40c520c;
        acosf(fVar30);
      }
      return pIStack_100;
    }
    pMStack_108 = (MethodInfo *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&pMVar28->parameters,0,0,0);
    return pIVar23;
  }
  uStack_80 = (Il2CppObject *)0x40c893b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_90 = pMVar28;
  uStack_88 = unaff_R14;
  uStack_80 = unaff_R15;
  if (g_data_057ac5c4 == '\0') {
    pMStack_98 = (MethodInfo *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_98 = (MethodInfo *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (extraout_RDX_03 == (MethodInfo *)0x0) {
label_040c89ef:
    pMStack_98 = (MethodInfo *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pMVar21 = pMVar28;
  }
  else {
    pMVar21 = pMVar28;
    if (*(int *)&extraout_RDX_03->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_03->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_98 = (MethodInfo *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMStack_98 = (MethodInfo *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)&extraout_RDX_03->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_03->return_type;
        pMStack_98 = (MethodInfo *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((pMVar28 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          pMVar21 = (MethodInfo *)0x0;
          pMStack_98 = (MethodInfo *)0x40c89e5;
          UVar43 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c89ef;
      }
    }
  }
  pMStack_98 = (MethodInfo *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_98 = pMVar21;
  if (g_data_057ac5c5 == '\0') {
    pIStack_a0 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_a0 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pMVar21 = extraout_RDX_04;
  if (extraout_RDX_04 == (MethodInfo *)0x0) {
label_040c8a81:
    pIStack_a0 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_04->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_04->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_a0 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_a0 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar23 != (Il2CppObject *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_a0 = (Il2CppObject *)0x40c8a7b;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar23 + 3),(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8a81;
  }
  pIStack_a0 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_b0 = pMVar21;
  pMStack_a8 = extraout_RDX_03;
  pIStack_a0 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pMStack_108 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_108 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_108 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pMVar21 = extraout_RDX_03;
  if (extraout_RDX_05 != 0) {
    pMVar21 = extraout_RDX_03;
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      pMVar21 = *(MethodInfo **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_108 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_108 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_05 + 0x28);
        pMStack_108 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pMVar21 = pMVar28;
        if (2 < *(uint *)(extraout_RDX_05 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_05 + 0x30);
          pMStack_108 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar28 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pMVar28->parameters;
            pIVar3 = (Il2CppClass *)(pMVar28->field7_0x38).rgctx_data;
            pIVar4 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar32 = (float)((ulong)pvVar5 >> 0x20);
            fVar31 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar32 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar33 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar31) {
              fVar31 = 1.0;
            }
            fVar36 = SUB84(pvVar5,0);
            fVar40 = SUB84(pIVar4,0);
            if (fVar31 <= 0.999999) {
              uStack_c8 = 0;
              uStack_b8 = 0;
              uStack_f8 = CONCAT44(fVar30,(undefined4)uStack_f8);
              uStack_e8 = 0;
              uStack_d8 = 0;
              pMStack_108 = (MethodInfo *)0x40c8bd1;
              uStack_f0 = pvVar5;
              uStack_e0 = pIVar4;
              pIStack_d0 = pIVar3;
              pIStack_c0 = pIVar2;
              fVar30 = acosf(fVar31);
              fVar30 = (fVar30 + fVar30) * 57.29578;
              if ((fVar30 != 0.0) || (NAN(fVar30))) {
                fVar32 = 1.0;
                if (uStack_f8._4_4_ / fVar30 <= 1.0) {
                  fVar32 = uStack_f8._4_4_ / fVar30;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_108 = (MethodInfo *)0x40c8c18;
                a_00.fields._8_8_ = pIStack_d0;
                a_00.fields._0_8_ = pIStack_c0;
                b_00.fields._8_8_ = uStack_f0;
                b_00.fields._0_8_ = uStack_e0;
                UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar32,(MethodInfo *)0x0);
                fVar36 = UVar43.fields.z;
                fVar32 = UVar43.fields.w;
                fVar40 = UVar43.fields.x;
                fVar33 = UVar43.fields.y;
              }
              else {
                fVar36 = (float)uStack_f0;
                fVar32 = uStack_f0._4_4_;
                fVar40 = (float)uStack_e0;
                fVar33 = uStack_e0._4_4_;
              }
            }
            q_00.fields.y = fVar33;
            q_00.fields.x = fVar40;
            q_00.fields.w = fVar32;
            q_00.fields.z = fVar36;
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar23;
    pMStack_108 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_108 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_110 = extraout_RDX_05;
  pMStack_108 = pMVar21;
  uStack_118 = extraout_EAX;
  fStack_114 = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_120 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_120 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_120 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_06 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_06->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_06->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_120 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_120 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      fStack_114 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar21,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_06->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_06->return_type;
        pIStack_120 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar23 != (Il2CppObject *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          pIStack_120 = (Il2CppObject *)0x40c8d03;
          UVar43 = UnityEngine_Quaternion__AngleAxis
                             (fStack_114,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c8d14;
      }
    }
    pIStack_120 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_120 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_130 = extraout_RDX_06;
  pMStack_128 = pMVar21;
  pIStack_120 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_148 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_148 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar21 = extraout_RDX_06;
  if (extraout_RDX_07 == 0) {
label_040c8e47:
    uStack_148 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = pMVar21;
  }
  else {
    pMVar28 = extraout_RDX_06;
    if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
      pMVar28 = *(MethodInfo **)(extraout_RDX_07 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_148 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_148 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar28;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar28,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_07 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_07 + 0x28);
        uStack_148 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar21 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          fVar30 = ABS((float)((ulong)pIVar23[3].monitor >> 0x20) *
                       (float)((ulong)pMVar21->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar23[3].klass >> 0x20) * (float)((ulong)pMVar21->parameters >> 0x20)
                       + SUB84(pIVar23[3].klass,0) * SUB84(pMVar21->parameters,0) +
                       SUB84(pIVar23[3].monitor,0) * SUB84(pMVar21->field7_0x38,0));
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          fStack_134 = 0.0;
          if (fVar30 <= 0.999999) {
            uStack_148 = 0x40c8e13;
            fVar30 = acosf(fVar30);
            fStack_134 = (fVar30 + fVar30) * 57.29578;
          }
          uStack_148 = 0x40c8e3d;
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_134);
          return pIVar23;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_148 = 0x40c8e51;
  uStack_148 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar23 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar23;
  }
  pIStack_150 = (Il2CppObject *)0x40c8e74;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  pIStack_150 = auVar44._0_8_;
  pMStack_160 = pMVar28;
  lStack_158 = extraout_RDX_07;
  if (lVar25 != 0) {
    if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
      lStack_158 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar23 = *(Il2CppObject **)(lVar25 + 0x20);
      pIVar27 = *(Il2CppObject **)(lVar25 + 0x28);
      pIStack_150 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar23 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar23->klass->_2).naturalAligment) && (pIVar27 != (Il2CppObject *)0x0)) &&
           ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar27->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            UVar45 = UnityEngine_Quaternion__op_Multiply_4debdf0
                               ((UnityEngine_Quaternion_o)pIVar23[3],
                                *(UnityEngine_Vector3_Fields *)(pIVar27 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,UVar45,(MethodInfo *)0x0);
          }
          else {
            fVar36 = SUB84(pIVar23[3].monitor,0);
            fVar40 = (float)((ulong)pIVar23[3].monitor >> 0x20);
            fVar30 = SUB84(pIVar27[3].klass,0);
            fVar32 = (float)((ulong)pIVar27[3].klass >> 0x20);
            fVar33 = SUB84(pIVar27[3].monitor,0);
            fVar31 = (float)((ulong)pIVar27[3].monitor >> 0x20);
            uStack_168 = 0;
            fVar41 = SUB84(pIVar23[3].klass,0);
            fVar42 = (float)((ulong)pIVar23[3].klass >> 0x20);
            uStack_190 = CONCAT44(fVar42 * fVar31 + fVar40 * fVar32,fVar41 * fVar31 + fVar40 * fVar30);
            pMStack_188 = (MethodInfo *)0x0;
            uStack_180 = CONCAT44(fVar33,fVar32);
            pIStack_178 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar35 = fVar33 * fVar42 + (float)uStack_190;
            fVar37 = fVar30 * fVar36 + uStack_190._4_4_;
            fVar29 = fVar36 * (float)uStack_180;
            fVar34 = fVar41 * uStack_180._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar11 = pfVar9[1];
            fVar12 = pfVar9[2];
            fVar13 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar11;
            (__this_01->fields).Value.fields.z = fVar12;
            *(float *)&(__this_01->fields).field_0x2c = fVar13;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar35 - fVar29;
            (__this_01->fields).Value.fields.y = fVar37 - fVar34;
            (__this_01->fields).Value.fields.z =
                 (fVar41 * fVar32 + fVar36 * fVar31 + fVar40 * fVar33) - fVar42 * fVar30;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar31 * fVar40 - fVar41 * fVar30) - fVar32 * fVar42) - fVar36 * fVar33;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,pIVar27,(MethodInfo *)0x0);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,rhs,(MethodInfo *)0x0);
      plVar20 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar26 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar26 = (long *)0x0;
          }
          if ((((plVar20 != (long *)0x0) && (plVar26 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar20 + 0x130))) &&
             (lVar25 = *(long *)(*plVar20 + 200),
             *(Il2CppClass **)(lVar25 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar25 >> 8),
                            0.999999 <
                            (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                            (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                            (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_158 = 0x40c8eaf;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  uStack_168 = auVar44._0_8_;
  lStack_158 = extraout_RDX_07;
  if (lVar25 == 0) {
label_040c8fc7:
    uStack_190 = il2cpp_runtime_helper_022b2c90();
    pMStack_188 = pMVar28;
    uStack_180 = extraout_RDX_07;
    pIStack_178 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar14 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar15 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar16 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar17 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_190 = CONCAT44(iVar17 >> 1 ^ iVar16 >> 2 ^ iVar15 << 2 ^ uVar14,(float)uStack_190);
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_190 + 4);
    return pIVar23;
  }
  if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar20 = *(long **)(lVar25 + 0x20);
  plVar26 = *(long **)(lVar25 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar26 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar26 + 0x130)) {
      plVar24 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar26 = plVar24;
      }
      if ((plVar20 == (long *)0x0) || (plVar26 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar20 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar20 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar24 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                                 (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                                 (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar24 = (long *)0x0;
label_040c8f21:
  uStack_168 = CONCAT17((char)plVar24,(undefined7)uStack_168);
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_168 + 7);
  return pIVar23;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8600

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_EAX;
  uint uVar14;
  int32_t iVar15;
  int32_t iVar16;
  int32_t iVar17;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar18;
  System_Exception_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar22;
  Il2CppObject *pIVar23;
  float extraout_var;
  long *plVar24;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  long extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  long extraout_RDX_06;
  long lVar25;
  long *plVar26;
  Il2CppObject *pIVar27;
  MethodInfo *pMVar28;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  Il2CppObject *unaff_R15;
  float angle;
  float fVar29;
  float fVar30;
  float fVar31;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar32;
  float fVar34;
  float fVar36;
  float fVar35;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 uStack_178;
  MethodInfo *pMStack_170;
  undefined8 uStack_168;
  Il2CppObject *pIStack_160;
  undefined8 uStack_150;
  MethodInfo *pMStack_148;
  long lStack_140;
  Il2CppObject *pIStack_138;
  undefined8 uStack_130;
  float fStack_11c;
  MethodInfo *pMStack_118;
  MethodInfo *pMStack_110;
  Il2CppObject *pIStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  long lStack_f8;
  MethodInfo *pMStack_f0;
  Il2CppObject *pIStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  Il2CppClass *pIStack_b8;
  undefined8 uStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  undefined8 uStack_a0;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  Il2CppObject *pIStack_88;
  MethodInfo *pMStack_80;
  MethodInfo *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  float fVar33;
  
  if (g_data_057ac5c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pIVar23 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (MethodInfo *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[2];
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__Slerp
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c86e9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c86e9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c1 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(MethodInfo **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x30);
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__SlerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c87d9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c87d9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c2 = '\x01';
  }
  pMVar21 = extraout_RDX_01;
  if (extraout_RDX_01 == (MethodInfo *)0x0) {
label_040c8870:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_01->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_01->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pIVar23 != (Il2CppObject *)0x0) {
      UVar45.fields.x = SUB84(pIVar23[3].klass,0) * 0.017453292;
      UVar45.fields.y = (float)((ulong)pIVar23[3].klass >> 0x20) * 0.017453292;
      UVar45.fields.z = *(float *)&pIVar23[3].monitor * 0.017453292;
      pMVar21 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar45,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8870;
  }
  auVar44 = il2cpp_runtime_helper_022b2ca0();
  pMVar28 = auVar44._8_8_;
  uStack_60 = auVar44._0_8_;
  pMStack_58 = pMVar21;
  if (g_data_057ac5c3 == '\0') {
    uStack_68 = (Il2CppObject *)0x40c88a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_68 = (Il2CppObject *)0x40c88ac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (pMVar28 == (MethodInfo *)0x0) {
    uStack_68 = (Il2CppObject *)0x40c8936;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar28->name != 0) {
    pIVar23 = (Il2CppObject *)pMVar28->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = (Il2CppObject *)0x40c88da;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = (Il2CppObject *)0x40c88ed;
    pMVar21 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (*(int *)&pMVar28->name < 2) {
      pIVar23 = (Il2CppObject *)0x0;
    }
    else {
      pIVar23 = (Il2CppObject *)pMVar28->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_68 = (Il2CppObject *)0x40c890f;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_68 = (Il2CppObject *)0x40c891b;
      pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar27 = pIVar23;
    pMVar28 = pMVar21;
    if (g_data_057ac59a == '\0') {
      pMVar28 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pMStack_78 = (MethodInfo *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar21 != (MethodInfo *)0x0) {
      uVar38 = 0;
      uVar39 = 0;
      if (pIVar23 == (Il2CppObject *)0x0) {
        pMStack_78 = (MethodInfo *)0x40c4f5d;
        UVar43 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      else {
        pMStack_78 = (MethodInfo *)0x40c4f54;
        UVar43 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      uStack_60 = CONCAT44(fVar32,fVar30);
      uStack_70 = (MethodInfo *)CONCAT44(fVar31,fVar33);
      uStack_68 = (Il2CppObject *)CONCAT44(uVar39,uVar38);
      pMStack_78 = (MethodInfo *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pMStack_78 = (MethodInfo *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pMStack_78 = (MethodInfo *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar38 = puVar8[1];
      uVar39 = puVar8[2];
      uVar10 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar38;
      *(undefined4 *)&__this_00[1].monitor = uVar39;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar10;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pMStack_78 = (MethodInfo *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_78 = (MethodInfo *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = (undefined4)uStack_60;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_60._4_4_;
      *(int *)&__this_00[1].monitor = (int)uStack_70;
      *(int *)((long)&__this_00[1].monitor + 4) = (int)((ulong)uStack_70 >> 0x20);
      return (Il2CppObject *)__this_00;
    }
    pMStack_78 = (MethodInfo *)0x40c5008;
    pMStack_78 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      pMStack_80 = (MethodInfo *)0x40c5036;
      UVar43 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar27 + 3),
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pMStack_80 = (MethodInfo *)0x40c5041;
    pMStack_80 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_88 = (Il2CppObject *)0x40c5067;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&pMVar28->parameters,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_88 = (Il2CppObject *)0x40c5072;
    uVar38 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      ppIVar1 = pMVar28->parameters;
      pIVar2 = (pMVar28->field7_0x38).rgctx_data;
      pIVar3 = pIVar27[3].klass;
      fVar32 = SUB84(pIVar3,0);
      fVar33 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar27[3].monitor;
      fVar31 = SUB84(pIVar4,0);
      fVar36 = (float)((ulong)pIVar4 >> 0x20);
      fVar30 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar36 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar33 + SUB84(ppIVar1,0) * fVar32 +
                   SUB84(pIVar2,0) * fVar31);
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        uStack_a0 = 0;
        pMStack_90 = (MethodInfo *)0x0;
        uStack_d0 = CONCAT44(uVar38,(undefined4)uStack_d0);
        uStack_c0 = 0;
        uStack_b0 = 0;
        uStack_e0 = 0x40c5107;
        uStack_c8 = pIVar4;
        pIStack_b8 = pIVar3;
        pIStack_a8 = pIVar2;
        pMStack_98 = (MethodInfo *)ppIVar1;
        fVar30 = acosf(fVar30);
        fVar30 = (fVar30 + fVar30) * 57.29578;
        if ((fVar30 == 0.0) && (!NAN(fVar30))) {
          UVar43.fields._8_8_ = uStack_c8;
          UVar43.fields._0_8_ = pIStack_b8;
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
          return (Il2CppObject *)pCVar22;
        }
        fVar32 = 1.0;
        if (uStack_d0._4_4_ / fVar30 <= 1.0) {
          fVar32 = uStack_d0._4_4_ / fVar30;
        }
        pMVar28 = (MethodInfo *)0x0;
        uStack_e0 = 0x40c514e;
        a.fields._8_8_ = pIStack_a8;
        a.fields._0_8_ = pMStack_98;
        b.fields._8_8_ = uStack_c8;
        b.fields._0_8_ = pIStack_b8;
        UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar32,(MethodInfo *)0x0);
        fVar31 = UVar43.fields.z;
        fVar36 = UVar43.fields.w;
        fVar32 = UVar43.fields.x;
        fVar33 = UVar43.fields.y;
      }
      q.fields.y = fVar33;
      q.fields.x = fVar32;
      q.fields.w = fVar36;
      q.fields.z = fVar31;
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,pMVar28);
      return (Il2CppObject *)pCVar22;
    }
    uStack_e0 = 0x40c5178;
    uStack_e0 = il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_e8 = (Il2CppObject *)0x40c5197;
      UVar43 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_e8 = (Il2CppObject *)0x40c51a2;
    pIStack_e8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      fVar30 = ABS((float)((ulong)pIVar27[3].monitor >> 0x20) * SUB84(pMVar28->field7_0x38,4) +
                   (float)((ulong)pIVar27[3].klass >> 0x20) * (float)((ulong)pMVar28->parameters >> 0x20) +
                   SUB84(pIVar27[3].klass,0) * SUB84(pMVar28->parameters,0) +
                   SUB84(pIVar27[3].monitor,0) * SUB84(pMVar28->field7_0x38,0));
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        pMStack_f0 = (MethodInfo *)0x40c520c;
        acosf(fVar30);
      }
      return pIStack_e8;
    }
    pMStack_f0 = (MethodInfo *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&pMVar28->parameters,0,0,0);
    return pIVar23;
  }
  uStack_68 = (Il2CppObject *)0x40c893b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_78 = pMVar28;
  uStack_70 = unaff_R14;
  uStack_68 = unaff_R15;
  if (g_data_057ac5c4 == '\0') {
    pMStack_80 = (MethodInfo *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_80 = (MethodInfo *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (extraout_RDX_02 == (MethodInfo *)0x0) {
label_040c89ef:
    pMStack_80 = (MethodInfo *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pMVar21 = pMVar28;
  }
  else {
    pMVar21 = pMVar28;
    if (*(int *)&extraout_RDX_02->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_02->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_80 = (MethodInfo *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMStack_80 = (MethodInfo *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)&extraout_RDX_02->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_02->return_type;
        pMStack_80 = (MethodInfo *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((pMVar28 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          pMVar21 = (MethodInfo *)0x0;
          pMStack_80 = (MethodInfo *)0x40c89e5;
          UVar43 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c89ef;
      }
    }
  }
  pMStack_80 = (MethodInfo *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_80 = pMVar21;
  if (g_data_057ac5c5 == '\0') {
    pIStack_88 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_88 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pMVar21 = extraout_RDX_03;
  if (extraout_RDX_03 == (MethodInfo *)0x0) {
label_040c8a81:
    pIStack_88 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_03->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_03->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_88 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_88 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar23 != (Il2CppObject *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_88 = (Il2CppObject *)0x40c8a7b;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar23 + 3),(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8a81;
  }
  pIStack_88 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_98 = pMVar21;
  pMStack_90 = extraout_RDX_02;
  pIStack_88 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pMStack_f0 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_f0 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_f0 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pMVar21 = extraout_RDX_02;
  if (extraout_RDX_04 != 0) {
    pMVar21 = extraout_RDX_02;
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      pMVar21 = *(MethodInfo **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_f0 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_f0 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_04 + 0x28);
        pMStack_f0 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pMVar21 = pMVar28;
        if (2 < *(uint *)(extraout_RDX_04 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_04 + 0x30);
          pMStack_f0 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar28 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pMVar28->parameters;
            pIVar3 = (Il2CppClass *)(pMVar28->field7_0x38).rgctx_data;
            pIVar4 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar32 = (float)((ulong)pvVar5 >> 0x20);
            fVar31 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar32 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar33 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar31) {
              fVar31 = 1.0;
            }
            fVar36 = SUB84(pvVar5,0);
            fVar40 = SUB84(pIVar4,0);
            if (fVar31 <= 0.999999) {
              uStack_b0 = 0;
              uStack_a0 = 0;
              uStack_e0 = CONCAT44(fVar30,(undefined4)uStack_e0);
              uStack_d0 = 0;
              uStack_c0 = 0;
              pMStack_f0 = (MethodInfo *)0x40c8bd1;
              uStack_d8 = pvVar5;
              uStack_c8 = pIVar4;
              pIStack_b8 = pIVar3;
              pIStack_a8 = pIVar2;
              fVar30 = acosf(fVar31);
              fVar30 = (fVar30 + fVar30) * 57.29578;
              if ((fVar30 != 0.0) || (NAN(fVar30))) {
                fVar32 = 1.0;
                if (uStack_e0._4_4_ / fVar30 <= 1.0) {
                  fVar32 = uStack_e0._4_4_ / fVar30;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_f0 = (MethodInfo *)0x40c8c18;
                a_00.fields._8_8_ = pIStack_b8;
                a_00.fields._0_8_ = pIStack_a8;
                b_00.fields._8_8_ = uStack_d8;
                b_00.fields._0_8_ = uStack_c8;
                UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar32,(MethodInfo *)0x0);
                fVar36 = UVar43.fields.z;
                fVar32 = UVar43.fields.w;
                fVar40 = UVar43.fields.x;
                fVar33 = UVar43.fields.y;
              }
              else {
                fVar36 = (float)uStack_d8;
                fVar32 = uStack_d8._4_4_;
                fVar40 = (float)uStack_c8;
                fVar33 = uStack_c8._4_4_;
              }
            }
            q_00.fields.y = fVar33;
            q_00.fields.x = fVar40;
            q_00.fields.w = fVar32;
            q_00.fields.z = fVar36;
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar23;
    pMStack_f0 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_f0 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_f8 = extraout_RDX_04;
  pMStack_f0 = pMVar21;
  uStack_100 = extraout_EAX;
  fStack_fc = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_108 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_108 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_108 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_05 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_05->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_05->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_108 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_108 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      fStack_fc = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar21,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_05->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_05->return_type;
        pIStack_108 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar23 != (Il2CppObject *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          pIStack_108 = (Il2CppObject *)0x40c8d03;
          UVar43 = UnityEngine_Quaternion__AngleAxis
                             (fStack_fc,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c8d14;
      }
    }
    pIStack_108 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_108 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_118 = extraout_RDX_05;
  pMStack_110 = pMVar21;
  pIStack_108 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_130 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_130 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar21 = extraout_RDX_05;
  if (extraout_RDX_06 == 0) {
label_040c8e47:
    uStack_130 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = pMVar21;
  }
  else {
    pMVar28 = extraout_RDX_05;
    if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
      pMVar28 = *(MethodInfo **)(extraout_RDX_06 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_130 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_130 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar28;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar28,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_06 + 0x28);
        uStack_130 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar21 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          fVar30 = ABS((float)((ulong)pIVar23[3].monitor >> 0x20) *
                       (float)((ulong)pMVar21->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar23[3].klass >> 0x20) * (float)((ulong)pMVar21->parameters >> 0x20)
                       + SUB84(pIVar23[3].klass,0) * SUB84(pMVar21->parameters,0) +
                       SUB84(pIVar23[3].monitor,0) * SUB84(pMVar21->field7_0x38,0));
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          fStack_11c = 0.0;
          if (fVar30 <= 0.999999) {
            uStack_130 = 0x40c8e13;
            fVar30 = acosf(fVar30);
            fStack_11c = (fVar30 + fVar30) * 57.29578;
          }
          uStack_130 = 0x40c8e3d;
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_11c);
          return pIVar23;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_130 = 0x40c8e51;
  uStack_130 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar23 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar23;
  }
  pIStack_138 = (Il2CppObject *)0x40c8e74;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  pIStack_138 = auVar44._0_8_;
  pMStack_148 = pMVar28;
  lStack_140 = extraout_RDX_06;
  if (lVar25 != 0) {
    if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
      lStack_140 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar23 = *(Il2CppObject **)(lVar25 + 0x20);
      pIVar27 = *(Il2CppObject **)(lVar25 + 0x28);
      pIStack_138 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar23 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar23->klass->_2).naturalAligment) && (pIVar27 != (Il2CppObject *)0x0)) &&
           ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar27->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            UVar45 = UnityEngine_Quaternion__op_Multiply_4debdf0
                               ((UnityEngine_Quaternion_o)pIVar23[3],
                                *(UnityEngine_Vector3_Fields *)(pIVar27 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,UVar45,(MethodInfo *)0x0);
          }
          else {
            fVar36 = SUB84(pIVar23[3].monitor,0);
            fVar40 = (float)((ulong)pIVar23[3].monitor >> 0x20);
            fVar30 = SUB84(pIVar27[3].klass,0);
            fVar32 = (float)((ulong)pIVar27[3].klass >> 0x20);
            fVar33 = SUB84(pIVar27[3].monitor,0);
            fVar31 = (float)((ulong)pIVar27[3].monitor >> 0x20);
            uStack_150 = 0;
            fVar41 = SUB84(pIVar23[3].klass,0);
            fVar42 = (float)((ulong)pIVar23[3].klass >> 0x20);
            uStack_178 = CONCAT44(fVar42 * fVar31 + fVar40 * fVar32,fVar41 * fVar31 + fVar40 * fVar30);
            pMStack_170 = (MethodInfo *)0x0;
            uStack_168 = CONCAT44(fVar33,fVar32);
            pIStack_160 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar35 = fVar33 * fVar42 + (float)uStack_178;
            fVar37 = fVar30 * fVar36 + uStack_178._4_4_;
            fVar29 = fVar36 * (float)uStack_168;
            fVar34 = fVar41 * uStack_168._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar11 = pfVar9[1];
            fVar12 = pfVar9[2];
            fVar13 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar11;
            (__this_01->fields).Value.fields.z = fVar12;
            *(float *)&(__this_01->fields).field_0x2c = fVar13;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar35 - fVar29;
            (__this_01->fields).Value.fields.y = fVar37 - fVar34;
            (__this_01->fields).Value.fields.z =
                 (fVar41 * fVar32 + fVar36 * fVar31 + fVar40 * fVar33) - fVar42 * fVar30;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar31 * fVar40 - fVar41 * fVar30) - fVar32 * fVar42) - fVar36 * fVar33;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,pIVar27,(MethodInfo *)0x0);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,rhs,(MethodInfo *)0x0);
      plVar20 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar26 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar26 = (long *)0x0;
          }
          if ((((plVar20 != (long *)0x0) && (plVar26 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar20 + 0x130))) &&
             (lVar25 = *(long *)(*plVar20 + 200),
             *(Il2CppClass **)(lVar25 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar25 >> 8),
                            0.999999 <
                            (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                            (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                            (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_140 = 0x40c8eaf;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  uStack_150 = auVar44._0_8_;
  lStack_140 = extraout_RDX_06;
  if (lVar25 == 0) {
label_040c8fc7:
    uStack_178 = il2cpp_runtime_helper_022b2c90();
    pMStack_170 = pMVar28;
    uStack_168 = extraout_RDX_06;
    pIStack_160 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar14 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar15 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar16 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar17 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_178 = CONCAT44(iVar17 >> 1 ^ iVar16 >> 2 ^ iVar15 << 2 ^ uVar14,(float)uStack_178);
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_178 + 4);
    return pIVar23;
  }
  if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar20 = *(long **)(lVar25 + 0x20);
  plVar26 = *(long **)(lVar25 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar26 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar26 + 0x130)) {
      plVar24 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar26 = plVar24;
      }
      if ((plVar20 == (long *)0x0) || (plVar26 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar20 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar20 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar24 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                                 (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                                 (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar24 = (long *)0x0;
label_040c8f21:
  uStack_150 = CONCAT17((char)plVar24,(undefined7)uStack_150);
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_150 + 7);
  return pIVar23;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c86f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_EAX;
  uint uVar14;
  int32_t iVar15;
  int32_t iVar16;
  int32_t iVar17;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar18;
  System_Exception_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar22;
  Il2CppObject *pIVar23;
  float extraout_var;
  long *plVar24;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  long extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  long extraout_RDX_05;
  long lVar25;
  long *plVar26;
  Il2CppObject *pIVar27;
  MethodInfo *pMVar28;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  Il2CppObject *unaff_R15;
  float angle;
  float fVar29;
  float fVar30;
  float fVar31;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar32;
  float fVar34;
  float fVar36;
  float fVar35;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 uStack_160;
  MethodInfo *pMStack_158;
  undefined8 uStack_150;
  Il2CppObject *pIStack_148;
  undefined8 uStack_138;
  MethodInfo *pMStack_130;
  long lStack_128;
  Il2CppObject *pIStack_120;
  undefined8 uStack_118;
  float fStack_104;
  MethodInfo *pMStack_100;
  MethodInfo *pMStack_f8;
  Il2CppObject *pIStack_f0;
  undefined4 uStack_e8;
  float fStack_e4;
  long lStack_e0;
  MethodInfo *pMStack_d8;
  Il2CppObject *pIStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  Il2CppClass *pIStack_a0;
  undefined8 uStack_98;
  Il2CppRGCTXData *pIStack_90;
  undefined8 uStack_88;
  MethodInfo *pMStack_80;
  MethodInfo *pMStack_78;
  Il2CppObject *pIStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  MethodInfo *pMStack_40;
  float fVar33;
  
  if (g_data_057ac5c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pIVar23 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (MethodInfo *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar21;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[2];
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar21 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pMVar28 = (MethodInfo *)0x0;
            UVar43 = UnityEngine_Quaternion__SlerpUnclamped
                               (*(UnityEngine_Quaternion_Fields *)&pMVar21->parameters,
                                *(UnityEngine_Quaternion_Fields *)(unaff_R15 + 3),fVar30,(MethodInfo *)0x0);
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c87d9;
        }
      }
    }
    unaff_R15 = pIVar23;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c87d9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c2 = '\x01';
  }
  pMVar21 = extraout_RDX_00;
  if (extraout_RDX_00 == (MethodInfo *)0x0) {
label_040c8870:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_00->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_00->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pIVar23 != (Il2CppObject *)0x0) {
      UVar45.fields.x = SUB84(pIVar23[3].klass,0) * 0.017453292;
      UVar45.fields.y = (float)((ulong)pIVar23[3].klass >> 0x20) * 0.017453292;
      UVar45.fields.z = *(float *)&pIVar23[3].monitor * 0.017453292;
      pMVar21 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar45,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8870;
  }
  auVar44 = il2cpp_runtime_helper_022b2ca0();
  pMVar28 = auVar44._8_8_;
  uStack_48 = auVar44._0_8_;
  pMStack_40 = pMVar21;
  if (g_data_057ac5c3 == '\0') {
    uStack_50 = (Il2CppObject *)0x40c88a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_50 = (Il2CppObject *)0x40c88ac;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (pMVar28 == (MethodInfo *)0x0) {
    uStack_50 = (Il2CppObject *)0x40c8936;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&pMVar28->name != 0) {
    pIVar23 = (Il2CppObject *)pMVar28->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_50 = (Il2CppObject *)0x40c88da;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_50 = (Il2CppObject *)0x40c88ed;
    pMVar21 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (*(int *)&pMVar28->name < 2) {
      pIVar23 = (Il2CppObject *)0x0;
    }
    else {
      pIVar23 = (Il2CppObject *)pMVar28->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_50 = (Il2CppObject *)0x40c890f;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_50 = (Il2CppObject *)0x40c891b;
      pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar23,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar27 = pIVar23;
    pMVar28 = pMVar21;
    if (g_data_057ac59a == '\0') {
      pMVar28 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pMStack_60 = (MethodInfo *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar21 != (MethodInfo *)0x0) {
      uVar38 = 0;
      uVar39 = 0;
      if (pIVar23 == (Il2CppObject *)0x0) {
        pMStack_60 = (MethodInfo *)0x40c4f5d;
        UVar43 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      else {
        pMStack_60 = (MethodInfo *)0x40c4f54;
        UVar43 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar21->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                            (MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar31 = UVar43.fields.w;
        fVar30 = UVar43.fields.x;
        fVar32 = UVar43.fields.y;
      }
      uStack_48 = CONCAT44(fVar32,fVar30);
      uStack_58 = (MethodInfo *)CONCAT44(fVar31,fVar33);
      uStack_50 = (Il2CppObject *)CONCAT44(uVar39,uVar38);
      pMStack_60 = (MethodInfo *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pMStack_60 = (MethodInfo *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pMStack_60 = (MethodInfo *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar38 = puVar8[1];
      uVar39 = puVar8[2];
      uVar10 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar38;
      *(undefined4 *)&__this_00[1].monitor = uVar39;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar10;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pMStack_60 = (MethodInfo *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_60 = (MethodInfo *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = (undefined4)uStack_48;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_48._4_4_;
      *(int *)&__this_00[1].monitor = (int)uStack_58;
      *(int *)((long)&__this_00[1].monitor + 4) = (int)((ulong)uStack_58 >> 0x20);
      return (Il2CppObject *)__this_00;
    }
    pMStack_60 = (MethodInfo *)0x40c5008;
    pMStack_60 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      pMStack_68 = (MethodInfo *)0x40c5036;
      UVar43 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar27 + 3),
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pMStack_68 = (MethodInfo *)0x40c5041;
    pMStack_68 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_70 = (Il2CppObject *)0x40c5067;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&pMVar28->parameters,(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_70 = (Il2CppObject *)0x40c5072;
    uVar38 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      ppIVar1 = pMVar28->parameters;
      pIVar2 = (pMVar28->field7_0x38).rgctx_data;
      pIVar3 = pIVar27[3].klass;
      fVar32 = SUB84(pIVar3,0);
      fVar33 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar27[3].monitor;
      fVar31 = SUB84(pIVar4,0);
      fVar36 = (float)((ulong)pIVar4 >> 0x20);
      fVar30 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar36 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar33 + SUB84(ppIVar1,0) * fVar32 +
                   SUB84(pIVar2,0) * fVar31);
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        uStack_88 = 0;
        pMStack_78 = (MethodInfo *)0x0;
        uStack_b8 = CONCAT44(uVar38,(undefined4)uStack_b8);
        uStack_a8 = 0;
        uStack_98 = 0;
        uStack_c8 = 0x40c5107;
        uStack_b0 = pIVar4;
        pIStack_a0 = pIVar3;
        pIStack_90 = pIVar2;
        pMStack_80 = (MethodInfo *)ppIVar1;
        fVar30 = acosf(fVar30);
        fVar30 = (fVar30 + fVar30) * 57.29578;
        if ((fVar30 == 0.0) && (!NAN(fVar30))) {
          UVar43.fields._8_8_ = uStack_b0;
          UVar43.fields._0_8_ = pIStack_a0;
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar28);
          return (Il2CppObject *)pCVar22;
        }
        fVar32 = 1.0;
        if (uStack_b8._4_4_ / fVar30 <= 1.0) {
          fVar32 = uStack_b8._4_4_ / fVar30;
        }
        pMVar28 = (MethodInfo *)0x0;
        uStack_c8 = 0x40c514e;
        a.fields._8_8_ = pIStack_90;
        a.fields._0_8_ = pMStack_80;
        b.fields._8_8_ = uStack_b0;
        b.fields._0_8_ = pIStack_a0;
        UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar32,(MethodInfo *)0x0);
        fVar31 = UVar43.fields.z;
        fVar36 = UVar43.fields.w;
        fVar32 = UVar43.fields.x;
        fVar33 = UVar43.fields.y;
      }
      q.fields.y = fVar33;
      q.fields.x = fVar32;
      q.fields.w = fVar36;
      q.fields.z = fVar31;
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,pMVar28);
      return (Il2CppObject *)pCVar22;
    }
    uStack_c8 = 0x40c5178;
    uStack_c8 = il2cpp_runtime_helper_022b2c90();
    if (pMVar28 != (MethodInfo *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_d0 = (Il2CppObject *)0x40c5197;
      UVar43 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                          (MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    pIStack_d0 = (Il2CppObject *)0x40c51a2;
    pIStack_d0 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar28 != (MethodInfo *)0x0) && (pIVar27 != (Il2CppObject *)0x0)) {
      fVar30 = ABS((float)((ulong)pIVar27[3].monitor >> 0x20) * SUB84(pMVar28->field7_0x38,4) +
                   (float)((ulong)pIVar27[3].klass >> 0x20) * (float)((ulong)pMVar28->parameters >> 0x20) +
                   SUB84(pIVar27[3].klass,0) * SUB84(pMVar28->parameters,0) +
                   SUB84(pIVar27[3].monitor,0) * SUB84(pMVar28->field7_0x38,0));
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.999999) {
        pMStack_d8 = (MethodInfo *)0x40c520c;
        acosf(fVar30);
      }
      return pIStack_d0;
    }
    pMStack_d8 = (MethodInfo *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&pMVar28->parameters,0,0,0);
    return pIVar23;
  }
  uStack_50 = (Il2CppObject *)0x40c893b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_60 = pMVar28;
  uStack_58 = unaff_R14;
  uStack_50 = unaff_R15;
  if (g_data_057ac5c4 == '\0') {
    pMStack_68 = (MethodInfo *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_68 = (MethodInfo *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (extraout_RDX_01 == (MethodInfo *)0x0) {
label_040c89ef:
    pMStack_68 = (MethodInfo *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pMVar21 = pMVar28;
  }
  else {
    pMVar21 = pMVar28;
    if (*(int *)&extraout_RDX_01->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_01->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_68 = (MethodInfo *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMStack_68 = (MethodInfo *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)&extraout_RDX_01->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_01->return_type;
        pMStack_68 = (MethodInfo *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((pMVar28 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          pMVar21 = (MethodInfo *)0x0;
          pMStack_68 = (MethodInfo *)0x40c89e5;
          UVar43 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar28->parameters,
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c89ef;
      }
    }
  }
  pMStack_68 = (MethodInfo *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_68 = pMVar21;
  if (g_data_057ac5c5 == '\0') {
    pIStack_70 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_70 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pMVar21 = extraout_RDX_02;
  if (extraout_RDX_02 == (MethodInfo *)0x0) {
label_040c8a81:
    pIStack_70 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02->name != 0) {
    pMVar21 = (MethodInfo *)extraout_RDX_02->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_70 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_70 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
    pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar23 != (Il2CppObject *)0x0) {
      pMVar21 = (MethodInfo *)0x0;
      pIStack_70 = (Il2CppObject *)0x40c8a7b;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar23 + 3),(MethodInfo *)0x0);
      pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
      return (Il2CppObject *)pCVar22;
    }
    goto label_040c8a81;
  }
  pIStack_70 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_80 = pMVar21;
  pMStack_78 = extraout_RDX_01;
  pIStack_70 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pMStack_d8 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_d8 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_d8 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pMVar21 = extraout_RDX_01;
  if (extraout_RDX_03 != 0) {
    pMVar21 = extraout_RDX_01;
    pIVar23 = unaff_R15;
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      pMVar21 = *(MethodInfo **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_d8 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_d8 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      pMVar28 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar21,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar23 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x28);
        pMStack_d8 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pMVar21 = pMVar28;
        if (2 < *(uint *)(extraout_RDX_03 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x30);
          pMStack_d8 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar30 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar28 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pMVar28->parameters;
            pIVar3 = (Il2CppClass *)(pMVar28->field7_0x38).rgctx_data;
            pIVar4 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar32 = (float)((ulong)pvVar5 >> 0x20);
            fVar31 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar32 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar33 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar31) {
              fVar31 = 1.0;
            }
            fVar36 = SUB84(pvVar5,0);
            fVar40 = SUB84(pIVar4,0);
            if (fVar31 <= 0.999999) {
              uStack_98 = 0;
              uStack_88 = 0;
              uStack_c8 = CONCAT44(fVar30,(undefined4)uStack_c8);
              uStack_b8 = 0;
              uStack_a8 = 0;
              pMStack_d8 = (MethodInfo *)0x40c8bd1;
              uStack_c0 = pvVar5;
              uStack_b0 = pIVar4;
              pIStack_a0 = pIVar3;
              pIStack_90 = pIVar2;
              fVar30 = acosf(fVar31);
              fVar30 = (fVar30 + fVar30) * 57.29578;
              if ((fVar30 != 0.0) || (NAN(fVar30))) {
                fVar32 = 1.0;
                if (uStack_c8._4_4_ / fVar30 <= 1.0) {
                  fVar32 = uStack_c8._4_4_ / fVar30;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_d8 = (MethodInfo *)0x40c8c18;
                a_00.fields._8_8_ = pIStack_a0;
                a_00.fields._0_8_ = pIStack_90;
                b_00.fields._8_8_ = uStack_c0;
                b_00.fields._0_8_ = uStack_b0;
                UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar32,(MethodInfo *)0x0);
                fVar36 = UVar43.fields.z;
                fVar32 = UVar43.fields.w;
                fVar40 = UVar43.fields.x;
                fVar33 = UVar43.fields.y;
              }
              else {
                fVar36 = (float)uStack_c0;
                fVar32 = uStack_c0._4_4_;
                fVar40 = (float)uStack_b0;
                fVar33 = uStack_b0._4_4_;
              }
            }
            q_00.fields.y = fVar33;
            q_00.fields.x = fVar40;
            q_00.fields.w = fVar32;
            q_00.fields.z = fVar36;
            pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar22;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar23;
    pMStack_d8 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_d8 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_e0 = extraout_RDX_03;
  pMStack_d8 = pMVar21;
  uStack_e8 = extraout_EAX;
  fStack_e4 = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_f0 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_f0 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_f0 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_04 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_04->name != 0) {
      pMVar21 = (MethodInfo *)extraout_RDX_04->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_f0 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_f0 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar21;
      fStack_e4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar21,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_04->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_04->return_type;
        pIStack_f0 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar23 != (Il2CppObject *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          pIStack_f0 = (Il2CppObject *)0x40c8d03;
          UVar43 = UnityEngine_Quaternion__AngleAxis
                             (fStack_e4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar23 + 3),
                              (MethodInfo *)0x0);
          pCVar22 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar21);
          return (Il2CppObject *)pCVar22;
        }
        goto label_040c8d14;
      }
    }
    pIStack_f0 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_f0 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_100 = extraout_RDX_04;
  pMStack_f8 = pMVar21;
  pIStack_f0 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_118 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_118 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar21 = extraout_RDX_04;
  if (extraout_RDX_05 == 0) {
label_040c8e47:
    uStack_118 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pMVar28 = pMVar21;
  }
  else {
    pMVar28 = extraout_RDX_04;
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      pMVar28 = *(MethodInfo **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_118 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_118 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar28;
      pMVar21 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar28,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_05 + 0x28);
        uStack_118 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar21 != (MethodInfo *)0x0) && (pIVar23 != (Il2CppObject *)0x0)) {
          fVar30 = ABS((float)((ulong)pIVar23[3].monitor >> 0x20) *
                       (float)((ulong)pMVar21->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar23[3].klass >> 0x20) * (float)((ulong)pMVar21->parameters >> 0x20)
                       + SUB84(pIVar23[3].klass,0) * SUB84(pMVar21->parameters,0) +
                       SUB84(pIVar23[3].monitor,0) * SUB84(pMVar21->field7_0x38,0));
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          fStack_104 = 0.0;
          if (fVar30 <= 0.999999) {
            uStack_118 = 0x40c8e13;
            fVar30 = acosf(fVar30);
            fStack_104 = (fVar30 + fVar30) * 57.29578;
          }
          uStack_118 = 0x40c8e3d;
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_104);
          return pIVar23;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_118 = 0x40c8e51;
  uStack_118 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar23 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar23;
  }
  pIStack_120 = (Il2CppObject *)0x40c8e74;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  pIStack_120 = auVar44._0_8_;
  pMStack_130 = pMVar28;
  lStack_128 = extraout_RDX_05;
  if (lVar25 != 0) {
    if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
      lStack_128 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar23 = *(Il2CppObject **)(lVar25 + 0x20);
      pIVar27 = *(Il2CppObject **)(lVar25 + 0x28);
      pIStack_120 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar23 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar23->klass->_2).naturalAligment) && (pIVar27 != (Il2CppObject *)0x0)) &&
           ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar27->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            UVar45 = UnityEngine_Quaternion__op_Multiply_4debdf0
                               ((UnityEngine_Quaternion_o)pIVar23[3],
                                *(UnityEngine_Vector3_Fields *)(pIVar27 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,UVar45,(MethodInfo *)0x0);
          }
          else {
            fVar36 = SUB84(pIVar23[3].monitor,0);
            fVar40 = (float)((ulong)pIVar23[3].monitor >> 0x20);
            fVar30 = SUB84(pIVar27[3].klass,0);
            fVar32 = (float)((ulong)pIVar27[3].klass >> 0x20);
            fVar33 = SUB84(pIVar27[3].monitor,0);
            fVar31 = (float)((ulong)pIVar27[3].monitor >> 0x20);
            uStack_138 = 0;
            fVar41 = SUB84(pIVar23[3].klass,0);
            fVar42 = (float)((ulong)pIVar23[3].klass >> 0x20);
            uStack_160 = CONCAT44(fVar42 * fVar31 + fVar40 * fVar32,fVar41 * fVar31 + fVar40 * fVar30);
            pMStack_158 = (MethodInfo *)0x0;
            uStack_150 = CONCAT44(fVar33,fVar32);
            pIStack_148 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar35 = fVar33 * fVar42 + (float)uStack_160;
            fVar37 = fVar30 * fVar36 + uStack_160._4_4_;
            fVar29 = fVar36 * (float)uStack_150;
            fVar34 = fVar41 * uStack_150._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar11 = pfVar9[1];
            fVar12 = pfVar9[2];
            fVar13 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar11;
            (__this_01->fields).Value.fields.z = fVar12;
            *(float *)&(__this_01->fields).field_0x2c = fVar13;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar35 - fVar29;
            (__this_01->fields).Value.fields.y = fVar37 - fVar34;
            (__this_01->fields).Value.fields.z =
                 (fVar41 * fVar32 + fVar36 * fVar31 + fVar40 * fVar33) - fVar42 * fVar30;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar31 * fVar40 - fVar41 * fVar30) - fVar32 * fVar42) - fVar36 * fVar33;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,pIVar27,(MethodInfo *)0x0);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException(pSVar18,pIVar23,rhs,(MethodInfo *)0x0);
      plVar20 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar19);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar26 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar26 = (long *)0x0;
          }
          if ((((plVar20 != (long *)0x0) && (plVar26 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar20 + 0x130))) &&
             (lVar25 = *(long *)(*plVar20 + 200),
             *(Il2CppClass **)(lVar25 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar25 >> 8),
                            0.999999 <
                            (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                            (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                            (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_128 = 0x40c8eaf;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar25 = auVar44._8_8_;
  uStack_138 = auVar44._0_8_;
  lStack_128 = extraout_RDX_05;
  if (lVar25 == 0) {
label_040c8fc7:
    uStack_160 = il2cpp_runtime_helper_022b2c90();
    pMStack_158 = pMVar28;
    uStack_150 = extraout_RDX_05;
    pIStack_148 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar14 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar15 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar16 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar17 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_160 = CONCAT44(iVar17 >> 1 ^ iVar16 >> 2 ^ iVar15 << 2 ^ uVar14,(float)uStack_160);
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_160 + 4);
    return pIVar23;
  }
  if ((*(int *)(lVar25 + 0x18) == 0) || (*(int *)(lVar25 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar20 = *(long **)(lVar25 + 0x20);
  plVar26 = *(long **)(lVar25 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar26 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar26 + 0x130)) {
      plVar24 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar26 = plVar24;
      }
      if ((plVar20 == (long *)0x0) || (plVar26 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar20 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar20 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar24 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar26[7] >> 0x20) * (float)((ulong)plVar20[7] >> 0x20) +
                                 (float)((ulong)plVar26[6] >> 0x20) * (float)((ulong)plVar20[6] >> 0x20) +
                                 (float)plVar20[6] * (float)plVar26[6] + (float)plVar26[7] * (float)plVar20[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar24 = (long *)0x0;
label_040c8f21:
  uStack_138 = CONCAT17((char)plVar24,(undefined7)uStack_138);
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_138 + 7);
  return pIVar23;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromEuler>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c87e0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_EAX;
  uint uVar15;
  int32_t iVar16;
  int32_t iVar17;
  int32_t iVar18;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar19;
  System_Exception_o *pSVar20;
  long *plVar21;
  Il2CppObject *pIVar22;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar23;
  MethodInfo *pMVar24;
  float extraout_var;
  long *plVar25;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  long extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  long extraout_RDX_05;
  long lVar26;
  long *plVar27;
  Il2CppObject *pIVar28;
  MethodInfo *pMVar29;
  MethodInfo *in_R8;
  Il2CppObject *unaff_R15;
  undefined4 uVar30;
  float fVar31;
  float angle;
  float fVar32;
  float fVar33;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar34;
  float fVar36;
  float fVar38;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 uStack_148;
  MethodInfo *pMStack_140;
  undefined8 uStack_138;
  Il2CppObject *pIStack_130;
  undefined8 uStack_120;
  MethodInfo *pMStack_118;
  long lStack_110;
  Il2CppObject *pIStack_108;
  undefined8 uStack_100;
  float fStack_ec;
  MethodInfo *pMStack_e8;
  MethodInfo *pMStack_e0;
  Il2CppObject *pIStack_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  long lStack_c8;
  MethodInfo *pMStack_c0;
  Il2CppObject *pIStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  Il2CppClass *pIStack_88;
  undefined8 uStack_80;
  Il2CppRGCTXData *pIStack_78;
  undefined8 uStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  Il2CppObject *pIStack_58;
  MethodInfo *pMStack_50;
  MethodInfo *pMStack_48;
  float fVar35;
  
  if (g_data_057ac5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c8870:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
    pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (pIVar22 != (Il2CppObject *)0x0) {
      UVar45.fields.x = SUB84(pIVar22[3].klass,0) * 0.017453292;
      UVar45.fields.y = (float)((ulong)pIVar22[3].klass >> 0x20) * 0.017453292;
      UVar45.fields.z = *(float *)&pIVar22[3].monitor * 0.017453292;
      pMVar24 = (MethodInfo *)0x0;
      UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar45,(MethodInfo *)0x0);
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
      return (Il2CppObject *)pCVar23;
    }
    goto label_040c8870;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac5c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (extraout_RDX_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_00->name != 0) {
    pIVar22 = (Il2CppObject *)extraout_RDX_00->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar24 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar22,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if (*(int *)&extraout_RDX_00->name < 2) {
      pIVar22 = (Il2CppObject *)0x0;
    }
    else {
      pIVar22 = (Il2CppObject *)extraout_RDX_00->return_type;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar22,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar28 = pIVar22;
    pMVar29 = pMVar24;
    if (g_data_057ac59a == '\0') {
      pMVar29 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pMStack_48 = (MethodInfo *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar24 != (MethodInfo *)0x0) {
      if (pIVar22 == (Il2CppObject *)0x0) {
        pMStack_48 = (MethodInfo *)0x40c4f5d;
        UVar43 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar24->parameters,
                            (MethodInfo *)0x0);
        fVar35 = UVar43.fields.z;
        fVar33 = UVar43.fields.w;
        fVar31 = UVar43.fields.x;
        fVar34 = UVar43.fields.y;
      }
      else {
        pMStack_48 = (MethodInfo *)0x40c4f54;
        UVar43 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar24->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar22 + 3),
                            (MethodInfo *)0x0);
        fVar35 = UVar43.fields.z;
        fVar33 = UVar43.fields.w;
        fVar31 = UVar43.fields.x;
        fVar34 = UVar43.fields.y;
      }
      pMStack_48 = (MethodInfo *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pMStack_48 = (MethodInfo *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pMStack_48 = (MethodInfo *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar30 = puVar8[1];
      uVar10 = puVar8[2];
      uVar11 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar30;
      *(undefined4 *)&__this_00[1].monitor = uVar10;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar11;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pMStack_48 = (MethodInfo *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_48 = (MethodInfo *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(float *)&__this_00[1].klass = fVar31;
      *(float *)((long)&__this_00[1].klass + 4) = fVar34;
      *(float *)&__this_00[1].monitor = fVar35;
      *(float *)((long)&__this_00[1].monitor + 4) = fVar33;
      return (Il2CppObject *)__this_00;
    }
    pMStack_48 = (MethodInfo *)0x40c5008;
    pMStack_48 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar29 != (MethodInfo *)0x0) && (pIVar28 != (Il2CppObject *)0x0)) {
      pMVar24 = (MethodInfo *)0x0;
      pMStack_50 = (MethodInfo *)0x40c5036;
      UVar43 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar29->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar28 + 3),
                          (MethodInfo *)0x0);
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
      return (Il2CppObject *)pCVar23;
    }
    pMStack_50 = (MethodInfo *)0x40c5041;
    pMStack_50 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    if (pMVar29 != (MethodInfo *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_58 = (Il2CppObject *)0x40c5067;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&pMVar29->parameters,(MethodInfo *)0x0);
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
      return (Il2CppObject *)pCVar23;
    }
    pIStack_58 = (Il2CppObject *)0x40c5072;
    uVar30 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar29 != (MethodInfo *)0x0) && (pIVar28 != (Il2CppObject *)0x0)) {
      ppIVar1 = pMVar29->parameters;
      pIVar2 = (pMVar29->field7_0x38).rgctx_data;
      pIVar3 = pIVar28[3].klass;
      fVar34 = SUB84(pIVar3,0);
      fVar35 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar28[3].monitor;
      fVar33 = SUB84(pIVar4,0);
      fVar38 = (float)((ulong)pIVar4 >> 0x20);
      fVar31 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar38 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar35 + SUB84(ppIVar1,0) * fVar34 +
                   SUB84(pIVar2,0) * fVar33);
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
      if (fVar31 <= 0.999999) {
        uStack_70 = 0;
        pMStack_60 = (MethodInfo *)0x0;
        uStack_a0 = CONCAT44(uVar30,(undefined4)uStack_a0);
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_b0 = 0x40c5107;
        uStack_98 = pIVar4;
        pIStack_88 = pIVar3;
        pIStack_78 = pIVar2;
        pMStack_68 = (MethodInfo *)ppIVar1;
        fVar31 = acosf(fVar31);
        fVar31 = (fVar31 + fVar31) * 57.29578;
        if ((fVar31 == 0.0) && (!NAN(fVar31))) {
          UVar43.fields._8_8_ = uStack_98;
          UVar43.fields._0_8_ = pIStack_88;
          pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar29);
          return (Il2CppObject *)pCVar23;
        }
        fVar34 = 1.0;
        if (uStack_a0._4_4_ / fVar31 <= 1.0) {
          fVar34 = uStack_a0._4_4_ / fVar31;
        }
        pMVar29 = (MethodInfo *)0x0;
        uStack_b0 = 0x40c514e;
        a.fields._8_8_ = pIStack_78;
        a.fields._0_8_ = pMStack_68;
        b.fields._8_8_ = uStack_98;
        b.fields._0_8_ = pIStack_88;
        UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar34,(MethodInfo *)0x0);
        fVar33 = UVar43.fields.z;
        fVar38 = UVar43.fields.w;
        fVar34 = UVar43.fields.x;
        fVar35 = UVar43.fields.y;
      }
      q.fields.y = fVar35;
      q.fields.x = fVar34;
      q.fields.w = fVar38;
      q.fields.z = fVar33;
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,pMVar29);
      return (Il2CppObject *)pCVar23;
    }
    uStack_b0 = 0x40c5178;
    uStack_b0 = il2cpp_runtime_helper_022b2c90();
    if (pMVar29 != (MethodInfo *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_b8 = (Il2CppObject *)0x40c5197;
      UVar43 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar29->parameters,
                          (MethodInfo *)0x0);
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
      return (Il2CppObject *)pCVar23;
    }
    pIStack_b8 = (Il2CppObject *)0x40c51a2;
    pIStack_b8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((pMVar29 != (MethodInfo *)0x0) && (pIVar28 != (Il2CppObject *)0x0)) {
      fVar31 = ABS((float)((ulong)pIVar28[3].monitor >> 0x20) * SUB84(pMVar29->field7_0x38,4) +
                   (float)((ulong)pIVar28[3].klass >> 0x20) * (float)((ulong)pMVar29->parameters >> 0x20) +
                   SUB84(pIVar28[3].klass,0) * SUB84(pMVar29->parameters,0) +
                   SUB84(pIVar28[3].monitor,0) * SUB84(pMVar29->field7_0x38,0));
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
      if (fVar31 <= 0.999999) {
        pMStack_c0 = (MethodInfo *)0x40c520c;
        acosf(fVar31);
      }
      return pIStack_b8;
    }
    pMStack_c0 = (MethodInfo *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&pMVar29->parameters,0,0,0);
    return pIVar22;
  }
  il2cpp_runtime_helper_022b2ca0();
  pMStack_48 = extraout_RDX_00;
  if (g_data_057ac5c4 == '\0') {
    pMStack_50 = (MethodInfo *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_50 = (MethodInfo *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  pMVar24 = extraout_RDX_00;
  if (extraout_RDX_01 == (MethodInfo *)0x0) {
label_040c89ef:
    pMStack_50 = (MethodInfo *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pMVar29 = pMVar24;
  }
  else {
    pMVar29 = extraout_RDX_00;
    if (*(int *)&extraout_RDX_01->name != 0) {
      pMVar29 = (MethodInfo *)extraout_RDX_01->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_50 = (MethodInfo *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMStack_50 = (MethodInfo *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar29;
      pMVar24 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar29,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)&extraout_RDX_01->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_01->return_type;
        pMStack_50 = (MethodInfo *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((pMVar24 != (MethodInfo *)0x0) && (pIVar22 != (Il2CppObject *)0x0)) {
          pMVar29 = (MethodInfo *)0x0;
          pMStack_50 = (MethodInfo *)0x40c89e5;
          UVar43 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar24->parameters,
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar22 + 3),
                              (MethodInfo *)0x0);
          pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar29);
          return (Il2CppObject *)pCVar23;
        }
        goto label_040c89ef;
      }
    }
  }
  pMStack_50 = (MethodInfo *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_50 = pMVar29;
  if (g_data_057ac5c5 == '\0') {
    pIStack_58 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_58 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pMVar24 = extraout_RDX_02;
  if (extraout_RDX_02 == (MethodInfo *)0x0) {
label_040c8a81:
    pIStack_58 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX_02->name != 0) {
    pMVar24 = (MethodInfo *)extraout_RDX_02->klass;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_58 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_58 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar24;
    pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar24,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar22 != (Il2CppObject *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_58 = (Il2CppObject *)0x40c8a7b;
      UVar43 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar22 + 3),(MethodInfo *)0x0);
      pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
      return (Il2CppObject *)pCVar23;
    }
    goto label_040c8a81;
  }
  pIStack_58 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_68 = pMVar24;
  pMStack_60 = extraout_RDX_01;
  pIStack_58 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pMStack_c0 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_c0 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_c0 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pMVar24 = extraout_RDX_01;
  if (extraout_RDX_03 != 0) {
    pMVar24 = extraout_RDX_01;
    pIVar22 = unaff_R15;
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      pMVar24 = *(MethodInfo **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_c0 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_c0 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar24;
      pMVar29 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar24,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar22 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x28);
        pMStack_c0 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pMVar24 = pMVar29;
        if (2 < *(uint *)(extraout_RDX_03 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x30);
          pMStack_c0 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar31 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar29 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pMVar29->parameters;
            pIVar3 = (Il2CppClass *)(pMVar29->field7_0x38).rgctx_data;
            pIVar4 = unaff_R15[3].klass;
            fVar35 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar34 = (float)((ulong)pvVar5 >> 0x20);
            fVar33 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar34 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar35 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar33) {
              fVar33 = 1.0;
            }
            fVar38 = SUB84(pvVar5,0);
            fVar40 = SUB84(pIVar4,0);
            if (fVar33 <= 0.999999) {
              uStack_80 = 0;
              uStack_70 = 0;
              uStack_b0 = CONCAT44(fVar31,(undefined4)uStack_b0);
              uStack_a0 = 0;
              uStack_90 = 0;
              pMStack_c0 = (MethodInfo *)0x40c8bd1;
              uStack_a8 = pvVar5;
              uStack_98 = pIVar4;
              pIStack_88 = pIVar3;
              pIStack_78 = pIVar2;
              fVar31 = acosf(fVar33);
              fVar31 = (fVar31 + fVar31) * 57.29578;
              if ((fVar31 != 0.0) || (NAN(fVar31))) {
                fVar34 = 1.0;
                if (uStack_b0._4_4_ / fVar31 <= 1.0) {
                  fVar34 = uStack_b0._4_4_ / fVar31;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_c0 = (MethodInfo *)0x40c8c18;
                a_00.fields._8_8_ = pIStack_88;
                a_00.fields._0_8_ = pIStack_78;
                b_00.fields._8_8_ = uStack_a8;
                b_00.fields._0_8_ = uStack_98;
                UVar43 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar34,(MethodInfo *)0x0);
                fVar38 = UVar43.fields.z;
                fVar34 = UVar43.fields.w;
                fVar40 = UVar43.fields.x;
                fVar35 = UVar43.fields.y;
              }
              else {
                fVar38 = (float)uStack_a8;
                fVar34 = uStack_a8._4_4_;
                fVar40 = (float)uStack_98;
                fVar35 = uStack_98._4_4_;
              }
            }
            q_00.fields.y = fVar35;
            q_00.fields.x = fVar40;
            q_00.fields.w = fVar34;
            q_00.fields.z = fVar38;
            pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar23;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar22;
    pMStack_c0 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_c0 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_c8 = extraout_RDX_03;
  pMStack_c0 = pMVar24;
  uStack_d0 = extraout_EAX;
  fStack_cc = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_d8 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_d8 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_d8 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_04 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_04->name != 0) {
      pMVar24 = (MethodInfo *)extraout_RDX_04->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_d8 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_d8 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar24;
      fStack_cc = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar24,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_04->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_04->return_type;
        pIStack_d8 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar22 != (Il2CppObject *)0x0) {
          pMVar24 = (MethodInfo *)0x0;
          pIStack_d8 = (Il2CppObject *)0x40c8d03;
          UVar43 = UnityEngine_Quaternion__AngleAxis
                             (fStack_cc,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar22 + 3),
                              (MethodInfo *)0x0);
          pCVar23 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar43,pMVar24);
          return (Il2CppObject *)pCVar23;
        }
        goto label_040c8d14;
      }
    }
    pIStack_d8 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_d8 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_e8 = extraout_RDX_04;
  pMStack_e0 = pMVar24;
  pIStack_d8 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_100 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_100 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar24 = extraout_RDX_04;
  if (extraout_RDX_05 == 0) {
label_040c8e47:
    uStack_100 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pMVar29 = pMVar24;
  }
  else {
    pMVar29 = extraout_RDX_04;
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      pMVar29 = *(MethodInfo **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_100 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_100 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pMVar29;
      pMVar24 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar29,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_05 + 0x28);
        uStack_100 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar24 != (MethodInfo *)0x0) && (pIVar22 != (Il2CppObject *)0x0)) {
          fVar31 = ABS((float)((ulong)pIVar22[3].monitor >> 0x20) *
                       (float)((ulong)pMVar24->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar22[3].klass >> 0x20) * (float)((ulong)pMVar24->parameters >> 0x20)
                       + SUB84(pIVar22[3].klass,0) * SUB84(pMVar24->parameters,0) +
                       SUB84(pIVar22[3].monitor,0) * SUB84(pMVar24->field7_0x38,0));
          if (1.0 <= fVar31) {
            fVar31 = 1.0;
          }
          fStack_ec = 0.0;
          if (fVar31 <= 0.999999) {
            uStack_100 = 0x40c8e13;
            fVar31 = acosf(fVar31);
            fStack_ec = (fVar31 + fVar31) * 57.29578;
          }
          uStack_100 = 0x40c8e3d;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_ec);
          return pIVar22;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_100 = 0x40c8e51;
  uStack_100 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar22 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar22;
  }
  pIStack_108 = (Il2CppObject *)0x40c8e74;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar44._8_8_;
  pIStack_108 = auVar44._0_8_;
  pMStack_118 = pMVar29;
  lStack_110 = extraout_RDX_05;
  if (lVar26 != 0) {
    if ((*(int *)(lVar26 + 0x18) == 0) || (*(int *)(lVar26 + 0x18) == 1)) {
      lStack_110 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar22 = *(Il2CppObject **)(lVar26 + 0x20);
      pIVar28 = *(Il2CppObject **)(lVar26 + 0x28);
      pIStack_108 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar22 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar22->klass->_2).naturalAligment) && (pIVar28 != (Il2CppObject *)0x0)) &&
           ((pIVar22->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar28->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            UVar45 = UnityEngine_Quaternion__op_Multiply_4debdf0
                               ((UnityEngine_Quaternion_o)pIVar22[3],
                                *(UnityEngine_Vector3_Fields *)(pIVar28 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,UVar45,(MethodInfo *)0x0);
          }
          else {
            fVar38 = SUB84(pIVar22[3].monitor,0);
            fVar40 = (float)((ulong)pIVar22[3].monitor >> 0x20);
            fVar31 = SUB84(pIVar28[3].klass,0);
            fVar34 = (float)((ulong)pIVar28[3].klass >> 0x20);
            fVar35 = SUB84(pIVar28[3].monitor,0);
            fVar33 = (float)((ulong)pIVar28[3].monitor >> 0x20);
            uStack_120 = 0;
            fVar41 = SUB84(pIVar22[3].klass,0);
            fVar42 = (float)((ulong)pIVar22[3].klass >> 0x20);
            uStack_148 = CONCAT44(fVar42 * fVar33 + fVar40 * fVar34,fVar41 * fVar33 + fVar40 * fVar31);
            pMStack_140 = (MethodInfo *)0x0;
            uStack_138 = CONCAT44(fVar35,fVar34);
            pIStack_130 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar37 = fVar35 * fVar42 + (float)uStack_148;
            fVar39 = fVar31 * fVar38 + uStack_148._4_4_;
            fVar32 = fVar38 * (float)uStack_138;
            fVar36 = fVar41 * uStack_138._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar12 = pfVar9[1];
            fVar13 = pfVar9[2];
            fVar14 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar12;
            (__this_01->fields).Value.fields.z = fVar13;
            *(float *)&(__this_01->fields).field_0x2c = fVar14;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar37 - fVar32;
            (__this_01->fields).Value.fields.y = fVar39 - fVar36;
            (__this_01->fields).Value.fields.z =
                 (fVar41 * fVar34 + fVar38 * fVar33 + fVar40 * fVar35) - fVar42 * fVar31;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar33 * fVar40 - fVar41 * fVar31) - fVar34 * fVar42) - fVar38 * fVar35;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar20 = CustomLogic_CustomLogicUtils__OperatorException(pSVar19,pIVar22,pIVar28,(MethodInfo *)0x0);
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar20);
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar20 = CustomLogic_CustomLogicUtils__OperatorException(pSVar19,pIVar22,rhs,(MethodInfo *)0x0);
      plVar21 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar20);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar27 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar27 = (long *)0x0;
          }
          if ((((plVar21 != (long *)0x0) && (plVar27 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar21 + 0x130))) &&
             (lVar26 = *(long *)(*plVar21 + 200),
             *(Il2CppClass **)(lVar26 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar26 >> 8),
                            0.999999 <
                            (float)((ulong)plVar27[7] >> 0x20) * (float)((ulong)plVar21[7] >> 0x20) +
                            (float)((ulong)plVar27[6] >> 0x20) * (float)((ulong)plVar21[6] >> 0x20) +
                            (float)plVar21[6] * (float)plVar27[6] + (float)plVar27[7] * (float)plVar21[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_110 = 0x40c8eaf;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar26 = auVar44._8_8_;
  uStack_120 = auVar44._0_8_;
  lStack_110 = extraout_RDX_05;
  if (lVar26 == 0) {
label_040c8fc7:
    uStack_148 = il2cpp_runtime_helper_022b2c90();
    pMStack_140 = pMVar29;
    uStack_138 = extraout_RDX_05;
    pIStack_130 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar15 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar16 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar17 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar18 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_148 = CONCAT44(iVar18 >> 1 ^ iVar17 >> 2 ^ iVar16 << 2 ^ uVar15,(float)uStack_148);
    pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_148 + 4);
    return pIVar22;
  }
  if ((*(int *)(lVar26 + 0x18) == 0) || (*(int *)(lVar26 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar21 = *(long **)(lVar26 + 0x20);
  plVar27 = *(long **)(lVar26 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar27 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar27 + 0x130)) {
      plVar25 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar27 = plVar25;
      }
      if ((plVar21 == (long *)0x0) || (plVar27 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar21 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar21 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar25 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar27[7] >> 0x20) * (float)((ulong)plVar21[7] >> 0x20) +
                                 (float)((ulong)plVar27[6] >> 0x20) * (float)((ulong)plVar21[6] >> 0x20) +
                                 (float)plVar21[6] * (float)plVar27[6] + (float)plVar27[7] * (float)plVar21[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar25 = (long *)0x0;
label_040c8f21:
  uStack_120 = CONCAT17((char)plVar25,(undefined7)uStack_120);
  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_120 + 7);
  return pIVar22;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookRotation>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8880

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_EAX;
  uint uVar15;
  int32_t iVar16;
  int32_t iVar17;
  int32_t iVar18;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar19;
  Il2CppObject *pIVar20;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_String_o *pSVar21;
  System_Exception_o *pSVar22;
  long *plVar23;
  MethodInfo *pMVar24;
  System_Object_array *pSVar25;
  float extraout_var;
  System_Object_array *pSVar26;
  long *plVar27;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  long extraout_RDX_02;
  System_Object_array *extraout_RDX_03;
  long extraout_RDX_04;
  long lVar28;
  long *plVar29;
  Il2CppObject *pIVar30;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  Il2CppObject *unaff_R15;
  undefined4 uVar31;
  float fVar32;
  float angle;
  float fVar33;
  float fVar34;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Quaternion_o UVar44;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o q_00;
  undefined1 auVar45 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  undefined8 uStack_140;
  System_Object_array *pSStack_138;
  undefined8 uStack_130;
  Il2CppObject *pIStack_128;
  undefined8 uStack_118;
  System_Object_array *pSStack_110;
  long lStack_108;
  Il2CppObject *pIStack_100;
  undefined8 uStack_f8;
  float fStack_e4;
  System_Object_array *pSStack_e0;
  System_Object_array *pSStack_d8;
  Il2CppObject *pIStack_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  long lStack_c0;
  System_Object_array *pSStack_b8;
  Il2CppObject *pIStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  Il2CppClass *pIStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  undefined8 uStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  Il2CppObject *pIStack_50;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  float fVar35;
  float fVar36;
  
  if (g_data_057ac5c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar20 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar24 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    if ((int)__a->max_length < 2) {
      pIVar20 = (Il2CppObject *)0x0;
    }
    else {
      pIVar20 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    }
    pIVar30 = pIVar20;
    method_00 = pMVar24;
    if (g_data_057ac59a == '\0') {
      method_00 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
      pSStack_40 = (System_Object_array *)0x40c4f22;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac59a = '\x01';
    }
    if (pMVar24 != (MethodInfo *)0x0) {
      if (pIVar20 == (Il2CppObject *)0x0) {
        pSStack_40 = (System_Object_array *)0x40c4f5d;
        UVar44 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar24->parameters,
                            (MethodInfo *)0x0);
        fVar36 = UVar44.fields.z;
        fVar34 = UVar44.fields.w;
        fVar32 = UVar44.fields.x;
        fVar35 = UVar44.fields.y;
      }
      else {
        pSStack_40 = (System_Object_array *)0x40c4f54;
        UVar44 = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar24->parameters,
                            (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar20 + 3),
                            (MethodInfo *)0x0);
        fVar36 = UVar44.fields.z;
        fVar34 = UVar44.fields.w;
        fVar32 = UVar44.fields.x;
        fVar35 = UVar44.fields.y;
      }
      pSStack_40 = (System_Object_array *)0x40c4f75;
      __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
      if (g_data_057ac599 == '\0') {
        pSStack_40 = (System_Object_array *)0x40c4f8d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ac599 = '\x01';
      }
      if (g_data_057a6843 == '\0') {
        pSStack_40 = (System_Object_array *)0x40c4fa9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      puVar8 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
      uVar31 = puVar8[1];
      uVar10 = puVar8[2];
      uVar11 = puVar8[3];
      *(undefined4 *)&__this_00[1].klass = *puVar8;
      *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar31;
      *(undefined4 *)&__this_00[1].monitor = uVar10;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar11;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        pSStack_40 = (System_Object_array *)0x40c4fe0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_Object_array *)0x40c4fea;
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      *(float *)&__this_00[1].klass = fVar32;
      *(float *)((long)&__this_00[1].klass + 4) = fVar35;
      *(float *)&__this_00[1].monitor = fVar36;
      *(float *)((long)&__this_00[1].monitor + 4) = fVar34;
      return (Il2CppObject *)__this_00;
    }
    pSStack_40 = (System_Object_array *)0x40c5008;
    pSStack_40 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    if ((method_00 != (MethodInfo *)0x0) && (pIVar30 != (Il2CppObject *)0x0)) {
      pMVar24 = (MethodInfo *)0x0;
      pSStack_48 = (System_Object_array *)0x40c5036;
      UVar44 = UnityEngine_Quaternion__FromToRotation
                         ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method_00->parameters,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar30 + 3),
                          (MethodInfo *)0x0);
      pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
      return (Il2CppObject *)pCVar19;
    }
    pSStack_48 = (System_Object_array *)0x40c5041;
    pSStack_48 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
    if (method_00 != (MethodInfo *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_50 = (Il2CppObject *)0x40c5067;
      UVar44 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)&method_00->parameters,(MethodInfo *)0x0);
      pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
      return (Il2CppObject *)pCVar19;
    }
    pIStack_50 = (Il2CppObject *)0x40c5072;
    uVar31 = il2cpp_runtime_helper_022b2c90();
    if ((method_00 != (MethodInfo *)0x0) && (pIVar30 != (Il2CppObject *)0x0)) {
      ppIVar1 = method_00->parameters;
      pIVar2 = (method_00->field7_0x38).rgctx_data;
      pIVar3 = pIVar30[3].klass;
      fVar35 = SUB84(pIVar3,0);
      fVar36 = (float)((ulong)pIVar3 >> 0x20);
      pIVar4 = pIVar30[3].monitor;
      fVar34 = SUB84(pIVar4,0);
      fVar39 = (float)((ulong)pIVar4 >> 0x20);
      fVar32 = ABS((float)((ulong)pIVar2 >> 0x20) * fVar39 +
                   (float)((ulong)ppIVar1 >> 0x20) * fVar36 + SUB84(ppIVar1,0) * fVar35 +
                   SUB84(pIVar2,0) * fVar34);
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      if (fVar32 <= 0.999999) {
        uStack_68 = 0;
        pSStack_58 = (System_Object_array *)0x0;
        uStack_98 = CONCAT44(uVar31,(undefined4)uStack_98);
        uStack_88 = 0;
        uStack_78 = 0;
        uStack_a8 = 0x40c5107;
        uStack_90 = pIVar4;
        pIStack_80 = pIVar3;
        pIStack_70 = pIVar2;
        pSStack_60 = (System_Object_array *)ppIVar1;
        fVar32 = acosf(fVar32);
        fVar32 = (fVar32 + fVar32) * 57.29578;
        if ((fVar32 == 0.0) && (!NAN(fVar32))) {
          UVar44.fields._8_8_ = uStack_90;
          UVar44.fields._0_8_ = pIStack_80;
          pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,method_00);
          return (Il2CppObject *)pCVar19;
        }
        fVar35 = 1.0;
        if (uStack_98._4_4_ / fVar32 <= 1.0) {
          fVar35 = uStack_98._4_4_ / fVar32;
        }
        method_00 = (MethodInfo *)0x0;
        uStack_a8 = 0x40c514e;
        a.fields._8_8_ = pIStack_70;
        a.fields._0_8_ = pSStack_60;
        b.fields._8_8_ = uStack_90;
        b.fields._0_8_ = pIStack_80;
        UVar44 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar35,(MethodInfo *)0x0);
        fVar34 = UVar44.fields.z;
        fVar39 = UVar44.fields.w;
        fVar35 = UVar44.fields.x;
        fVar36 = UVar44.fields.y;
      }
      q.fields.y = fVar36;
      q.fields.x = fVar35;
      q.fields.w = fVar39;
      q.fields.z = fVar34;
      pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,method_00);
      return (Il2CppObject *)pCVar19;
    }
    uStack_a8 = 0x40c5178;
    uStack_a8 = il2cpp_runtime_helper_022b2c90();
    if (method_00 != (MethodInfo *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_b0 = (Il2CppObject *)0x40c5197;
      UVar44 = UnityEngine_Quaternion__AngleAxis
                         (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method_00->parameters,
                          (MethodInfo *)0x0);
      pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
      return (Il2CppObject *)pCVar19;
    }
    pIStack_b0 = (Il2CppObject *)0x40c51a2;
    pIStack_b0 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if ((method_00 != (MethodInfo *)0x0) && (pIVar30 != (Il2CppObject *)0x0)) {
      fVar32 = ABS((float)((ulong)pIVar30[3].monitor >> 0x20) * SUB84(method_00->field7_0x38,4) +
                   (float)((ulong)pIVar30[3].klass >> 0x20) * (float)((ulong)method_00->parameters >> 0x20) +
                   SUB84(pIVar30[3].klass,0) * SUB84(method_00->parameters,0) +
                   SUB84(pIVar30[3].monitor,0) * SUB84(method_00->field7_0x38,0));
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      if (fVar32 <= 0.999999) {
        pSStack_b8 = (System_Object_array *)0x40c520c;
        acosf(fVar32);
      }
      return pIStack_b0;
    }
    pSStack_b8 = (System_Object_array *)0x40c5225;
    il2cpp_runtime_helper_022b2c90();
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02924830(&method_00->parameters,0,0,0);
    return pIVar20;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSStack_40 = __a;
  if (g_data_057ac5c4 == '\0') {
    pSStack_48 = (System_Object_array *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_48 = (System_Object_array *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (extraout_RDX_00 == (System_Object_array *)0x0) {
label_040c89ef:
    pSStack_48 = (System_Object_array *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pSVar26 = __a;
  }
  else {
    pSVar26 = __a;
    if ((int)extraout_RDX_00->max_length != 0) {
      pSVar26 = (System_Object_array *)extraout_RDX_00->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_48 = (System_Object_array *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pSStack_48 = (System_Object_array *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar26;
      __a = (System_Object_array *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar26,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < (uint)extraout_RDX_00->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_00->m_Items[1];
        pSStack_48 = (System_Object_array *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((__a != (System_Object_array *)0x0) && (pIVar20 != (Il2CppObject *)0x0)) {
          pMVar24 = (MethodInfo *)0x0;
          pSStack_48 = (System_Object_array *)0x40c89e5;
          UVar44 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(__a->m_Items + 2),
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar20 + 3),
                              (MethodInfo *)0x0);
          pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
          return (Il2CppObject *)pCVar19;
        }
        goto label_040c89ef;
      }
    }
  }
  pSStack_48 = (System_Object_array *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_48 = pSVar26;
  if (g_data_057ac5c5 == '\0') {
    pIStack_50 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_50 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pSVar26 = extraout_RDX_01;
  if (extraout_RDX_01 == (System_Object_array *)0x0) {
label_040c8a81:
    pIStack_50 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_01->max_length != 0) {
    pSVar26 = (System_Object_array *)extraout_RDX_01->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_50 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_50 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar26;
    pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar26,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar20 != (Il2CppObject *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      pIStack_50 = (Il2CppObject *)0x40c8a7b;
      UVar44 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar20 + 3),(MethodInfo *)0x0);
      pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
      return (Il2CppObject *)pCVar19;
    }
    goto label_040c8a81;
  }
  pIStack_50 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_60 = pSVar26;
  pSStack_58 = extraout_RDX_00;
  pIStack_50 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pSStack_b8 = (System_Object_array *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pSStack_b8 = (System_Object_array *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_b8 = (System_Object_array *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  pSVar26 = extraout_RDX_00;
  if (extraout_RDX_02 != 0) {
    pSVar26 = extraout_RDX_00;
    pIVar20 = unaff_R15;
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      pSVar26 = *(System_Object_array **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_b8 = (System_Object_array *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_b8 = (System_Object_array *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar26;
      pSVar25 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&pSVar26->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar20 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
        pSStack_b8 = (System_Object_array *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        pSVar26 = pSVar25;
        if (2 < *(uint *)(extraout_RDX_02 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x30);
          pSStack_b8 = (System_Object_array *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar32 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pSVar25 != (System_Object_array *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar2 = (Il2CppRGCTXData *)pSVar25->m_Items[2];
            pIVar3 = (Il2CppClass *)pSVar25->m_Items[3];
            pIVar4 = unaff_R15[3].klass;
            fVar36 = (float)((ulong)pIVar4 >> 0x20);
            pvVar5 = unaff_R15[3].monitor;
            fVar35 = (float)((ulong)pvVar5 >> 0x20);
            fVar34 = ABS((float)((ulong)pIVar3 >> 0x20) * fVar35 +
                         (float)((ulong)pIVar2 >> 0x20) * fVar36 + SUB84(pIVar2,0) * SUB84(pIVar4,0) +
                         SUB84(pIVar3,0) * SUB84(pvVar5,0));
            if (1.0 <= fVar34) {
              fVar34 = 1.0;
            }
            fVar39 = SUB84(pvVar5,0);
            fVar41 = SUB84(pIVar4,0);
            if (fVar34 <= 0.999999) {
              uStack_78 = 0;
              uStack_68 = 0;
              uStack_a8 = CONCAT44(fVar32,(undefined4)uStack_a8);
              uStack_98 = 0;
              uStack_88 = 0;
              pSStack_b8 = (System_Object_array *)0x40c8bd1;
              uStack_a0 = pvVar5;
              uStack_90 = pIVar4;
              pIStack_80 = pIVar3;
              pIStack_70 = pIVar2;
              fVar32 = acosf(fVar34);
              fVar32 = (fVar32 + fVar32) * 57.29578;
              if ((fVar32 != 0.0) || (NAN(fVar32))) {
                fVar35 = 1.0;
                if (uStack_a8._4_4_ / fVar32 <= 1.0) {
                  fVar35 = uStack_a8._4_4_ / fVar32;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pSStack_b8 = (System_Object_array *)0x40c8c18;
                a_00.fields._8_8_ = pIStack_80;
                a_00.fields._0_8_ = pIStack_70;
                b_00.fields._8_8_ = uStack_a0;
                b_00.fields._0_8_ = uStack_90;
                UVar44 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar35,(MethodInfo *)0x0);
                fVar39 = UVar44.fields.z;
                fVar35 = UVar44.fields.w;
                fVar41 = UVar44.fields.x;
                fVar36 = UVar44.fields.y;
              }
              else {
                fVar39 = (float)uStack_a0;
                fVar35 = uStack_a0._4_4_;
                fVar41 = (float)uStack_90;
                fVar36 = uStack_90._4_4_;
              }
            }
            q_00.fields.y = fVar36;
            q_00.fields.x = fVar41;
            q_00.fields.w = fVar35;
            q_00.fields.z = fVar39;
            pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)__this)
            ;
            return (Il2CppObject *)pCVar19;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar20;
    pSStack_b8 = (System_Object_array *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pSStack_b8 = (System_Object_array *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_c0 = extraout_RDX_02;
  pSStack_b8 = pSVar26;
  uStack_c8 = extraout_EAX;
  fStack_c4 = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_d0 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_d0 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_d0 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_03 != (System_Object_array *)0x0) {
    if ((int)extraout_RDX_03->max_length != 0) {
      pSVar26 = (System_Object_array *)extraout_RDX_03->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_d0 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_d0 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar26;
      fStack_c4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pSVar26,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)extraout_RDX_03->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_03->m_Items[1];
        pIStack_d0 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar20 != (Il2CppObject *)0x0) {
          pMVar24 = (MethodInfo *)0x0;
          pIStack_d0 = (Il2CppObject *)0x40c8d03;
          UVar44 = UnityEngine_Quaternion__AngleAxis
                             (fStack_c4,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar20 + 3),
                              (MethodInfo *)0x0);
          pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar44,pMVar24);
          return (Il2CppObject *)pCVar19;
        }
        goto label_040c8d14;
      }
    }
    pIStack_d0 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_d0 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pSStack_e0 = extraout_RDX_03;
  pSStack_d8 = pSVar26;
  pIStack_d0 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_f8 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_f8 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pSVar26 = extraout_RDX_03;
  if (extraout_RDX_04 == 0) {
label_040c8e47:
    uStack_f8 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    pSVar25 = pSVar26;
  }
  else {
    pSVar25 = extraout_RDX_03;
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      pSVar25 = *(System_Object_array **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_f8 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_f8 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar25;
      pSVar26 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&pSVar25->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_04 + 0x28);
        uStack_f8 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pSVar26 != (System_Object_array *)0x0) && (pIVar20 != (Il2CppObject *)0x0)) {
          fVar32 = ABS((float)((ulong)pIVar20[3].monitor >> 0x20) *
                       (float)((ulong)pSVar26->m_Items[3] >> 0x20) +
                       (float)((ulong)pIVar20[3].klass >> 0x20) * (float)((ulong)pSVar26->m_Items[2] >> 0x20)
                       + SUB84(pIVar20[3].klass,0) * SUB84(pSVar26->m_Items[2],0) +
                       SUB84(pIVar20[3].monitor,0) * SUB84(pSVar26->m_Items[3],0));
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
          fStack_e4 = 0.0;
          if (fVar32 <= 0.999999) {
            uStack_f8 = 0x40c8e13;
            fVar32 = acosf(fVar32);
            fStack_e4 = (fVar32 + fVar32) * 57.29578;
          }
          uStack_f8 = 0x40c8e3d;
          pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_e4);
          return pIVar20;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_f8 = 0x40c8e51;
  uStack_f8 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar20 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar20;
  }
  pIStack_100 = (Il2CppObject *)0x40c8e74;
  auVar45 = il2cpp_runtime_helper_022b2c90();
  lVar28 = auVar45._8_8_;
  pIStack_100 = auVar45._0_8_;
  pSStack_110 = pSVar25;
  lStack_108 = extraout_RDX_04;
  if (lVar28 != 0) {
    if ((*(int *)(lVar28 + 0x18) == 0) || (*(int *)(lVar28 + 0x18) == 1)) {
      lStack_108 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar20 = *(Il2CppObject **)(lVar28 + 0x20);
      pIVar30 = *(Il2CppObject **)(lVar28 + 0x28);
      pIStack_100 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar20 != (Il2CppObject *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar6 <= (pIVar20->klass->_2).naturalAligment) && (pIVar30 != (Il2CppObject *)0x0)) &&
           ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = pIVar30->klass;
          bVar7 = (pIVar3->_2).naturalAligment;
          if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar6 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar7 < bVar6) || ((pIVar3->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar20[3],
                               *(UnityEngine_Vector3_Fields *)(pIVar30 + 3),(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_01,value,(MethodInfo *)0x0);
          }
          else {
            fVar39 = SUB84(pIVar20[3].monitor,0);
            fVar41 = (float)((ulong)pIVar20[3].monitor >> 0x20);
            fVar32 = SUB84(pIVar30[3].klass,0);
            fVar35 = (float)((ulong)pIVar30[3].klass >> 0x20);
            fVar36 = SUB84(pIVar30[3].monitor,0);
            fVar34 = (float)((ulong)pIVar30[3].monitor >> 0x20);
            uStack_118 = 0;
            fVar42 = SUB84(pIVar20[3].klass,0);
            fVar43 = (float)((ulong)pIVar20[3].klass >> 0x20);
            uStack_140 = CONCAT44(fVar43 * fVar34 + fVar41 * fVar35,fVar42 * fVar34 + fVar41 * fVar32);
            pSStack_138 = (System_Object_array *)0x0;
            uStack_130 = CONCAT44(fVar36,fVar35);
            pIStack_128 = (Il2CppObject *)0x0;
            __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar38 = fVar36 * fVar43 + (float)uStack_140;
            fVar40 = fVar32 * fVar39 + uStack_140._4_4_;
            fVar33 = fVar39 * (float)uStack_130;
            fVar37 = fVar42 * uStack_130._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar12 = pfVar9[1];
            fVar13 = pfVar9[2];
            fVar14 = pfVar9[3];
            (__this_01->fields).Value.fields.x = *pfVar9;
            (__this_01->fields).Value.fields.y = fVar12;
            (__this_01->fields).Value.fields.z = fVar13;
            *(float *)&(__this_01->fields).field_0x2c = fVar14;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).Value.fields.x = fVar38 - fVar33;
            (__this_01->fields).Value.fields.y = fVar40 - fVar37;
            (__this_01->fields).Value.fields.z =
                 (fVar42 * fVar35 + fVar39 * fVar34 + fVar41 * fVar36) - fVar43 * fVar32;
            *(float *)&(__this_01->fields).field_0x2c =
                 ((fVar34 * fVar41 - fVar42 * fVar32) - fVar35 * fVar43) - fVar39 * fVar36;
          }
          return (Il2CppObject *)__this_01;
        }
      }
label_040c566a:
      pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar22 = CustomLogic_CustomLogicUtils__OperatorException(pSVar21,pIVar20,pIVar30,(MethodInfo *)0x0);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar22);
      pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar22 = CustomLogic_CustomLogicUtils__OperatorException(pSVar21,pIVar20,rhs,(MethodInfo *)0x0);
      plVar23 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar22);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar6 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar29 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar29 = (long *)0x0;
          }
          if ((((plVar23 != (long *)0x0) && (plVar29 != (long *)0x0)) &&
              (bVar6 <= *(byte *)(*plVar23 + 0x130))) &&
             (lVar28 = *(long *)(*plVar23 + 200),
             *(Il2CppClass **)(lVar28 + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar28 >> 8),
                            0.999999 <
                            (float)((ulong)plVar29[7] >> 0x20) * (float)((ulong)plVar23[7] >> 0x20) +
                            (float)((ulong)plVar29[6] >> 0x20) * (float)((ulong)plVar23[6] >> 0x20) +
                            (float)plVar23[6] * (float)plVar29[6] + (float)plVar29[7] * (float)plVar23[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_108 = 0x40c8eaf;
  auVar45 = il2cpp_runtime_helper_022b2c90();
  lVar28 = auVar45._8_8_;
  uStack_118 = auVar45._0_8_;
  lStack_108 = extraout_RDX_04;
  if (lVar28 == 0) {
label_040c8fc7:
    uStack_140 = il2cpp_runtime_helper_022b2c90();
    pSStack_138 = pSVar25;
    uStack_130 = extraout_RDX_04;
    pIStack_128 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar15 = System_Single__GetHashCode(__this_02,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar16 = System_Single__GetHashCode
                       (__this_03,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar17 = System_Single__GetHashCode(__this_04,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar18 = System_Single__GetHashCode
                       (__this_05,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_140 = CONCAT44(iVar18 >> 1 ^ iVar17 >> 2 ^ iVar16 << 2 ^ uVar15,(float)uStack_140);
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_140 + 4);
    return pIVar20;
  }
  if ((*(int *)(lVar28 + 0x18) == 0) || (*(int *)(lVar28 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar23 = *(long **)(lVar28 + 0x20);
  plVar29 = *(long **)(lVar28 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar29 != (long *)0x0) {
    bVar6 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar6 <= *(byte *)(*plVar29 + 0x130)) {
      plVar27 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar29 + 200) + -8 + (ulong)bVar6 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar29 = plVar27;
      }
      if ((plVar23 == (long *)0x0) || (plVar29 == (long *)0x0)) goto label_040c8f21;
      if ((bVar6 <= *(byte *)(*plVar23 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar23 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar27 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar29[7] >> 0x20) * (float)((ulong)plVar23[7] >> 0x20) +
                                 (float)((ulong)plVar29[6] >> 0x20) * (float)((ulong)plVar23[6] >> 0x20) +
                                 (float)plVar23[6] * (float)plVar29[6] + (float)plVar29[7] * (float)plVar23[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar27 = (long *)0x0;
label_040c8f21:
  uStack_118 = CONCAT17((char)plVar27,(undefined7)uStack_118);
  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_118 + 7);
  return pIVar20;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromToRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8940

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_EAX;
  uint uVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar14;
  System_Exception_o *pSVar15;
  long *plVar16;
  Il2CppObject *pIVar17;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  System_Object_array *pSVar19;
  float extraout_var;
  long *plVar20;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  long extraout_RDX_01;
  System_Object_array *extraout_RDX_02;
  long extraout_RDX_03;
  long lVar21;
  long *plVar22;
  System_Object_array *unaff_RBX;
  System_Object_array *obj;
  MethodInfo *pMVar23;
  MethodInfo *in_R8;
  Il2CppObject *unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o q;
  undefined1 auVar37 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o b;
  undefined8 uStack_118;
  System_Object_array *pSStack_110;
  undefined8 uStack_108;
  Il2CppObject *pIStack_100;
  undefined8 uStack_f0;
  System_Object_array *pSStack_e8;
  long lStack_e0;
  Il2CppObject *pIStack_d8;
  undefined8 uStack_d0;
  float fStack_bc;
  System_Object_array *pSStack_b8;
  System_Object_array *pSStack_b0;
  Il2CppObject *pIStack_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  long lStack_98;
  System_Object_array *pSStack_90;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  System_Object_array *pSStack_30;
  Il2CppObject *pIStack_28;
  System_Object_array *pSStack_20;
  
  if (g_data_057ac5c4 == '\0') {
    pSStack_20 = (System_Object_array *)0x40c895d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_20 = (System_Object_array *)0x40c8969;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c89ef:
    pSStack_20 = (System_Object_array *)0x40c89f4;
    il2cpp_runtime_helper_022b2c90();
    pSVar19 = unaff_RBX;
  }
  else {
    pSVar19 = unaff_RBX;
    if ((int)__a->max_length != 0) {
      pSVar19 = (System_Object_array *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_20 = (System_Object_array *)0x40c8998;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pSStack_20 = (System_Object_array *)0x40c89aa;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar19;
      unaff_RBX = (System_Object_array *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        pSStack_20 = (System_Object_array *)0x40c89c0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((unaff_RBX != (System_Object_array *)0x0) && (pIVar17 != (Il2CppObject *)0x0)) {
          pMVar23 = (MethodInfo *)0x0;
          pSStack_20 = (System_Object_array *)0x40c89e5;
          UVar36 = UnityEngine_Quaternion__FromToRotation
                             ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(unaff_RBX->m_Items + 2),
                              (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar17 + 3),
                              (MethodInfo *)0x0);
          pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar23);
          return (Il2CppObject *)pCVar18;
        }
        goto label_040c89ef;
      }
    }
  }
  pSStack_20 = (System_Object_array *)0x40c89f9;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = pSVar19;
  if (g_data_057ac5c5 == '\0') {
    pIStack_28 = (Il2CppObject *)0x40c8a19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_28 = (Il2CppObject *)0x40c8a25;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  pSVar19 = extraout_RDX_00;
  if (extraout_RDX_00 == (System_Object_array *)0x0) {
label_040c8a81:
    pIStack_28 = (Il2CppObject *)0x40c8a86;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)extraout_RDX_00->max_length != 0) {
    pSVar19 = (System_Object_array *)extraout_RDX_00->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pIStack_28 = (Il2CppObject *)0x40c8a53;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_28 = (Il2CppObject *)0x40c8a65;
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)pSVar19;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pSVar19,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar17 != (Il2CppObject *)0x0) {
      pMVar23 = (MethodInfo *)0x0;
      pIStack_28 = (Il2CppObject *)0x40c8a7b;
      UVar36 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar17 + 3),(MethodInfo *)0x0);
      pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar23);
      return (Il2CppObject *)pCVar18;
    }
    goto label_040c8a81;
  }
  pIStack_28 = (Il2CppObject *)0x40c8a8b;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_38 = pSVar19;
  pSStack_30 = __a;
  pIStack_28 = unaff_R15;
  if (g_data_057ac5c6 == '\0') {
    pSStack_90 = (System_Object_array *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pSStack_90 = (System_Object_array *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_90 = (System_Object_array *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    pIVar17 = unaff_R15;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      __a = *(System_Object_array **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_90 = (System_Object_array *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_90 = (System_Object_array *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a;
      pSVar19 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&__a->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar17 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
        pSStack_90 = (System_Object_array *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        __a = pSVar19;
        if (2 < *(uint *)(extraout_RDX_01 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x30);
          pSStack_90 = (System_Object_array *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar25 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pSVar19 != (System_Object_array *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar17 = pSVar19->m_Items[2];
            pIVar1 = pSVar19->m_Items[3];
            pIVar2 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar2 >> 0x20);
            pvVar3 = unaff_R15[3].monitor;
            fVar30 = (float)((ulong)pvVar3 >> 0x20);
            fVar26 = ABS((float)((ulong)pIVar1 >> 0x20) * fVar30 +
                         (float)((ulong)pIVar17 >> 0x20) * fVar33 + SUB84(pIVar17,0) * SUB84(pIVar2,0) +
                         SUB84(pIVar1,0) * SUB84(pvVar3,0));
            if (1.0 <= fVar26) {
              fVar26 = 1.0;
            }
            fVar29 = SUB84(pvVar3,0);
            fVar32 = SUB84(pIVar2,0);
            if (fVar26 <= 0.999999) {
              uStack_50 = 0;
              uStack_40 = 0;
              uStack_70 = 0;
              uStack_60 = 0;
              pSStack_90 = (System_Object_array *)0x40c8bd1;
              fStack_7c = fVar25;
              uStack_78 = pvVar3;
              uStack_68 = pIVar2;
              pIStack_58 = pIVar1;
              pIStack_48 = pIVar17;
              fVar25 = acosf(fVar26);
              fVar25 = (fVar25 + fVar25) * 57.29578;
              if ((fVar25 != 0.0) || (NAN(fVar25))) {
                fVar30 = 1.0;
                if (fStack_7c / fVar25 <= 1.0) {
                  fVar30 = fStack_7c / fVar25;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pSStack_90 = (System_Object_array *)0x40c8c18;
                UVar36.fields._8_8_ = pIStack_58;
                UVar36.fields._0_8_ = pIStack_48;
                b.fields._8_8_ = uStack_78;
                b.fields._0_8_ = uStack_68;
                UVar36 = UnityEngine_Quaternion__SlerpUnclamped(UVar36,b,fVar30,(MethodInfo *)0x0);
                fVar29 = UVar36.fields.z;
                fVar30 = UVar36.fields.w;
                fVar32 = UVar36.fields.x;
                fVar33 = UVar36.fields.y;
              }
              else {
                fVar29 = (float)uStack_78;
                fVar30 = uStack_78._4_4_;
                fVar32 = (float)uStack_68;
                fVar33 = uStack_68._4_4_;
              }
            }
            q.fields.y = fVar33;
            q.fields.x = fVar32;
            q.fields.w = fVar30;
            q.fields.z = fVar29;
            pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,(MethodInfo *)__this);
            return (Il2CppObject *)pCVar18;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar17;
    pSStack_90 = (System_Object_array *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pSStack_90 = (System_Object_array *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_98 = extraout_RDX_01;
  pSStack_90 = __a;
  uStack_a0 = extraout_EAX;
  fStack_9c = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_a8 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_a8 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_a8 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_02 != (System_Object_array *)0x0) {
    if ((int)extraout_RDX_02->max_length != 0) {
      __a = (System_Object_array *)extraout_RDX_02->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_a8 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_a8 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a;
      fStack_9c = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__a,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)extraout_RDX_02->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_02->m_Items[1];
        pIStack_a8 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar17 != (Il2CppObject *)0x0) {
          pMVar23 = (MethodInfo *)0x0;
          pIStack_a8 = (Il2CppObject *)0x40c8d03;
          UVar36 = UnityEngine_Quaternion__AngleAxis
                             (fStack_9c,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar17 + 3),
                              (MethodInfo *)0x0);
          pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar23);
          return (Il2CppObject *)pCVar18;
        }
        goto label_040c8d14;
      }
    }
    pIStack_a8 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_a8 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pSStack_b8 = extraout_RDX_02;
  pSStack_b0 = __a;
  pIStack_a8 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_d0 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_d0 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pSVar19 = extraout_RDX_02;
  if (extraout_RDX_03 == 0) {
label_040c8e47:
    uStack_d0 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    obj = pSVar19;
  }
  else {
    obj = extraout_RDX_02;
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      obj = *(System_Object_array **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_d0 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_d0 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)obj;
      pSVar19 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&obj->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x28);
        uStack_d0 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pSVar19 != (System_Object_array *)0x0) && (pIVar17 != (Il2CppObject *)0x0)) {
          fVar25 = ABS((float)((ulong)pIVar17[3].monitor >> 0x20) *
                       (float)((ulong)pSVar19->m_Items[3] >> 0x20) +
                       (float)((ulong)pIVar17[3].klass >> 0x20) * (float)((ulong)pSVar19->m_Items[2] >> 0x20)
                       + SUB84(pIVar17[3].klass,0) * SUB84(pSVar19->m_Items[2],0) +
                       SUB84(pIVar17[3].monitor,0) * SUB84(pSVar19->m_Items[3],0));
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          fStack_bc = 0.0;
          if (fVar25 <= 0.999999) {
            uStack_d0 = 0x40c8e13;
            fVar25 = acosf(fVar25);
            fStack_bc = (fVar25 + fVar25) * 57.29578;
          }
          uStack_d0 = 0x40c8e3d;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_bc);
          return pIVar17;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_d0 = 0x40c8e51;
  uStack_d0 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar17 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar17;
  }
  pIStack_d8 = (Il2CppObject *)0x40c8e74;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar21 = auVar37._8_8_;
  pIStack_d8 = auVar37._0_8_;
  pSStack_e8 = obj;
  lStack_e0 = extraout_RDX_03;
  if (lVar21 != 0) {
    if ((*(int *)(lVar21 + 0x18) == 0) || (*(int *)(lVar21 + 0x18) == 1)) {
      lStack_e0 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar17 = *(Il2CppObject **)(lVar21 + 0x20);
      pIVar1 = *(Il2CppObject **)(lVar21 + 0x28);
      pIStack_d8 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar17 != (Il2CppObject *)0x0) {
        bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar4 <= (pIVar17->klass->_2).naturalAligment) && (pIVar1 != (Il2CppObject *)0x0)) &&
           ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar2 = pIVar1->klass;
          bVar5 = (pIVar2->_2).naturalAligment;
          if ((bVar5 < bVar4) || ((pIVar2->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar4 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar5 < bVar4) || ((pIVar2->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar17[3],
                               *(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar29 = SUB84(pIVar17[3].monitor,0);
            fVar32 = (float)((ulong)pIVar17[3].monitor >> 0x20);
            fVar25 = SUB84(pIVar1[3].klass,0);
            fVar30 = (float)((ulong)pIVar1[3].klass >> 0x20);
            fVar33 = SUB84(pIVar1[3].monitor,0);
            fVar26 = (float)((ulong)pIVar1[3].monitor >> 0x20);
            uStack_f0 = 0;
            fVar34 = SUB84(pIVar17[3].klass,0);
            fVar35 = (float)((ulong)pIVar17[3].klass >> 0x20);
            uStack_118 = CONCAT44(fVar35 * fVar26 + fVar32 * fVar30,fVar34 * fVar26 + fVar32 * fVar25);
            pSStack_110 = (System_Object_array *)0x0;
            uStack_108 = CONCAT44(fVar33,fVar30);
            pIStack_100 = (Il2CppObject *)0x0;
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar28 = fVar33 * fVar35 + (float)uStack_118;
            fVar31 = fVar25 * fVar29 + uStack_118._4_4_;
            fVar24 = fVar29 * (float)uStack_108;
            fVar27 = fVar34 * uStack_108._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar6 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar7 = pfVar6[1];
            fVar8 = pfVar6[2];
            fVar9 = pfVar6[3];
            (__this_00->fields).Value.fields.x = *pfVar6;
            (__this_00->fields).Value.fields.y = fVar7;
            (__this_00->fields).Value.fields.z = fVar8;
            *(float *)&(__this_00->fields).field_0x2c = fVar9;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar28 - fVar24;
            (__this_00->fields).Value.fields.y = fVar31 - fVar27;
            (__this_00->fields).Value.fields.z =
                 (fVar34 * fVar30 + fVar29 * fVar26 + fVar32 * fVar33) - fVar35 * fVar25;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar26 * fVar32 - fVar34 * fVar25) - fVar30 * fVar35) - fVar29 * fVar33;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,pIVar1,(MethodInfo *)0x0);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,rhs,(MethodInfo *)0x0);
      plVar16 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar4 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar22 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar4 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar22 = (long *)0x0;
          }
          if ((((plVar16 != (long *)0x0) && (plVar22 != (long *)0x0)) &&
              (bVar4 <= *(byte *)(*plVar16 + 0x130))) &&
             (lVar21 = *(long *)(*plVar16 + 200),
             *(Il2CppClass **)(lVar21 + -8 + (ulong)bVar4 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar21 >> 8),
                            0.999999 <
                            (float)((ulong)plVar22[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                            (float)((ulong)plVar22[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                            (float)plVar16[6] * (float)plVar22[6] + (float)plVar22[7] * (float)plVar16[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_e0 = 0x40c8eaf;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar21 = auVar37._8_8_;
  uStack_f0 = auVar37._0_8_;
  lStack_e0 = extraout_RDX_03;
  if (lVar21 == 0) {
label_040c8fc7:
    uStack_118 = il2cpp_runtime_helper_022b2c90();
    pSStack_110 = obj;
    uStack_108 = extraout_RDX_03;
    pIStack_100 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar10 = System_Single__GetHashCode(__this_01,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar11 = System_Single__GetHashCode
                       (__this_02,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar12 = System_Single__GetHashCode(__this_03,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar13 = System_Single__GetHashCode
                       (__this_04,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_118 = CONCAT44(iVar13 >> 1 ^ iVar12 >> 2 ^ iVar11 << 2 ^ uVar10,(float)uStack_118);
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_118 + 4);
    return pIVar17;
  }
  if ((*(int *)(lVar21 + 0x18) == 0) || (*(int *)(lVar21 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar16 = *(long **)(lVar21 + 0x20);
  plVar22 = *(long **)(lVar21 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar22 != (long *)0x0) {
    bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar4 <= *(byte *)(*plVar22 + 0x130)) {
      plVar20 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar22 + 200) + -8 + (ulong)bVar4 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar22 = plVar20;
      }
      if ((plVar16 == (long *)0x0) || (plVar22 == (long *)0x0)) goto label_040c8f21;
      if ((bVar4 <= *(byte *)(*plVar16 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar16 + 200) + -8 + (ulong)bVar4 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar20 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar22[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                                 (float)((ulong)plVar22[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                                 (float)plVar16[6] * (float)plVar22[6] + (float)plVar22[7] * (float)plVar16[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar20 = (long *)0x0;
label_040c8f21:
  uStack_f0 = CONCAT17((char)plVar20,(undefined7)uStack_f0);
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_f0 + 7);
  return pIVar17;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Inverse>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8a00

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_EAX;
  uint uVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar14;
  System_Exception_o *pSVar15;
  long *plVar16;
  Il2CppObject *pIVar17;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  System_Object_array *pSVar19;
  float extraout_var;
  long *plVar20;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs;
  long *extraout_RDX;
  long extraout_RDX_00;
  System_Object_array *extraout_RDX_01;
  long extraout_RDX_02;
  long lVar21;
  long *plVar22;
  System_Object_array *obj;
  MethodInfo *pMVar23;
  MethodInfo *in_R8;
  System_Object_array *unaff_R14;
  Il2CppObject *unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o q;
  undefined1 auVar37 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o b;
  undefined8 uStack_100;
  System_Object_array *pSStack_f8;
  undefined8 uStack_f0;
  Il2CppObject *pIStack_e8;
  undefined8 uStack_d8;
  System_Object_array *pSStack_d0;
  long lStack_c8;
  Il2CppObject *pIStack_c0;
  undefined8 uStack_b8;
  float fStack_a4;
  System_Object_array *pSStack_a0;
  System_Object_array *pSStack_98;
  Il2CppObject *pIStack_90;
  undefined4 uStack_88;
  float fStack_84;
  long lStack_80;
  System_Object_array *pSStack_78;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  Il2CppObject *pIStack_40;
  undefined8 uStack_38;
  Il2CppObject *pIStack_30;
  undefined8 uStack_28;
  System_Object_array *pSStack_20;
  
  if (g_data_057ac5c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c8a81:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a;
    pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__a,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    if (pIVar17 != (Il2CppObject *)0x0) {
      pMVar23 = (MethodInfo *)0x0;
      UVar36 = UnityEngine_Quaternion__Inverse
                         (*(UnityEngine_Quaternion_Fields *)(pIVar17 + 3),(MethodInfo *)0x0);
      pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar23);
      return (Il2CppObject *)pCVar18;
    }
    goto label_040c8a81;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = __a;
  if (g_data_057ac5c6 == '\0') {
    pSStack_78 = (System_Object_array *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pSStack_78 = (System_Object_array *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_78 = (System_Object_array *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    pIVar17 = unaff_R15;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      unaff_R14 = *(System_Object_array **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_78 = (System_Object_array *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_78 = (System_Object_array *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pSVar19 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&unaff_R14->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar17 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        pSStack_78 = (System_Object_array *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x30);
          pSStack_78 = (System_Object_array *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar25 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pSVar19 != (System_Object_array *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            pIVar17 = pSVar19->m_Items[2];
            pIVar1 = pSVar19->m_Items[3];
            pIVar2 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar2 >> 0x20);
            pvVar3 = unaff_R15[3].monitor;
            fVar30 = (float)((ulong)pvVar3 >> 0x20);
            fVar26 = ABS((float)((ulong)pIVar1 >> 0x20) * fVar30 +
                         (float)((ulong)pIVar17 >> 0x20) * fVar33 + SUB84(pIVar17,0) * SUB84(pIVar2,0) +
                         SUB84(pIVar1,0) * SUB84(pvVar3,0));
            if (1.0 <= fVar26) {
              fVar26 = 1.0;
            }
            fVar29 = SUB84(pvVar3,0);
            fVar32 = SUB84(pIVar2,0);
            if (fVar26 <= 0.999999) {
              uStack_38 = 0;
              uStack_28 = 0;
              uStack_58 = 0;
              uStack_48 = 0;
              pSStack_78 = (System_Object_array *)0x40c8bd1;
              fStack_64 = fVar25;
              uStack_60 = pvVar3;
              uStack_50 = pIVar2;
              pIStack_40 = pIVar1;
              pIStack_30 = pIVar17;
              fVar25 = acosf(fVar26);
              fVar25 = (fVar25 + fVar25) * 57.29578;
              if ((fVar25 != 0.0) || (NAN(fVar25))) {
                fVar30 = 1.0;
                if (fStack_64 / fVar25 <= 1.0) {
                  fVar30 = fStack_64 / fVar25;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pSStack_78 = (System_Object_array *)0x40c8c18;
                UVar36.fields._8_8_ = pIStack_40;
                UVar36.fields._0_8_ = pIStack_30;
                b.fields._8_8_ = uStack_60;
                b.fields._0_8_ = uStack_50;
                UVar36 = UnityEngine_Quaternion__SlerpUnclamped(UVar36,b,fVar30,(MethodInfo *)0x0);
                fVar29 = UVar36.fields.z;
                fVar30 = UVar36.fields.w;
                fVar32 = UVar36.fields.x;
                fVar33 = UVar36.fields.y;
              }
              else {
                fVar29 = (float)uStack_60;
                fVar30 = uStack_60._4_4_;
                fVar32 = (float)uStack_50;
                fVar33 = uStack_50._4_4_;
              }
            }
            q.fields.y = fVar33;
            q.fields.x = fVar32;
            q.fields.w = fVar30;
            q.fields.z = fVar29;
            pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,(MethodInfo *)__this);
            return (Il2CppObject *)pCVar18;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar17;
    pSStack_78 = (System_Object_array *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pSStack_78 = (System_Object_array *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  lStack_80 = extraout_RDX_00;
  pSStack_78 = unaff_R14;
  uStack_88 = extraout_EAX;
  fStack_84 = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_90 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_90 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_90 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_01 != (System_Object_array *)0x0) {
    if ((int)extraout_RDX_01->max_length != 0) {
      unaff_R14 = (System_Object_array *)extraout_RDX_01->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_90 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_90 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      fStack_84 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)unaff_R14,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)extraout_RDX_01->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_01->m_Items[1];
        pIStack_90 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar17 != (Il2CppObject *)0x0) {
          pMVar23 = (MethodInfo *)0x0;
          pIStack_90 = (Il2CppObject *)0x40c8d03;
          UVar36 = UnityEngine_Quaternion__AngleAxis
                             (fStack_84,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar17 + 3),
                              (MethodInfo *)0x0);
          pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar23);
          return (Il2CppObject *)pCVar18;
        }
        goto label_040c8d14;
      }
    }
    pIStack_90 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_90 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = extraout_RDX_01;
  pSStack_98 = unaff_R14;
  pIStack_90 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_b8 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_b8 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pSVar19 = extraout_RDX_01;
  if (extraout_RDX_02 == 0) {
label_040c8e47:
    uStack_b8 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    obj = pSVar19;
  }
  else {
    obj = extraout_RDX_01;
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      obj = *(System_Object_array **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_b8 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_b8 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)obj;
      pSVar19 = (System_Object_array *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&obj->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x28);
        uStack_b8 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pSVar19 != (System_Object_array *)0x0) && (pIVar17 != (Il2CppObject *)0x0)) {
          fVar25 = ABS((float)((ulong)pIVar17[3].monitor >> 0x20) *
                       (float)((ulong)pSVar19->m_Items[3] >> 0x20) +
                       (float)((ulong)pIVar17[3].klass >> 0x20) * (float)((ulong)pSVar19->m_Items[2] >> 0x20)
                       + SUB84(pIVar17[3].klass,0) * SUB84(pSVar19->m_Items[2],0) +
                       SUB84(pIVar17[3].monitor,0) * SUB84(pSVar19->m_Items[3],0));
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          fStack_a4 = 0.0;
          if (fVar25 <= 0.999999) {
            uStack_b8 = 0x40c8e13;
            fVar25 = acosf(fVar25);
            fStack_a4 = (fVar25 + fVar25) * 57.29578;
          }
          uStack_b8 = 0x40c8e3d;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_a4);
          return pIVar17;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_b8 = 0x40c8e51;
  uStack_b8 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar17 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar17;
  }
  pIStack_c0 = (Il2CppObject *)0x40c8e74;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar21 = auVar37._8_8_;
  pIStack_c0 = auVar37._0_8_;
  pSStack_d0 = obj;
  lStack_c8 = extraout_RDX_02;
  if (lVar21 != 0) {
    if ((*(int *)(lVar21 + 0x18) == 0) || (*(int *)(lVar21 + 0x18) == 1)) {
      lStack_c8 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar17 = *(Il2CppObject **)(lVar21 + 0x20);
      pIVar1 = *(Il2CppObject **)(lVar21 + 0x28);
      pIStack_c0 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar17 != (Il2CppObject *)0x0) {
        bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar4 <= (pIVar17->klass->_2).naturalAligment) && (pIVar1 != (Il2CppObject *)0x0)) &&
           ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar2 = pIVar1->klass;
          bVar5 = (pIVar2->_2).naturalAligment;
          if ((bVar5 < bVar4) || ((pIVar2->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar4 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar5 < bVar4) || ((pIVar2->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar17[3],
                               *(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar29 = SUB84(pIVar17[3].monitor,0);
            fVar32 = (float)((ulong)pIVar17[3].monitor >> 0x20);
            fVar25 = SUB84(pIVar1[3].klass,0);
            fVar30 = (float)((ulong)pIVar1[3].klass >> 0x20);
            fVar33 = SUB84(pIVar1[3].monitor,0);
            fVar26 = (float)((ulong)pIVar1[3].monitor >> 0x20);
            uStack_d8 = 0;
            fVar34 = SUB84(pIVar17[3].klass,0);
            fVar35 = (float)((ulong)pIVar17[3].klass >> 0x20);
            uStack_100 = CONCAT44(fVar35 * fVar26 + fVar32 * fVar30,fVar34 * fVar26 + fVar32 * fVar25);
            pSStack_f8 = (System_Object_array *)0x0;
            uStack_f0 = CONCAT44(fVar33,fVar30);
            pIStack_e8 = (Il2CppObject *)0x0;
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar28 = fVar33 * fVar35 + (float)uStack_100;
            fVar31 = fVar25 * fVar29 + uStack_100._4_4_;
            fVar24 = fVar29 * (float)uStack_f0;
            fVar27 = fVar34 * uStack_f0._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar6 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar7 = pfVar6[1];
            fVar8 = pfVar6[2];
            fVar9 = pfVar6[3];
            (__this_00->fields).Value.fields.x = *pfVar6;
            (__this_00->fields).Value.fields.y = fVar7;
            (__this_00->fields).Value.fields.z = fVar8;
            *(float *)&(__this_00->fields).field_0x2c = fVar9;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar28 - fVar24;
            (__this_00->fields).Value.fields.y = fVar31 - fVar27;
            (__this_00->fields).Value.fields.z =
                 (fVar34 * fVar30 + fVar29 * fVar26 + fVar32 * fVar33) - fVar35 * fVar25;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar26 * fVar32 - fVar34 * fVar25) - fVar30 * fVar35) - fVar29 * fVar33;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,pIVar1,(MethodInfo *)0x0);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,rhs,(MethodInfo *)0x0);
      plVar16 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar4 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar22 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar4 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar22 = (long *)0x0;
          }
          if ((((plVar16 != (long *)0x0) && (plVar22 != (long *)0x0)) &&
              (bVar4 <= *(byte *)(*plVar16 + 0x130))) &&
             (lVar21 = *(long *)(*plVar16 + 200),
             *(Il2CppClass **)(lVar21 + -8 + (ulong)bVar4 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar21 >> 8),
                            0.999999 <
                            (float)((ulong)plVar22[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                            (float)((ulong)plVar22[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                            (float)plVar16[6] * (float)plVar22[6] + (float)plVar22[7] * (float)plVar16[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_c8 = 0x40c8eaf;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar21 = auVar37._8_8_;
  uStack_d8 = auVar37._0_8_;
  lStack_c8 = extraout_RDX_02;
  if (lVar21 == 0) {
label_040c8fc7:
    uStack_100 = il2cpp_runtime_helper_022b2c90();
    pSStack_f8 = obj;
    uStack_f0 = extraout_RDX_02;
    pIStack_e8 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar10 = System_Single__GetHashCode(__this_01,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar11 = System_Single__GetHashCode
                       (__this_02,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar12 = System_Single__GetHashCode(__this_03,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar13 = System_Single__GetHashCode
                       (__this_04,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_100 = CONCAT44(iVar13 >> 1 ^ iVar12 >> 2 ^ iVar11 << 2 ^ uVar10,(float)uStack_100);
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_100 + 4);
    return pIVar17;
  }
  if ((*(int *)(lVar21 + 0x18) == 0) || (*(int *)(lVar21 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar16 = *(long **)(lVar21 + 0x20);
  plVar22 = *(long **)(lVar21 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar22 != (long *)0x0) {
    bVar4 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar4 <= *(byte *)(*plVar22 + 0x130)) {
      plVar20 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar22 + 200) + -8 + (ulong)bVar4 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar22 = plVar20;
      }
      if ((plVar16 == (long *)0x0) || (plVar22 == (long *)0x0)) goto label_040c8f21;
      if ((bVar4 <= *(byte *)(*plVar16 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar16 + 200) + -8 + (ulong)bVar4 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar20 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar22[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                                 (float)((ulong)plVar22[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                                 (float)plVar16[6] * (float)plVar22[6] + (float)plVar22[7] * (float)plVar16[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar20 = (long *)0x0;
label_040c8f21:
  uStack_d8 = CONCAT17((char)plVar20,(undefined7)uStack_d8);
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d8 + 7);
  return pIVar17;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8a90

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  byte bVar5;
  byte bVar6;
  float *pfVar7;
  Il2CppObject *rhs;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_EAX;
  uint uVar11;
  int32_t iVar12;
  int32_t iVar13;
  int32_t iVar14;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar15;
  System_Exception_o *pSVar16;
  long *plVar17;
  MethodInfo *pMVar18;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar19;
  float extraout_var;
  Il2CppObject *pIVar20;
  long *plVar21;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long extraout_RDX_01;
  long lVar22;
  long *plVar23;
  MethodInfo *obj;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  Il2CppObject *unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o q;
  undefined1 auVar37 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o b;
  undefined8 uStack_f8;
  MethodInfo *pMStack_f0;
  undefined8 uStack_e8;
  Il2CppObject *pIStack_e0;
  undefined8 uStack_d0;
  MethodInfo *pMStack_c8;
  long lStack_c0;
  Il2CppObject *pIStack_b8;
  undefined8 uStack_b0;
  float fStack_9c;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  Il2CppObject *pIStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  System_Object_array *pSStack_78;
  MethodInfo *pMStack_70;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac5c6 == '\0') {
    pMStack_70 = (MethodInfo *)0x40c8ab1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    pMStack_70 = (MethodInfo *)0x40c8abd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pMStack_70 = (MethodInfo *)0x40c8ac9;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pIVar20 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (MethodInfo *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pMStack_70 = (MethodInfo *)0x40c8aff;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_70 = (MethodInfo *)0x40c8b11;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      pMVar18 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      pIVar20 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        pMStack_70 = (MethodInfo *)0x40c8b2a;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        unaff_R15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        unaff_R14 = pMVar18;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[2];
          pMStack_70 = (MethodInfo *)0x40c8b4a;
          __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar25 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if ((pMVar18 != (MethodInfo *)0x0) && (unaff_R15 != (Il2CppObject *)0x0)) {
            uVar1 = pMVar18->parameters;
            uVar2 = (pMVar18->field7_0x38).rgctx_data;
            pIVar3 = unaff_R15[3].klass;
            fVar33 = (float)((ulong)pIVar3 >> 0x20);
            pvVar4 = unaff_R15[3].monitor;
            fVar30 = (float)((ulong)pvVar4 >> 0x20);
            fVar26 = ABS((float)((ulong)uVar2 >> 0x20) * fVar30 +
                         (float)((ulong)uVar1 >> 0x20) * fVar33 + (float)uVar1 * SUB84(pIVar3,0) +
                         (float)uVar2 * SUB84(pvVar4,0));
            if (1.0 <= fVar26) {
              fVar26 = 1.0;
            }
            fVar29 = SUB84(pvVar4,0);
            fVar32 = SUB84(pIVar3,0);
            if (fVar26 <= 0.999999) {
              uStack_30 = 0;
              uStack_20 = 0;
              uStack_50 = 0;
              uStack_40 = 0;
              pMStack_70 = (MethodInfo *)0x40c8bd1;
              fStack_5c = fVar25;
              uStack_58 = pvVar4;
              uStack_48 = pIVar3;
              uStack_38 = uVar2;
              uStack_28 = uVar1;
              fVar25 = acosf(fVar26);
              fVar25 = (fVar25 + fVar25) * 57.29578;
              if ((fVar25 != 0.0) || (NAN(fVar25))) {
                fVar30 = 1.0;
                if (fStack_5c / fVar25 <= 1.0) {
                  fVar30 = fStack_5c / fVar25;
                }
                __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)0x0;
                pMStack_70 = (MethodInfo *)0x40c8c18;
                UVar36.fields.z = (float)(undefined4)uStack_38;
                UVar36.fields.w = (float)uStack_38._4_4_;
                UVar36.fields.x = (float)(undefined4)uStack_28;
                UVar36.fields.y = (float)uStack_28._4_4_;
                b.fields._8_8_ = uStack_58;
                b.fields._0_8_ = uStack_48;
                UVar36 = UnityEngine_Quaternion__SlerpUnclamped(UVar36,b,fVar30,(MethodInfo *)0x0);
                fVar29 = UVar36.fields.z;
                fVar30 = UVar36.fields.w;
                fVar32 = UVar36.fields.x;
                fVar33 = UVar36.fields.y;
              }
              else {
                fVar29 = (float)uStack_58;
                fVar30 = uStack_58._4_4_;
                fVar32 = (float)uStack_48;
                fVar33 = uStack_48._4_4_;
              }
            }
            q.fields.y = fVar33;
            q.fields.x = fVar32;
            q.fields.w = fVar30;
            q.fields.z = fVar29;
            pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,(MethodInfo *)__this);
            return (Il2CppObject *)pCVar19;
          }
          goto label_040c8c3d;
        }
      }
    }
    unaff_R15 = pIVar20;
    pMStack_70 = (MethodInfo *)0x40c8c3d;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8c3d:
  pMStack_70 = (MethodInfo *)0x40c8c42;
  il2cpp_runtime_helper_022b2c90();
  pSStack_78 = __a;
  pMStack_70 = unaff_R14;
  uStack_80 = extraout_EAX;
  fStack_7c = extraout_var;
  if (g_data_057ac5c7 == '\0') {
    pIStack_88 = (Il2CppObject *)0x40c8c6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pIStack_88 = (Il2CppObject *)0x40c8c78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pIStack_88 = (Il2CppObject *)0x40c8c84;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (extraout_RDX_00 != (MethodInfo *)0x0) {
    if (*(int *)&extraout_RDX_00->name != 0) {
      unaff_R14 = (MethodInfo *)extraout_RDX_00->klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_88 = (Il2CppObject *)0x40c8cb6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_88 = (Il2CppObject *)0x40c8cc8;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      fStack_7c = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)unaff_R14,MethodInfo_Single_ConvertTo_Single);
      if (1 < *(uint *)&extraout_RDX_00->name) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)extraout_RDX_00->return_type;
        pIStack_88 = (Il2CppObject *)0x40c8ce7;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar20 != (Il2CppObject *)0x0) {
          pMVar18 = (MethodInfo *)0x0;
          pIStack_88 = (Il2CppObject *)0x40c8d03;
          UVar36 = UnityEngine_Quaternion__AngleAxis
                             (fStack_7c,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar20 + 3),
                              (MethodInfo *)0x0);
          pCVar19 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar36,pMVar18);
          return (Il2CppObject *)pCVar19;
        }
        goto label_040c8d14;
      }
    }
    pIStack_88 = (Il2CppObject *)0x40c8d14;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  pIStack_88 = (Il2CppObject *)0x40c8d19;
  il2cpp_runtime_helper_022b2c90();
  pMStack_98 = extraout_RDX_00;
  pMStack_90 = unaff_R14;
  pIStack_88 = unaff_R15;
  if (g_data_057ac5c8 == '\0') {
    uStack_b0 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_b0 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  pMVar18 = extraout_RDX_00;
  if (extraout_RDX_01 == 0) {
label_040c8e47:
    uStack_b0 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    obj = pMVar18;
  }
  else {
    obj = extraout_RDX_00;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      obj = *(MethodInfo **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_b0 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (Il2CppObject *)&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_b0 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)obj;
      pMVar18 = (MethodInfo *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
        uStack_b0 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((pMVar18 != (MethodInfo *)0x0) && (pIVar20 != (Il2CppObject *)0x0)) {
          fVar25 = ABS((float)((ulong)pIVar20[3].monitor >> 0x20) *
                       (float)((ulong)pMVar18->field7_0x38 >> 0x20) +
                       (float)((ulong)pIVar20[3].klass >> 0x20) * (float)((ulong)pMVar18->parameters >> 0x20)
                       + SUB84(pIVar20[3].klass,0) * SUB84(pMVar18->parameters,0) +
                       SUB84(pIVar20[3].monitor,0) * SUB84(pMVar18->field7_0x38,0));
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          fStack_9c = 0.0;
          if (fVar25 <= 0.999999) {
            uStack_b0 = 0x40c8e13;
            fVar25 = acosf(fVar25);
            fStack_9c = (fVar25 + fVar25) * 57.29578;
          }
          uStack_b0 = 0x40c8e3d;
          pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_9c);
          return pIVar20;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_b0 = 0x40c8e51;
  uStack_b0 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar20 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar20;
  }
  pIStack_b8 = (Il2CppObject *)0x40c8e74;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar22 = auVar37._8_8_;
  pIStack_b8 = auVar37._0_8_;
  pMStack_c8 = obj;
  lStack_c0 = extraout_RDX_01;
  if (lVar22 != 0) {
    if ((*(int *)(lVar22 + 0x18) == 0) || (*(int *)(lVar22 + 0x18) == 1)) {
      lStack_c0 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar20 = *(Il2CppObject **)(lVar22 + 0x20);
      rhs = *(Il2CppObject **)(lVar22 + 0x28);
      pIStack_b8 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar20 != (Il2CppObject *)0x0) {
        bVar5 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar5 <= (pIVar20->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = rhs->klass;
          bVar6 = (pIVar3->_2).naturalAligment;
          if ((bVar6 < bVar5) || ((pIVar3->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar5 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar6 < bVar5) || ((pIVar3->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar20[3],*(UnityEngine_Vector3_Fields *)(rhs + 3),
                               (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar29 = SUB84(pIVar20[3].monitor,0);
            fVar32 = (float)((ulong)pIVar20[3].monitor >> 0x20);
            fVar25 = SUB84(rhs[3].klass,0);
            fVar30 = (float)((ulong)rhs[3].klass >> 0x20);
            fVar33 = SUB84(rhs[3].monitor,0);
            fVar26 = (float)((ulong)rhs[3].monitor >> 0x20);
            uStack_d0 = 0;
            fVar34 = SUB84(pIVar20[3].klass,0);
            fVar35 = (float)((ulong)pIVar20[3].klass >> 0x20);
            uStack_f8 = CONCAT44(fVar35 * fVar26 + fVar32 * fVar30,fVar34 * fVar26 + fVar32 * fVar25);
            pMStack_f0 = (MethodInfo *)0x0;
            uStack_e8 = CONCAT44(fVar33,fVar30);
            pIStack_e0 = (Il2CppObject *)0x0;
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar28 = fVar33 * fVar35 + (float)uStack_f8;
            fVar31 = fVar25 * fVar29 + uStack_f8._4_4_;
            fVar24 = fVar29 * (float)uStack_e8;
            fVar27 = fVar34 * uStack_e8._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar7 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar8 = pfVar7[1];
            fVar9 = pfVar7[2];
            fVar10 = pfVar7[3];
            (__this_00->fields).Value.fields.x = *pfVar7;
            (__this_00->fields).Value.fields.y = fVar8;
            (__this_00->fields).Value.fields.z = fVar9;
            *(float *)&(__this_00->fields).field_0x2c = fVar10;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar28 - fVar24;
            (__this_00->fields).Value.fields.y = fVar31 - fVar27;
            (__this_00->fields).Value.fields.z =
                 (fVar34 * fVar30 + fVar29 * fVar26 + fVar32 * fVar33) - fVar35 * fVar25;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar26 * fVar32 - fVar34 * fVar25) - fVar30 * fVar35) - fVar29 * fVar33;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar16 = CustomLogic_CustomLogicUtils__OperatorException(pSVar15,pIVar20,rhs,(MethodInfo *)0x0);
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar16);
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar16 = CustomLogic_CustomLogicUtils__OperatorException(pSVar15,pIVar20,rhs_00,(MethodInfo *)0x0);
      plVar17 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar16);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar5 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar5 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar23 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar5 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar23 = (long *)0x0;
          }
          if ((((plVar17 != (long *)0x0) && (plVar23 != (long *)0x0)) &&
              (bVar5 <= *(byte *)(*plVar17 + 0x130))) &&
             (lVar22 = *(long *)(*plVar17 + 200),
             *(Il2CppClass **)(lVar22 + -8 + (ulong)bVar5 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar22 >> 8),
                            0.999999 <
                            (float)((ulong)plVar23[7] >> 0x20) * (float)((ulong)plVar17[7] >> 0x20) +
                            (float)((ulong)plVar23[6] >> 0x20) * (float)((ulong)plVar17[6] >> 0x20) +
                            (float)plVar17[6] * (float)plVar23[6] + (float)plVar23[7] * (float)plVar17[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_c0 = 0x40c8eaf;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar22 = auVar37._8_8_;
  uStack_d0 = auVar37._0_8_;
  lStack_c0 = extraout_RDX_01;
  if (lVar22 == 0) {
label_040c8fc7:
    uStack_f8 = il2cpp_runtime_helper_022b2c90();
    pMStack_f0 = obj;
    uStack_e8 = extraout_RDX_01;
    pIStack_e0 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar11 = System_Single__GetHashCode(__this_01,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar12 = System_Single__GetHashCode
                       (__this_02,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar13 = System_Single__GetHashCode(__this_03,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar14 = System_Single__GetHashCode
                       (__this_04,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_f8 = CONCAT44(iVar14 >> 1 ^ iVar13 >> 2 ^ iVar12 << 2 ^ uVar11,(float)uStack_f8);
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
    return pIVar20;
  }
  if ((*(int *)(lVar22 + 0x18) == 0) || (*(int *)(lVar22 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar17 = *(long **)(lVar22 + 0x20);
  plVar23 = *(long **)(lVar22 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar23 != (long *)0x0) {
    bVar5 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar5 <= *(byte *)(*plVar23 + 0x130)) {
      plVar21 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar23 + 200) + -8 + (ulong)bVar5 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar23 = plVar21;
      }
      if ((plVar17 == (long *)0x0) || (plVar23 == (long *)0x0)) goto label_040c8f21;
      if ((bVar5 <= *(byte *)(*plVar17 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar17 + 200) + -8 + (ulong)bVar5 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar21 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar23[7] >> 0x20) * (float)((ulong)plVar17[7] >> 0x20) +
                                 (float)((ulong)plVar23[6] >> 0x20) * (float)((ulong)plVar17[6] >> 0x20) +
                                 (float)plVar17[6] * (float)plVar23[6] + (float)plVar23[7] * (float)plVar17[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar21 = (long *)0x0;
label_040c8f21:
  uStack_d0 = CONCAT17((char)plVar21,(undefined7)uStack_d0);
  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_d0 + 7);
  return pIVar20;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__AngleAxis>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8c50

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  float *pfVar4;
  Il2CppObject *rhs;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar12;
  System_Exception_o *pSVar13;
  long *plVar14;
  Il2CppObject *pIVar15;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar16;
  long *plVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  long extraout_RDX_00;
  long lVar18;
  long *plVar19;
  System_Object_array *obj;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  System_Object_array *unaff_R14;
  undefined8 *unaff_R15;
  float fVar20;
  float fVar21;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Quaternion_o q;
  undefined1 auVar32 [16];
  UnityEngine_Vector3_o value;
  undefined8 uStack_90;
  System_Object_array *pSStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_68;
  System_Object_array *pSStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  float fStack_34;
  System_Object_array *pSStack_30;
  System_Object_array *pSStack_28;
  
  if (g_data_057ac5c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_Object_array *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)unaff_R14;
      fVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)unaff_R14,MethodInfo_Single_ConvertTo_Single);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pIVar15 != (Il2CppObject *)0x0) {
          method_00 = (MethodInfo *)0x0;
          q = UnityEngine_Quaternion__AngleAxis
                        (fVar21,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar15 + 3),
                         (MethodInfo *)0x0);
          pCVar16 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,method_00);
          return (Il2CppObject *)pCVar16;
        }
        goto label_040c8d14;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040c8d14:
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __a;
  pSStack_28 = unaff_R14;
  if (g_data_057ac5c8 == '\0') {
    uStack_48 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_48 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_040c8e47:
    uStack_48 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    obj = __a;
  }
  else {
    obj = __a;
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      obj = *(System_Object_array **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_48 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_48 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)obj;
      __a = (System_Object_array *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(&obj->obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater)
      ;
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        uStack_48 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((__a != (System_Object_array *)0x0) && (pIVar15 != (Il2CppObject *)0x0)) {
          fVar21 = ABS((float)((ulong)pIVar15[3].monitor >> 0x20) * (float)((ulong)__a->m_Items[3] >> 0x20) +
                       (float)((ulong)pIVar15[3].klass >> 0x20) * (float)((ulong)__a->m_Items[2] >> 0x20) +
                       SUB84(pIVar15[3].klass,0) * SUB84(__a->m_Items[2],0) +
                       SUB84(pIVar15[3].monitor,0) * SUB84(__a->m_Items[3],0));
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          fStack_34 = 0.0;
          if (fVar21 <= 0.999999) {
            uStack_48 = 0x40c8e13;
            fVar21 = acosf(fVar21);
            fStack_34 = (fVar21 + fVar21) * 57.29578;
          }
          uStack_48 = 0x40c8e3d;
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_34);
          return pIVar15;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_48 = 0x40c8e51;
  uStack_48 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar15 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar15;
  }
  puStack_50 = (undefined8 *)0x40c8e74;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  lVar18 = auVar32._8_8_;
  puStack_50 = auVar32._0_8_;
  pSStack_60 = obj;
  lStack_58 = extraout_RDX_00;
  if (lVar18 != 0) {
    if ((*(int *)(lVar18 + 0x18) == 0) || (*(int *)(lVar18 + 0x18) == 1)) {
      lStack_58 = 0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar15 = *(Il2CppObject **)(lVar18 + 0x20);
      rhs = *(Il2CppObject **)(lVar18 + 0x28);
      puStack_50 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar15 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar1 <= (pIVar15->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = rhs->klass;
          bVar2 = (pIVar3->_2).naturalAligment;
          if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar15[3],*(UnityEngine_Vector3_Fields *)(rhs + 3),
                               (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar28 = SUB84(pIVar15[3].monitor,0);
            fVar29 = (float)((ulong)pIVar15[3].monitor >> 0x20);
            fVar21 = SUB84(rhs[3].klass,0);
            fVar24 = (float)((ulong)rhs[3].klass >> 0x20);
            fVar26 = SUB84(rhs[3].monitor,0);
            fVar27 = (float)((ulong)rhs[3].monitor >> 0x20);
            uStack_68 = 0;
            fVar30 = SUB84(pIVar15[3].klass,0);
            fVar31 = (float)((ulong)pIVar15[3].klass >> 0x20);
            uStack_90 = CONCAT44(fVar31 * fVar27 + fVar29 * fVar24,fVar30 * fVar27 + fVar29 * fVar21);
            pSStack_88 = (System_Object_array *)0x0;
            uStack_80 = CONCAT44(fVar26,fVar24);
            puStack_78 = (undefined8 *)0x0;
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar23 = fVar26 * fVar31 + (float)uStack_90;
            fVar25 = fVar21 * fVar28 + uStack_90._4_4_;
            fVar20 = fVar28 * (float)uStack_80;
            fVar22 = fVar30 * uStack_80._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar4 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar5 = pfVar4[1];
            fVar6 = pfVar4[2];
            fVar7 = pfVar4[3];
            (__this_00->fields).Value.fields.x = *pfVar4;
            (__this_00->fields).Value.fields.y = fVar5;
            (__this_00->fields).Value.fields.z = fVar6;
            *(float *)&(__this_00->fields).field_0x2c = fVar7;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar23 - fVar20;
            (__this_00->fields).Value.fields.y = fVar25 - fVar22;
            (__this_00->fields).Value.fields.z =
                 (fVar30 * fVar24 + fVar28 * fVar27 + fVar29 * fVar26) - fVar31 * fVar21;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar27 * fVar29 - fVar30 * fVar21) - fVar24 * fVar31) - fVar28 * fVar26;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar13 = CustomLogic_CustomLogicUtils__OperatorException(pSVar12,pIVar15,rhs,(MethodInfo *)0x0);
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar13);
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar13 = CustomLogic_CustomLogicUtils__OperatorException(pSVar12,pIVar15,rhs_00,(MethodInfo *)0x0);
      plVar14 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar13);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar19 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar19 = (long *)0x0;
          }
          if ((((plVar14 != (long *)0x0) && (plVar19 != (long *)0x0)) &&
              (bVar1 <= *(byte *)(*plVar14 + 0x130))) &&
             (lVar18 = *(long *)(*plVar14 + 200),
             *(Il2CppClass **)(lVar18 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar18 >> 8),
                            0.999999 <
                            (float)((ulong)plVar19[7] >> 0x20) * (float)((ulong)plVar14[7] >> 0x20) +
                            (float)((ulong)plVar19[6] >> 0x20) * (float)((ulong)plVar14[6] >> 0x20) +
                            (float)plVar14[6] * (float)plVar19[6] + (float)plVar19[7] * (float)plVar14[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  lStack_58 = 0x40c8eaf;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  lVar18 = auVar32._8_8_;
  uStack_68 = auVar32._0_8_;
  lStack_58 = extraout_RDX_00;
  if (lVar18 == 0) {
label_040c8fc7:
    uStack_90 = il2cpp_runtime_helper_022b2c90();
    pSStack_88 = obj;
    uStack_80 = extraout_RDX_00;
    puStack_78 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar8 = System_Single__GetHashCode(__this_01,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar9 = System_Single__GetHashCode
                      (__this_02,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar10 = System_Single__GetHashCode(__this_03,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar11 = System_Single__GetHashCode
                       (__this_04,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_90 = CONCAT44(iVar11 >> 1 ^ iVar10 >> 2 ^ iVar9 << 2 ^ uVar8,(float)uStack_90);
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return pIVar15;
  }
  if ((*(int *)(lVar18 + 0x18) == 0) || (*(int *)(lVar18 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar14 = *(long **)(lVar18 + 0x20);
  plVar19 = *(long **)(lVar18 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar19 != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*plVar19 + 0x130)) {
      plVar17 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar19 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar19 = plVar17;
      }
      if ((plVar14 == (long *)0x0) || (plVar19 == (long *)0x0)) goto label_040c8f21;
      if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar14 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar17 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar19[7] >> 0x20) * (float)((ulong)plVar14[7] >> 0x20) +
                                 (float)((ulong)plVar19[6] >> 0x20) * (float)((ulong)plVar14[6] >> 0x20) +
                                 (float)plVar14[6] * (float)plVar19[6] + (float)plVar19[7] * (float)plVar14[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar17 = (long *)0x0;
label_040c8f21:
  uStack_68 = CONCAT17((char)plVar17,(undefined7)uStack_68);
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
  return pIVar15;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8d20

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  Il2CppClass *pIVar5;
  float *pfVar6;
  Il2CppObject *rhs;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar14;
  System_Exception_o *pSVar15;
  long *plVar16;
  Il2CppObject *pIVar17;
  long *plVar18;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  long lVar19;
  long *plVar20;
  CustomLogic_CustomLogicRangeBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicRangeBuiltin_o *obj;
  MethodInfo *in_R8;
  undefined8 *unaff_R15;
  float fVar21;
  float fVar22;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  UnityEngine_Vector3_o value;
  undefined8 uStack_78;
  CustomLogic_CustomLogicRangeBuiltin_o *pCStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_50;
  CustomLogic_CustomLogicRangeBuiltin_o *pCStack_48;
  System_Object_array *pSStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  float fStack_1c;
  
  if (g_data_057ac5c8 == '\0') {
    uStack_30 = 0x40c8d41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_30 = 0x40c8d4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac5c8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040c8e47:
    uStack_30 = 0x40c8e4c;
    il2cpp_runtime_helper_022b2c90();
    obj = unaff_RBX;
  }
  else {
    obj = unaff_RBX;
    if ((int)__a->max_length != 0) {
      obj = (CustomLogic_CustomLogicRangeBuiltin_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_30 = 0x40c8d84;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = &MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      uStack_30 = 0x40c8d96;
      __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)obj;
      unaff_RBX = (CustomLogic_CustomLogicRangeBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__a->m_Items[1];
        uStack_30 = 0x40c8db0;
        __c = (CustomLogic_CustomLogicQuaternionBuiltin_o *)MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater;
        pIVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLogicQuater);
        if ((unaff_RBX != (CustomLogic_CustomLogicRangeBuiltin_o *)0x0) && (pIVar17 != (Il2CppObject *)0x0)) {
          pSVar1 = (unaff_RBX->fields).List;
          uVar2 = *(undefined8 *)&(unaff_RBX->fields)._isReadOnly;
          fVar22 = ABS((float)((ulong)pIVar17[3].monitor >> 0x20) * (float)((ulong)uVar2 >> 0x20) +
                       (float)((ulong)pIVar17[3].klass >> 0x20) * (float)((ulong)pSVar1 >> 0x20) +
                       SUB84(pIVar17[3].klass,0) * SUB84(pSVar1,0) +
                       SUB84(pIVar17[3].monitor,0) * (float)uVar2);
          if (1.0 <= fVar22) {
            fVar22 = 1.0;
          }
          fStack_1c = 0.0;
          if (fVar22 <= 0.999999) {
            uStack_30 = 0x40c8e13;
            fVar22 = acosf(fVar22);
            fStack_1c = (fVar22 + fVar22) * 57.29578;
          }
          uStack_30 = 0x40c8e3d;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_1c);
          return pIVar17;
        }
        goto label_040c8e47;
      }
    }
  }
  uStack_30 = 0x40c8e51;
  uStack_30 = il2cpp_runtime_helper_022b2ca0();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pIVar17 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar17;
  }
  puStack_38 = (undefined8 *)0x40c8e74;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  lVar19 = auVar33._8_8_;
  puStack_38 = auVar33._0_8_;
  pCStack_48 = obj;
  pSStack_40 = __a;
  if (lVar19 != 0) {
    if ((*(int *)(lVar19 + 0x18) == 0) || (*(int *)(lVar19 + 0x18) == 1)) {
      pSStack_40 = (System_Object_array *)0x40c8eaa;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar17 = *(Il2CppObject **)(lVar19 + 0x20);
      rhs = *(Il2CppObject **)(lVar19 + 0x28);
      puStack_38 = unaff_R15;
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar17 != (Il2CppObject *)0x0) {
        bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar3 <= (pIVar17->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar5 = rhs->klass;
          bVar4 = (pIVar5->_2).naturalAligment;
          if ((bVar4 < bVar3) || ((pIVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar4 < bVar3) || ((pIVar5->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar17[3],*(UnityEngine_Vector3_Fields *)(rhs + 3),
                               (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar29 = SUB84(pIVar17[3].monitor,0);
            fVar30 = (float)((ulong)pIVar17[3].monitor >> 0x20);
            fVar22 = SUB84(rhs[3].klass,0);
            fVar25 = (float)((ulong)rhs[3].klass >> 0x20);
            fVar27 = SUB84(rhs[3].monitor,0);
            fVar28 = (float)((ulong)rhs[3].monitor >> 0x20);
            uStack_50 = 0;
            fVar31 = SUB84(pIVar17[3].klass,0);
            fVar32 = (float)((ulong)pIVar17[3].klass >> 0x20);
            uStack_78 = CONCAT44(fVar32 * fVar28 + fVar30 * fVar25,fVar31 * fVar28 + fVar30 * fVar22);
            pCStack_70 = (CustomLogic_CustomLogicRangeBuiltin_o *)0x0;
            uStack_68 = (System_Object_array *)CONCAT44(fVar27,fVar25);
            puStack_60 = (undefined8 *)0x0;
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar24 = fVar27 * fVar32 + (float)uStack_78;
            fVar26 = fVar22 * fVar29 + uStack_78._4_4_;
            fVar21 = fVar29 * (float)uStack_68;
            fVar23 = fVar31 * uStack_68._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar6 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar7 = pfVar6[1];
            fVar8 = pfVar6[2];
            fVar9 = pfVar6[3];
            (__this_00->fields).Value.fields.x = *pfVar6;
            (__this_00->fields).Value.fields.y = fVar7;
            (__this_00->fields).Value.fields.z = fVar8;
            *(float *)&(__this_00->fields).field_0x2c = fVar9;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar24 - fVar21;
            (__this_00->fields).Value.fields.y = fVar26 - fVar23;
            (__this_00->fields).Value.fields.z =
                 (fVar31 * fVar25 + fVar29 * fVar28 + fVar30 * fVar27) - fVar32 * fVar22;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar28 * fVar30 - fVar31 * fVar22) - fVar25 * fVar32) - fVar29 * fVar27;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,rhs,(MethodInfo *)0x0);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar15 = CustomLogic_CustomLogicUtils__OperatorException(pSVar14,pIVar17,rhs_00,(MethodInfo *)0x0);
      plVar16 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar15);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar3 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar20 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar20 = (long *)0x0;
          }
          if ((((plVar16 != (long *)0x0) && (plVar20 != (long *)0x0)) &&
              (bVar3 <= *(byte *)(*plVar16 + 0x130))) &&
             (lVar19 = *(long *)(*plVar16 + 200),
             *(Il2CppClass **)(lVar19 + -8 + (ulong)bVar3 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar19 >> 8),
                            0.999999 <
                            (float)((ulong)plVar20[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                            (float)((ulong)plVar20[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                            (float)plVar16[6] * (float)plVar20[6] + (float)plVar20[7] * (float)plVar16[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  pSStack_40 = (System_Object_array *)0x40c8eaf;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  lVar19 = auVar33._8_8_;
  uStack_50 = auVar33._0_8_;
  pSStack_40 = __a;
  if (lVar19 == 0) {
label_040c8fc7:
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    pCStack_70 = obj;
    uStack_68 = __a;
    puStack_60 = unaff_R15;
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar10 = System_Single__GetHashCode(__this_01,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->parameters);
    iVar11 = System_Single__GetHashCode
                       (__this_02,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->parameters + 4));
    iVar12 = System_Single__GetHashCode(__this_03,(MethodInfo *)&((MethodInfo_24EEB40 *)__c)->rgctx_data);
    iVar13 = System_Single__GetHashCode
                       (__this_04,(MethodInfo *)((long)&((MethodInfo_24EEB40 *)__c)->rgctx_data + 4));
    uStack_78 = CONCAT44(iVar13 >> 1 ^ iVar12 >> 2 ^ iVar11 << 2 ^ uVar10,(float)uStack_78);
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar17;
  }
  if ((*(int *)(lVar19 + 0x18) == 0) || (*(int *)(lVar19 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040c8fc7;
  plVar16 = *(long **)(lVar19 + 0x20);
  plVar20 = *(long **)(lVar19 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar20 != (long *)0x0) {
    bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar3 <= *(byte *)(*plVar20 + 0x130)) {
      plVar18 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar20 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar20 = plVar18;
      }
      if ((plVar16 == (long *)0x0) || (plVar20 == (long *)0x0)) goto label_040c8f21;
      if ((bVar3 <= *(byte *)(*plVar16 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar16 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar18 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar20[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                                 (float)((ulong)plVar20[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                                 (float)plVar16[6] * (float)plVar20[6] + (float)plVar20[7] * (float)plVar16[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar18 = (long *)0x0;
label_040c8f21:
  uStack_50 = CONCAT17((char)plVar18,(undefined7)uStack_50);
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_50 + 7);
  return pIVar17;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8e60

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  float *pfVar4;
  Il2CppObject *rhs;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar12;
  System_Exception_o *pSVar13;
  long *plVar14;
  Il2CppObject *pIVar15;
  long *plVar16;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  long extraout_RDX_00;
  long lVar17;
  long *plVar18;
  MethodInfo *in_R8;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  UnityEngine_Vector3_o value;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar15 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_00 != 0) {
    if ((*(int *)(extraout_RDX_00 + 0x18) == 0) || (*(int *)(extraout_RDX_00 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pIVar15 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
      rhs = *(Il2CppObject **)(extraout_RDX_00 + 0x28);
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar15 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar1 <= (pIVar15->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar3 = rhs->klass;
          bVar2 = (pIVar3->_2).naturalAligment;
          if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar15[3],*(UnityEngine_Vector3_Fields *)(rhs + 3),
                               (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar25 = SUB84(pIVar15[3].monitor,0);
            fVar26 = (float)((ulong)pIVar15[3].monitor >> 0x20);
            fVar19 = SUB84(rhs[3].klass,0);
            fVar21 = (float)((ulong)rhs[3].klass >> 0x20);
            fVar23 = SUB84(rhs[3].monitor,0);
            fVar24 = (float)((ulong)rhs[3].monitor >> 0x20);
            uStack_28 = 0;
            fVar27 = SUB84(pIVar15[3].klass,0);
            fVar28 = (float)((ulong)pIVar15[3].klass >> 0x20);
            uStack_50 = CONCAT44(fVar28 * fVar24 + fVar26 * fVar21,fVar27 * fVar24 + fVar26 * fVar19);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar20 = fVar23 * fVar28 + (float)uStack_50;
            fVar22 = fVar19 * fVar25 + uStack_50._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar4 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar5 = pfVar4[1];
            fVar6 = pfVar4[2];
            fVar7 = pfVar4[3];
            (__this_00->fields).Value.fields.x = *pfVar4;
            (__this_00->fields).Value.fields.y = fVar5;
            (__this_00->fields).Value.fields.z = fVar6;
            *(float *)&(__this_00->fields).field_0x2c = fVar7;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar20 - fVar25 * fVar21;
            (__this_00->fields).Value.fields.y = fVar22 - fVar27 * fVar23;
            (__this_00->fields).Value.fields.z =
                 (fVar27 * fVar21 + fVar25 * fVar24 + fVar26 * fVar23) - fVar28 * fVar19;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar24 * fVar26 - fVar27 * fVar19) - fVar21 * fVar28) - fVar25 * fVar23;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar13 = CustomLogic_CustomLogicUtils__OperatorException(pSVar12,pIVar15,rhs,(MethodInfo *)0x0);
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar13);
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar13 = CustomLogic_CustomLogicUtils__OperatorException(pSVar12,pIVar15,rhs_00,(MethodInfo *)0x0);
      plVar14 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar13);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar18 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar18 = (long *)0x0;
          }
          if ((((plVar14 != (long *)0x0) && (plVar18 != (long *)0x0)) &&
              (bVar1 <= *(byte *)(*plVar14 + 0x130))) &&
             (lVar17 = *(long *)(*plVar14 + 200),
             *(Il2CppClass **)(lVar17 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar17 >> 8),
                            0.999999 <
                            (float)((ulong)plVar18[7] >> 0x20) * (float)((ulong)plVar14[7] >> 0x20) +
                            (float)((ulong)plVar18[6] >> 0x20) * (float)((ulong)plVar14[6] >> 0x20) +
                            (float)plVar14[6] * (float)plVar18[6] + (float)plVar18[7] * (float)plVar14[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  auVar29 = il2cpp_runtime_helper_022b2c90();
  lVar17 = auVar29._8_8_;
  uStack_28 = auVar29._0_8_;
  if (lVar17 == 0) {
label_040c8fc7:
    uStack_50 = il2cpp_runtime_helper_022b2c90();
    if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar8 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value);
    iVar9 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(__c->fields).Value.fields.y);
    iVar10 = System_Single__GetHashCode(__this_03,(MethodInfo *)&(__c->fields).Value.fields.z);
    iVar11 = System_Single__GetHashCode(__this_04,(MethodInfo *)&(__c->fields).Value.fields.w);
    uStack_50 = CONCAT44(iVar11 >> 1 ^ iVar10 >> 2 ^ iVar9 << 2 ^ uVar8,(float)uStack_50);
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_50 + 4);
    return pIVar15;
  }
  if ((*(int *)(lVar17 + 0x18) == 0) || (*(int *)(lVar17 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_040c8fc7;
  plVar14 = *(long **)(lVar17 + 0x20);
  plVar18 = *(long **)(lVar17 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar18 != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*plVar18 + 0x130)) {
      plVar16 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar18 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar18 = plVar16;
      }
      if ((plVar14 == (long *)0x0) || (plVar18 == (long *)0x0)) goto label_040c8f21;
      if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar14 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar16 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar18[7] >> 0x20) * (float)((ulong)plVar14[7] >> 0x20) +
                                 (float)((ulong)plVar18[6] >> 0x20) * (float)((ulong)plVar14[6] >> 0x20) +
                                 (float)plVar14[6] * (float)plVar18[6] + (float)plVar18[7] * (float)plVar14[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar16 = (long *)0x0;
label_040c8f21:
  uStack_28 = CONCAT17((char)plVar16,(undefined7)uStack_28);
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
  return pIVar15;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8e80

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  float *pfVar5;
  Il2CppObject *rhs;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar13;
  System_Exception_o *pSVar14;
  Il2CppObject *pIVar15;
  long *plVar16;
  long *plVar17;
  Il2CppObject *extraout_RAX;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  long lVar18;
  long *plVar19;
  MethodInfo *in_R8;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  UnityEngine_Vector3_o value;
  undefined8 uStack_48;
  undefined8 uStack_20;
  
  if (__a != (System_Object_array *)0x0) {
    iVar3 = (int)__a->max_length;
    if ((iVar3 == 0) || (iVar3 == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pIVar15 = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (g_data_057ac59c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
        g_data_057ac59c = '\x01';
      }
      if (pIVar15 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (((bVar1 <= (pIVar15->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
          pIVar4 = rhs->klass;
          bVar2 = (pIVar4->_2).naturalAligment;
          if ((bVar2 < bVar1) || ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
            bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
            if ((bVar2 < bVar1) || ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
            goto label_040c566a;
            value = UnityEngine_Quaternion__op_Multiply_4debdf0
                              ((UnityEngine_Quaternion_o)pIVar15[3],*(UnityEngine_Vector3_Fields *)(rhs + 3),
                               (MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
          }
          else {
            fVar26 = SUB84(pIVar15[3].monitor,0);
            fVar27 = (float)((ulong)pIVar15[3].monitor >> 0x20);
            fVar20 = SUB84(rhs[3].klass,0);
            fVar22 = (float)((ulong)rhs[3].klass >> 0x20);
            fVar24 = SUB84(rhs[3].monitor,0);
            fVar25 = (float)((ulong)rhs[3].monitor >> 0x20);
            uStack_20 = 0;
            fVar28 = SUB84(pIVar15[3].klass,0);
            fVar29 = (float)((ulong)pIVar15[3].klass >> 0x20);
            uStack_48 = CONCAT44(fVar29 * fVar25 + fVar27 * fVar22,fVar28 * fVar25 + fVar27 * fVar20);
            __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
            if (g_data_057ac599 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
              g_data_057ac599 = '\x01';
            }
            fVar21 = fVar24 * fVar29 + (float)uStack_48;
            fVar23 = fVar20 * fVar26 + uStack_48._4_4_;
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            pfVar5 = *(float **)(TypeInfo_Quaternion + 0xb8);
            fVar6 = pfVar5[1];
            fVar7 = pfVar5[2];
            fVar8 = pfVar5[3];
            (__this_00->fields).Value.fields.x = *pfVar5;
            (__this_00->fields).Value.fields.y = fVar6;
            (__this_00->fields).Value.fields.z = fVar7;
            *(float *)&(__this_00->fields).field_0x2c = fVar8;
            if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
            (__this_00->fields).Value.fields.x = fVar21 - fVar26 * fVar22;
            (__this_00->fields).Value.fields.y = fVar23 - fVar28 * fVar24;
            (__this_00->fields).Value.fields.z =
                 (fVar28 * fVar22 + fVar26 * fVar25 + fVar27 * fVar24) - fVar29 * fVar20;
            *(float *)&(__this_00->fields).field_0x2c =
                 ((fVar25 * fVar27 - fVar28 * fVar20) - fVar22 * fVar29) - fVar26 * fVar24;
          }
          return (Il2CppObject *)__this_00;
        }
      }
label_040c566a:
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      pSVar14 = CustomLogic_CustomLogicUtils__OperatorException(pSVar13,pIVar15,rhs,(MethodInfo *)0x0);
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(pSVar14);
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
      pSVar14 = CustomLogic_CustomLogicUtils__OperatorException(pSVar13,pIVar15,rhs_00,(MethodInfo *)0x0);
      plVar16 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
      il2cpp_runtime_helper_022b2b10(pSVar14);
      if (g_data_057ac59d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
        g_data_057ac59d = '\x01';
      }
      if (extraout_RDX != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
          plVar19 = extraout_RDX;
          if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
            plVar19 = (long *)0x0;
          }
          if ((((plVar16 != (long *)0x0) && (plVar19 != (long *)0x0)) &&
              (bVar1 <= *(byte *)(*plVar16 + 0x130))) &&
             (lVar18 = *(long *)(*plVar16 + 200),
             *(Il2CppClass **)(lVar18 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
            return (Il2CppObject *)
                   CONCAT71((int7)((ulong)lVar18 >> 8),
                            0.999999 <
                            (float)((ulong)plVar19[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                            (float)((ulong)plVar19[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                            (float)plVar16[6] * (float)plVar19[6] + (float)plVar19[7] * (float)plVar16[7]);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  auVar30 = il2cpp_runtime_helper_022b2c90();
  lVar18 = auVar30._8_8_;
  uStack_20 = auVar30._0_8_;
  if (lVar18 == 0) {
label_040c8fc7:
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
                ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
      return extraout_RAX;
    }
    uVar9 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value);
    iVar10 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(__c->fields).Value.fields.y);
    iVar11 = System_Single__GetHashCode(__this_03,(MethodInfo *)&(__c->fields).Value.fields.z);
    iVar12 = System_Single__GetHashCode(__this_04,(MethodInfo *)&(__c->fields).Value.fields.w);
    uStack_48 = CONCAT44(iVar12 >> 1 ^ iVar11 >> 2 ^ iVar10 << 2 ^ uVar9,(float)uStack_48);
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar15;
  }
  if ((*(int *)(lVar18 + 0x18) == 0) || (*(int *)(lVar18 + 0x18) == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_040c8fc7;
  plVar16 = *(long **)(lVar18 + 0x20);
  plVar19 = *(long **)(lVar18 + 0x28);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (plVar19 != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*plVar19 + 0x130)) {
      plVar17 = (long *)0x0;
      if (*(Il2CppClass **)(*(long *)(*plVar19 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar19 = plVar17;
      }
      if ((plVar16 == (long *)0x0) || (plVar19 == (long *)0x0)) goto label_040c8f21;
      if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)(*plVar16 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        plVar17 = (long *)(ulong)(0.999999 <
                                 (float)((ulong)plVar19[7] >> 0x20) * (float)((ulong)plVar16[7] >> 0x20) +
                                 (float)((ulong)plVar19[6] >> 0x20) * (float)((ulong)plVar16[6] >> 0x20) +
                                 (float)plVar16[6] * (float)plVar19[6] + (float)plVar19[7] * (float)plVar16[7]
                                 );
        goto label_040c8f21;
      }
    }
  }
  plVar17 = (long *)0x0;
label_040c8f21:
  uStack_20 = CONCAT17((char)plVar17,(undefined7)uStack_20);
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
  return pIVar15;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8eb0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  undefined8 in_RAX;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar9;
  MethodInfo *in_R8;
  float __this_00;
  float __this_01;
  float __this_02;
  float __this_03;
  undefined8 uStack_40;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
label_040c8fc7:
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      uVar3 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__c->fields).Value);
      iVar4 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value.fields.y);
      iVar5 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(__c->fields).Value.fields.z);
      iVar6 = System_Single__GetHashCode(__this_03,(MethodInfo *)&(__c->fields).Value.fields.w);
      uStack_40 = CONCAT44(iVar6 >> 1 ^ iVar5 >> 2 ^ iVar4 << 2 ^ uVar3,(undefined4)uStack_40);
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
      return pIVar7;
    }
    il2cpp_runtime_helper_022b2c90();
    CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
              ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
    return extraout_RAX;
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040c8fc7;
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_040c8fc7;
  pIVar7 = __a->m_Items[0];
  pIVar9 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (pIVar9 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= (pIVar9->klass->_2).naturalAligment) {
      pIVar8 = (Il2CppObject *)0x0;
      if ((pIVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin) {
        pIVar9 = pIVar8;
      }
      if ((pIVar7 == (Il2CppObject *)0x0) || (pIVar9 == (Il2CppObject *)0x0)) goto label_040c8f21;
      if ((bVar1 <= (pIVar7->klass->_2).naturalAligment) &&
         ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        pIVar8 = (Il2CppObject *)
                 (ulong)(0.999999 <
                        (float)((ulong)pIVar9[3].monitor >> 0x20) * (float)((ulong)pIVar7[3].monitor >> 0x20)
                        + (float)((ulong)pIVar9[3].klass >> 0x20) * (float)((ulong)pIVar7[3].klass >> 0x20) +
                          SUB84(pIVar7[3].klass,0) * SUB84(pIVar9[3].klass,0) +
                          SUB84(pIVar9[3].monitor,0) * SUB84(pIVar7[3].monitor,0));
        goto label_040c8f21;
      }
    }
  }
  pIVar8 = (Il2CppObject *)0x0;
label_040c8f21:
  uStack_18 = CONCAT17((char)pIVar8,(undefined7)uStack_18);
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
  return pIVar7;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40c8fd0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  MethodInfo *in_R8;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  float __this_02;
  undefined1 auStack_24 [4];
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__c->fields).Value);
    System_Single__GetHashCode(__this_00,(MethodInfo *)&(__c->fields).Value.fields.y);
    System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value.fields.z);
    System_Single__GetHashCode(__this_02,(MethodInfo *)&(__c->fields).Value.fields.w);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_24);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
            ((CustomLogic_CustomLogicRangeBuiltin_o *)__this,0,(int32_t)__c,1,in_R8);
  return extraout_RAX;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40c5ba0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding
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
  
  if (g_data_057ac5a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FromToRotation");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Slerp");
    il2cpp_runtime_helper_023445d0(&"Inverse");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Lerp");
    il2cpp_runtime_helper_023445d0(&"LerpUnclamped");
    il2cpp_runtime_helper_023445d0(&"Euler");
    il2cpp_runtime_helper_023445d0(&"FromEuler");
    il2cpp_runtime_helper_023445d0(&"LookRotation");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"SlerpUnclamped");
    il2cpp_runtime_helper_023445d0(&"Identity");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"AngleAxis");
    il2cpp_runtime_helper_023445d0(&"RotateTowards");
    il2cpp_runtime_helper_023445d0(&"Angle");
    g_data_057ac5a1 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x91ba4e13) {
    if (uVar3 < 0x39c493b9) {
      if (uVar3 < 0x18c37b42) {
        if (uVar3 == 0x18535612) {
          bVar4 = System_String__op_Equality(name,"Euler",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ac5a6 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Euler_g____getter_6_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Euler_g____setter_6_1);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
              g_data_057ac5a6 = '\x01';
            }
            pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
            System_Func_object__object____ctor();
            pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
            System_Action_object__object____ctor();
            pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x18c37b41) &&
                (bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5b4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__20_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b4 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x27b48c82) {
        bVar4 = System_String__op_Equality(name,"FromEuler",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5ac == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromEuler_b__12_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5ac = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x39907617) {
        bVar4 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5aa == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Slerp_b__10_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5aa = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x39c493b8) &&
              (bVar4 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5b2 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Angle_b__18_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5b2 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x549f4d11) {
      if (uVar3 == 0x3c0ea91a) {
        bVar4 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5b0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RotateTowards_b__16_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b0 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x549f4d10) &&
              (bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5b3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__19_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5b3 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x91ba4e12) {
      bVar4 = System_String__op_Equality(name,"FromToRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ae == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromToRotation_b__14_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ae = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x6a4c91d6) {
      bVar4 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ab == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SlerpUnclamped_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ab = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__22_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5b6 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xd20c0cd7) {
    if (uVar3 < 0x9e956089) {
      if (uVar3 == 0x91efe6d7) {
        bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac5b5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__21_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac5b5 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x9e956088) &&
              (bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5a8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5a8 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xbcf8f25c) {
      bVar4 = System_String__op_Equality(name,"LookRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5ad == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookRotation_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5ad = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xc95e1923) {
      bVar4 = System_String__op_Equality(name,"Inverse",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5af == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Inverse_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac5af = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xd20c0cd6) &&
            (bVar4 = System_String__op_Equality(name,"W",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__W_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__W_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a5 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xdf0c214e) {
    if (uVar3 == 0xdc0c1c94) {
      bVar4 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac5a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Y_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Y_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
          g_data_057ac5a3 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xdd0c1e27) {
      bVar4 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X;
      }
    }
    else if ((uVar3 == 0xdf0c214d) &&
            (bVar4 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5a4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Z_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Z_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a4 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xdfc1d0bb) {
    bVar4 = System_String__op_Equality(name,"Identity",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Identity_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
        g_data_057ac5a7 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar6,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf4248f7b) {
    bVar4 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac5a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LerpUnclamped_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac5a9 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xf6586339) &&
          (bVar4 = System_String__op_Equality(name,"AngleAxis",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac5b1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AngleAxis_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac5b1 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicQuaternionBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac5a2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63c6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__X_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63d2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__X_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63de;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c63f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a2 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c640c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c6425;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c6434;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c644d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c645c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40c6477;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x40c63a0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__X_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__X_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x40c6480

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Y_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Y_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x40c6560

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Z_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Z_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__W
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W (const MethodInfo* method);
// 0x40c6640

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__W_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__W_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Euler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler (const MethodInfo* method);
// 0x40c6720

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Euler_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Euler_g____setter_6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Identity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity (const MethodInfo* method);
// 0x40c6800

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Identity_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
    g_data_057ac5a7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x40c68a0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5a8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x40c69f0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LerpUnclamped_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5a9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x40c6b40

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Slerp_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5aa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x40c6c90

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SlerpUnclamped_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ab = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromEuler
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler (const MethodInfo* method);
// 0x40c6de0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromEuler_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ac = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LookRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation (const MethodInfo* method);
// 0x40c6f30

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LookRotation_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ad = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromToRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation (const MethodInfo* method);
// 0x40c7080

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FromToRotation_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5ae = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Inverse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse (const MethodInfo* method);
// 0x40c71d0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Inverse_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5af = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x40c7320

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RotateTowards_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__AngleAxis
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis (const MethodInfo* method);
// 0x40c7470

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AngleAxis_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x40c75c0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Angle_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x40c7710

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x40c7860

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x40c79b0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x40c7b00

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (g_data_057ac5b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac5b6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicQuaternionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40c7c50

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *pIVar1;
  MethodInfo_33E0570 *obj;
  MethodInfo *pMVar2;
  MethodInfo *obj_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  MethodInfo_33E0570 *pMVar4;
  MethodInfo *pMVar5;
  float fVar6;
  UnityEngine_Quaternion_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo_33E0570 *pMStack_70;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac5b7 == '\0') {
    uStack_20 = 0x40c7c6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40c7c79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7c85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40c7c91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40c7c9d;
    il2cpp_runtime_helper_023445d0(&"FromToRotation");
    uStack_20 = 0x40c7ca9;
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    uStack_20 = 0x40c7cb5;
    il2cpp_runtime_helper_023445d0(&"Z");
    uStack_20 = 0x40c7cc1;
    il2cpp_runtime_helper_023445d0(&"Slerp");
    uStack_20 = 0x40c7ccd;
    il2cpp_runtime_helper_023445d0(&"Inverse");
    uStack_20 = 0x40c7cd9;
    il2cpp_runtime_helper_023445d0(&"W");
    uStack_20 = 0x40c7ce5;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    uStack_20 = 0x40c7cf1;
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    uStack_20 = 0x40c7cfd;
    il2cpp_runtime_helper_023445d0(&"Lerp");
    uStack_20 = 0x40c7d09;
    il2cpp_runtime_helper_023445d0(&"LerpUnclamped");
    uStack_20 = 0x40c7d15;
    il2cpp_runtime_helper_023445d0(&"Euler");
    uStack_20 = 0x40c7d21;
    il2cpp_runtime_helper_023445d0(&"FromEuler");
    uStack_20 = 0x40c7d2d;
    il2cpp_runtime_helper_023445d0(&"LookRotation");
    uStack_20 = 0x40c7d39;
    il2cpp_runtime_helper_023445d0(&"Y");
    uStack_20 = 0x40c7d45;
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    uStack_20 = 0x40c7d51;
    il2cpp_runtime_helper_023445d0(&"SlerpUnclamped");
    uStack_20 = 0x40c7d5d;
    il2cpp_runtime_helper_023445d0(&"Identity");
    uStack_20 = 0x40c7d69;
    il2cpp_runtime_helper_023445d0(&"X");
    uStack_20 = 0x40c7d75;
    il2cpp_runtime_helper_023445d0(&"AngleAxis");
    uStack_20 = 0x40c7d81;
    il2cpp_runtime_helper_023445d0(&"RotateTowards");
    uStack_20 = 0x40c7d8d;
    il2cpp_runtime_helper_023445d0(&"Angle");
    g_data_057ac5b7 = '\x01';
  }
  uStack_20 = 0x40c7da3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40c7db8;
  obj = MethodInfo_HashSet_1_System_String;
  pSVar3 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40c7ddd;
    System_Collections_Generic_HashSet_object___Add(__this,"X",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7df2;
    System_Collections_Generic_HashSet_object___Add(__this,"Y",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e07;
    System_Collections_Generic_HashSet_object___Add(__this,"Z",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e1c;
    System_Collections_Generic_HashSet_object___Add(__this,"W",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e31;
    System_Collections_Generic_HashSet_object___Add(__this,"Euler",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e46;
    System_Collections_Generic_HashSet_object___Add(__this,"Identity",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e5b;
    System_Collections_Generic_HashSet_object___Add(__this,"Lerp",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e70;
    System_Collections_Generic_HashSet_object___Add(__this,"LerpUnclamped",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e85;
    System_Collections_Generic_HashSet_object___Add(__this,"Slerp",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7e9a;
    System_Collections_Generic_HashSet_object___Add(__this,"SlerpUnclamped",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7eaf;
    System_Collections_Generic_HashSet_object___Add(__this,"FromEuler",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7ec4;
    System_Collections_Generic_HashSet_object___Add(__this,"LookRotation",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7ed9;
    System_Collections_Generic_HashSet_object___Add(__this,"FromToRotation",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7eee;
    System_Collections_Generic_HashSet_object___Add(__this,"Inverse",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f03;
    System_Collections_Generic_HashSet_object___Add(__this,"RotateTowards",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f18;
    System_Collections_Generic_HashSet_object___Add(__this,"AngleAxis",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f2d;
    System_Collections_Generic_HashSet_object___Add(__this,"Angle",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f42;
    System_Collections_Generic_HashSet_object___Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f57;
    System_Collections_Generic_HashSet_object___Add(__this,"__Mul__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f6c;
    System_Collections_Generic_HashSet_object___Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40c7f81;
    System_Collections_Generic_HashSet_object___Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x40c7fb3;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = CONCAT44(*(undefined4 *)&(pSVar3->fields)._comparer,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  if (g_data_057ac5b8 == '\0') {
    uStack_40 = 0x40c800f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40c801b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40c803a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40c804c;
  pMVar2 = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = obj;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    *(float *)&(pSVar3->fields)._comparer = fVar6;
    return;
  }
  uStack_40 = 0x40c8063;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (pMVar4 != (MethodInfo_33E0570 *)0x0) {
    uStack_40 = CONCAT44(*(undefined4 *)((long)&pMVar4->parameters + 4),(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_33E0570 *)0x40c8092;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_33E0570 *)0x40c8099;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSStack_50 = pSVar3;
  pMStack_48 = obj;
  if (g_data_057ac5b9 == '\0') {
    uStack_60 = 0x40c80bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40c80cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40c80ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40c80fc;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar5 = pMVar2;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar2,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar4 != (MethodInfo_33E0570 *)0x0) {
    *(float *)((long)&pMVar4->parameters + 4) = fVar6;
    return;
  }
  uStack_60 = 0x40c8113;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (pMVar5 != (MethodInfo *)0x0) {
    uStack_60 = CONCAT44(*(undefined4 *)&pMVar5->field7_0x38,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo *)0x40c8142;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo *)0x40c8149;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar4;
  pMStack_68 = pMVar2;
  if (g_data_057ac5ba == '\0') {
    uStack_80 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_80 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40c81ac;
  pMVar2 = MethodInfo_Single_ConvertTo_Single;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar5 != (MethodInfo *)0x0) {
    *(float *)&pMVar5->field7_0x38 = fVar6;
    return;
  }
  uStack_80 = 0x40c81c3;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if (obj_00 != (MethodInfo *)0x0) {
    uStack_80 = CONCAT44(*(undefined4 *)((long)&obj_00->field7_0x38 + 4),(undefined4)uStack_80);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = MethodInfo_Single_ConvertTo_Single;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar2,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (obj_00 != (MethodInfo *)0x0) {
    *(float *)((long)&obj_00->field7_0x38 + 4) = fVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo *)0x0) {
    UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&pMVar2->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar8.fields.x * 57.29578;
    euler.fields.y = UVar8.fields.y * 57.29578;
    euler.fields.z = UVar8.fields.z * 57.29578;
    UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar5,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((pMVar2 != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar8.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar8.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar8.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar8,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&pMVar2->parameters = UVar7.fields;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    pMVar5 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),pMVar5);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c7fc0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *extraout_RAX_03;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *pMVar4;
  MethodInfo *obj;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  float fVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5b8 == '\0') {
    uStack_28 = 0x40c800f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40c801b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40c803a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40c804c;
  pMVar4 = MethodInfo_Single_ConvertTo_Single;
  pMVar6 = method;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.x = fVar7;
    return extraout_RAX;
  }
  uStack_28 = 0x40c8063;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (pMVar6 != (MethodInfo *)0x0) {
    uStack_28 = CONCAT44(*(undefined4 *)((long)&pMVar6->parameters + 4),(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40c8092;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar1;
  }
  pMStack_30 = (MethodInfo *)0x40c8099;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac5b9 == '\0') {
    uStack_48 = 0x40c80bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40c80cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40c80ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40c80fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar5 = pMVar4;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar4,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar6 != (MethodInfo *)0x0) {
    *(float *)((long)&pMVar6->parameters + 4) = fVar7;
    return extraout_RAX_00;
  }
  uStack_48 = 0x40c8113;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (pMVar5 != (MethodInfo *)0x0) {
    uStack_48 = CONCAT44(*(undefined4 *)&pMVar5->field7_0x38,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo *)0x40c8142;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar1;
  }
  pMStack_50 = (MethodInfo *)0x40c8149;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar6;
  pMStack_50 = pMVar4;
  if (g_data_057ac5ba == '\0') {
    uStack_68 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40c81ac;
  pMVar4 = MethodInfo_Single_ConvertTo_Single;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar5 != (MethodInfo *)0x0) {
    *(float *)&pMVar5->field7_0x38 = fVar7;
    return extraout_RAX_01;
  }
  uStack_68 = 0x40c81c3;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    uStack_68 = CONCAT44(*(undefined4 *)((long)&obj->field7_0x38 + 4),(undefined4)uStack_68);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = MethodInfo_Single_ConvertTo_Single;
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar4,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (obj != (MethodInfo *)0x0) {
    *(float *)((long)&obj->field7_0x38 + 4) = fVar7;
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar4 != (MethodInfo *)0x0) {
    UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&pMVar4->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar9.fields.x * 57.29578;
    euler.fields.y = UVar9.fields.y * 57.29578;
    euler.fields.z = UVar9.fields.z * 57.29578;
    UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar9,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar6,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((pMVar4 != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar9.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar9.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar9.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar8 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar9,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&pMVar4->parameters = UVar8.fields;
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    pMVar6 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      pMVar6);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40c7ff0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *pMVar2;
  MethodInfo *obj;
  MethodInfo *pMVar3;
  float fVar4;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  MethodInfo *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac5b8 == '\0') {
    uStack_20 = 0x40c800f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40c801b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40c803a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40c804c;
  pMVar2 = MethodInfo_Single_ConvertTo_Single;
  pIVar1 = __v;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.x = fVar4;
    return;
  }
  uStack_20 = 0x40c8063;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pIVar1 != (Il2CppObject *)0x0) {
    uStack_20 = CONCAT44(*(undefined4 *)((long)&pIVar1[3].klass + 4),(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40c8092;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40c8099;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac5b9 == '\0') {
    uStack_40 = 0x40c80bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40c80cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40c80ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40c80fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar3 = pMVar2;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar2,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(float *)((long)&pIVar1[3].klass + 4) = fVar4;
    return;
  }
  uStack_40 = 0x40c8113;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (pMVar3 != (MethodInfo *)0x0) {
    uStack_40 = CONCAT44(*(undefined4 *)&pMVar3->field7_0x38,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo *)0x40c8142;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo *)0x40c8149;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar1;
  pMStack_48 = pMVar2;
  if (g_data_057ac5ba == '\0') {
    uStack_60 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40c81ac;
  pMVar2 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar3 != (MethodInfo *)0x0) {
    *(float *)&pMVar3->field7_0x38 = fVar4;
    return;
  }
  uStack_60 = 0x40c81c3;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    uStack_60 = CONCAT44(*(undefined4 *)((long)&obj->field7_0x38 + 4),(undefined4)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar3 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)pMVar2,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (obj != (MethodInfo *)0x0) {
    *(float *)((long)&obj->field7_0x38 + 4) = fVar4;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar2 != (MethodInfo *)0x0) {
    UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&pMVar2->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar6.fields.x * 57.29578;
    euler.fields.y = UVar6.fields.y * 57.29578;
    euler.fields.z = UVar6.fields.z * 57.29578;
    UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar3,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((pMVar2 != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar6.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar6.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar6.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar6,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&pMVar2->parameters = UVar5.fields;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    pMVar3 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),pMVar3);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c8070

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *extraout_RAX_02;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *obj;
  MethodInfo *obj_00;
  MethodInfo *pMVar4;
  float fVar5;
  UnityEngine_Quaternion_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5b9 == '\0') {
    uStack_28 = 0x40c80bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40c80cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40c80ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40c80fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar4 = method;
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.y = fVar5;
    return extraout_RAX;
  }
  uStack_28 = 0x40c8113;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (pMVar4 != (MethodInfo *)0x0) {
    uStack_28 = CONCAT44(*(undefined4 *)&pMVar4->field7_0x38,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40c8142;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar1;
  }
  pMStack_30 = (MethodInfo *)0x40c8149;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac5ba == '\0') {
    uStack_48 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40c81ac;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pMVar4 != (MethodInfo *)0x0) {
    *(float *)&pMVar4->field7_0x38 = fVar5;
    return extraout_RAX_00;
  }
  uStack_48 = 0x40c81c3;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    uStack_48 = CONCAT44(*(undefined4 *)((long)&obj->field7_0x38 + 4),(undefined4)uStack_48);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = MethodInfo_Single_ConvertTo_Single;
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (obj != (MethodInfo *)0x0) {
    *(float *)((long)&obj->field7_0x38 + 4) = fVar5;
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj_00 != (MethodInfo *)0x0) {
    UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&obj_00->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar7.fields.x * 57.29578;
    euler.fields.y = UVar7.fields.y * 57.29578;
    euler.fields.z = UVar7.fields.z * 57.29578;
    UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar7,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pMVar4,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((obj_00 != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar7.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar7.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar7.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar6 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar7,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&obj_00->parameters = UVar6.fields;
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    pMVar4 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      pMVar4);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40c80a0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *obj;
  MethodInfo *obj_00;
  MethodInfo *method_00;
  float fVar2;
  UnityEngine_Quaternion_o UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac5b9 == '\0') {
    uStack_20 = 0x40c80bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40c80cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40c80ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40c80fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar1 = __v;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.y = fVar2;
    return;
  }
  uStack_20 = 0x40c8113;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pIVar1 != (Il2CppObject *)0x0) {
    uStack_20 = CONCAT44(*(undefined4 *)&pIVar1[3].monitor,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40c8142;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40c8149;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac5ba == '\0') {
    uStack_40 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40c81ac;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(float *)&pIVar1[3].monitor = fVar2;
    return;
  }
  uStack_40 = 0x40c81c3;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    uStack_40 = CONCAT44(*(undefined4 *)((long)&obj->field7_0x38 + 4),(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (obj != (MethodInfo *)0x0) {
    *(float *)((long)&obj->field7_0x38 + 4) = fVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj_00 != (MethodInfo *)0x0) {
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&obj_00->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((obj_00 != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar4.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar4.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar4.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar4,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&obj_00->parameters = UVar3.fields;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),method_00);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c8120

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *extraout_RAX_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *obj;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5ba == '\0') {
    uStack_28 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40c81ac;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.z = fVar4;
    return extraout_RAX;
  }
  uStack_28 = 0x40c81c3;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    uStack_28 = CONCAT44(*(undefined4 *)((long)&method->field7_0x38 + 4),(undefined4)uStack_28);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (method != (MethodInfo *)0x0) {
    *(float *)((long)&method->field7_0x38 + 4) = fVar4;
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&obj->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar6.fields.x * 57.29578;
    euler.fields.y = UVar6.fields.y * 57.29578;
    euler.fields.z = UVar6.fields.z * 57.29578;
    UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar6,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((obj != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar6.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar6.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar6.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar6,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&obj->parameters = UVar5.fields;
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40c8150

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *obj;
  MethodInfo *method_00;
  float fVar2;
  UnityEngine_Quaternion_o UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  undefined8 uStack_20;
  
  if (g_data_057ac5ba == '\0') {
    uStack_20 = 0x40c816f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40c817b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40c819a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40c81ac;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.z = fVar2;
    return;
  }
  uStack_20 = 0x40c81c3;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (__v != (Il2CppObject *)0x0) {
    uStack_20 = CONCAT44(*(undefined4 *)((long)&__v[3].monitor + 4),(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__v != (Il2CppObject *)0x0) {
    *(float *)((long)&__v[3].monitor + 4) = fVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj != (MethodInfo *)0x0) {
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&obj->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((obj != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar4.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar4.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar4.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar4,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&obj->parameters = UVar3.fields;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),method_00);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c81d0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.w = fVar4;
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)&method->parameters,
                       (MethodInfo *)0x0);
    euler.fields.x = UVar6.fields.x * 57.29578;
    euler.fields.y = UVar6.fields.y * 57.29578;
    euler.fields.z = UVar6.fields.z * 57.29578;
    UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar6,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((method != (MethodInfo *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar6.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar6.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar6.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar6,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)&method->parameters = UVar5.fields;
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40c8200

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float fVar2;
  Il2CppObject IVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ac5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.w = fVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__v != (Il2CppObject *)0x0) {
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(__v + 3),(MethodInfo *)0x0
                      );
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((__v != (Il2CppObject *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    UVar4.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    UVar4.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    UVar4.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    IVar3 = (Il2CppObject)UnityEngine_Quaternion__Internal_FromEulerRad(UVar4,(MethodInfo *)0x0);
    __v[3] = IVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),method_00);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c8280

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  UnityEngine_Quaternion_Fields UVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)(__i->fields).Value.fields,(MethodInfo *)0x0);
    euler.fields.x = UVar5.fields.x * 57.29578;
    euler.fields.y = UVar5.fields.y * 57.29578;
    euler.fields.z = UVar5.fields.z * 57.29578;
    UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar5,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
    UVar5.fields.x = SUB84(pIVar2[3].klass,0) * 0.017453292;
    UVar5.fields.y = (float)((ulong)pIVar2[3].klass >> 0x20) * 0.017453292;
    UVar5.fields.z = *(float *)&pIVar2[3].monitor * 0.017453292;
    UVar4 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad(UVar5,(MethodInfo *)0x0);
    (__i->fields).Value.fields = UVar4;
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    method = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      method);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40c82c0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ac5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac5bc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if ((__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
    euler.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    euler.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    euler.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar2 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    (__i->fields).Value.fields = UVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    __v = (Il2CppObject *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)__v);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Identity>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x40c8360

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (g_data_057a6843 == '\0') {
    __i = (CustomLogic_CustomLogicQuaternionBuiltin_o *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      (MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c49c0

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (g_data_057ac597 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac597 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float x, float y, float z, float w, const MethodInfo* method);
// 0x40c4a50

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4a50
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float x,float y,float z,float w,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (g_data_057ac598 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac598 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  (__this->fields).Value.fields.w = w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
// 0x40c4b20

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,UnityEngine_Quaternion_o value,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float fStack_24;
  
  if (g_data_057ac599 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac599 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28 = value.fields.x;
  fStack_24 = value.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = value.fields.z;
  (__this->fields).Value.fields.w = value.fields.w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_X
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c4bc0

float CustomLogic_CustomLogicQuaternionBuiltin__get_X
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.x;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_X
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40c4bd0

void CustomLogic_CustomLogicQuaternionBuiltin__set_X
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Y
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c4be0

float CustomLogic_CustomLogicQuaternionBuiltin__get_Y
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.y;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Y
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40c4bf0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Y
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Z
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c4c00

float CustomLogic_CustomLogicQuaternionBuiltin__get_Z
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.z;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Z
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40c4c10

void CustomLogic_CustomLogicQuaternionBuiltin__set_Z
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.z = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_W
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c4c20

float CustomLogic_CustomLogicQuaternionBuiltin__get_W
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.w;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_W
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40c4c30

void CustomLogic_CustomLogicQuaternionBuiltin__set_W
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.w = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Euler
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c4c40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Euler
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad
                    ((UnityEngine_Quaternion_o)(__this->fields).Value.fields,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_3fd35b0(UVar2,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Euler
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x40c4c70

void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Quaternion_Fields UVar3;
  UnityEngine_Vector3_o euler;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (value->fields).Value.fields.x;
    uVar2 = (value->fields).Value.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (value->fields).Value.fields.z * 0.017453292;
    UVar3 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    (__this->fields).Value.fields = UVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6843 == '\0') {
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
            ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)__this);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Identity
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Identity (const MethodInfo* method);
// 0x40c4cb0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Identity(MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (g_data_057a6843 == '\0') {
    method = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                     ((UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                      method);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Lerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x40c4dc0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Lerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o fromDirection;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o upwards;
  UnityEngine_Vector3_o toDirection;
  float fVar17;
  UnityEngine_Quaternion_Fields a_00;
  UnityEngine_Quaternion_Fields b_00;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar20;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar22;
  float fVar23;
  float angle;
  UnityEngine_Quaternion_o UVar24;
  UnityEngine_Vector3_o euler;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Lerp
                       ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__LerpUnclamped
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Slerp
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__SlerpUnclamped
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    uVar2 = *(float *)&((MethodInfo *)a)->parameters;
    uVar9 = *(float *)((long)&((MethodInfo *)a)->parameters + 4);
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar9 * 0.017453292;
    euler.fields.z = *(float *)&((MethodInfo *)a)->field7_0x38 * 0.017453292;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = b;
  pMVar21 = (MethodInfo *)a;
  if (g_data_057ac59a == '\0') {
    pMVar21 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pUVar1 = (UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters;
    forward_00.fields.x = (pUVar1->fields).x;
    forward_00.fields.y = (pUVar1->fields).y;
    forward_00.fields.z = (pUVar1->fields).z;
    forward.fields.x = (pUVar1->fields).x;
    forward.fields.y = (pUVar1->fields).y;
    forward.fields.z = (pUVar1->fields).z;
    if (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      UVar24 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    else {
      upwards.fields.x = (b->fields).Value.fields.x;
      upwards.fields.y = (b->fields).Value.fields.y;
      upwards.fields.z = (b->fields).Value.fields.z;
      UVar24 = UnityEngine_Quaternion__LookRotation(forward,upwards,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar16 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar12 = pfVar16[1];
    fVar23 = pfVar16[2];
    fVar17 = pfVar16[3];
    (pCVar18->fields).Value.fields.x = *pfVar16;
    (pCVar18->fields).Value.fields.y = fVar12;
    (pCVar18->fields).Value.fields.z = fVar23;
    (pCVar18->fields).Value.fields.w = fVar17;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar18,(MethodInfo *)0x0);
    (pCVar18->fields).Value.fields.x = fVar22;
    (pCVar18->fields).Value.fields.y = fVar4;
    (pCVar18->fields).Value.fields.z = fVar5;
    (pCVar18->fields).Value.fields.w = fVar11;
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    fromDirection.fields.x = *(float *)&pMVar21->parameters;
    fromDirection.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    fromDirection.fields.z = *(float *)&pMVar21->field7_0x38;
    toDirection.fields.x = (pCVar18->fields).Value.fields.x;
    toDirection.fields.y = (pCVar18->fields).Value.fields.y;
    toDirection.fields.z = (pCVar18->fields).Value.fields.z;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__FromToRotation(fromDirection,toDirection,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Inverse
                       (((UnityEngine_Quaternion_o *)&pMVar21->parameters)->fields,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,method_00);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pUVar1 = (UnityEngine_Quaternion_o *)&pMVar21->parameters;
    uVar3 = (pUVar1->fields).x;
    uVar10 = (pUVar1->fields).y;
    a_00 = pUVar1->fields;
    pUVar1 = &(pCVar18->fields).Value;
    fVar4 = (pUVar1->fields).x;
    fVar11 = (pUVar1->fields).y;
    fVar5 = (pCVar18->fields).Value.fields.z;
    fVar12 = (pCVar18->fields).Value.fields.w;
    q = pUVar1->fields;
    b_00 = pUVar1->fields;
    fVar23 = ABS(SUB84(pMVar21->field7_0x38,4) * fVar12 +
                 (float)uVar10 * fVar11 + (float)uVar3 * fVar4 + SUB84(pMVar21->field7_0x38,0) * fVar5);
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    if (fVar23 <= 0.999999) {
      fVar4 = acosf(fVar23);
      fVar4 = (fVar4 + fVar4) * 57.29578;
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                            ((UnityEngine_Quaternion_o)q,pMVar21);
        return pCVar18;
      }
      fVar5 = 1.0;
      if (fVar22 / fVar4 <= 1.0) {
        fVar5 = fVar22 / fVar4;
      }
      pMVar21 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar5,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar12 = UVar24.fields.w;
      fVar4 = UVar24.fields.x;
      fVar11 = UVar24.fields.y;
    }
    UVar24.fields.y = fVar11;
    UVar24.fields.x = fVar4;
    UVar24.fields.w = fVar12;
    UVar24.fields.z = fVar5;
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    axis.fields.x = *(float *)&pMVar21->parameters;
    axis.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    axis.fields.z = *(float *)&pMVar21->field7_0x38;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  pCVar20 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar6 = *(float *)&pMVar21->parameters;
    uVar13 = *(float *)((long)&pMVar21->parameters + 4);
    uVar7 = (pCVar18->fields).Value.fields.x;
    uVar14 = (pCVar18->fields).Value.fields.y;
    uVar8 = (pCVar18->fields).Value.fields.z;
    uVar15 = (pCVar18->fields).Value.fields.w;
    fVar22 = ABS((float)uVar15 * SUB84(pMVar21->field7_0x38,4) +
                 (float)uVar14 * (float)uVar13 + (float)uVar7 * (float)uVar6 +
                 (float)uVar8 * SUB84(pMVar21->field7_0x38,0));
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.999999) {
      acosf(fVar22);
    }
    return pCVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Quaternion_o *)&pMVar21->parameters,0,0,0,in_R8,in_R9,uVar19);
  return pCVar18;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x40c4e00

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o fromDirection;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o upwards;
  UnityEngine_Vector3_o toDirection;
  float fVar17;
  UnityEngine_Quaternion_Fields a_00;
  UnityEngine_Quaternion_Fields b_00;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar20;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar22;
  float fVar23;
  float angle;
  UnityEngine_Quaternion_o UVar24;
  UnityEngine_Vector3_o euler;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__LerpUnclamped
                       ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Slerp
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__SlerpUnclamped
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    uVar2 = *(float *)&((MethodInfo *)a)->parameters;
    uVar9 = *(float *)((long)&((MethodInfo *)a)->parameters + 4);
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar9 * 0.017453292;
    euler.fields.z = *(float *)&((MethodInfo *)a)->field7_0x38 * 0.017453292;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = b;
  pMVar21 = (MethodInfo *)a;
  if (g_data_057ac59a == '\0') {
    pMVar21 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pUVar1 = (UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters;
    forward_00.fields.x = (pUVar1->fields).x;
    forward_00.fields.y = (pUVar1->fields).y;
    forward_00.fields.z = (pUVar1->fields).z;
    forward.fields.x = (pUVar1->fields).x;
    forward.fields.y = (pUVar1->fields).y;
    forward.fields.z = (pUVar1->fields).z;
    if (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      UVar24 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    else {
      upwards.fields.x = (b->fields).Value.fields.x;
      upwards.fields.y = (b->fields).Value.fields.y;
      upwards.fields.z = (b->fields).Value.fields.z;
      UVar24 = UnityEngine_Quaternion__LookRotation(forward,upwards,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar16 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar12 = pfVar16[1];
    fVar23 = pfVar16[2];
    fVar17 = pfVar16[3];
    (pCVar18->fields).Value.fields.x = *pfVar16;
    (pCVar18->fields).Value.fields.y = fVar12;
    (pCVar18->fields).Value.fields.z = fVar23;
    (pCVar18->fields).Value.fields.w = fVar17;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar18,(MethodInfo *)0x0);
    (pCVar18->fields).Value.fields.x = fVar22;
    (pCVar18->fields).Value.fields.y = fVar4;
    (pCVar18->fields).Value.fields.z = fVar5;
    (pCVar18->fields).Value.fields.w = fVar11;
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    fromDirection.fields.x = *(float *)&pMVar21->parameters;
    fromDirection.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    fromDirection.fields.z = *(float *)&pMVar21->field7_0x38;
    toDirection.fields.x = (pCVar18->fields).Value.fields.x;
    toDirection.fields.y = (pCVar18->fields).Value.fields.y;
    toDirection.fields.z = (pCVar18->fields).Value.fields.z;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__FromToRotation(fromDirection,toDirection,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Inverse
                       (((UnityEngine_Quaternion_o *)&pMVar21->parameters)->fields,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,method_00);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pUVar1 = (UnityEngine_Quaternion_o *)&pMVar21->parameters;
    uVar3 = (pUVar1->fields).x;
    uVar10 = (pUVar1->fields).y;
    a_00 = pUVar1->fields;
    pUVar1 = &(pCVar18->fields).Value;
    fVar4 = (pUVar1->fields).x;
    fVar11 = (pUVar1->fields).y;
    fVar5 = (pCVar18->fields).Value.fields.z;
    fVar12 = (pCVar18->fields).Value.fields.w;
    q = pUVar1->fields;
    b_00 = pUVar1->fields;
    fVar23 = ABS(SUB84(pMVar21->field7_0x38,4) * fVar12 +
                 (float)uVar10 * fVar11 + (float)uVar3 * fVar4 + SUB84(pMVar21->field7_0x38,0) * fVar5);
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    if (fVar23 <= 0.999999) {
      fVar4 = acosf(fVar23);
      fVar4 = (fVar4 + fVar4) * 57.29578;
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                            ((UnityEngine_Quaternion_o)q,pMVar21);
        return pCVar18;
      }
      fVar5 = 1.0;
      if (fVar22 / fVar4 <= 1.0) {
        fVar5 = fVar22 / fVar4;
      }
      pMVar21 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar5,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar12 = UVar24.fields.w;
      fVar4 = UVar24.fields.x;
      fVar11 = UVar24.fields.y;
    }
    UVar24.fields.y = fVar11;
    UVar24.fields.x = fVar4;
    UVar24.fields.w = fVar12;
    UVar24.fields.z = fVar5;
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    axis.fields.x = *(float *)&pMVar21->parameters;
    axis.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    axis.fields.z = *(float *)&pMVar21->field7_0x38;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  pCVar20 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar6 = *(float *)&pMVar21->parameters;
    uVar13 = *(float *)((long)&pMVar21->parameters + 4);
    uVar7 = (pCVar18->fields).Value.fields.x;
    uVar14 = (pCVar18->fields).Value.fields.y;
    uVar8 = (pCVar18->fields).Value.fields.z;
    uVar15 = (pCVar18->fields).Value.fields.w;
    fVar22 = ABS((float)uVar15 * SUB84(pMVar21->field7_0x38,4) +
                 (float)uVar14 * (float)uVar13 + (float)uVar7 * (float)uVar6 +
                 (float)uVar8 * SUB84(pMVar21->field7_0x38,0));
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.999999) {
      acosf(fVar22);
    }
    return pCVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Quaternion_o *)&pMVar21->parameters,0,0,0,in_R8,in_R9,uVar19);
  return pCVar18;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Slerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Slerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x40c4e40

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Slerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o fromDirection;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o upwards;
  UnityEngine_Vector3_o toDirection;
  float fVar17;
  UnityEngine_Quaternion_Fields a_00;
  UnityEngine_Quaternion_Fields b_00;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar20;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar22;
  float fVar23;
  float angle;
  UnityEngine_Quaternion_o UVar24;
  UnityEngine_Vector3_o euler;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Slerp
                       ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__SlerpUnclamped
                       (((UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters)->fields,
                        (b->fields).Value.fields,fVar22,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    uVar2 = *(float *)&((MethodInfo *)a)->parameters;
    uVar9 = *(float *)((long)&((MethodInfo *)a)->parameters + 4);
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar9 * 0.017453292;
    euler.fields.z = *(float *)&((MethodInfo *)a)->field7_0x38 * 0.017453292;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = b;
  pMVar21 = (MethodInfo *)a;
  if (g_data_057ac59a == '\0') {
    pMVar21 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pUVar1 = (UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters;
    forward_00.fields.x = (pUVar1->fields).x;
    forward_00.fields.y = (pUVar1->fields).y;
    forward_00.fields.z = (pUVar1->fields).z;
    forward.fields.x = (pUVar1->fields).x;
    forward.fields.y = (pUVar1->fields).y;
    forward.fields.z = (pUVar1->fields).z;
    if (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      UVar24 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    else {
      upwards.fields.x = (b->fields).Value.fields.x;
      upwards.fields.y = (b->fields).Value.fields.y;
      upwards.fields.z = (b->fields).Value.fields.z;
      UVar24 = UnityEngine_Quaternion__LookRotation(forward,upwards,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar16 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar12 = pfVar16[1];
    fVar23 = pfVar16[2];
    fVar17 = pfVar16[3];
    (pCVar18->fields).Value.fields.x = *pfVar16;
    (pCVar18->fields).Value.fields.y = fVar12;
    (pCVar18->fields).Value.fields.z = fVar23;
    (pCVar18->fields).Value.fields.w = fVar17;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar18,(MethodInfo *)0x0);
    (pCVar18->fields).Value.fields.x = fVar22;
    (pCVar18->fields).Value.fields.y = fVar4;
    (pCVar18->fields).Value.fields.z = fVar5;
    (pCVar18->fields).Value.fields.w = fVar11;
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    fromDirection.fields.x = *(float *)&pMVar21->parameters;
    fromDirection.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    fromDirection.fields.z = *(float *)&pMVar21->field7_0x38;
    toDirection.fields.x = (pCVar18->fields).Value.fields.x;
    toDirection.fields.y = (pCVar18->fields).Value.fields.y;
    toDirection.fields.z = (pCVar18->fields).Value.fields.z;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__FromToRotation(fromDirection,toDirection,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Inverse
                       (((UnityEngine_Quaternion_o *)&pMVar21->parameters)->fields,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,method_00);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pUVar1 = (UnityEngine_Quaternion_o *)&pMVar21->parameters;
    uVar3 = (pUVar1->fields).x;
    uVar10 = (pUVar1->fields).y;
    a_00 = pUVar1->fields;
    pUVar1 = &(pCVar18->fields).Value;
    fVar4 = (pUVar1->fields).x;
    fVar11 = (pUVar1->fields).y;
    fVar5 = (pCVar18->fields).Value.fields.z;
    fVar12 = (pCVar18->fields).Value.fields.w;
    q = pUVar1->fields;
    b_00 = pUVar1->fields;
    fVar23 = ABS(SUB84(pMVar21->field7_0x38,4) * fVar12 +
                 (float)uVar10 * fVar11 + (float)uVar3 * fVar4 + SUB84(pMVar21->field7_0x38,0) * fVar5);
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    if (fVar23 <= 0.999999) {
      fVar4 = acosf(fVar23);
      fVar4 = (fVar4 + fVar4) * 57.29578;
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                            ((UnityEngine_Quaternion_o)q,pMVar21);
        return pCVar18;
      }
      fVar5 = 1.0;
      if (fVar22 / fVar4 <= 1.0) {
        fVar5 = fVar22 / fVar4;
      }
      pMVar21 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar5,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar12 = UVar24.fields.w;
      fVar4 = UVar24.fields.x;
      fVar11 = UVar24.fields.y;
    }
    UVar24.fields.y = fVar11;
    UVar24.fields.x = fVar4;
    UVar24.fields.w = fVar12;
    UVar24.fields.z = fVar5;
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    axis.fields.x = *(float *)&pMVar21->parameters;
    axis.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    axis.fields.z = *(float *)&pMVar21->field7_0x38;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  pCVar20 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar6 = *(float *)&pMVar21->parameters;
    uVar13 = *(float *)((long)&pMVar21->parameters + 4);
    uVar7 = (pCVar18->fields).Value.fields.x;
    uVar14 = (pCVar18->fields).Value.fields.y;
    uVar8 = (pCVar18->fields).Value.fields.z;
    uVar15 = (pCVar18->fields).Value.fields.w;
    fVar22 = ABS((float)uVar15 * SUB84(pMVar21->field7_0x38,4) +
                 (float)uVar14 * (float)uVar13 + (float)uVar7 * (float)uVar6 +
                 (float)uVar8 * SUB84(pMVar21->field7_0x38,0));
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.999999) {
      acosf(fVar22);
    }
    return pCVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Quaternion_o *)&pMVar21->parameters,0,0,0,in_R8,in_R9,uVar19);
  return pCVar18;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x40c4e80

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o fromDirection;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o upwards;
  UnityEngine_Vector3_o toDirection;
  float fVar17;
  UnityEngine_Quaternion_Fields a_00;
  UnityEngine_Quaternion_Fields b_00;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar20;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar22;
  float fVar23;
  float angle;
  UnityEngine_Quaternion_o UVar24;
  UnityEngine_Vector3_o euler;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__SlerpUnclamped
                       ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    uVar2 = *(float *)&((MethodInfo *)a)->parameters;
    uVar9 = *(float *)((long)&((MethodInfo *)a)->parameters + 4);
    euler.fields.x = (float)uVar2 * 0.017453292;
    euler.fields.y = (float)uVar9 * 0.017453292;
    euler.fields.z = *(float *)&((MethodInfo *)a)->field7_0x38 * 0.017453292;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = b;
  pMVar21 = (MethodInfo *)a;
  if (g_data_057ac59a == '\0') {
    pMVar21 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pUVar1 = (UnityEngine_Quaternion_o *)&((MethodInfo *)a)->parameters;
    forward_00.fields.x = (pUVar1->fields).x;
    forward_00.fields.y = (pUVar1->fields).y;
    forward_00.fields.z = (pUVar1->fields).z;
    forward.fields.x = (pUVar1->fields).x;
    forward.fields.y = (pUVar1->fields).y;
    forward.fields.z = (pUVar1->fields).z;
    if (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      UVar24 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    else {
      upwards.fields.x = (b->fields).Value.fields.x;
      upwards.fields.y = (b->fields).Value.fields.y;
      upwards.fields.z = (b->fields).Value.fields.z;
      UVar24 = UnityEngine_Quaternion__LookRotation(forward,upwards,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar11 = UVar24.fields.w;
      fVar22 = UVar24.fields.x;
      fVar4 = UVar24.fields.y;
    }
    pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar16 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar12 = pfVar16[1];
    fVar23 = pfVar16[2];
    fVar17 = pfVar16[3];
    (pCVar18->fields).Value.fields.x = *pfVar16;
    (pCVar18->fields).Value.fields.y = fVar12;
    (pCVar18->fields).Value.fields.z = fVar23;
    (pCVar18->fields).Value.fields.w = fVar17;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar18,(MethodInfo *)0x0);
    (pCVar18->fields).Value.fields.x = fVar22;
    (pCVar18->fields).Value.fields.y = fVar4;
    (pCVar18->fields).Value.fields.z = fVar5;
    (pCVar18->fields).Value.fields.w = fVar11;
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    fromDirection.fields.x = *(float *)&pMVar21->parameters;
    fromDirection.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    fromDirection.fields.z = *(float *)&pMVar21->field7_0x38;
    toDirection.fields.x = (pCVar18->fields).Value.fields.x;
    toDirection.fields.y = (pCVar18->fields).Value.fields.y;
    toDirection.fields.z = (pCVar18->fields).Value.fields.z;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__FromToRotation(fromDirection,toDirection,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__Inverse
                       (((UnityEngine_Quaternion_o *)&pMVar21->parameters)->fields,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,method_00);
    return pCVar18;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pUVar1 = (UnityEngine_Quaternion_o *)&pMVar21->parameters;
    uVar3 = (pUVar1->fields).x;
    uVar10 = (pUVar1->fields).y;
    a_00 = pUVar1->fields;
    pUVar1 = &(pCVar18->fields).Value;
    fVar4 = (pUVar1->fields).x;
    fVar11 = (pUVar1->fields).y;
    fVar5 = (pCVar18->fields).Value.fields.z;
    fVar12 = (pCVar18->fields).Value.fields.w;
    q = pUVar1->fields;
    b_00 = pUVar1->fields;
    fVar23 = ABS(SUB84(pMVar21->field7_0x38,4) * fVar12 +
                 (float)uVar10 * fVar11 + (float)uVar3 * fVar4 + SUB84(pMVar21->field7_0x38,0) * fVar5);
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    if (fVar23 <= 0.999999) {
      fVar4 = acosf(fVar23);
      fVar4 = (fVar4 + fVar4) * 57.29578;
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                            ((UnityEngine_Quaternion_o)q,pMVar21);
        return pCVar18;
      }
      fVar5 = 1.0;
      if (fVar22 / fVar4 <= 1.0) {
        fVar5 = fVar22 / fVar4;
      }
      pMVar21 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Quaternion__SlerpUnclamped(a_00,b_00,fVar5,(MethodInfo *)0x0);
      fVar5 = UVar24.fields.z;
      fVar12 = UVar24.fields.w;
      fVar4 = UVar24.fields.x;
      fVar11 = UVar24.fields.y;
    }
    UVar24.fields.y = fVar11;
    UVar24.fields.x = fVar4;
    UVar24.fields.w = fVar12;
    UVar24.fields.z = fVar5;
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  if (pMVar21 != (MethodInfo *)0x0) {
    axis.fields.x = *(float *)&pMVar21->parameters;
    axis.fields.y = *(float *)((long)&pMVar21->parameters + 4);
    axis.fields.z = *(float *)&pMVar21->field7_0x38;
    pMVar21 = (MethodInfo *)0x0;
    UVar24 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar24,pMVar21);
    return pCVar18;
  }
  pCVar20 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar21 != (MethodInfo *)0x0) && (pCVar18 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar6 = *(float *)&pMVar21->parameters;
    uVar13 = *(float *)((long)&pMVar21->parameters + 4);
    uVar7 = (pCVar18->fields).Value.fields.x;
    uVar14 = (pCVar18->fields).Value.fields.y;
    uVar8 = (pCVar18->fields).Value.fields.z;
    uVar15 = (pCVar18->fields).Value.fields.w;
    fVar22 = ABS((float)uVar15 * SUB84(pMVar21->field7_0x38,4) +
                 (float)uVar14 * (float)uVar13 + (float)uVar7 * (float)uVar6 +
                 (float)uVar8 * SUB84(pMVar21->field7_0x38,0));
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.999999) {
      acosf(fVar22);
    }
    return pCVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Quaternion_o *)&pMVar21->parameters,0,0,0,in_R8,in_R9,uVar19);
  return pCVar18;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromEuler
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromEuler (CustomLogic_CustomLogicVector3Builtin_o* euler, const MethodInfo* method);
// 0x40c4ec0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromEuler
          (CustomLogic_CustomLogicVector3Builtin_o *euler,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  Il2CppType ***pppIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar11;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar14;
  float fVar15;
  float fVar16;
  float angle;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Vector3_o euler_00;
  
  if (euler != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar3 = (euler->fields).Value.fields.x;
    uVar6 = (euler->fields).Value.fields.y;
    euler_00.fields.x = (float)uVar3 * 0.017453292;
    euler_00.fields.y = (float)uVar6 * 0.017453292;
    euler_00.fields.z = (euler->fields).Value.fields.z * 0.017453292;
    pMVar13 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__Internal_FromEulerRad(euler_00,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar13);
    return pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = method;
  method_00 = (MethodInfo *)euler;
  if (g_data_057ac59a == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if ((MethodInfo *)euler != (MethodInfo *)0x0) {
    if (method == (MethodInfo *)0x0) {
      UVar20 = UnityEngine_Quaternion__LookRotation_4debb20
                         ((UnityEngine_Vector3_o)
                          ((UnityEngine_Vector3_o *)&((MethodInfo *)euler)->parameters)->fields,
                          (MethodInfo *)0x0);
      fVar16 = UVar20.fields.z;
      fVar17 = UVar20.fields.w;
      fVar14 = UVar20.fields.x;
      fVar15 = UVar20.fields.y;
    }
    else {
      UVar20 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)
                          ((UnityEngine_Vector3_o *)&((MethodInfo *)euler)->parameters)->fields,
                          (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                          (MethodInfo *)0x0);
      fVar16 = UVar20.fields.z;
      fVar17 = UVar20.fields.w;
      fVar14 = UVar20.fields.x;
      fVar15 = UVar20.fields.y;
    }
    pCVar11 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar9 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar18 = pfVar9[1];
    fVar19 = pfVar9[2];
    fVar10 = pfVar9[3];
    (pCVar11->fields).Value.fields.x = *pfVar9;
    (pCVar11->fields).Value.fields.y = fVar18;
    (pCVar11->fields).Value.fields.z = fVar19;
    (pCVar11->fields).Value.fields.w = fVar10;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar11,(MethodInfo *)0x0);
    (pCVar11->fields).Value.fields.x = fVar14;
    (pCVar11->fields).Value.fields.y = fVar15;
    (pCVar11->fields).Value.fields.z = fVar16;
    (pCVar11->fields).Value.fields.w = fVar17;
    return pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pMVar13 != (MethodInfo *)0x0)) {
    method_01 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__FromToRotation
                       ((UnityEngine_Vector3_o)((UnityEngine_Vector3_o *)&method_00->parameters)->fields,
                        (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&pMVar13->parameters,
                        (MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,method_01);
    return pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__Inverse
                       (*(UnityEngine_Quaternion_Fields *)&method_00->parameters,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar13);
    return pCVar11;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pMVar13 != (MethodInfo *)0x0)) {
    pUVar1 = (UnityEngine_Vector3_o *)&method_00->parameters;
    uVar4 = (pUVar1->fields).x;
    uVar7 = (pUVar1->fields).y;
    UVar20.fields = *(UnityEngine_Quaternion_Fields *)pUVar1;
    pppIVar2 = &pMVar13->parameters;
    fVar16 = SUB84(*pppIVar2,0);
    fVar17 = (float)((ulong)*pppIVar2 >> 0x20);
    q.fields = *(UnityEngine_Quaternion_Fields *)pppIVar2;
    b.fields = *(UnityEngine_Quaternion_Fields *)pppIVar2;
    fVar18 = SUB84(pMVar13->field7_0x38,0);
    fVar19 = SUB84(pMVar13->field7_0x38,4);
    fVar15 = ABS(SUB84(method_00->field7_0x38,4) * fVar19 +
                 (float)uVar7 * fVar17 + (float)uVar4 * fVar16 + SUB84(method_00->field7_0x38,0) * fVar18);
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    if (fVar15 <= 0.999999) {
      fVar15 = acosf(fVar15);
      fVar15 = (fVar15 + fVar15) * 57.29578;
      if ((fVar15 == 0.0) && (!NAN(fVar15))) {
        pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,method_00);
        return pCVar11;
      }
      fVar16 = 1.0;
      if (fVar14 / fVar15 <= 1.0) {
        fVar16 = fVar14 / fVar15;
      }
      method_00 = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Quaternion__SlerpUnclamped(UVar20,b,fVar16,(MethodInfo *)0x0);
      fVar18 = UVar20.fields.z;
      fVar19 = UVar20.fields.w;
      fVar16 = UVar20.fields.x;
      fVar17 = UVar20.fields.y;
    }
    UVar20.fields.y = fVar17;
    UVar20.fields.x = fVar16;
    UVar20.fields.w = fVar19;
    UVar20.fields.z = fVar18;
    pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,method_00);
    return pCVar11;
  }
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__AngleAxis
                       (angle,(UnityEngine_Vector3_o)((UnityEngine_Vector3_o *)&method_00->parameters)->fields
                        ,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar13);
    return pCVar11;
  }
  pCVar11 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pMVar13 != (MethodInfo *)0x0)) {
    uVar5 = *(float *)&method_00->parameters;
    uVar8 = *(float *)((long)&method_00->parameters + 4);
    fVar14 = ABS(SUB84(pMVar13->field7_0x38,4) * SUB84(method_00->field7_0x38,4) +
                 (float)((ulong)pMVar13->parameters >> 0x20) * (float)uVar8 +
                 SUB84(pMVar13->parameters,0) * (float)uVar5 +
                 SUB84(pMVar13->field7_0x38,0) * SUB84(method_00->field7_0x38,0));
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    if (fVar14 <= 0.999999) {
      acosf(fVar14);
    }
    return pCVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar11 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Vector3_o *)&method_00->parameters,0,0,0,in_R8,in_R9,uVar12);
  return pCVar11;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LookRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LookRotation (CustomLogic_CustomLogicVector3Builtin_o* forward, CustomLogic_CustomLogicVector3Builtin_o* upwards, const MethodInfo* method);
// 0x40c4f00

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LookRotation
          (CustomLogic_CustomLogicVector3Builtin_o *forward,CustomLogic_CustomLogicVector3Builtin_o *upwards,
          MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  float fVar11;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar12;
  undefined8 uVar13;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar14;
  MethodInfo *method_00;
  MethodInfo *pMVar15;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar16;
  float fVar17;
  float angle;
  float fVar18;
  float fVar19;
  UnityEngine_Quaternion_o UVar20;
  
  pCVar14 = upwards;
  method_00 = (MethodInfo *)forward;
  if (g_data_057ac59a == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_CustomLogicQuaternionBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac59a = '\x01';
  }
  if (forward != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pUVar1 = &(forward->fields).Value;
    if (upwards == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      UVar20 = UnityEngine_Quaternion__LookRotation_4debb20
                         ((UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
      fVar7 = UVar20.fields.z;
      fVar17 = UVar20.fields.w;
      fVar16 = UVar20.fields.x;
      fVar3 = UVar20.fields.y;
    }
    else {
      UVar20 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)pUVar1->fields,
                          (UnityEngine_Vector3_o)(upwards->fields).Value.fields,(MethodInfo *)0x0);
      fVar7 = UVar20.fields.z;
      fVar17 = UVar20.fields.w;
      fVar16 = UVar20.fields.x;
      fVar3 = UVar20.fields.y;
    }
    pCVar12 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
    if (g_data_057ac599 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac599 = '\x01';
    }
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    pfVar10 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar18 = pfVar10[1];
    fVar19 = pfVar10[2];
    fVar11 = pfVar10[3];
    (pCVar12->fields).Value.fields.x = *pfVar10;
    (pCVar12->fields).Value.fields.y = fVar18;
    (pCVar12->fields).Value.fields.z = fVar19;
    (pCVar12->fields).Value.fields.w = fVar11;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar12,(MethodInfo *)0x0);
    (pCVar12->fields).Value.fields.x = fVar16;
    (pCVar12->fields).Value.fields.y = fVar3;
    (pCVar12->fields).Value.fields.z = fVar7;
    (pCVar12->fields).Value.fields.w = fVar17;
    return pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pCVar14 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pMVar15 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__FromToRotation
                       ((UnityEngine_Vector3_o)((UnityEngine_Vector3_o *)&method_00->parameters)->fields,
                        (UnityEngine_Vector3_o)(pCVar14->fields).Value.fields,(MethodInfo *)0x0);
    pCVar12 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar15);
    return pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar15 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__Inverse
                       (*(UnityEngine_Quaternion_Fields *)&method_00->parameters,(MethodInfo *)0x0);
    pCVar12 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar15);
    return pCVar12;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pCVar14 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pUVar1 = (UnityEngine_Vector3_o *)&method_00->parameters;
    uVar2 = (pUVar1->fields).x;
    uVar6 = (pUVar1->fields).y;
    UVar20.fields = *(UnityEngine_Quaternion_Fields *)pUVar1;
    pUVar1 = &(pCVar14->fields).Value;
    fVar3 = (pUVar1->fields).x;
    fVar7 = (pUVar1->fields).y;
    uVar13 = *(undefined8 *)&(pCVar14->fields).Value.fields.z;
    q.fields.x = (pCVar14->fields).Value.fields.x;
    q.fields.y = (pCVar14->fields).Value.fields.y;
    q.fields.z = (pCVar14->fields).Value.fields.z;
    q.fields.w = *(float *)&(pCVar14->fields).field_0x2c;
    b.fields.x = (pCVar14->fields).Value.fields.x;
    b.fields.y = (pCVar14->fields).Value.fields.y;
    b.fields.z = (pCVar14->fields).Value.fields.z;
    b.fields.w = *(float *)&(pCVar14->fields).field_0x2c;
    fVar18 = (float)uVar13;
    fVar19 = (float)((ulong)uVar13 >> 0x20);
    fVar17 = ABS(SUB84(method_00->field7_0x38,4) * fVar19 +
                 (float)uVar6 * fVar7 + (float)uVar2 * fVar3 + SUB84(method_00->field7_0x38,0) * fVar18);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (fVar17 <= 0.999999) {
      fVar3 = acosf(fVar17);
      fVar3 = (fVar3 + fVar3) * 57.29578;
      if ((fVar3 == 0.0) && (!NAN(fVar3))) {
        pCVar12 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,method_00);
        return pCVar12;
      }
      fVar7 = 1.0;
      if (fVar16 / fVar3 <= 1.0) {
        fVar7 = fVar16 / fVar3;
      }
      method_00 = (MethodInfo *)0x0;
      UVar20 = UnityEngine_Quaternion__SlerpUnclamped(UVar20,b,fVar7,(MethodInfo *)0x0);
      fVar18 = UVar20.fields.z;
      fVar19 = UVar20.fields.w;
      fVar3 = UVar20.fields.x;
      fVar7 = UVar20.fields.y;
    }
    UVar20.fields.y = fVar7;
    UVar20.fields.x = fVar3;
    UVar20.fields.w = fVar19;
    UVar20.fields.z = fVar18;
    pCVar12 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,method_00);
    return pCVar12;
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    pMVar15 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__AngleAxis
                       (angle,(UnityEngine_Vector3_o)((UnityEngine_Vector3_o *)&method_00->parameters)->fields
                        ,(MethodInfo *)0x0);
    pCVar12 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,pMVar15);
    return pCVar12;
  }
  pCVar12 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((method_00 != (MethodInfo *)0x0) && (pCVar14 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar4 = *(float *)&method_00->parameters;
    uVar8 = *(float *)((long)&method_00->parameters + 4);
    uVar5 = (pCVar14->fields).Value.fields.x;
    uVar9 = (pCVar14->fields).Value.fields.y;
    uVar13 = *(undefined8 *)&(pCVar14->fields).Value.fields.z;
    fVar16 = ABS((float)((ulong)uVar13 >> 0x20) * SUB84(method_00->field7_0x38,4) +
                 (float)uVar9 * (float)uVar8 + (float)uVar5 * (float)uVar4 +
                 (float)uVar13 * SUB84(method_00->field7_0x38,0));
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    if (fVar16 <= 0.999999) {
      acosf(fVar16);
    }
    return pCVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar12 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Vector3_o *)&method_00->parameters,0,0,0,in_R8,in_R9,uVar13);
  return pCVar12;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromToRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x40c5010

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_Quaternion_o b_00;
  UnityEngine_Quaternion_o q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar10;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar13;
  float __x;
  float angle;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o UVar16;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pMVar12 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_Quaternion__FromToRotation
                       ((UnityEngine_Vector3_o)(a->fields).Value.fields,
                        (UnityEngine_Vector3_o)(b->fields).Value.fields,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,pMVar12);
    return pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_Quaternion__Inverse
                       (*(UnityEngine_Quaternion_Fields *)&((MethodInfo *)a)->parameters,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,pMVar12);
    return pCVar10;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pUVar1 = (UnityEngine_Vector3_o *)&((MethodInfo *)a)->parameters;
    uVar2 = (pUVar1->fields).x;
    uVar6 = (pUVar1->fields).y;
    UVar16.fields = *(UnityEngine_Quaternion_Fields *)pUVar1;
    pUVar1 = &(b->fields).Value;
    fVar3 = (pUVar1->fields).x;
    fVar7 = (pUVar1->fields).y;
    uVar11 = *(undefined8 *)&(b->fields).Value.fields.z;
    q.fields.x = (b->fields).Value.fields.x;
    q.fields.y = (b->fields).Value.fields.y;
    q.fields.z = (b->fields).Value.fields.z;
    q.fields.w = *(float *)&(b->fields).field_0x2c;
    b_00.fields.x = (b->fields).Value.fields.x;
    b_00.fields.y = (b->fields).Value.fields.y;
    b_00.fields.z = (b->fields).Value.fields.z;
    b_00.fields.w = *(float *)&(b->fields).field_0x2c;
    fVar14 = (float)uVar11;
    fVar15 = (float)((ulong)uVar11 >> 0x20);
    __x = ABS(SUB84(((MethodInfo *)a)->field7_0x38,4) * fVar15 +
              (float)uVar6 * fVar7 + (float)uVar2 * fVar3 + SUB84(((MethodInfo *)a)->field7_0x38,0) * fVar14);
    if (1.0 <= __x) {
      __x = 1.0;
    }
    if (__x <= 0.999999) {
      fVar3 = acosf(__x);
      fVar3 = (fVar3 + fVar3) * 57.29578;
      if ((fVar3 == 0.0) && (!NAN(fVar3))) {
        pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,(MethodInfo *)a);
        return pCVar10;
      }
      fVar7 = 1.0;
      if (fVar13 / fVar3 <= 1.0) {
        fVar7 = fVar13 / fVar3;
      }
      a = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      UVar16 = UnityEngine_Quaternion__SlerpUnclamped(UVar16,b_00,fVar7,(MethodInfo *)0x0);
      fVar14 = UVar16.fields.z;
      fVar15 = UVar16.fields.w;
      fVar3 = UVar16.fields.x;
      fVar7 = UVar16.fields.y;
    }
    UVar16.fields.y = fVar7;
    UVar16.fields.x = fVar3;
    UVar16.fields.w = fVar15;
    UVar16.fields.z = fVar14;
    pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,(MethodInfo *)a);
    return pCVar10;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)a != (MethodInfo *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_Quaternion__AngleAxis
                       (angle,(UnityEngine_Vector3_o)
                              ((UnityEngine_Vector3_o *)&((MethodInfo *)a)->parameters)->fields,
                        (MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,pMVar12);
    return pCVar10;
  }
  pCVar10 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)a != (MethodInfo *)0x0) && (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar4 = *(float *)&((MethodInfo *)a)->parameters;
    uVar8 = *(float *)((long)&((MethodInfo *)a)->parameters + 4);
    uVar5 = (b->fields).Value.fields.x;
    uVar9 = (b->fields).Value.fields.y;
    uVar11 = *(undefined8 *)&(b->fields).Value.fields.z;
    fVar13 = ABS((float)((ulong)uVar11 >> 0x20) * SUB84(((MethodInfo *)a)->field7_0x38,4) +
                 (float)uVar9 * (float)uVar8 + (float)uVar5 * (float)uVar4 +
                 (float)uVar11 * SUB84(((MethodInfo *)a)->field7_0x38,0));
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    if (fVar13 <= 0.999999) {
      acosf(fVar13);
    }
    return pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830((UnityEngine_Vector3_o *)&((MethodInfo *)a)->parameters,0,0,0,in_R8,in_R9,uVar11);
  return pCVar10;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Inverse
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Inverse (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x40c5050

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Inverse
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  Il2CppType ***pppIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector3_o axis;
  UnityEngine_Quaternion_Fields a;
  UnityEngine_Quaternion_o q_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar10;
  float fVar11;
  float fVar12;
  float angle;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o UVar16;
  
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pMVar9 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_Quaternion__Inverse((q->fields).Value.fields,(MethodInfo *)0x0);
    pCVar7 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,pMVar9);
    return pCVar7;
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)q != (MethodInfo *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar1 = (UnityEngine_Quaternion_o *)&((MethodInfo *)q)->parameters;
    uVar3 = (pUVar1->fields).x;
    uVar5 = (pUVar1->fields).y;
    a = pUVar1->fields;
    pppIVar2 = &method->parameters;
    fVar12 = SUB84(*pppIVar2,0);
    fVar13 = (float)((ulong)*pppIVar2 >> 0x20);
    q_00.fields = *(UnityEngine_Quaternion_Fields *)pppIVar2;
    UVar16.fields = *(UnityEngine_Quaternion_Fields *)pppIVar2;
    fVar14 = SUB84(method->field7_0x38,0);
    fVar15 = SUB84(method->field7_0x38,4);
    fVar11 = ABS(SUB84(((MethodInfo *)q)->field7_0x38,4) * fVar15 +
                 (float)uVar5 * fVar13 + (float)uVar3 * fVar12 +
                 SUB84(((MethodInfo *)q)->field7_0x38,0) * fVar14);
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.999999) {
      fVar11 = acosf(fVar11);
      fVar11 = (fVar11 + fVar11) * 57.29578;
      if ((fVar11 == 0.0) && (!NAN(fVar11))) {
        pCVar7 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q_00,(MethodInfo *)q);
        return pCVar7;
      }
      fVar12 = 1.0;
      if (fVar10 / fVar11 <= 1.0) {
        fVar12 = fVar10 / fVar11;
      }
      q = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
      UVar16 = UnityEngine_Quaternion__SlerpUnclamped(a,UVar16,fVar12,(MethodInfo *)0x0);
      fVar14 = UVar16.fields.z;
      fVar15 = UVar16.fields.w;
      fVar12 = UVar16.fields.x;
      fVar13 = UVar16.fields.y;
    }
    UVar16.fields.y = fVar13;
    UVar16.fields.x = fVar12;
    UVar16.fields.w = fVar15;
    UVar16.fields.z = fVar14;
    pCVar7 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,(MethodInfo *)q);
    return pCVar7;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)q != (MethodInfo *)0x0) {
    axis.fields.x = *(float *)&((MethodInfo *)q)->parameters;
    axis.fields.y = *(float *)((long)&((MethodInfo *)q)->parameters + 4);
    axis.fields.z = *(float *)&((MethodInfo *)q)->field7_0x38;
    pMVar9 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar7 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar16,pMVar9);
    return pCVar7;
  }
  pCVar7 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if (((MethodInfo *)q != (MethodInfo *)0x0) && (method != (MethodInfo *)0x0)) {
    uVar4 = *(float *)&((MethodInfo *)q)->parameters;
    uVar6 = *(float *)((long)&((MethodInfo *)q)->parameters + 4);
    fVar10 = ABS(SUB84(method->field7_0x38,4) * SUB84(((MethodInfo *)q)->field7_0x38,4) +
                 (float)((ulong)method->parameters >> 0x20) * (float)uVar6 +
                 SUB84(method->parameters,0) * (float)uVar4 +
                 SUB84(method->field7_0x38,0) * SUB84(((MethodInfo *)q)->field7_0x38,0));
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.999999) {
      acosf(fVar10);
    }
    return pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
           il2cpp_runtime_helper_02924830((UnityEngine_Quaternion_o *)&((MethodInfo *)q)->parameters,0,0,0,in_R8,in_R9,uVar8);
  return pCVar7;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards (CustomLogic_CustomLogicQuaternionBuiltin_o* from, CustomLogic_CustomLogicQuaternionBuiltin_o* to, float maxDegreesDelta, const MethodInfo* method);
// 0x40c5080

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards
          (CustomLogic_CustomLogicQuaternionBuiltin_o *from,CustomLogic_CustomLogicQuaternionBuiltin_o *to,
          float maxDegreesDelta,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  UnityEngine_Vector3_o axis;
  UnityEngine_Quaternion_Fields a;
  UnityEngine_Quaternion_Fields b;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar18;
  undefined8 uVar19;
  MethodInfo *method_00;
  undefined8 in_R8;
  undefined8 in_R9;
  float __x;
  float angle;
  UnityEngine_Quaternion_o UVar20;
  
  if ((from != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    pUVar1 = &(from->fields).Value;
    uVar2 = (pUVar1->fields).x;
    uVar10 = (pUVar1->fields).y;
    uVar3 = (from->fields).Value.fields.z;
    uVar11 = (from->fields).Value.fields.w;
    a = pUVar1->fields;
    pUVar1 = &(to->fields).Value;
    fVar4 = (pUVar1->fields).x;
    fVar12 = (pUVar1->fields).y;
    fVar5 = (to->fields).Value.fields.z;
    fVar13 = (to->fields).Value.fields.w;
    q = pUVar1->fields;
    b = pUVar1->fields;
    __x = ABS((float)uVar11 * fVar13 + (float)uVar10 * fVar12 + (float)uVar2 * fVar4 + (float)uVar3 * fVar5);
    if (1.0 <= __x) {
      __x = 1.0;
    }
    if (__x <= 0.999999) {
      fVar4 = acosf(__x);
      fVar4 = (fVar4 + fVar4) * 57.29578;
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0
                            ((UnityEngine_Quaternion_o)q,(MethodInfo *)from);
        return pCVar18;
      }
      fVar5 = 1.0;
      if (maxDegreesDelta / fVar4 <= 1.0) {
        fVar5 = maxDegreesDelta / fVar4;
      }
      from = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
      UVar20 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar5,(MethodInfo *)0x0);
      fVar5 = UVar20.fields.z;
      fVar13 = UVar20.fields.w;
      fVar4 = UVar20.fields.x;
      fVar12 = UVar20.fields.y;
    }
    UVar20.fields.y = fVar12;
    UVar20.fields.x = fVar4;
    UVar20.fields.w = fVar13;
    UVar20.fields.z = fVar5;
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,(MethodInfo *)from);
    return pCVar18;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  if (from != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    axis.fields.x = (from->fields).Value.fields.x;
    axis.fields.y = (from->fields).Value.fields.y;
    axis.fields.z = (from->fields).Value.fields.z;
    method_00 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_Quaternion__AngleAxis(angle,axis,(MethodInfo *)0x0);
    pCVar18 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UVar20,method_00);
    return pCVar18;
  }
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((from != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar6 = (from->fields).Value.fields.x;
    uVar14 = (from->fields).Value.fields.y;
    uVar7 = (from->fields).Value.fields.z;
    uVar15 = (from->fields).Value.fields.w;
    uVar8 = (to->fields).Value.fields.x;
    uVar16 = (to->fields).Value.fields.y;
    uVar9 = (to->fields).Value.fields.z;
    uVar17 = (to->fields).Value.fields.w;
    fVar4 = ABS((float)uVar17 * (float)uVar15 +
                (float)uVar16 * (float)uVar14 + (float)uVar8 * (float)uVar6 + (float)uVar9 * (float)uVar7);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.999999) {
      acosf(fVar4);
    }
    return pCVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
            il2cpp_runtime_helper_02924830(&(from->fields).Value,0,0,0,in_R8,in_R9,uVar19);
  return pCVar18;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$AngleAxis
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis (float angle, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x40c5180

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis
          (float angle,CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar4;
  MethodInfo *method_00;
  float __x;
  UnityEngine_Quaternion_o q;
  
  if (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__AngleAxis
                  (angle,(UnityEngine_Vector3_o)(axis->fields).Value.fields,(MethodInfo *)0x0);
    pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(q,method_00);
    return pCVar4;
  }
  pCVar4 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) && (method != (MethodInfo *)0x0)) {
    uVar1 = (axis->fields).Value.fields.x;
    uVar3 = (axis->fields).Value.fields.y;
    uVar2 = *(undefined8 *)&(axis->fields).Value.fields.z;
    __x = ABS(SUB84(method->field7_0x38,4) * (float)((ulong)uVar2 >> 0x20) +
              (float)((ulong)method->parameters >> 0x20) * (float)uVar3 +
              SUB84(method->parameters,0) * (float)uVar1 + SUB84(method->field7_0x38,0) * (float)uVar2);
    if (1.0 <= __x) {
      __x = 1.0;
    }
    if (__x <= 0.999999) {
      acosf(__x);
    }
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_02924830(&(axis->fields).Value,0,0,0);
  return pCVar4;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Angle
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__Angle (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, const MethodInfo* method);
// 0x40c51b0

float CustomLogic_CustomLogicQuaternionBuiltin__Angle
                (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar1 = (a->fields).Value.fields.x;
    uVar5 = (a->fields).Value.fields.y;
    uVar2 = (a->fields).Value.fields.z;
    uVar6 = (a->fields).Value.fields.w;
    uVar3 = (b->fields).Value.fields.x;
    uVar7 = (b->fields).Value.fields.y;
    uVar4 = (b->fields).Value.fields.z;
    uVar8 = (b->fields).Value.fields.w;
    fVar9 = ABS((float)uVar8 * (float)uVar6 +
                (float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 + (float)uVar4 * (float)uVar2);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    fVar10 = 0.0;
    if (fVar9 <= 0.999999) {
      fVar9 = acosf(fVar9);
      fVar10 = (fVar9 + fVar9) * 57.29578;
    }
    return fVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  fVar9 = (float)il2cpp_runtime_helper_02924830(&(a->fields).Value,0,0,0);
  return fVar9;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__ToString (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c5230

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__ToString
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_02924830(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Copy__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c5240

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Copy__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_c *pCVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (g_data_057ac59b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59b = '\x01';
  }
  pCVar1 = *(CustomLogic_BuiltinClassInstance_c **)&(__this->fields).Value.fields;
  pvVar2 = *(void **)&(__this->fields).Value.fields.z;
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
  if (g_data_057ac599 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac599 = '\x01';
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
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pCVar1;
  __this_00[1].monitor = pvVar2;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Add__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c5310

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Add__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_String_o *pSVar9;
  System_Exception_o *pSVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  long *plVar12;
  Il2CppObject *rhs;
  Il2CppObject *rhs_00;
  Il2CppObject *rhs_01;
  long *extraout_RDX;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o value;
  
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Add__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,self,other,(MethodInfo *)0x0);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Add);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,pIVar11,rhs,(MethodInfo *)0x0);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  if (g_data_057ac59c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac59c = '\x01';
  }
  if (pIVar11 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (((bVar1 <= (pIVar11->klass->_2).naturalAligment) && (rhs_00 != (Il2CppObject *)0x0)) &&
       ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pIVar3 = rhs_00->klass;
      bVar2 = (pIVar3->_2).naturalAligment;
      if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
        goto label_040c566a;
        value = UnityEngine_Quaternion__op_Multiply_4debdf0
                          ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar11 + 3),
                           *(UnityEngine_Vector3_Fields *)(rhs_00 + 3),(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
      }
      else {
        fVar18 = SUB84(pIVar11[3].monitor,0);
        fVar19 = (float)((ulong)pIVar11[3].monitor >> 0x20);
        fVar14 = SUB84(rhs_00[3].klass,0);
        fVar15 = (float)((ulong)rhs_00[3].klass >> 0x20);
        fVar16 = SUB84(rhs_00[3].monitor,0);
        fVar17 = (float)((ulong)rhs_00[3].monitor >> 0x20);
        fVar20 = SUB84(pIVar11[3].klass,0);
        fVar21 = (float)((ulong)pIVar11[3].klass >> 0x20);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
        if (g_data_057ac599 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057ac599 = '\x01';
        }
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        pfVar4 = *(float **)(TypeInfo_Quaternion + 0xb8);
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        (__this_00->fields).Value.fields.x = *pfVar4;
        (__this_00->fields).Value.fields.y = fVar6;
        (__this_00->fields).Value.fields.z = fVar7;
        *(float *)&(__this_00->fields).field_0x2c = fVar8;
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x =
             (fVar16 * fVar21 + fVar20 * fVar17 + fVar19 * fVar14) - fVar18 * fVar15;
        (__this_00->fields).Value.fields.y =
             (fVar14 * fVar18 + fVar21 * fVar17 + fVar19 * fVar15) - fVar20 * fVar16;
        (__this_00->fields).Value.fields.z =
             (fVar20 * fVar15 + fVar18 * fVar17 + fVar19 * fVar16) - fVar21 * fVar14;
        *(float *)&(__this_00->fields).field_0x2c =
             ((fVar17 * fVar19 - fVar20 * fVar14) - fVar15 * fVar21) - fVar18 * fVar16;
      }
      return (Il2CppObject *)__this_00;
    }
  }
label_040c566a:
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,pIVar11,rhs_00,(MethodInfo *)0x0);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,pIVar11,rhs_01,(MethodInfo *)0x0);
  plVar12 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (extraout_RDX != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
      plVar13 = extraout_RDX;
      if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar13 = (long *)0x0;
      }
      if ((((plVar12 != (long *)0x0) && (plVar13 != (long *)0x0)) && (bVar1 <= *(byte *)(*plVar12 + 0x130)))
         && (lVar5 = *(long *)(*plVar12 + 200),
            *(Il2CppClass **)(lVar5 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)lVar5 >> 8),
                        0.999999 <
                        (float)((ulong)plVar13[7] >> 0x20) * (float)((ulong)plVar12[7] >> 0x20) +
                        (float)((ulong)plVar13[6] >> 0x20) * (float)((ulong)plVar12[6] >> 0x20) +
                        (float)plVar12[6] * (float)plVar13[6] + (float)plVar13[7] * (float)plVar12[7]);
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Sub__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c5350

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Sub__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_String_o *pSVar9;
  System_Exception_o *pSVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  long *plVar12;
  Il2CppObject *rhs;
  Il2CppObject *rhs_00;
  long *extraout_RDX;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o value;
  
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,self,other,(MethodInfo *)0x0);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  if (g_data_057ac59c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac59c = '\x01';
  }
  if (pIVar11 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (((bVar1 <= (pIVar11->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
       ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pIVar3 = rhs->klass;
      bVar2 = (pIVar3->_2).naturalAligment;
      if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
        goto label_040c566a;
        value = UnityEngine_Quaternion__op_Multiply_4debdf0
                          ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar11 + 3),
                           *(UnityEngine_Vector3_Fields *)(rhs + 3),(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
      }
      else {
        fVar18 = SUB84(pIVar11[3].monitor,0);
        fVar19 = (float)((ulong)pIVar11[3].monitor >> 0x20);
        fVar14 = SUB84(rhs[3].klass,0);
        fVar15 = (float)((ulong)rhs[3].klass >> 0x20);
        fVar16 = SUB84(rhs[3].monitor,0);
        fVar17 = (float)((ulong)rhs[3].monitor >> 0x20);
        fVar20 = SUB84(pIVar11[3].klass,0);
        fVar21 = (float)((ulong)pIVar11[3].klass >> 0x20);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
        if (g_data_057ac599 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057ac599 = '\x01';
        }
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        pfVar4 = *(float **)(TypeInfo_Quaternion + 0xb8);
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        (__this_00->fields).Value.fields.x = *pfVar4;
        (__this_00->fields).Value.fields.y = fVar6;
        (__this_00->fields).Value.fields.z = fVar7;
        *(float *)&(__this_00->fields).field_0x2c = fVar8;
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x =
             (fVar16 * fVar21 + fVar20 * fVar17 + fVar19 * fVar14) - fVar18 * fVar15;
        (__this_00->fields).Value.fields.y =
             (fVar14 * fVar18 + fVar21 * fVar17 + fVar19 * fVar15) - fVar20 * fVar16;
        (__this_00->fields).Value.fields.z =
             (fVar20 * fVar15 + fVar18 * fVar17 + fVar19 * fVar16) - fVar21 * fVar14;
        *(float *)&(__this_00->fields).field_0x2c =
             ((fVar17 * fVar19 - fVar20 * fVar14) - fVar15 * fVar21) - fVar18 * fVar16;
      }
      return (Il2CppObject *)__this_00;
    }
  }
label_040c566a:
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,pIVar11,rhs,(MethodInfo *)0x0);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,pIVar11,rhs_00,(MethodInfo *)0x0);
  plVar12 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (extraout_RDX != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
      plVar13 = extraout_RDX;
      if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar13 = (long *)0x0;
      }
      if ((((plVar12 != (long *)0x0) && (plVar13 != (long *)0x0)) && (bVar1 <= *(byte *)(*plVar12 + 0x130)))
         && (lVar5 = *(long *)(*plVar12 + 200),
            *(Il2CppClass **)(lVar5 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)lVar5 >> 8),
                        0.999999 <
                        (float)((ulong)plVar13[7] >> 0x20) * (float)((ulong)plVar12[7] >> 0x20) +
                        (float)((ulong)plVar13[6] >> 0x20) * (float)((ulong)plVar12[6] >> 0x20) +
                        (float)plVar12[6] * (float)plVar13[6] + (float)plVar13[7] * (float)plVar12[7]);
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mul__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c5390

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mul__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *pSVar9;
  System_Exception_o *pSVar10;
  Il2CppObject *lhs;
  long *plVar11;
  Il2CppObject *rhs;
  long *extraout_RDX;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ac59c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac59c = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pIVar3 = other->klass;
      bVar2 = (pIVar3->_2).naturalAligment;
      if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
        goto label_040c566a;
        value = UnityEngine_Quaternion__op_Multiply_4debdf0
                          ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(self + 3),
                           *(UnityEngine_Vector3_Fields *)(other + 3),(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
      }
      else {
        fVar17 = SUB84(self[3].monitor,0);
        fVar18 = (float)((ulong)self[3].monitor >> 0x20);
        fVar13 = SUB84(other[3].klass,0);
        fVar14 = (float)((ulong)other[3].klass >> 0x20);
        fVar15 = SUB84(other[3].monitor,0);
        fVar16 = (float)((ulong)other[3].monitor >> 0x20);
        fVar19 = SUB84(self[3].klass,0);
        fVar20 = (float)((ulong)self[3].klass >> 0x20);
        __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0();
        if (g_data_057ac599 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057ac599 = '\x01';
        }
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        pfVar4 = *(float **)(TypeInfo_Quaternion + 0xb8);
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        (__this_00->fields).Value.fields.x = *pfVar4;
        (__this_00->fields).Value.fields.y = fVar6;
        (__this_00->fields).Value.fields.z = fVar7;
        *(float *)&(__this_00->fields).field_0x2c = fVar8;
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x =
             (fVar15 * fVar20 + fVar19 * fVar16 + fVar18 * fVar13) - fVar17 * fVar14;
        (__this_00->fields).Value.fields.y =
             (fVar13 * fVar17 + fVar20 * fVar16 + fVar18 * fVar14) - fVar19 * fVar15;
        (__this_00->fields).Value.fields.z =
             (fVar19 * fVar14 + fVar17 * fVar16 + fVar18 * fVar15) - fVar20 * fVar13;
        *(float *)&(__this_00->fields).field_0x2c =
             ((fVar16 * fVar18 - fVar19 * fVar13) - fVar14 * fVar20) - fVar17 * fVar15;
      }
      return (Il2CppObject *)__this_00;
    }
  }
label_040c566a:
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,self,other,(MethodInfo *)0x0);
  lhs = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar10 = CustomLogic_CustomLogicUtils__OperatorException(pSVar9,lhs,rhs,(MethodInfo *)0x0);
  plVar11 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar10);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (extraout_RDX != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
      plVar12 = extraout_RDX;
      if (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar12 = (long *)0x0;
      }
      if ((((plVar11 != (long *)0x0) && (plVar12 != (long *)0x0)) && (bVar1 <= *(byte *)(*plVar11 + 0x130)))
         && (lVar5 = *(long *)(*plVar11 + 200),
            *(Il2CppClass **)(lVar5 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)lVar5 >> 8),
                        0.999999 <
                        (float)((ulong)plVar12[7] >> 0x20) * (float)((ulong)plVar11[7] >> 0x20) +
                        (float)((ulong)plVar12[6] >> 0x20) * (float)((ulong)plVar11[6] >> 0x20) +
                        (float)plVar11[6] * (float)plVar12[6] + (float)plVar12[7] * (float)plVar11[7]);
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Div__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c56a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Div__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_String_o *operatorName;
  System_Exception_o *pSVar3;
  long *plVar4;
  long *extraout_RDX;
  long *plVar5;
  
  operatorName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar3 = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  plVar4 = (long *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar3);
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (extraout_RDX != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicQuaternionBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*extraout_RDX + 0x130)) {
      plVar5 = extraout_RDX;
      if (*(long *)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicQuaternionBuiltin) {
        plVar5 = (long *)0x0;
      }
      if ((((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) && (bVar1 <= *(byte *)(*plVar4 + 0x130))) &&
         (lVar2 = *(long *)(*plVar4 + 200), *(long *)(lVar2 + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)lVar2 >> 8),
                        0.999999 <
                        (float)((ulong)plVar5[7] >> 0x20) * (float)((ulong)plVar4[7] >> 0x20) +
                        (float)((ulong)plVar5[6] >> 0x20) * (float)((ulong)plVar4[6] >> 0x20) +
                        (float)plVar4[6] * (float)plVar5[6] + (float)plVar5[7] * (float)plVar4[7]);
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin____Eq__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c56e0

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin____Eq__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass **ppIVar2;
  
  if (g_data_057ac59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59d = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= (other->klass->_2).naturalAligment) {
      if ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin) {
        other = (Il2CppObject *)0x0;
      }
      if ((((self != (Il2CppObject *)0x0) && (other != (Il2CppObject *)0x0)) &&
          (bVar1 <= (self->klass->_2).naturalAligment)) &&
         (ppIVar2 = (self->klass->_2).typeHierarchy, ppIVar2[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)ppIVar2 >> 8),
                        0.999999 <
                        (float)((ulong)other[3].monitor >> 0x20) * (float)((ulong)self[3].monitor >> 0x20) +
                        (float)((ulong)other[3].klass >> 0x20) * (float)((ulong)self[3].klass >> 0x20) +
                        SUB84(self[3].klass,0) * SUB84(other[3].klass,0) +
                        SUB84(other[3].monitor,0) * SUB84(self[3].monitor,0));
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c57c0

int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__
                  (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  float __this_02;
  
  uVar1 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__this->fields).Value);
  iVar2 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__this->fields).Value.fields.y);
  iVar3 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__this->fields).Value.fields.z);
  iVar4 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(__this->fields).Value.fields.w);
  return iVar4 >> 1 ^ iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mod__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40c5820

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mod__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *pIVar2;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  if (__this_00 != (System_NotImplementedException_o *)0x0) {
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac59f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    g_data_057ac59f = '\x01';
  }
  return "Quaternion";
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x40c5860

UnityEngine_Quaternion_o
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 in_XMM1_Qa;
  UnityEngine_Quaternion_o UVar2;
  
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    return (UnityEngine_Quaternion_o)(q->fields).Value.fields;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac59f == '\0') {
    uVar1 = il2cpp_runtime_helper_023445d0(&"Quaternion");
    g_data_057ac59f = '\x01';
  }
  UVar2.fields.z = (float)(int)in_XMM1_Qa;
  UVar2.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
  UVar2.fields.x = (float)(int)uVar1;
  UVar2.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  return (UnityEngine_Quaternion_o)UVar2.fields;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (UnityEngine_Quaternion_o q, const MethodInfo* method);
// 0x40c4cf0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_3fc4cf0(UnityEngine_Quaternion_o q,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  float local_28;
  float fStack_24;
  
  if (g_data_057ac59e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    g_data_057ac59e = '\x01';
  }
  __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
  if (g_data_057ac599 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac599 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28 = q.fields.x;
  fStack_24 = q.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = q.fields.z;
  (__this->fields).Value.fields.w = q.fields.w;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c5880

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac59f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    g_data_057ac59f = '\x01';
  }
  return "Quaternion";
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c58b0

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c58c0

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x40c58d0

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


