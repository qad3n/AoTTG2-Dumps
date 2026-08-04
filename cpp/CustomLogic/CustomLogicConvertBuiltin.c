// Type: CustomLogic.CustomLogicConvertBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConvertBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicConvertBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicConvertBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicConvertBuiltin_o* CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4231ee0

CustomLogic_CustomLogicConvertBuiltin_o *
CustomLogic_CustomLogicConvertBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicConvertBuiltin_o *pCVar10;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057adac2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicConvertBuiltin);
    g_data_057adac2 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicConvertBuiltin);
    if (g_data_057adab7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057adab7 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicConvertBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicConvertBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicConvertBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057adac3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"GetType");
    il2cpp_runtime_helper_023445d0(&"DefineVariable");
    il2cpp_runtime_helper_023445d0(&"ToString");
    il2cpp_runtime_helper_023445d0(&"HasVariable");
    il2cpp_runtime_helper_023445d0(&"IsDict");
    il2cpp_runtime_helper_023445d0(&"IsList");
    il2cpp_runtime_helper_023445d0(&"IsInt");
    il2cpp_runtime_helper_023445d0(&"IsBool");
    il2cpp_runtime_helper_023445d0(&"RemoveVariable");
    il2cpp_runtime_helper_023445d0(&"IsString");
    il2cpp_runtime_helper_023445d0(&"IsFloat");
    il2cpp_runtime_helper_023445d0(&"HasMethod");
    il2cpp_runtime_helper_023445d0(&"IsObject");
    il2cpp_runtime_helper_023445d0(&"ToInt");
    il2cpp_runtime_helper_023445d0(&"ToBool");
    il2cpp_runtime_helper_023445d0(&"ToFloat");
    g_data_057adac3 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x54aa9712) {
    if (uVar3 < 0x36ec8533) {
      if (uVar3 < 0x16a60c4e) {
        if (uVar3 == 0xb7c33aa) {
          bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsObject",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_30 = pSStack_28;
            if (g_data_057adacc == '\0') {
              pSStack_28 = (System_ArgumentException_o *)pSVar5;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsObject_b__10_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057adacc = '\x01';
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
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar9);
            }
            pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            return pCVar10;
          }
        }
        else if ((uVar3 == 0x16a60c4d) &&
                (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsBool",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adaca == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsBool_b__8_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adaca = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return pCVar10;
        }
      }
      else if (uVar3 == 0x21b10f16) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"DefineVariable",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adad0 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__DefineVariable_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adad0 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0x36ec8532) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HasMethod",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adad2 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasMethod_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad2 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 < 0x43eb6410) {
      if (uVar3 == 0x42797ce9) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsDict",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adace == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsDict_b__12_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adace = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0x43eb640f) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetType",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adad3 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetType_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad3 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 == 0x45844edd) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"RemoveVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adad1 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveVariable_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad1 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0x54aa9711) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsList",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adacd == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsList_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adacd = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 < 0x7bdd082f) {
    if (uVar3 < 0x7040ed26) {
      if (uVar3 == 0x59fa775c) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToBool",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057adac6 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToBool_b__4_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adac6 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
          }
          pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return pCVar10;
        }
      }
      else if ((uVar3 == 0x7040ed25) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToString",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adac7 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToString_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adac7 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 == 0x72a1342f) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HasVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adacf == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasVariable_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adacf = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0x7bdd082e) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsInt",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adac9 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsInt_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adac9 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 < 0xc34f3929) {
    if (uVar3 == 0xba01fe55) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adac8 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsFloat_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adac8 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0xc34f3928) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsString",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adacb == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsString_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adacb = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 == 0xdfa2d4fd) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToInt",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adac5 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToInt_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adac5 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return pCVar10;
    }
  }
  else if ((uVar3 == 0xc5a73b76) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ToFloat",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppSVar11 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
    goto CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicConvertBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat:
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar11 + -0x10) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar8;
  if (g_data_057adac4 == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x42326f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x4232705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x4232711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x423271d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToFloat_b__2_0);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x4232729;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x423274c;
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar11 + -0x20) = 0x423269b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x42326b7;
    pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x42326d1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x42326eb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x4232772;
  pCVar10 = (CustomLogic_CustomLogicConvertBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x423278a;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4233e10

void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adad5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad5 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x4233e80

void CustomLogic_CustomLogicConvertBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToFloat>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4233e90

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToFloat_b__2_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  undefined4 in_EAX;
  uint uVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  byte *pbVar6;
  float *pfVar7;
  uint *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  CustomLogic_CustomLogicClassInstance_o *pCVar11;
  System_String_o *pSVar12;
  System_String_Fields SVar13;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar14;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long *plVar15;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 uStack_e9;
  System_String_o *pSStack_e8;
  System_String_Fields SStack_e0;
  System_String_o *pSStack_d8;
  undefined8 uStack_d0;
  Il2CppObject *pIStack_c8;
  System_String_Fields SStack_c0;
  long lStack_b8;
  System_String_Fields SStack_b0;
  undefined8 uStack_a0;
  undefined1 uStack_79;
  undefined1 uStack_61;
  undefined1 uStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  float fStack_4;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x4233ec7;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      uStack_10 = 0x4233ea5;
      uStack_8 = in_EAX;
      fVar17 = CustomLogic_CustomLogicConvertBuiltin__ToFloat(__a->m_Items[0],(MethodInfo *)__c);
      _uStack_8 = CONCAT44(fVar17,uStack_8);
      uStack_10 = 0x4233ec0;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_4);
      return pIVar5;
    }
  }
  uStack_10 = 0x4233ecc;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_10 = auVar18._0_8_;
  if (lVar14 == 0) {
    uStack_18 = 0x4233f51;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    pSVar12 = *(System_String_o **)(lVar14 + 0x20);
    uVar3 = 0;
    if (pSVar12 != (System_String_o *)0x0) {
      pIVar2 = (Il2CppClass *)pSVar12->klass;
      if (pIVar2 == g_data_057b9c00) {
        uStack_18 = 0x4233f1d;
        uVar3 = System_Int32__Parse(pSVar12,(MethodInfo *)0x0);
      }
      else if (pIVar2 == g_data_057b9be8) {
        uStack_18 = 0x4233f24;
        pfVar7 = (float *)il2cpp_runtime_helper_02305440();
        uVar3 = (uint)*pfVar7;
      }
      else if (pIVar2 == g_data_057b9bb8) {
        uStack_18 = 0x4233f2f;
        puVar8 = (uint *)il2cpp_runtime_helper_02305440();
        uVar3 = *puVar8;
      }
      else {
        uVar3 = 0;
        if (pIVar2 == g_data_057b9b98) {
          uStack_18 = 0x4233f11;
          pbVar6 = (byte *)il2cpp_runtime_helper_02305440();
          uVar3 = (uint)*pbVar6;
        }
      }
    }
    uStack_10 = CONCAT44(uVar3,(undefined4)uStack_10);
    uStack_18 = 0x4233f4a;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_10 + 4);
    return pIVar5;
  }
  uStack_18 = 0x4233f56;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_18 = auVar18._0_8_;
  if (lVar14 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    bVar4 = CustomLogic_CustomLogicConvertBuiltin__ToBool(*(Il2CppObject **)(lVar14 + 0x20),(MethodInfo *)__c)
    ;
    uStack_18 = CONCAT17((char)bVar4,(undefined7)uStack_18);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    uStack_28 = 0x4234051;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX + 0x20);
    lVar14 = extraout_RDX;
    if (g_data_057adaba == '\0') {
      uStack_28 = 0x4233fcd;
      il2cpp_runtime_helper_023445d0(&"null");
      uStack_28 = 0x4233fd9;
      il2cpp_runtime_helper_023445d0(&"false");
      uStack_28 = 0x4233fe5;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057adaba = '\x01';
      lVar14 = extraout_RDX_00;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      puVar10 = &"null";
    }
    else {
      pIVar2 = pIVar5->klass;
      if (pIVar2 == g_data_057b9c00) {
        return pIVar5;
      }
      if (pIVar2 != g_data_057b9b98) {
        UNRECOVERED_JUMPTABLE_00 = pIVar2->vtable[3].methodPtr;
        pIVar5 = (Il2CppObject *)
                 (*UNRECOVERED_JUMPTABLE_00)(pIVar5,pIVar2->vtable[3].method,lVar14,UNRECOVERED_JUMPTABLE_00);
        return pIVar5;
      }
      uStack_28 = 0x4234035;
      pcVar9 = (char *)il2cpp_runtime_helper_02305440(pIVar5);
      if (*pcVar9 == '\0') {
        puVar10 = &"false";
      }
      else {
        puVar10 = &"true";
      }
    }
    return (Il2CppObject *)*puVar10;
  }
  uStack_28 = 0x4234056;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_28 = auVar18._0_8_;
  if (lVar14 == 0) {
    uStack_30 = 0x42340aa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9be8;
    }
    uStack_28 = CONCAT17(bVar16,auVar18._0_7_);
    uStack_30 = 0x42340a3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar5;
  }
  uStack_30 = 0x42340af;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_30 = auVar18._0_8_;
  if (lVar14 == 0) {
    uStack_38 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9bb8;
    }
    uStack_30 = CONCAT17(bVar16,auVar18._0_7_);
    uStack_38 = 0x42340f3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar5;
  }
  uStack_38 = 0x42340ff;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_38 = auVar18._0_8_;
  if (lVar14 == 0) {
    uStack_40 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9b98;
    }
    uStack_38 = CONCAT17(bVar16,auVar18._0_7_);
    uStack_40 = 0x4234138;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar5;
  }
  uStack_40 = 0x4234144;
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_40 = auVar18._0_8_;
  if (lVar14 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9c00;
    }
    uStack_40 = CONCAT17(bVar16,auVar18._0_7_);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_49 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_49 = false;
label_04234214:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_49);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_02 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_61 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_61 = false;
label_042342a4:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_61);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_03 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_79 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_79 = false;
label_04234334:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_79);
    return pIVar5;
  }
  auVar18 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar18._8_8_;
  uStack_a0 = auVar18._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar15;
  }
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar14 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar11 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar14 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar14 + 0x28);
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar11 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar11,pSVar12,(MethodInfo *)0x0);
          uStack_a0 = CONCAT17((char)bVar4,(undefined7)uStack_a0);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a0 + 7);
          return pIVar5;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_b8 = lVar14;
  SStack_b0 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_c0._stringLength = 0x423445d;
    SStack_c0._firstChar = 0;
    SStack_c0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_c0._stringLength = 0x4234469;
    SStack_c0._firstChar = 0;
    SStack_c0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    SStack_c0._stringLength = 0x4234475;
    SStack_c0._firstChar = 0;
    SStack_c0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar15;
  }
  pIVar5 = extraout_RDX_04;
  if (extraout_RDX_04 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_04[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_04[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_c0._stringLength = 0x42344ab;
        SStack_c0._firstChar = 0;
        SStack_c0._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_c0._stringLength = 0x42344bd;
      SStack_c0._firstChar = 0;
      SStack_c0._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar13 = (System_String_Fields)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_04[1].monitor) {
        obj = extraout_RDX_04[2].monitor;
        SStack_c0._stringLength = 0x42344d9;
        SStack_c0._firstChar = 0;
        SStack_c0._6_2_ = 0;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar13;
        if (2 < *(uint *)&extraout_RDX_04[1].monitor) {
          pIVar5 = (Il2CppObject *)extraout_RDX_04[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_c0._stringLength = 0x42344fb;
            SStack_c0._firstChar = 0;
            SStack_c0._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar12;
          if (SVar13 != (System_String_Fields)0x0) {
            SStack_c0._stringLength = 0x4234514;
            SStack_c0._firstChar = 0;
            SStack_c0._6_2_ = 0;
            bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar13,pSVar12,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar13 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_c0._stringLength = 0x4234536;
              SStack_c0._firstChar = 0;
              SStack_c0._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar13 + 0x18),
                         (Il2CppObject *)pSVar12,pIVar5,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_c0._stringLength = 0x4234543;
    SStack_c0._firstChar = 0;
    SStack_c0._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_c0._stringLength = 0x4234548;
  SStack_c0._firstChar = 0;
  SStack_c0._6_2_ = 0;
  auVar18 = il2cpp_runtime_helper_022b2c90();
  pSVar12 = auVar18._8_8_;
  uStack_d0 = auVar18._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_c8 = pIVar5;
  SStack_c0 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_d8 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_d8 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d8 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar15;
  }
  if (pSVar12 == (System_String_o *)0x0) {
label_04234642:
    pSStack_d8 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_e0 = unaff_R14;
  }
  else {
    SStack_e0 = unaff_R14;
    if (*(int *)&pSVar12[1].klass != 0) {
      SVar13 = (System_String_Fields)pSVar12[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_d8 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_d8 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar13;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar13,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_e0 = SVar13;
      if (1 < *(uint *)&pSVar12[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar12[1].fields;
        pSStack_d8 = (System_String_o *)0x42345e8;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_d8 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_d8 = (System_String_o *)0x4234619;
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar12,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_d8 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar12,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_d8 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar15 = (long *)obj_00;
  pSStack_e8 = pSVar12;
  pSStack_d8 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      plVar15 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar11 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar15,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(extraout_RDX_05 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_e9 = 0;
        }
        else {
          bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar11,pSVar12,(MethodInfo *)0x0);
          uStack_e9 = (undefined1)bVar4;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_e9);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    if (*(int *)(extraout_RDX_06 + 0x18) == 0) goto label_04234826;
    plVar15 = *(long **)(extraout_RDX_06 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar15,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)(pIVar5,pIVar5->klass->vtable[4].method,UNRECOVERED_JUMPTABLE_00);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar15,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToInt>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4233ed0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToInt_b__3_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  undefined4 in_EAX;
  uint uVar3;
  bool_conflict bVar4;
  byte *pbVar5;
  float *pfVar6;
  uint *puVar7;
  Il2CppObject *pIVar8;
  char *pcVar9;
  undefined8 *puVar10;
  CustomLogic_CustomLogicClassInstance_o *pCVar11;
  System_String_o *pSVar12;
  System_String_Fields SVar13;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar14;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long *plVar15;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 uStack_e1;
  System_String_o *pSStack_e0;
  System_String_Fields SStack_d8;
  System_String_o *pSStack_d0;
  undefined8 uStack_c8;
  Il2CppObject *pIStack_c0;
  System_String_Fields SStack_b8;
  long lStack_b0;
  System_String_Fields SStack_a8;
  undefined8 uStack_98;
  undefined1 uStack_71;
  undefined1 uStack_59;
  undefined1 uStack_41;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  undefined4 uStack_8;
  uint uStack_4;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x4233f51;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pSVar12 = (System_String_o *)__a->m_Items[0];
      uVar3 = 0;
      uStack_8 = in_EAX;
      if (pSVar12 != (System_String_o *)0x0) {
        pIVar2 = (Il2CppClass *)pSVar12->klass;
        if (pIVar2 == g_data_057b9c00) {
          uStack_10 = 0x4233f1d;
          uVar3 = System_Int32__Parse(pSVar12,(MethodInfo *)0x0);
        }
        else if (pIVar2 == g_data_057b9be8) {
          uStack_10 = 0x4233f24;
          pfVar6 = (float *)il2cpp_runtime_helper_02305440();
          uVar3 = (uint)*pfVar6;
        }
        else if (pIVar2 == g_data_057b9bb8) {
          uStack_10 = 0x4233f2f;
          puVar7 = (uint *)il2cpp_runtime_helper_02305440();
          uVar3 = *puVar7;
        }
        else {
          uVar3 = 0;
          if (pIVar2 == g_data_057b9b98) {
            uStack_10 = 0x4233f11;
            pbVar5 = (byte *)il2cpp_runtime_helper_02305440();
            uVar3 = (uint)*pbVar5;
          }
        }
      }
      _uStack_8 = CONCAT44(uVar3,uStack_8);
      uStack_10 = 0x4233f4a;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_4);
      return pIVar8;
    }
  }
  uStack_10 = 0x4233f56;
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_10 = auVar17._0_8_;
  if (lVar14 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    bVar4 = CustomLogic_CustomLogicConvertBuiltin__ToBool(*(Il2CppObject **)(lVar14 + 0x20),(MethodInfo *)__c)
    ;
    uStack_10 = CONCAT17((char)bVar4,(undefined7)uStack_10);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    uStack_20 = 0x4234051;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar8 = *(Il2CppObject **)(extraout_RDX + 0x20);
    lVar14 = extraout_RDX;
    if (g_data_057adaba == '\0') {
      uStack_20 = 0x4233fcd;
      il2cpp_runtime_helper_023445d0(&"null");
      uStack_20 = 0x4233fd9;
      il2cpp_runtime_helper_023445d0(&"false");
      uStack_20 = 0x4233fe5;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057adaba = '\x01';
      lVar14 = extraout_RDX_00;
    }
    if (pIVar8 == (Il2CppObject *)0x0) {
      puVar10 = &"null";
    }
    else {
      pIVar2 = pIVar8->klass;
      if (pIVar2 == g_data_057b9c00) {
        return pIVar8;
      }
      if (pIVar2 != g_data_057b9b98) {
        UNRECOVERED_JUMPTABLE_00 = pIVar2->vtable[3].methodPtr;
        pIVar8 = (Il2CppObject *)
                 (*UNRECOVERED_JUMPTABLE_00)(pIVar8,pIVar2->vtable[3].method,lVar14,UNRECOVERED_JUMPTABLE_00);
        return pIVar8;
      }
      uStack_20 = 0x4234035;
      pcVar9 = (char *)il2cpp_runtime_helper_02305440(pIVar8);
      if (*pcVar9 == '\0') {
        puVar10 = &"false";
      }
      else {
        puVar10 = &"true";
      }
    }
    return (Il2CppObject *)*puVar10;
  }
  uStack_20 = 0x4234056;
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_20 = auVar17._0_8_;
  if (lVar14 == 0) {
    uStack_28 = 0x42340aa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9be8;
    }
    uStack_20 = CONCAT17(bVar16,auVar17._0_7_);
    uStack_28 = 0x42340a3;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return pIVar8;
  }
  uStack_28 = 0x42340af;
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_28 = auVar17._0_8_;
  if (lVar14 == 0) {
    uStack_30 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9bb8;
    }
    uStack_28 = CONCAT17(bVar16,auVar17._0_7_);
    uStack_30 = 0x42340f3;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar8;
  }
  uStack_30 = 0x42340ff;
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_30 = auVar17._0_8_;
  if (lVar14 == 0) {
    uStack_38 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9b98;
    }
    uStack_30 = CONCAT17(bVar16,auVar17._0_7_);
    uStack_38 = 0x4234138;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar8;
  }
  uStack_38 = 0x4234144;
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_38 = auVar17._0_8_;
  if (lVar14 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      bVar16 = false;
    }
    else {
      bVar16 = (Il2CppClass *)**(long **)(lVar14 + 0x20) == g_data_057b9c00;
    }
    uStack_38 = CONCAT17(bVar16,auVar17._0_7_);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_41 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_41 = false;
label_04234214:
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_02 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_59 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_59 = false;
label_042342a4:
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_59);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX_03 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar14 + 0x130)) {
        uStack_71 = *(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_71 = false;
label_04234334:
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_71);
    return pIVar8;
  }
  auVar17 = il2cpp_runtime_helper_022b2ca0();
  lVar14 = auVar17._8_8_;
  uStack_98 = auVar17._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar15;
  }
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar14 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar11 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar14 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar14 + 0x28);
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar11 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar11,pSVar12,(MethodInfo *)0x0);
          uStack_98 = CONCAT17((char)bVar4,(undefined7)uStack_98);
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_98 + 7);
          return pIVar8;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_b0 = lVar14;
  SStack_a8 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_b8._stringLength = 0x423445d;
    SStack_b8._firstChar = 0;
    SStack_b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_b8._stringLength = 0x4234469;
    SStack_b8._firstChar = 0;
    SStack_b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    SStack_b8._stringLength = 0x4234475;
    SStack_b8._firstChar = 0;
    SStack_b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar15;
  }
  pIVar8 = extraout_RDX_04;
  if (extraout_RDX_04 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_04[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_04[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_b8._stringLength = 0x42344ab;
        SStack_b8._firstChar = 0;
        SStack_b8._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_b8._stringLength = 0x42344bd;
      SStack_b8._firstChar = 0;
      SStack_b8._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar13 = (System_String_Fields)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_04[1].monitor) {
        obj = extraout_RDX_04[2].monitor;
        SStack_b8._stringLength = 0x42344d9;
        SStack_b8._firstChar = 0;
        SStack_b8._6_2_ = 0;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar13;
        if (2 < *(uint *)&extraout_RDX_04[1].monitor) {
          pIVar8 = (Il2CppObject *)extraout_RDX_04[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_b8._stringLength = 0x42344fb;
            SStack_b8._firstChar = 0;
            SStack_b8._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar12;
          if (SVar13 != (System_String_Fields)0x0) {
            SStack_b8._stringLength = 0x4234514;
            SStack_b8._firstChar = 0;
            SStack_b8._6_2_ = 0;
            bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar13,pSVar12,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar13 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_b8._stringLength = 0x4234536;
              SStack_b8._firstChar = 0;
              SStack_b8._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar13 + 0x18),
                         (Il2CppObject *)pSVar12,pIVar8,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_b8._stringLength = 0x4234543;
    SStack_b8._firstChar = 0;
    SStack_b8._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_b8._stringLength = 0x4234548;
  SStack_b8._firstChar = 0;
  SStack_b8._6_2_ = 0;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  pSVar12 = auVar17._8_8_;
  uStack_c8 = auVar17._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_c0 = pIVar8;
  SStack_b8 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_d0 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_d0 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    pSStack_d0 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar15;
  }
  if (pSVar12 == (System_String_o *)0x0) {
label_04234642:
    pSStack_d0 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_d8 = unaff_R14;
  }
  else {
    SStack_d8 = unaff_R14;
    if (*(int *)&pSVar12[1].klass != 0) {
      SVar13 = (System_String_Fields)pSVar12[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_d0 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_d0 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar13;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar13,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_d8 = SVar13;
      if (1 < *(uint *)&pSVar12[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar12[1].fields;
        pSStack_d0 = (System_String_o *)0x42345e8;
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_d0 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_d0 = (System_String_o *)0x4234619;
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar12,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_d0 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar12,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_d0 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar15 = (long *)obj_00;
  pSStack_e0 = pSVar12;
  pSStack_d0 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      plVar15 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar11 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar15,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        pSVar12 = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(extraout_RDX_05 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_e1 = 0;
        }
        else {
          bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar11,pSVar12,(MethodInfo *)0x0);
          uStack_e1 = (undefined1)bVar4;
        }
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_e1);
        return pIVar8;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    if (*(int *)(extraout_RDX_06 + 0x18) == 0) goto label_04234826;
    plVar15 = *(long **)(extraout_RDX_06 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar15,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar8 != (Il2CppObject *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pIVar8->klass->vtable[4].methodPtr;
      pIVar8 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)(pIVar8,pIVar8->klass->vtable[4].method,UNRECOVERED_JUMPTABLE_00);
      return pIVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar15,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4233f60

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToBool_b__4_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  char *pcVar5;
  undefined8 *puVar6;
  CustomLogic_CustomLogicClassInstance_o *pCVar7;
  System_String_o *pSVar8;
  System_String_Fields SVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar10;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long *plVar11;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_d9;
  System_String_o *pSStack_d8;
  System_String_Fields SStack_d0;
  System_String_o *pSStack_c8;
  undefined8 uStack_c0;
  Il2CppObject *pIStack_b8;
  System_String_Fields SStack_b0;
  long lStack_a8;
  System_String_Fields SStack_a0;
  undefined8 uStack_90;
  undefined1 uStack_69;
  undefined1 uStack_51;
  undefined1 uStack_39;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      uStack_8 = in_RAX;
      bVar3 = CustomLogic_CustomLogicConvertBuiltin__ToBool(__a->m_Items[0],(MethodInfo *)__c);
      uStack_8 = CONCAT17((char)bVar3,(undefined7)uStack_8);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    uStack_18 = 0x4234051;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
    lVar10 = extraout_RDX;
    if (g_data_057adaba == '\0') {
      uStack_18 = 0x4233fcd;
      il2cpp_runtime_helper_023445d0(&"null");
      uStack_18 = 0x4233fd9;
      il2cpp_runtime_helper_023445d0(&"false");
      uStack_18 = 0x4233fe5;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057adaba = '\x01';
      lVar10 = extraout_RDX_00;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      puVar6 = &"null";
    }
    else {
      pIVar2 = pIVar4->klass;
      if (pIVar2 == g_data_057b9c00) {
        return pIVar4;
      }
      if (pIVar2 != g_data_057b9b98) {
        UNRECOVERED_JUMPTABLE_00 = pIVar2->vtable[3].methodPtr;
        pIVar4 = (Il2CppObject *)
                 (*UNRECOVERED_JUMPTABLE_00)(pIVar4,pIVar2->vtable[3].method,lVar10,UNRECOVERED_JUMPTABLE_00);
        return pIVar4;
      }
      uStack_18 = 0x4234035;
      pcVar5 = (char *)il2cpp_runtime_helper_02305440(pIVar4);
      if (*pcVar5 == '\0') {
        puVar6 = &"false";
      }
      else {
        puVar6 = &"true";
      }
    }
    return (Il2CppObject *)*puVar6;
  }
  uStack_18 = 0x4234056;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_18 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_20 = 0x42340aa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = **(long **)(lVar10 + 0x20) == g_data_057b9be8;
    }
    uStack_18 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_20 = 0x42340a3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar4;
  }
  uStack_20 = 0x42340af;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_20 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_28 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = **(long **)(lVar10 + 0x20) == g_data_057b9bb8;
    }
    uStack_20 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_28 = 0x42340f3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return pIVar4;
  }
  uStack_28 = 0x42340ff;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_28 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_30 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = (Il2CppClass *)**(long **)(lVar10 + 0x20) == g_data_057b9b98;
    }
    uStack_28 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_30 = 0x4234138;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar4;
  }
  uStack_30 = 0x4234144;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_30 = auVar13._0_8_;
  if (lVar10 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = (Il2CppClass *)**(long **)(lVar10 + 0x20) == g_data_057b9c00;
    }
    uStack_30 = CONCAT17(bVar12,auVar13._0_7_);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_39 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_39 = false;
label_04234214:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_39);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_02 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_51 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_51 = false;
label_042342a4:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_51);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_03 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_69 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_69 = false;
label_04234334:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_69);
    return pIVar4;
  }
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_90 = auVar13._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar11;
  }
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar7 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar10 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar10 + 0x28);
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar7 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar7,pSVar8,(MethodInfo *)0x0);
          uStack_90 = CONCAT17((char)bVar3,(undefined7)uStack_90);
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
          return pIVar4;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_a8 = lVar10;
  SStack_a0 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_b0._stringLength = 0x423445d;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_b0._stringLength = 0x4234469;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    SStack_b0._stringLength = 0x4234475;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar11;
  }
  pIVar4 = extraout_RDX_04;
  if (extraout_RDX_04 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_04[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_04[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_b0._stringLength = 0x42344ab;
        SStack_b0._firstChar = 0;
        SStack_b0._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_b0._stringLength = 0x42344bd;
      SStack_b0._firstChar = 0;
      SStack_b0._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar9 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_04[1].monitor) {
        obj = extraout_RDX_04[2].monitor;
        SStack_b0._stringLength = 0x42344d9;
        SStack_b0._firstChar = 0;
        SStack_b0._6_2_ = 0;
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar9;
        if (2 < *(uint *)&extraout_RDX_04[1].monitor) {
          pIVar4 = (Il2CppObject *)extraout_RDX_04[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_b0._stringLength = 0x42344fb;
            SStack_b0._firstChar = 0;
            SStack_b0._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar8;
          if (SVar9 != (System_String_Fields)0x0) {
            SStack_b0._stringLength = 0x4234514;
            SStack_b0._firstChar = 0;
            SStack_b0._6_2_ = 0;
            bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar9,pSVar8,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar9 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_b0._stringLength = 0x4234536;
              SStack_b0._firstChar = 0;
              SStack_b0._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar9 + 0x18),
                         (Il2CppObject *)pSVar8,pIVar4,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_b0._stringLength = 0x4234543;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_b0._stringLength = 0x4234548;
  SStack_b0._firstChar = 0;
  SStack_b0._6_2_ = 0;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  pSVar8 = auVar13._8_8_;
  uStack_c0 = auVar13._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_b8 = pIVar4;
  SStack_b0 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_c8 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_c8 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    pSStack_c8 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar11;
  }
  if (pSVar8 == (System_String_o *)0x0) {
label_04234642:
    pSStack_c8 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_d0 = unaff_R14;
  }
  else {
    SStack_d0 = unaff_R14;
    if (*(int *)&pSVar8[1].klass != 0) {
      SVar9 = (System_String_Fields)pSVar8[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_c8 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_c8 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar9;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar9,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_d0 = SVar9;
      if (1 < *(uint *)&pSVar8[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar8[1].fields;
        pSStack_c8 = (System_String_o *)0x42345e8;
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_c8 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_c8 = (System_String_o *)0x4234619;
          bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar8,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_c8 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar8,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_c8 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar11 = (long *)obj_00;
  pSStack_d8 = pSVar8;
  pSStack_c8 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
      plVar11 = *(long **)(extraout_RDX_05 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar7 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar11,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_05 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_d9 = 0;
        }
        else {
          bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar7,pSVar8,(MethodInfo *)0x0);
          uStack_d9 = (undefined1)bVar3;
        }
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d9);
        return pIVar4;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_06 != 0) {
    if (*(int *)(extraout_RDX_06 + 0x18) == 0) goto label_04234826;
    plVar11 = *(long **)(extraout_RDX_06 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar11,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar4 != (Il2CppObject *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pIVar4->klass->vtable[4].methodPtr;
      pIVar4 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)(pIVar4,pIVar4->klass->vtable[4].method,UNRECOVERED_JUMPTABLE_00);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar11,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar11,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToString>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4233fa0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__ToString_b__5_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  undefined8 *puVar6;
  CustomLogic_CustomLogicClassInstance_o *pCVar7;
  System_String_o *pSVar8;
  System_String_Fields SVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_Object_array *extraout_RDX;
  long lVar10;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  Il2CppObject *extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long *plVar11;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_d1;
  System_String_o *pSStack_d0;
  System_String_Fields SStack_c8;
  System_String_o *pSStack_c0;
  undefined8 uStack_b8;
  Il2CppObject *pIStack_b0;
  System_String_Fields SStack_a8;
  long lStack_a0;
  System_String_Fields SStack_98;
  undefined8 uStack_88;
  undefined1 uStack_61;
  undefined1 uStack_49;
  undefined1 uStack_31;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x4234051;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pIVar4 = __a->m_Items[0];
      if (g_data_057adaba == '\0') {
        uStack_10 = 0x4233fcd;
        il2cpp_runtime_helper_023445d0(&"null");
        uStack_10 = 0x4233fd9;
        il2cpp_runtime_helper_023445d0(&"false");
        uStack_10 = 0x4233fe5;
        il2cpp_runtime_helper_023445d0(&"true");
        g_data_057adaba = '\x01';
        __a = extraout_RDX;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        puVar6 = &"null";
      }
      else {
        pIVar2 = pIVar4->klass;
        if (pIVar2 == g_data_057b9c00) {
          return pIVar4;
        }
        if (pIVar2 != g_data_057b9b98) {
          UNRECOVERED_JUMPTABLE_00 = pIVar2->vtable[3].methodPtr;
          pIVar4 = (Il2CppObject *)
                   (*UNRECOVERED_JUMPTABLE_00)(pIVar4,pIVar2->vtable[3].method,__a,UNRECOVERED_JUMPTABLE_00);
          return pIVar4;
        }
        uStack_10 = 0x4234035;
        pcVar5 = (char *)il2cpp_runtime_helper_02305440(pIVar4);
        if (*pcVar5 == '\0') {
          puVar6 = &"false";
        }
        else {
          puVar6 = &"true";
        }
      }
      return (Il2CppObject *)*puVar6;
    }
  }
  uStack_10 = 0x4234056;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_10 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_18 = 0x42340aa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = **(long **)(lVar10 + 0x20) == g_data_057b9be8;
    }
    uStack_10 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_18 = 0x42340a3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar4;
  }
  uStack_18 = 0x42340af;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_18 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_20 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = **(long **)(lVar10 + 0x20) == g_data_057b9bb8;
    }
    uStack_18 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_20 = 0x42340f3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar4;
  }
  uStack_20 = 0x42340ff;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_20 = auVar13._0_8_;
  if (lVar10 == 0) {
    uStack_28 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = (Il2CppClass *)**(long **)(lVar10 + 0x20) == g_data_057b9b98;
    }
    uStack_20 = CONCAT17(bVar12,auVar13._0_7_);
    uStack_28 = 0x4234138;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return pIVar4;
  }
  uStack_28 = 0x4234144;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_28 = auVar13._0_8_;
  if (lVar10 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = (Il2CppClass *)**(long **)(lVar10 + 0x20) == g_data_057b9c00;
    }
    uStack_28 = CONCAT17(bVar12,auVar13._0_7_);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_31 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_31 = false;
label_04234214:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_31);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_49 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_49 = false;
label_042342a4:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_49);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    plVar11 = *(long **)(extraout_RDX_02 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar10 + 0x130)) {
        uStack_61 = *(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_61 = false;
label_04234334:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_61);
    return pIVar4;
  }
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar10 = auVar13._8_8_;
  uStack_88 = auVar13._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar11;
  }
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar7 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar10 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar10 + 0x28);
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar7 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar7,pSVar8,(MethodInfo *)0x0);
          uStack_88 = CONCAT17((char)bVar3,(undefined7)uStack_88);
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_88 + 7);
          return pIVar4;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_a0 = lVar10;
  SStack_98 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_a8._stringLength = 0x423445d;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_a8._stringLength = 0x4234469;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    SStack_a8._stringLength = 0x4234475;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar11;
  }
  pIVar4 = extraout_RDX_03;
  if (extraout_RDX_03 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_03[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_03[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_a8._stringLength = 0x42344ab;
        SStack_a8._firstChar = 0;
        SStack_a8._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_a8._stringLength = 0x42344bd;
      SStack_a8._firstChar = 0;
      SStack_a8._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar9 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_03[1].monitor) {
        obj = extraout_RDX_03[2].monitor;
        SStack_a8._stringLength = 0x42344d9;
        SStack_a8._firstChar = 0;
        SStack_a8._6_2_ = 0;
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar9;
        if (2 < *(uint *)&extraout_RDX_03[1].monitor) {
          pIVar4 = (Il2CppObject *)extraout_RDX_03[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_a8._stringLength = 0x42344fb;
            SStack_a8._firstChar = 0;
            SStack_a8._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar8;
          if (SVar9 != (System_String_Fields)0x0) {
            SStack_a8._stringLength = 0x4234514;
            SStack_a8._firstChar = 0;
            SStack_a8._6_2_ = 0;
            bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar9,pSVar8,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar9 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_a8._stringLength = 0x4234536;
              SStack_a8._firstChar = 0;
              SStack_a8._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar9 + 0x18),
                         (Il2CppObject *)pSVar8,pIVar4,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_a8._stringLength = 0x4234543;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_a8._stringLength = 0x4234548;
  SStack_a8._firstChar = 0;
  SStack_a8._6_2_ = 0;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  pSVar8 = auVar13._8_8_;
  uStack_b8 = auVar13._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_b0 = pIVar4;
  SStack_a8 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_c0 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_c0 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    pSStack_c0 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar11;
  }
  if (pSVar8 == (System_String_o *)0x0) {
label_04234642:
    pSStack_c0 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_c8 = unaff_R14;
  }
  else {
    SStack_c8 = unaff_R14;
    if (*(int *)&pSVar8[1].klass != 0) {
      SVar9 = (System_String_Fields)pSVar8[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_c0 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_c0 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar9;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar9,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_c8 = SVar9;
      if (1 < *(uint *)&pSVar8[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar8[1].fields;
        pSStack_c0 = (System_String_o *)0x42345e8;
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_c0 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_c0 = (System_String_o *)0x4234619;
          bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar8,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_c0 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar8,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_c0 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar11 = (long *)obj_00;
  pSStack_d0 = pSVar8;
  pSStack_c0 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
      plVar11 = *(long **)(extraout_RDX_04 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar7 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar11,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_04 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_d1 = 0;
        }
        else {
          bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar7,pSVar8,(MethodInfo *)0x0);
          uStack_d1 = (undefined1)bVar3;
        }
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d1);
        return pIVar4;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar11 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) == 0) goto label_04234826;
    plVar11 = *(long **)(extraout_RDX_05 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar11,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar4 != (Il2CppObject *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pIVar4->klass->vtable[4].methodPtr;
      pIVar4 = (Il2CppObject *)
               (*UNRECOVERED_JUMPTABLE_00)(pIVar4,pIVar4->klass->vtable[4].method,UNRECOVERED_JUMPTABLE_00);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar11,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar11,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsFloat>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234060

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsFloat_b__6_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long lVar7;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  Il2CppObject *extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long *plVar8;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_c9;
  System_String_o *pSStack_c8;
  System_String_Fields SStack_c0;
  System_String_o *pSStack_b8;
  undefined8 uStack_b0;
  Il2CppObject *pIStack_a8;
  System_String_Fields SStack_a0;
  long lStack_98;
  System_String_Fields SStack_90;
  undefined8 uStack_80;
  undefined1 uStack_59;
  undefined1 uStack_41;
  undefined1 uStack_29;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined7 uStack_8;
  bool bStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x42340aa;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      if (__a->m_Items[0] == (Il2CppObject *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = __a->m_Items[0]->klass == g_data_057b9be8;
      }
      _uStack_8 = CONCAT17(bVar9,(int7)in_RAX);
      uStack_10 = 0x42340a3;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&bStack_1);
      return pIVar3;
    }
  }
  uStack_10 = 0x42340af;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_10 = auVar10._0_8_;
  if (lVar7 == 0) {
    uStack_18 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9bb8;
    }
    uStack_10 = CONCAT17(bVar9,auVar10._0_7_);
    uStack_18 = 0x42340f3;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar3;
  }
  uStack_18 = 0x42340ff;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_18 = auVar10._0_8_;
  if (lVar7 == 0) {
    uStack_20 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9b98;
    }
    uStack_18 = CONCAT17(bVar9,auVar10._0_7_);
    uStack_20 = 0x4234138;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar3;
  }
  uStack_20 = 0x4234144;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_20 = auVar10._0_8_;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9c00;
    }
    uStack_20 = CONCAT17(bVar9,auVar10._0_7_);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_29 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_29 = false;
label_04234214:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_41 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_41 = false;
label_042342a4:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_59 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_59 = false;
label_04234334:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_59);
    return pIVar3;
  }
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_80 = auVar10._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar7 + 0x28);
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar4 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_80 = CONCAT17((char)bVar2,(undefined7)uStack_80);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
          return pIVar3;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_98 = lVar7;
  SStack_90 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_a0._stringLength = 0x423445d;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_a0._stringLength = 0x4234469;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    SStack_a0._stringLength = 0x4234475;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  pIVar3 = extraout_RDX_02;
  if (extraout_RDX_02 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_02[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_02[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_a0._stringLength = 0x42344ab;
        SStack_a0._firstChar = 0;
        SStack_a0._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_a0._stringLength = 0x42344bd;
      SStack_a0._firstChar = 0;
      SStack_a0._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar6 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_02[1].monitor) {
        obj = extraout_RDX_02[2].monitor;
        SStack_a0._stringLength = 0x42344d9;
        SStack_a0._firstChar = 0;
        SStack_a0._6_2_ = 0;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar6;
        if (2 < *(uint *)&extraout_RDX_02[1].monitor) {
          pIVar3 = (Il2CppObject *)extraout_RDX_02[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_a0._stringLength = 0x42344fb;
            SStack_a0._firstChar = 0;
            SStack_a0._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar5;
          if (SVar6 != (System_String_Fields)0x0) {
            SStack_a0._stringLength = 0x4234514;
            SStack_a0._firstChar = 0;
            SStack_a0._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar6,pSVar5,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_a0._stringLength = 0x4234536;
              SStack_a0._firstChar = 0;
              SStack_a0._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18),
                         (Il2CppObject *)pSVar5,pIVar3,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_a0._stringLength = 0x4234543;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_a0._stringLength = 0x4234548;
  SStack_a0._firstChar = 0;
  SStack_a0._6_2_ = 0;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  pSVar5 = auVar10._8_8_;
  uStack_b0 = auVar10._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_a8 = pIVar3;
  SStack_a0 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_b8 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_b8 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    pSStack_b8 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar8;
  }
  if (pSVar5 == (System_String_o *)0x0) {
label_04234642:
    pSStack_b8 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_c0 = unaff_R14;
  }
  else {
    SStack_c0 = unaff_R14;
    if (*(int *)&pSVar5[1].klass != 0) {
      SVar6 = (System_String_Fields)pSVar5[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_b8 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_b8 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar6;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_c0 = SVar6;
      if (1 < *(uint *)&pSVar5[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar5[1].fields;
        pSStack_b8 = (System_String_o *)0x42345e8;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_b8 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_b8 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar5,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_b8 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar5,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_b8 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar8 = (long *)obj_00;
  pSStack_c8 = pSVar5;
  pSStack_b8 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar8 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_03 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_c9 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_c9 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_c9);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) == 0) goto label_04234826;
    plVar8 = *(long **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsInt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42340b0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsInt_b__7_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long lVar7;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  Il2CppObject *extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long *plVar8;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_c1;
  System_String_o *pSStack_c0;
  System_String_Fields SStack_b8;
  System_String_o *pSStack_b0;
  undefined8 uStack_a8;
  Il2CppObject *pIStack_a0;
  System_String_Fields SStack_98;
  long lStack_90;
  System_String_Fields SStack_88;
  undefined8 uStack_78;
  undefined1 uStack_51;
  undefined1 uStack_39;
  undefined1 uStack_21;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined7 uStack_8;
  bool bStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x42340fa;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      if (__a->m_Items[0] == (Il2CppObject *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = __a->m_Items[0]->klass == g_data_057b9bb8;
      }
      _uStack_8 = CONCAT17(bVar9,(int7)in_RAX);
      uStack_10 = 0x42340f3;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&bStack_1);
      return pIVar3;
    }
  }
  uStack_10 = 0x42340ff;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_10 = auVar10._0_8_;
  if (lVar7 == 0) {
    uStack_18 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9b98;
    }
    uStack_10 = CONCAT17(bVar9,auVar10._0_7_);
    uStack_18 = 0x4234138;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar3;
  }
  uStack_18 = 0x4234144;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_18 = auVar10._0_8_;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9c00;
    }
    uStack_18 = CONCAT17(bVar9,auVar10._0_7_);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_21 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_21 = false;
label_04234214:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_39 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_39 = false;
label_042342a4:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_39);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_51 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_51 = false;
label_04234334:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_51);
    return pIVar3;
  }
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_78 = auVar10._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar7 + 0x28);
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar4 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_78 = CONCAT17((char)bVar2,(undefined7)uStack_78);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar3;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_90 = lVar7;
  SStack_88 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_98._stringLength = 0x423445d;
    SStack_98._firstChar = 0;
    SStack_98._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_98._stringLength = 0x4234469;
    SStack_98._firstChar = 0;
    SStack_98._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    SStack_98._stringLength = 0x4234475;
    SStack_98._firstChar = 0;
    SStack_98._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  pIVar3 = extraout_RDX_02;
  if (extraout_RDX_02 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_02[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_02[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_98._stringLength = 0x42344ab;
        SStack_98._firstChar = 0;
        SStack_98._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_98._stringLength = 0x42344bd;
      SStack_98._firstChar = 0;
      SStack_98._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar6 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_02[1].monitor) {
        obj = extraout_RDX_02[2].monitor;
        SStack_98._stringLength = 0x42344d9;
        SStack_98._firstChar = 0;
        SStack_98._6_2_ = 0;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar6;
        if (2 < *(uint *)&extraout_RDX_02[1].monitor) {
          pIVar3 = (Il2CppObject *)extraout_RDX_02[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_98._stringLength = 0x42344fb;
            SStack_98._firstChar = 0;
            SStack_98._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar5;
          if (SVar6 != (System_String_Fields)0x0) {
            SStack_98._stringLength = 0x4234514;
            SStack_98._firstChar = 0;
            SStack_98._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar6,pSVar5,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_98._stringLength = 0x4234536;
              SStack_98._firstChar = 0;
              SStack_98._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18),
                         (Il2CppObject *)pSVar5,pIVar3,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_98._stringLength = 0x4234543;
    SStack_98._firstChar = 0;
    SStack_98._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_98._stringLength = 0x4234548;
  SStack_98._firstChar = 0;
  SStack_98._6_2_ = 0;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  pSVar5 = auVar10._8_8_;
  uStack_a8 = auVar10._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_a0 = pIVar3;
  SStack_98 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_b0 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_b0 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    pSStack_b0 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar8;
  }
  if (pSVar5 == (System_String_o *)0x0) {
label_04234642:
    pSStack_b0 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_b8 = unaff_R14;
  }
  else {
    SStack_b8 = unaff_R14;
    if (*(int *)&pSVar5[1].klass != 0) {
      SVar6 = (System_String_Fields)pSVar5[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_b0 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_b0 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar6;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_b8 = SVar6;
      if (1 < *(uint *)&pSVar5[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar5[1].fields;
        pSStack_b0 = (System_String_o *)0x42345e8;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_b0 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_b0 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar5,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_b0 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar5,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_b0 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar8 = (long *)obj_00;
  pSStack_c0 = pSVar5;
  pSStack_b0 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar8 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_03 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_c1 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_c1 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_c1);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) == 0) goto label_04234826;
    plVar8 = *(long **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsBool>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234100

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsBool_b__8_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long lVar7;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  Il2CppObject *extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long *plVar8;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_b9;
  System_String_o *pSStack_b8;
  System_String_Fields SStack_b0;
  System_String_o *pSStack_a8;
  undefined8 uStack_a0;
  Il2CppObject *pIStack_98;
  System_String_Fields SStack_90;
  long lStack_88;
  System_String_Fields SStack_80;
  undefined8 uStack_70;
  undefined1 uStack_49;
  undefined1 uStack_31;
  undefined1 uStack_19;
  undefined8 uStack_10;
  undefined7 uStack_8;
  bool bStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    uStack_10 = 0x423413f;
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      if (__a->m_Items[0] == (Il2CppObject *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = __a->m_Items[0]->klass == g_data_057b9b98;
      }
      _uStack_8 = CONCAT17(bVar9,(int7)in_RAX);
      uStack_10 = 0x4234138;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&bStack_1);
      return pIVar3;
    }
  }
  uStack_10 = 0x4234144;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_10 = auVar10._0_8_;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(long **)(lVar7 + 0x20) == g_data_057b9c00;
    }
    uStack_10 = CONCAT17(bVar9,auVar10._0_7_);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_19 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_19 = false;
label_04234214:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_31 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_31 = false;
label_042342a4:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_31);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_49 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_49 = false;
label_04234334:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_49);
    return pIVar3;
  }
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar10._8_8_;
  uStack_70 = auVar10._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar7 + 0x28);
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar4 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_70 = CONCAT17((char)bVar2,(undefined7)uStack_70);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
          return pIVar3;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar7;
  SStack_80 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_90._stringLength = 0x423445d;
    SStack_90._firstChar = 0;
    SStack_90._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_90._stringLength = 0x4234469;
    SStack_90._firstChar = 0;
    SStack_90._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    SStack_90._stringLength = 0x4234475;
    SStack_90._firstChar = 0;
    SStack_90._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  pIVar3 = extraout_RDX_02;
  if (extraout_RDX_02 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_02[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_02[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_90._stringLength = 0x42344ab;
        SStack_90._firstChar = 0;
        SStack_90._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_90._stringLength = 0x42344bd;
      SStack_90._firstChar = 0;
      SStack_90._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar6 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_02[1].monitor) {
        obj = extraout_RDX_02[2].monitor;
        SStack_90._stringLength = 0x42344d9;
        SStack_90._firstChar = 0;
        SStack_90._6_2_ = 0;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar6;
        if (2 < *(uint *)&extraout_RDX_02[1].monitor) {
          pIVar3 = (Il2CppObject *)extraout_RDX_02[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_90._stringLength = 0x42344fb;
            SStack_90._firstChar = 0;
            SStack_90._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar5;
          if (SVar6 != (System_String_Fields)0x0) {
            SStack_90._stringLength = 0x4234514;
            SStack_90._firstChar = 0;
            SStack_90._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar6,pSVar5,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_90._stringLength = 0x4234536;
              SStack_90._firstChar = 0;
              SStack_90._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18),
                         (Il2CppObject *)pSVar5,pIVar3,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_90._stringLength = 0x4234543;
    SStack_90._firstChar = 0;
    SStack_90._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_90._stringLength = 0x4234548;
  SStack_90._firstChar = 0;
  SStack_90._6_2_ = 0;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  pSVar5 = auVar10._8_8_;
  uStack_a0 = auVar10._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_98 = pIVar3;
  SStack_90 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_a8 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_a8 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    pSStack_a8 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar8;
  }
  if (pSVar5 == (System_String_o *)0x0) {
label_04234642:
    pSStack_a8 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_b0 = unaff_R14;
  }
  else {
    SStack_b0 = unaff_R14;
    if (*(int *)&pSVar5[1].klass != 0) {
      SVar6 = (System_String_Fields)pSVar5[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_a8 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_a8 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar6;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_b0 = SVar6;
      if (1 < *(uint *)&pSVar5[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar5[1].fields;
        pSStack_a8 = (System_String_o *)0x42345e8;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_a8 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_a8 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar5,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_a8 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar5,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_a8 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar8 = (long *)obj_00;
  pSStack_b8 = pSVar5;
  pSStack_a8 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar8 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_03 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_b9 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_b9 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_b9);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) == 0) goto label_04234826;
    plVar8 = *(long **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsString>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234150

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsString_b__9_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long lVar7;
  Il2CppObject *extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long *plVar8;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar9 [16];
  undefined1 uStack_b1;
  System_String_o *pSStack_b0;
  System_String_Fields SStack_a8;
  System_String_o *pSStack_a0;
  undefined8 uStack_98;
  Il2CppObject *pIStack_90;
  System_String_Fields SStack_88;
  long lStack_80;
  System_String_Fields SStack_78;
  undefined8 uStack_68;
  undefined1 uStack_41;
  undefined1 uStack_29;
  undefined1 uStack_11;
  undefined1 uStack_1;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
      g_data_057adabb = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_11 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicClassInstance + 0x130) * 8) ==
                    TypeInfo_CustomLogicClassInstance;
        goto label_04234214;
      }
    }
    uStack_11 = false;
label_04234214:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_11);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_29 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_29 = false;
label_042342a4:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    plVar8 = *(long **)(extraout_RDX_01 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar7 + 0x130)) {
        uStack_41 = *(long *)(*(long *)(lVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_41 = false;
label_04234334:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar3;
  }
  auVar9 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar9._8_8_;
  uStack_68 = auVar9._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar7 + 0x28);
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar4 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_68 = CONCAT17((char)bVar2,(undefined7)uStack_68);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
          return pIVar3;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar7;
  SStack_78 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_88._stringLength = 0x423445d;
    SStack_88._firstChar = 0;
    SStack_88._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_88._stringLength = 0x4234469;
    SStack_88._firstChar = 0;
    SStack_88._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    SStack_88._stringLength = 0x4234475;
    SStack_88._firstChar = 0;
    SStack_88._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar8;
  }
  pIVar3 = extraout_RDX_02;
  if (extraout_RDX_02 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_02[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_02[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_88._stringLength = 0x42344ab;
        SStack_88._firstChar = 0;
        SStack_88._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_88._stringLength = 0x42344bd;
      SStack_88._firstChar = 0;
      SStack_88._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar6 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_02[1].monitor) {
        obj = extraout_RDX_02[2].monitor;
        SStack_88._stringLength = 0x42344d9;
        SStack_88._firstChar = 0;
        SStack_88._6_2_ = 0;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar6;
        if (2 < *(uint *)&extraout_RDX_02[1].monitor) {
          pIVar3 = (Il2CppObject *)extraout_RDX_02[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_88._stringLength = 0x42344fb;
            SStack_88._firstChar = 0;
            SStack_88._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar5;
          if (SVar6 != (System_String_Fields)0x0) {
            SStack_88._stringLength = 0x4234514;
            SStack_88._firstChar = 0;
            SStack_88._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar6,pSVar5,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_88._stringLength = 0x4234536;
              SStack_88._firstChar = 0;
              SStack_88._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18),
                         (Il2CppObject *)pSVar5,pIVar3,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_88._stringLength = 0x4234543;
    SStack_88._firstChar = 0;
    SStack_88._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_88._stringLength = 0x4234548;
  SStack_88._firstChar = 0;
  SStack_88._6_2_ = 0;
  auVar9 = il2cpp_runtime_helper_022b2c90();
  pSVar5 = auVar9._8_8_;
  uStack_98 = auVar9._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_90 = pIVar3;
  SStack_88 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_a0 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_a0 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    pSStack_a0 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar8;
  }
  if (pSVar5 == (System_String_o *)0x0) {
label_04234642:
    pSStack_a0 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_a8 = unaff_R14;
  }
  else {
    SStack_a8 = unaff_R14;
    if (*(int *)&pSVar5[1].klass != 0) {
      SVar6 = (System_String_Fields)pSVar5[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_a0 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_a0 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar6;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_a8 = SVar6;
      if (1 < *(uint *)&pSVar5[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar5[1].fields;
        pSStack_a0 = (System_String_o *)0x42345e8;
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_a0 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_a0 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar5,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_a0 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar5,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_a0 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar8 = (long *)obj_00;
  pSStack_b0 = pSVar5;
  pSStack_a0 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
      plVar8 = *(long **)(extraout_RDX_03 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
        pSVar5 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_03 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_b1 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar4,pSVar5,(MethodInfo *)0x0);
          uStack_b1 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_b1);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) == 0) goto label_04234826;
    plVar8 = *(long **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar8,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsObject>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42341b0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsObject_b__10_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  System_String_o *pSVar7;
  System_String_Fields SVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar9;
  Il2CppObject *extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long *plVar10;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar11 [16];
  undefined1 uStack_a9;
  System_String_o *pSStack_a8;
  System_String_Fields SStack_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  Il2CppObject *pIStack_88;
  System_String_Fields SStack_80;
  long lStack_78;
  System_String_Fields SStack_70;
  undefined8 uStack_60;
  undefined1 uStack_39;
  undefined1 uStack_21;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pIVar5 = __a->m_Items[0];
      if (g_data_057adabb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
        g_data_057adabb = '\x01';
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar5->klass;
        bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
        if (bVar1 <= (pIVar3->_2).naturalAligment) {
          local_9 = (pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance;
          goto label_04234214;
        }
      }
      local_9 = false;
label_04234214:
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar10 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057adabc = '\x01';
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      if (*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) <= *(byte *)(lVar9 + 0x130)) {
        uStack_21 = *(long *)(*(long *)(lVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicListBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicListBuiltin;
        goto label_042342a4;
      }
    }
    uStack_21 = false;
label_042342a4:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    plVar10 = *(long **)(extraout_RDX_00 + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar9 + 0x130)) {
        uStack_39 = *(long *)(*(long *)(lVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_39 = false;
label_04234334:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_39);
    return pIVar5;
  }
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar9 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar9 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar9 + 0x28);
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar6 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar6,pSVar7,(MethodInfo *)0x0);
          uStack_60 = CONCAT17((char)bVar4,(undefined7)uStack_60);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
          return pIVar5;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_78 = lVar9;
  SStack_70 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_80._stringLength = 0x423445d;
    SStack_80._firstChar = 0;
    SStack_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_80._stringLength = 0x4234469;
    SStack_80._firstChar = 0;
    SStack_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    SStack_80._stringLength = 0x4234475;
    SStack_80._firstChar = 0;
    SStack_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  pIVar5 = extraout_RDX_01;
  if (extraout_RDX_01 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_01[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_01[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_80._stringLength = 0x42344ab;
        SStack_80._firstChar = 0;
        SStack_80._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_80._stringLength = 0x42344bd;
      SStack_80._firstChar = 0;
      SStack_80._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar8 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_01[1].monitor) {
        obj = extraout_RDX_01[2].monitor;
        SStack_80._stringLength = 0x42344d9;
        SStack_80._firstChar = 0;
        SStack_80._6_2_ = 0;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar8;
        if (2 < *(uint *)&extraout_RDX_01[1].monitor) {
          pIVar5 = (Il2CppObject *)extraout_RDX_01[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_80._stringLength = 0x42344fb;
            SStack_80._firstChar = 0;
            SStack_80._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar7;
          if (SVar8 != (System_String_Fields)0x0) {
            SStack_80._stringLength = 0x4234514;
            SStack_80._firstChar = 0;
            SStack_80._6_2_ = 0;
            bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar8,pSVar7,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_80._stringLength = 0x4234536;
              SStack_80._firstChar = 0;
              SStack_80._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18),
                         (Il2CppObject *)pSVar7,pIVar5,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_80._stringLength = 0x4234543;
    SStack_80._firstChar = 0;
    SStack_80._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_80._stringLength = 0x4234548;
  SStack_80._firstChar = 0;
  SStack_80._6_2_ = 0;
  auVar11 = il2cpp_runtime_helper_022b2c90();
  pSVar7 = auVar11._8_8_;
  uStack_90 = auVar11._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_88 = pIVar5;
  SStack_80 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_98 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_98 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    pSStack_98 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar10;
  }
  if (pSVar7 == (System_String_o *)0x0) {
label_04234642:
    pSStack_98 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_a0 = unaff_R14;
  }
  else {
    SStack_a0 = unaff_R14;
    if (*(int *)&pSVar7[1].klass != 0) {
      SVar8 = (System_String_Fields)pSVar7[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_98 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar8;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_a0 = SVar8;
      if (1 < *(uint *)&pSVar7[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar7[1].fields;
        pSStack_98 = (System_String_o *)0x42345e8;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_98 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_98 = (System_String_o *)0x4234619;
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_98 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar7,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_98 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar10 = (long *)obj_00;
  pSStack_a8 = pSVar7;
  pSStack_98 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
      plVar10 = *(long **)(extraout_RDX_02 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_02 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_a9 = 0;
        }
        else {
          bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar6,pSVar7,(MethodInfo *)0x0);
          uStack_a9 = (undefined1)bVar4;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_a9);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) == 0) goto label_04234826;
    plVar10 = *(long **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar5,pIVar5->klass->vtable[4].method,vtableDispatch);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar2 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsList>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234240

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsList_b__11_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  System_String_o *pSVar7;
  System_String_Fields SVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long lVar9;
  Il2CppObject *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long *plVar10;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar11 [16];
  undefined1 uStack_91;
  System_String_o *pSStack_90;
  System_String_Fields SStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  Il2CppObject *pIStack_70;
  System_String_Fields SStack_68;
  long lStack_60;
  System_String_Fields SStack_58;
  undefined8 uStack_48;
  undefined1 uStack_21;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pIVar5 = __a->m_Items[0];
      if (g_data_057adabc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
        g_data_057adabc = '\x01';
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar5->klass;
        bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
        if (bVar1 <= (pIVar3->_2).naturalAligment) {
          local_9 = (pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicListBuiltin;
          goto label_042342a4;
        }
      }
      local_9 = false;
label_042342a4:
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar10 = *(long **)(extraout_RDX + 0x20);
    if (g_data_057adabd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
      g_data_057adabd = '\x01';
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      if (*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) <= *(byte *)(lVar9 + 0x130)) {
        uStack_21 = *(long *)(*(long *)(lVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicDictBuiltin + 0x130) * 8) ==
                    TypeInfo_CustomLogicDictBuiltin;
        goto label_04234334;
      }
    }
    uStack_21 = false;
label_04234334:
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar5;
  }
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar9 = auVar11._8_8_;
  uStack_48 = auVar11._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar9 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar9 + 0x28);
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar6 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar6,pSVar7,(MethodInfo *)0x0);
          uStack_48 = CONCAT17((char)bVar4,(undefined7)uStack_48);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
          return pIVar5;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar9;
  SStack_58 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_68._stringLength = 0x423445d;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_68._stringLength = 0x4234469;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    SStack_68._stringLength = 0x4234475;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  pIVar5 = extraout_RDX_00;
  if (extraout_RDX_00 != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX_00[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX_00[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_68._stringLength = 0x42344ab;
        SStack_68._firstChar = 0;
        SStack_68._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_68._stringLength = 0x42344bd;
      SStack_68._firstChar = 0;
      SStack_68._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar8 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX_00[1].monitor) {
        obj = extraout_RDX_00[2].monitor;
        SStack_68._stringLength = 0x42344d9;
        SStack_68._firstChar = 0;
        SStack_68._6_2_ = 0;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar8;
        if (2 < *(uint *)&extraout_RDX_00[1].monitor) {
          pIVar5 = (Il2CppObject *)extraout_RDX_00[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_68._stringLength = 0x42344fb;
            SStack_68._firstChar = 0;
            SStack_68._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar7;
          if (SVar8 != (System_String_Fields)0x0) {
            SStack_68._stringLength = 0x4234514;
            SStack_68._firstChar = 0;
            SStack_68._6_2_ = 0;
            bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar8,pSVar7,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_68._stringLength = 0x4234536;
              SStack_68._firstChar = 0;
              SStack_68._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18),
                         (Il2CppObject *)pSVar7,pIVar5,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_68._stringLength = 0x4234543;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_68._stringLength = 0x4234548;
  SStack_68._firstChar = 0;
  SStack_68._6_2_ = 0;
  auVar11 = il2cpp_runtime_helper_022b2c90();
  pSVar7 = auVar11._8_8_;
  uStack_78 = auVar11._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_70 = pIVar5;
  SStack_68 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_80 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_80 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    pSStack_80 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar10;
  }
  if (pSVar7 == (System_String_o *)0x0) {
label_04234642:
    pSStack_80 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_88 = unaff_R14;
  }
  else {
    SStack_88 = unaff_R14;
    if (*(int *)&pSVar7[1].klass != 0) {
      SVar8 = (System_String_Fields)pSVar7[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_80 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_80 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar8;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_88 = SVar8;
      if (1 < *(uint *)&pSVar7[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar7[1].fields;
        pSStack_80 = (System_String_o *)0x42345e8;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_80 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_80 = (System_String_o *)0x4234619;
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_80 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar7,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_80 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar10 = (long *)obj_00;
  pSStack_90 = pSVar7;
  pSStack_80 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      plVar10 = *(long **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_01 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_91 = 0;
        }
        else {
          bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar6,pSVar7,(MethodInfo *)0x0);
          uStack_91 = (undefined1)bVar4;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_91);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) == 0) goto label_04234826;
    plVar10 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar5,pIVar5->klass->vtable[4].method,vtableDispatch);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar2 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsDict>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42342d0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__IsDict_b__12_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  System_String_o *pSVar7;
  System_String_Fields SVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long lVar9;
  Il2CppObject *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long *plVar10;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar11 [16];
  undefined1 local_79;
  System_String_o *pSStack_78;
  System_String_Fields SStack_70;
  System_String_o *pSStack_68;
  undefined8 uStack_60;
  Il2CppObject *pIStack_58;
  System_String_Fields SStack_50;
  long lStack_48;
  System_String_Fields SStack_40;
  undefined8 uStack_30;
  undefined1 local_9;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    obj = (MethodInfo_3104DF0 **)__this;
  }
  else {
    obj = (MethodInfo_3104DF0 **)__this;
    if ((int)__a->max_length != 0) {
      pIVar5 = __a->m_Items[0];
      if (g_data_057adabd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
        g_data_057adabd = '\x01';
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar5->klass;
        bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
        if (bVar1 <= (pIVar3->_2).naturalAligment) {
          local_9 = (pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicDictBuiltin;
          goto label_04234334;
        }
      }
      local_9 = false;
label_04234334:
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
      return pIVar5;
    }
  }
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  lVar9 = auVar11._8_8_;
  uStack_30 = auVar11._0_8_;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      unaff_R14 = *(System_String_Fields *)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(lVar9 + 0x18)) {
        obj = *(MethodInfo_3104DF0 ***)(lVar9 + 0x28);
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar6 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar6,pSVar7,(MethodInfo *)0x0);
          uStack_30 = CONCAT17((char)bVar4,(undefined7)uStack_30);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
          return pIVar5;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar9;
  SStack_40 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_50._stringLength = 0x423445d;
    SStack_50._firstChar = 0;
    SStack_50._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_50._stringLength = 0x4234469;
    SStack_50._firstChar = 0;
    SStack_50._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    SStack_50._stringLength = 0x4234475;
    SStack_50._firstChar = 0;
    SStack_50._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar10;
  }
  pIVar5 = extraout_RDX;
  if (extraout_RDX != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_50._stringLength = 0x42344ab;
        SStack_50._firstChar = 0;
        SStack_50._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_50._stringLength = 0x42344bd;
      SStack_50._firstChar = 0;
      SStack_50._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar8 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX[1].monitor) {
        obj = extraout_RDX[2].monitor;
        SStack_50._stringLength = 0x42344d9;
        SStack_50._firstChar = 0;
        SStack_50._6_2_ = 0;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar8;
        if (2 < *(uint *)&extraout_RDX[1].monitor) {
          pIVar5 = (Il2CppObject *)extraout_RDX[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_50._stringLength = 0x42344fb;
            SStack_50._firstChar = 0;
            SStack_50._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar7;
          if (SVar8 != (System_String_Fields)0x0) {
            SStack_50._stringLength = 0x4234514;
            SStack_50._firstChar = 0;
            SStack_50._6_2_ = 0;
            bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar8,pSVar7,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_50._stringLength = 0x4234536;
              SStack_50._firstChar = 0;
              SStack_50._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar8 + 0x18),
                         (Il2CppObject *)pSVar7,pIVar5,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_50._stringLength = 0x4234543;
    SStack_50._firstChar = 0;
    SStack_50._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_50._stringLength = 0x4234548;
  SStack_50._firstChar = 0;
  SStack_50._6_2_ = 0;
  auVar11 = il2cpp_runtime_helper_022b2c90();
  pSVar7 = auVar11._8_8_;
  uStack_60 = auVar11._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_58 = pIVar5;
  SStack_50 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_68 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_68 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    pSStack_68 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar10;
  }
  if (pSVar7 == (System_String_o *)0x0) {
label_04234642:
    pSStack_68 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_70 = unaff_R14;
  }
  else {
    SStack_70 = unaff_R14;
    if (*(int *)&pSVar7[1].klass != 0) {
      SVar8 = (System_String_Fields)pSVar7[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_68 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_68 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar8;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar8,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_70 = SVar8;
      if (1 < *(uint *)&pSVar7[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar7[1].fields;
        pSStack_68 = (System_String_o *)0x42345e8;
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_68 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_68 = (System_String_o *)0x4234619;
          bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_68 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar7,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_68 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar10 = (long *)obj_00;
  pSStack_78 = pSVar7;
  pSStack_68 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      plVar10 = *(long **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          local_79 = 0;
        }
        else {
          bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar6,pSVar7,(MethodInfo *)0x0);
          local_79 = (undefined1)bVar4;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_79);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar10 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) == 0) goto label_04234826;
    plVar10 = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar10,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar5,pIVar5->klass->vtable[4].method,vtableDispatch);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar2 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar10,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasVariable>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234360

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasVariable_b__13_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 in_RAX;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_Fields SVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long *plVar7;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar8 [16];
  undefined1 uStack_61;
  System_String_o *pSStack_60;
  System_String_Fields SStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  Il2CppObject *pIStack_40;
  System_String_Fields SStack_38;
  System_Object_array *pSStack_30;
  System_String_Fields SStack_28;
  undefined8 uStack_18;
  
  obj = (MethodInfo_3104DF0 **)__this;
  uStack_18 = in_RAX;
  if (g_data_057adad6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar7 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad6 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar7;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_Fields)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      pCVar3 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < (uint)__a->max_length) {
        obj = *(MethodInfo_3104DF0 ***)(__a->m_Items + 1);
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14._stringLength = 0;
        unaff_R14._firstChar = 0;
        unaff_R14._6_2_ = 0;
        if (pCVar3 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(pCVar3,pSVar4,(MethodInfo *)0x0);
          uStack_18 = CONCAT17((char)bVar2,(undefined7)uStack_18);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
          return pIVar5;
        }
        goto label_0423442c;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0423442c:
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __a;
  SStack_28 = unaff_R14;
  if (g_data_057adad7 == '\0') {
    SStack_38._stringLength = 0x423445d;
    SStack_38._firstChar = 0;
    SStack_38._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_38._stringLength = 0x4234469;
    SStack_38._firstChar = 0;
    SStack_38._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar7 = &TypeInfo_CustomLogicEvaluator;
    SStack_38._stringLength = 0x4234475;
    SStack_38._firstChar = 0;
    SStack_38._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar7;
  }
  pIVar5 = extraout_RDX;
  if (extraout_RDX != (Il2CppObject *)0x0) {
    if (*(int *)&extraout_RDX[1].monitor != 0) {
      unaff_R14 = (System_String_Fields)extraout_RDX[2].klass;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_38._stringLength = 0x42344ab;
        SStack_38._firstChar = 0;
        SStack_38._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_38._stringLength = 0x42344bd;
      SStack_38._firstChar = 0;
      SStack_38._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar6 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)&extraout_RDX[1].monitor) {
        obj = extraout_RDX[2].monitor;
        SStack_38._stringLength = 0x42344d9;
        SStack_38._firstChar = 0;
        SStack_38._6_2_ = 0;
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar6;
        if (2 < *(uint *)&extraout_RDX[1].monitor) {
          pIVar5 = (Il2CppObject *)extraout_RDX[3].klass;
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_38._stringLength = 0x42344fb;
            SStack_38._firstChar = 0;
            SStack_38._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar4;
          if (SVar6 != (System_String_Fields)0x0) {
            SStack_38._stringLength = 0x4234514;
            SStack_38._firstChar = 0;
            SStack_38._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar6,pSVar4,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_38._stringLength = 0x4234536;
              SStack_38._firstChar = 0;
              SStack_38._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar6 + 0x18),
                         (Il2CppObject *)pSVar4,pIVar5,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_38._stringLength = 0x4234543;
    SStack_38._firstChar = 0;
    SStack_38._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_38._stringLength = 0x4234548;
  SStack_38._firstChar = 0;
  SStack_38._6_2_ = 0;
  auVar8 = il2cpp_runtime_helper_022b2c90();
  pSVar4 = auVar8._8_8_;
  uStack_48 = auVar8._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pIStack_40 = pIVar5;
  SStack_38 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_50 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_50 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar7 = &TypeInfo_CustomLogicEvaluator;
    pSStack_50 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar7;
  }
  if (pSVar4 == (System_String_o *)0x0) {
label_04234642:
    pSStack_50 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_58 = unaff_R14;
  }
  else {
    SStack_58 = unaff_R14;
    if (*(int *)&pSVar4[1].klass != 0) {
      SVar6 = (System_String_Fields)pSVar4[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_50 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar6;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_58 = SVar6;
      if (1 < *(uint *)&pSVar4[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar4[1].fields;
        pSStack_50 = (System_String_o *)0x42345e8;
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_50 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_50 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar4,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_50 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar4,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_50 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar7 = (long *)obj_00;
  pSStack_60 = pSVar4;
  pSStack_50 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar7 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      plVar7 = *(long **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar3 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar7,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_61 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar3,pSVar4,(MethodInfo *)0x0);
          uStack_61 = (undefined1)bVar2;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_61);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar7 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) == 0) goto label_04234826;
    plVar7 = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar7,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar5,pIVar5->klass->vtable[4].method,vtableDispatch);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar7,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar7,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__DefineVariable>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234440

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__DefineVariable_b__14_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  System_String_Fields SVar3;
  System_String_o *pSVar4;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long *plVar6;
  MethodInfo_3104DF0 **obj;
  MethodInfo_3106630 **obj_00;
  System_String_Fields unaff_R14;
  System_String_o *unaff_R15;
  undefined1 auVar7 [16];
  undefined1 uStack_49;
  System_String_o *pSStack_48;
  System_String_Fields SStack_40;
  System_String_o *pSStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  System_String_Fields SStack_20;
  
  obj = (MethodInfo_3104DF0 **)__this;
  if (g_data_057adad7 == '\0') {
    SStack_20._stringLength = 0x423445d;
    SStack_20._firstChar = 0;
    SStack_20._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    SStack_20._stringLength = 0x4234469;
    SStack_20._firstChar = 0;
    SStack_20._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar6 = &TypeInfo_CustomLogicEvaluator;
    SStack_20._stringLength = 0x4234475;
    SStack_20._firstChar = 0;
    SStack_20._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad7 = '\x01';
    obj = (MethodInfo_3104DF0 **)plVar6;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_String_Fields)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        SStack_20._stringLength = 0x42344ab;
        SStack_20._firstChar = 0;
        SStack_20._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_20._stringLength = 0x42344bd;
      SStack_20._firstChar = 0;
      SStack_20._6_2_ = 0;
      obj = (MethodInfo_3104DF0 **)unaff_R14;
      SVar3 = (System_String_Fields)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < (uint)__a->max_length) {
        obj = *(MethodInfo_3104DF0 ***)(__a->m_Items + 1);
        SStack_20._stringLength = 0x42344d9;
        SStack_20._firstChar = 0;
        SStack_20._6_2_ = 0;
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
        unaff_R14 = SVar3;
        if (2 < (uint)__a->max_length) {
          __a = (System_Object_array *)__a->m_Items[2];
          if (g_data_057adabe == '\0') {
            obj = &MethodInfo_Void_set_Item;
            SStack_20._stringLength = 0x42344fb;
            SStack_20._firstChar = 0;
            SStack_20._6_2_ = 0;
            il2cpp_runtime_helper_023445d0();
            g_data_057adabe = '\x01';
          }
          unaff_R15 = pSVar4;
          if (SVar3 != (System_String_Fields)0x0) {
            SStack_20._stringLength = 0x4234514;
            SStack_20._firstChar = 0;
            SStack_20._6_2_ = 0;
            bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                              ((CustomLogic_CustomLogicClassInstance_o *)SVar3,pSVar4,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)0x0;
            }
            obj._0_4_ = 0;
            obj._4_2_ = 0;
            obj._6_2_ = 0;
            if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar3 + 0x18) !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              SStack_20._stringLength = 0x4234536;
              SStack_20._firstChar = 0;
              SStack_20._6_2_ = 0;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (*(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar3 + 0x18),
                         (Il2CppObject *)pSVar4,(Il2CppObject *)__a,MethodInfo_Void_set_Item);
              return (Il2CppObject *)0x0;
            }
          }
          goto label_04234543;
        }
      }
    }
    SStack_20._stringLength = 0x4234543;
    SStack_20._firstChar = 0;
    SStack_20._6_2_ = 0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04234543:
  SStack_20._stringLength = 0x4234548;
  SStack_20._firstChar = 0;
  SStack_20._6_2_ = 0;
  auVar7 = il2cpp_runtime_helper_022b2c90();
  pSVar4 = auVar7._8_8_;
  uStack_30 = auVar7._0_8_;
  obj_00 = (MethodInfo_3106630 **)obj;
  pSStack_28 = __a;
  SStack_20 = unaff_R14;
  if (g_data_057adad8 == '\0') {
    pSStack_38 = (System_String_o *)0x423456c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    pSStack_38 = (System_String_o *)0x4234578;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar6 = &TypeInfo_CustomLogicEvaluator;
    pSStack_38 = (System_String_o *)0x4234584;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar6;
  }
  if (pSVar4 == (System_String_o *)0x0) {
label_04234642:
    pSStack_38 = (System_String_o *)0x4234647;
    il2cpp_runtime_helper_022b2c90();
    SStack_40 = unaff_R14;
  }
  else {
    SStack_40 = unaff_R14;
    if (*(int *)&pSVar4[1].klass != 0) {
      SVar3 = (System_String_Fields)pSVar4[1].monitor;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_38 = (System_String_o *)0x42345ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_38 = (System_String_o *)0x42345cc;
      obj_00 = (MethodInfo_3106630 **)SVar3;
      unaff_R14 = (System_String_Fields)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)SVar3,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      SStack_40 = SVar3;
      if (1 < *(uint *)&pSVar4[1].klass) {
        obj_00 = *(MethodInfo_3106630 ***)&pSVar4[1].fields;
        pSStack_38 = (System_String_o *)0x42345e8;
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          pSStack_38 = (System_String_o *)0x4234600;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (System_String_Fields)0x0) {
          pSStack_38 = (System_String_o *)0x4234619;
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,pSVar4,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          obj_00._0_4_ = 0;
          obj_00._4_2_ = 0;
          obj_00._6_2_ = 0;
          if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSStack_38 = (System_String_o *)0x4234638;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (*(System_Collections_Generic_Dictionary_object__object__o **)((long)unaff_R14 + 0x18),
                       (Il2CppObject *)pSVar4,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  pSStack_38 = (System_String_o *)0x423464c;
  il2cpp_runtime_helper_022b2ca0();
  plVar6 = (long *)obj_00;
  pSStack_48 = pSVar4;
  pSStack_38 = unaff_R15;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar6 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      plVar6 = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        pSVar4 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_49 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_00,classInstance,pSVar4,(MethodInfo *)0x0);
          uStack_49 = (undefined1)bVar2;
        }
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_49);
        return pIVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar6 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) == 0) goto label_04234826;
    plVar6 = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar6,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar5->klass->vtable[4].methodPtr;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar5,pIVar5->klass->vtable[4].method,vtableDispatch);
      return pIVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar6,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar6,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveVariable>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234550

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__RemoveVariable_b__15_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *methodName;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long extraout_RDX_00;
  long *plVar4;
  MethodInfo_3106630 **obj_00;
  CustomLogic_BuiltinClassInstance_o *unaff_R14;
  undefined1 uStack_31;
  System_Object_array *pSStack_30;
  CustomLogic_BuiltinClassInstance_o *pCStack_28;
  
  obj_00 = (MethodInfo_3106630 **)__this;
  if (g_data_057adad8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar4 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad8 = '\x01';
    obj_00 = (MethodInfo_3106630 **)plVar4;
  }
  if (__a == (System_Object_array *)0x0) {
label_04234642:
    il2cpp_runtime_helper_022b2c90();
    pCStack_28 = unaff_R14;
  }
  else {
    pCStack_28 = unaff_R14;
    if ((int)__a->max_length != 0) {
      obj = (CustomLogic_BuiltinClassInstance_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = (MethodInfo_3106630 **)obj;
      unaff_R14 = (CustomLogic_BuiltinClassInstance_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      pCStack_28 = obj;
      if (1 < (uint)__a->max_length) {
        obj_00 = (MethodInfo_3106630 **)__a->m_Items[1];
        __a = (System_Object_array *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
        if (g_data_057adabf == '\0') {
          obj_00 = &MethodInfo_Boolean_Remove;
          il2cpp_runtime_helper_023445d0();
          g_data_057adabf = '\x01';
        }
        if (unaff_R14 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable
                            ((CustomLogic_CustomLogicClassInstance_o *)unaff_R14,(System_String_o *)__a,
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return (Il2CppObject *)0x0;
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      ((CustomLogic_CustomLogicClassInstance_Fields *)&unaff_R14->fields)->Variables;
          obj_00 = (MethodInfo_3106630 **)0x0;
          if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Remove
                      (__this_00,(Il2CppObject *)__a,MethodInfo_Boolean_Remove);
            return (Il2CppObject *)0x0;
          }
        }
        goto label_04234642;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  plVar4 = (long *)obj_00;
  pSStack_30 = __a;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar4 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      plVar4 = *(long **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar4,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        methodName = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_31 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_01,classInstance,methodName,(MethodInfo *)0x0);
          uStack_31 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_31);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar4 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) == 0) goto label_04234826;
    plVar4 = *(long **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar4,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)plVar4,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasMethod>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4234650

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__HasMethod_b__16_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *methodName;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  long *__this_01;
  undefined1 uStack_19;
  
  __this_01 = (long *)__this;
  if (g_data_057adad9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adad9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this_01 = (long *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this_01,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
      if (1 < (uint)__a->max_length) {
        methodName = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (g_data_057adac0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adac0 = '\x01';
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          uStack_19 = 0;
        }
        else {
          bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_00,classInstance,methodName,(MethodInfo *)0x0);
          uStack_19 = (undefined1)bVar2;
        }
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_04234826;
    __this_01 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this_01,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar3 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar3->klass->vtable[4].methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[4].method,vtableDispatch);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0)
    ;
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetType>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0 (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicConvertBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42347a0

Il2CppObject *
CustomLogic_CustomLogicConvertBuiltin_Bindings___c_____CreateMethodBinding__GetType_b__17_0
          (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicConvertBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long *plVar3;
  
  if (g_data_057adada == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    plVar3 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adada = '\x01';
    __this = (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *)plVar3;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_04234826;
    __this = (CustomLogic_CustomLogicConvertBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicClassInstance_ConvertTo_CustomLogicClassInsta);
    if (pIVar2 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar2->klass->vtable[4].methodPtr;
      pIVar2 = (Il2CppObject *)
               (*vtableDispatch)(pIVar2,pIVar2->klass->vtable[4].method,vtableDispatch);
      return pIVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04234826:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
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


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4232000

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicConvertBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057adac3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"GetType");
    il2cpp_runtime_helper_023445d0(&"DefineVariable");
    il2cpp_runtime_helper_023445d0(&"ToString");
    il2cpp_runtime_helper_023445d0(&"HasVariable");
    il2cpp_runtime_helper_023445d0(&"IsDict");
    il2cpp_runtime_helper_023445d0(&"IsList");
    il2cpp_runtime_helper_023445d0(&"IsInt");
    il2cpp_runtime_helper_023445d0(&"IsBool");
    il2cpp_runtime_helper_023445d0(&"RemoveVariable");
    il2cpp_runtime_helper_023445d0(&"IsString");
    il2cpp_runtime_helper_023445d0(&"IsFloat");
    il2cpp_runtime_helper_023445d0(&"HasMethod");
    il2cpp_runtime_helper_023445d0(&"IsObject");
    il2cpp_runtime_helper_023445d0(&"ToInt");
    il2cpp_runtime_helper_023445d0(&"ToBool");
    il2cpp_runtime_helper_023445d0(&"ToFloat");
    g_data_057adac3 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x54aa9712) {
    if (uVar3 < 0x36ec8533) {
      if (uVar3 < 0x16a60c4e) {
        if (uVar3 == 0xb7c33aa) {
          bVar4 = System_String__op_Equality(name,"IsObject",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057adacc == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsObject_b__10_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c);
              g_data_057adacc = '\x01';
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
              pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
              System_Func_object__object__object____ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar6;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar6);
            }
            pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar7;
          }
        }
        else if ((uVar3 == 0x16a60c4d) &&
                (bVar4 = System_String__op_Equality(name,"IsBool",(MethodInfo *)0x0), (char)bVar4 != '\0')
                ) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adaca == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsBool_b__8_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adaca = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if (uVar3 == 0x21b10f16) {
        bVar4 = System_String__op_Equality(name,"DefineVariable",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adad0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__DefineVariable_b__14_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adad0 = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x68,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x36ec8532) &&
              (bVar4 = System_String__op_Equality(name,"HasMethod",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adad2 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasMethod_b__16_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad2 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 < 0x43eb6410) {
      if (uVar3 == 0x42797ce9) {
        bVar4 = System_String__op_Equality(name,"IsDict",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adace == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsDict_b__12_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adace = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x43eb640f) &&
              (bVar4 = System_String__op_Equality(name,"GetType",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adad3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetType_b__17_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad3 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x80,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x45844edd) {
      bVar4 = System_String__op_Equality(name,"RemoveVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adad1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveVariable_b__15_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adad1 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x70,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x54aa9711) &&
            (bVar4 = System_String__op_Equality(name,"IsList",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adacd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsList_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adacd = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0x7bdd082f) {
    if (uVar3 < 0x7040ed26) {
      if (uVar3 == 0x59fa775c) {
        bVar4 = System_String__op_Equality(name,"ToBool",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adac6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToBool_b__4_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057adac6 = '\x01';
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
            pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar6);
          }
          pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar3 == 0x7040ed25) &&
              (bVar4 = System_String__op_Equality(name,"ToString",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adac7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToString_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adac7 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x72a1342f) {
      bVar4 = System_String__op_Equality(name,"HasVariable",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adacf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasVariable_b__13_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adacf = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x7bdd082e) &&
            (bVar4 = System_String__op_Equality(name,"IsInt",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adac9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsInt_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adac9 = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0xc34f3929) {
    if (uVar3 == 0xba01fe55) {
      bVar4 = System_String__op_Equality(name,"IsFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adac8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsFloat_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adac8 = '\x01';
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
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0xc34f3928) &&
            (bVar4 = System_String__op_Equality(name,"IsString",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adacb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsString_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adacb = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xdfa2d4fd) {
    bVar4 = System_String__op_Equality(name,"ToInt",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adac5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToInt_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adac5 = '\x01';
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
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xc5a73b76) &&
          (bVar4 = System_String__op_Equality(name,"ToFloat",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicConvertBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057adac4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42326f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4232705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4232711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423271d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToFloat_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4232729;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423274c;
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423269b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42326b7;
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42326d1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42326eb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4232772;
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423278a;
  CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat (const MethodInfo* method);
// 0x4232650

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToFloat_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt (const MethodInfo* method);
// 0x42327a0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToInt_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool (const MethodInfo* method);
// 0x42328f0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToBool_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString (const MethodInfo* method);
// 0x4232a40

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__ToString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToString_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat (const MethodInfo* method);
// 0x4232b90

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsFloat_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt (const MethodInfo* method);
// 0x4232ce0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adac9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsInt_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adac9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool (const MethodInfo* method);
// 0x4232e30

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adaca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsBool_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adaca = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString (const MethodInfo* method);
// 0x4232f80

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adacb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsString_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adacb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject (const MethodInfo* method);
// 0x42330d0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsObject(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adacc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsObject_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adacc = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList (const MethodInfo* method);
// 0x4233220

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsList(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adacd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsList_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adacd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsDict
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict (const MethodInfo* method);
// 0x4233370

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__IsDict(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adace == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsDict_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adace = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable (const MethodInfo* method);
// 0x42334c0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasVariable(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adacf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasVariable_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adacf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__DefineVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable (const MethodInfo* method);
// 0x4233610

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__DefineVariable(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adad0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__DefineVariable_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__RemoveVariable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable (const MethodInfo* method);
// 0x4233760

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__RemoveVariable(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adad1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveVariable_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasMethod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod (const MethodInfo* method);
// 0x42338b0

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__HasMethod(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adad2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HasMethod_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__GetType
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o* CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType (const MethodInfo* method);
// 0x4233a00

CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *
CustomLogic_CustomLogicConvertBuiltin_Bindings____CreateMethodBinding__GetType(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *__this;
  
  if (g_data_057adad3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetType_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicConvertBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicConvertBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicConvertBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicConvertBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicConvertBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x4233b50

void CustomLogic_CustomLogicConvertBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057adad4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"GetType");
    il2cpp_runtime_helper_023445d0(&"DefineVariable");
    il2cpp_runtime_helper_023445d0(&"ToString");
    il2cpp_runtime_helper_023445d0(&"HasVariable");
    il2cpp_runtime_helper_023445d0(&"IsDict");
    il2cpp_runtime_helper_023445d0(&"IsList");
    il2cpp_runtime_helper_023445d0(&"IsInt");
    il2cpp_runtime_helper_023445d0(&"IsBool");
    il2cpp_runtime_helper_023445d0(&"RemoveVariable");
    il2cpp_runtime_helper_023445d0(&"IsString");
    il2cpp_runtime_helper_023445d0(&"IsFloat");
    il2cpp_runtime_helper_023445d0(&"HasMethod");
    il2cpp_runtime_helper_023445d0(&"IsObject");
    il2cpp_runtime_helper_023445d0(&"ToInt");
    il2cpp_runtime_helper_023445d0(&"ToBool");
    il2cpp_runtime_helper_023445d0(&"ToFloat");
    g_data_057adad4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"ToFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsList",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsDict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HasVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DefineVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RemoveVariable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HasMethod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetType",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adad5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adad5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin___ctor (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x4231820

void CustomLogic_CustomLogicConvertBuiltin___ctor
               (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057adab7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adab7 = '\x01';
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


// CustomLogic.CustomLogicConvertBuiltin$$ToFloat
// il2cpp: float CustomLogic_CustomLogicConvertBuiltin__ToFloat (Il2CppObject* value, const MethodInfo* method);
// 0x4231890

float CustomLogic_CustomLogicConvertBuiltin__ToFloat(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  char *pcVar2;
  System_Globalization_CultureInfo_o *provider;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float extraout_XMM0_Da;
  
  if (g_data_057adab8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057adab8 = '\x01';
  }
  fVar5 = 0.0;
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_057b9c00) {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (value->klass == g_data_057b9c00) {
        fVar5 = System_Single__Parse_3ccd220
                          ((System_String_o *)value,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
        return fVar5;
      }
      fVar5 = (float)il2cpp_runtime_helper_022b2fd0();
      if ((System_String_o *)value != (System_String_o *)0x0) {
        pIVar1 = (Il2CppClass *)((System_String_o *)value)->klass;
        if (pIVar1 == g_data_057b9c00) {
          System_Int32__Parse((System_String_o *)value,(MethodInfo *)0x0);
          return extraout_XMM0_Da;
        }
        if (pIVar1 == g_data_057b9be8) {
          fVar5 = (float)il2cpp_runtime_helper_02305440();
          return fVar5;
        }
        if (pIVar1 == g_data_057b9bb8) {
          fVar5 = (float)il2cpp_runtime_helper_02305440();
          return fVar5;
        }
        if (pIVar1 == g_data_057b9b98) {
          fVar5 = (float)il2cpp_runtime_helper_02305440();
          return fVar5;
        }
      }
      return fVar5;
    }
    if (pIVar1 == g_data_057b9be8) {
      pfVar3 = (float *)il2cpp_runtime_helper_02305440(value);
      return *pfVar3;
    }
    if (pIVar1 == g_data_057b9bb8) {
      piVar4 = (int *)il2cpp_runtime_helper_02305440(value);
      return (float)*piVar4;
    }
    if (pIVar1 == g_data_057b9b98) {
      pcVar2 = (char *)il2cpp_runtime_helper_02305440(value);
      fVar5 = 0.0;
      if (*pcVar2 != '\0') {
        fVar5 = 1.0;
      }
    }
  }
  return fVar5;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToInt
// il2cpp: int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt (Il2CppObject* value, const MethodInfo* method);
// 0x4231980

int32_t CustomLogic_CustomLogicConvertBuiltin__ToInt(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  int32_t iVar2;
  float *pfVar3;
  int32_t *piVar4;
  byte *pbVar5;
  
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_057b9c00) {
      iVar2 = System_Int32__Parse((System_String_o *)value,(MethodInfo *)0x0);
      return iVar2;
    }
    if (pIVar1 == g_data_057b9be8) {
      pfVar3 = (float *)il2cpp_runtime_helper_02305440();
      return (int)*pfVar3;
    }
    if (pIVar1 == g_data_057b9bb8) {
      piVar4 = (int32_t *)il2cpp_runtime_helper_02305440();
      return *piVar4;
    }
    if (pIVar1 == g_data_057b9b98) {
      pbVar5 = (byte *)il2cpp_runtime_helper_02305440();
      return (int32_t)*pbVar5;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__ToBool (Il2CppObject* value, const MethodInfo* method);
// 0x42319e0

bool_conflict CustomLogic_CustomLogicConvertBuiltin__ToBool(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  System_String_o *a;
  float *pfVar3;
  int *piVar4;
  char *pcVar5;
  
  if (g_data_057adab9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057adab9 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_057b9c00) {
      a = System_String__ToLower((System_String_o *)value,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      return bVar2;
    }
    if (pIVar1 == g_data_057b9be8) {
      pfVar3 = (float *)il2cpp_runtime_helper_02305440(value);
      return -(uint)(*pfVar3 != 0.0) & 1;
    }
    if (pIVar1 == g_data_057b9bb8) {
      piVar4 = (int *)il2cpp_runtime_helper_02305440(value);
      return (bool_conflict)CONCAT71((int7)((ulong)piVar4 >> 8),*piVar4 != 0);
    }
    if (pIVar1 == g_data_057b9b98) {
      pcVar5 = (char *)il2cpp_runtime_helper_02305440(value);
      return (bool_conflict)CONCAT71((int7)((ulong)pcVar5 >> 8),*pcVar5 != '\0');
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__ToString (Il2CppObject* value, const MethodInfo* method);
// 0x4231a90

System_String_o * CustomLogic_CustomLogicConvertBuiltin__ToString(Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057adaba == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057adaba = '\x01';
    in_RDX = extraout_RDX;
  }
  if (value == (Il2CppObject *)0x0) {
    puVar4 = &"null";
  }
  else {
    pIVar1 = value->klass;
    if (pIVar1 == g_data_057b9c00) {
      return (System_String_o *)value;
    }
    if (pIVar1 != g_data_057b9b98) {
      vtableDispatch = pIVar1->vtable[3].methodPtr;
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(value,pIVar1->vtable[3].method,in_RDX,vtableDispatch);
      return pSVar2;
    }
    pcVar3 = (char *)il2cpp_runtime_helper_02305440(value);
    if (*pcVar3 == '\0') {
      puVar4 = &"false";
    }
    else {
      puVar4 = &"true";
    }
  }
  return (System_String_o *)*puVar4;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsFloat
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsFloat (Il2CppObject* value, const MethodInfo* method);
// 0x4231b30

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsFloat(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57b9b,value->klass == g_data_057b9be8);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsInt
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsInt (Il2CppObject* value, const MethodInfo* method);
// 0x4231b50

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsInt(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57b9b,value->klass == g_data_057b9bb8);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsBool
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsBool (Il2CppObject* value, const MethodInfo* method);
// 0x4231b70

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsBool(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57b9b,value->klass == g_data_057b9b98);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsString
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsString (Il2CppObject* value, const MethodInfo* method);
// 0x4231b90

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsString(Il2CppObject *value,MethodInfo *method)

{
  if (value != (Il2CppObject *)0x0) {
    return (bool_conflict)CONCAT71(0x57b9b,value->klass == g_data_057b9c00);
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsObject
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsObject (Il2CppObject* value, const MethodInfo* method);
// 0x4231bb0

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsObject(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (g_data_057adabb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
    g_data_057adabb = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicClassInstance >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsList
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsList (Il2CppObject* value, const MethodInfo* method);
// 0x4231c10

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsList(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (g_data_057adabc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    g_data_057adabc = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicListBuiltin >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicListBuiltin);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$IsDict
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__IsDict (Il2CppObject* value, const MethodInfo* method);
// 0x4231c70

bool_conflict CustomLogic_CustomLogicConvertBuiltin__IsDict(Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  
  if (g_data_057adabd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    g_data_057adabd = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (bVar1 <= (value->klass->_2).naturalAligment) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)TypeInfo_CustomLogicDictBuiltin >> 8),
                      (value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicDictBuiltin);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x4231cd0

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__HasVariable
          (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  Il2CppObject *value;
  System_String_o *name;
  System_String_o *methodName;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  name = variableName;
  __this_00 = cInstance;
  if (g_data_057adabe == '\0') {
    __this_00 = (CustomLogic_CustomLogicClassInstance_o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057adabe = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    name = variableName;
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return bVar3;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
    __this_00 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)variableName,value,MethodInfo_Void_set_Item);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  methodName = name;
  classInstance = __this_00;
  if (g_data_057adabf == '\0') {
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)&MethodInfo_Boolean_Remove;
    il2cpp_runtime_helper_023445d0();
    g_data_057adabf = '\x01';
  }
  if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    methodName = name;
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,name,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return bVar3;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar2,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adac0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,classInstance,methodName,(MethodInfo *)0x0);
    return bVar3;
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$DefineVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__DefineVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x4231cf0

void CustomLogic_CustomLogicConvertBuiltin__DefineVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               Il2CppObject *value,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar3;
  System_String_o *name;
  System_String_o *methodName;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  
  name = variableName;
  __this_00 = cInstance;
  if (g_data_057adabe == '\0') {
    __this_00 = (CustomLogic_CustomLogicClassInstance_o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057adabe = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    name = variableName;
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
    __this_00 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)variableName,value,MethodInfo_Void_set_Item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  methodName = name;
  classInstance = __this_00;
  if (g_data_057adabf == '\0') {
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)&MethodInfo_Boolean_Remove;
    il2cpp_runtime_helper_023445d0();
    g_data_057adabf = '\x01';
  }
  if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    methodName = name;
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,name,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adac0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__HasMethod(__this,classInstance,methodName,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$RemoveVariable
// il2cpp: void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* variableName, const MethodInfo* method);
// 0x4231d60

void CustomLogic_CustomLogicConvertBuiltin__RemoveVariable
               (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *variableName,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  System_String_o *methodName;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  
  methodName = variableName;
  classInstance = cInstance;
  if (g_data_057adabf == '\0') {
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)&MethodInfo_Boolean_Remove;
    il2cpp_runtime_helper_023445d0();
    g_data_057adabf = '\x01';
  }
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    methodName = variableName;
    bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(cInstance,variableName,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(cInstance->fields).Variables;
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this,(Il2CppObject *)variableName,MethodInfo_Boolean_Remove);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adac0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,classInstance,methodName,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicConvertBuiltin$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__HasMethod (CustomLogic_CustomLogicClassInstance_o* cInstance, System_String_o* methodName, const MethodInfo* method);
// 0x4231dd0

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__HasMethod
          (CustomLogic_CustomLogicClassInstance_o *cInstance,System_String_o *methodName,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar2;
  
  if (g_data_057adac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adac0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod(__this,cInstance,methodName,(MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


// CustomLogic.CustomLogicConvertBuiltin$$GetType
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__GetType (CustomLogic_CustomLogicClassInstance_o* cInstance, const MethodInfo* method);
// 0x4231e60

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__GetType
          (CustomLogic_CustomLogicClassInstance_o *cInstance,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  if (cInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    vtableDispatch = (cInstance->klass->vtable)._4_unknown.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtableDispatch)
                       (cInstance,(cInstance->klass->vtable)._4_unknown.method,in_RDX,vtableDispatch);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adac1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Convert");
    g_data_057adac1 = '\x01';
  }
  return "Convert";
}


// CustomLogic.CustomLogicConvertBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicConvertBuiltin__get_ClassName (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x4231e80

System_String_o *
CustomLogic_CustomLogicConvertBuiltin__get_ClassName
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057adac1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Convert");
    g_data_057adac1 = '\x01';
  }
  return "Convert";
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x4231eb0

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicConvertBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_IsStatic (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x4231ec0

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_IsStatic
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicConvertBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicConvertBuiltin_o* __this, const MethodInfo* method);
// 0x4231ed0

bool_conflict
CustomLogic_CustomLogicConvertBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicConvertBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


