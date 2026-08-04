// Type: CustomLogic.CustomLogicCollisionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40e9cb0

CustomLogic_CustomLogicCollisionBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  undefined8 *puVar8;
  System_ArgumentException_o *pSVar9;
  System_Func_T__object__o *pSVar10;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCollisionBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionBuiltin_CreateInstance);
  pSVar9 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac73b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ContactCount");
    il2cpp_runtime_helper_023445d0(&"GetContactPoint");
    il2cpp_runtime_helper_023445d0(&"Collider");
    il2cpp_runtime_helper_023445d0(&"GetContactImpulses");
    il2cpp_runtime_helper_023445d0(&"Impulse");
    il2cpp_runtime_helper_023445d0(&"GetContactSeparations");
    il2cpp_runtime_helper_023445d0(&"GetContactNorms");
    il2cpp_runtime_helper_023445d0(&"RelativeVelocity");
    g_data_057ac73b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar9,(MethodInfo *)0x0);
  if (uVar3 < 0x454bad02) {
    if (uVar3 < 0x2cfc1e5e) {
      if (uVar3 == 0x2706c88a) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"RelativeVelocity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar9;
          if (g_data_057ac73e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RelativeVelocity_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
            g_data_057ac73e = '\x01';
          }
          pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
          System_Func_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x2cfc1e5d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Collider",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        puVar8 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar9 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar9 = pSStack_28;
        }
        goto CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider;
      }
    }
    else if (uVar3 == 0x3e98dfb0) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetContactNorms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac741 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactNorms_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac741 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x454bad01) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetContactImpulses",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac742 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactImpulses_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac742 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0x4fa9d68e) {
    if (uVar3 == 0x4bf628c6) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetContactSeparations",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac743 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactSeparations_b__9);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac743 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x4fa9d68d) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"GetContactPoint",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac740 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactPoint_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac740 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xb7ea1ec2) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"ContactCount",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar9;
      if (g_data_057ac73f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContactCount_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
        g_data_057ac73f = '\x01';
      }
      pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
      System_Func_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0x7fde94f4) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Impulse",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSVar9;
    if (g_data_057ac73d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_3_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
      g_data_057ac73d = '\x01';
    }
    pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    System_Func_object__object____ctor();
    pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollisionBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar9,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar9,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar8 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar9,uVar7);
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider:
  *(System_String_o **)((long)ppSVar13 + -8) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = pSVar9;
  *(undefined8 **)((long)ppSVar13 + -0x18) = puVar8;
  if (g_data_057ac73c == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea149;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea155;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea161;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea16d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73c = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea183;
  pSVar10 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea19c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea1ab;
  pCVar11 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40ea1c5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar10,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40eab50

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac745 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac745 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40eabc0

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactPoint>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40eabd0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppObject *pIVar2;
  undefined1 auVar3 [16];
  UnityEngine_ContactPoint_o __this_00;
  uint uVar4;
  int32_t index;
  CustomLogic_BuiltinClassInstance_o *pCVar5;
  System_Object_array *pSVar6;
  long lVar7;
  undefined8 uVar8;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  undefined1 *puVar9;
  undefined8 *puVar10;
  _union_14 *p_Var11;
  ulong unaff_RBP;
  UnityEngine_Collision_o *pUVar12;
  UnityEngine_Collision_o *pUVar13;
  System_Object_array *pSVar14;
  System_Object_array *obj;
  System_Object_array *pSVar15;
  System_Object_array *unaff_R14;
  undefined8 unaff_R15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar17;
  undefined1 auVar18 [16];
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  _union_14 _Stack_48;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  System_Object_array *pSStack_20;
  undefined1 auStack_18 [8];
  
  pSVar14 = (System_Object_array *)__c;
  if (g_data_057ac746 == '\0') {
    pSStack_20 = (System_Object_array *)0x40eabef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_20 = (System_Object_array *)0x40eabfb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac746 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040eac51:
    pSStack_20 = (System_Object_array *)0x40eac56;
    il2cpp_runtime_helper_022b2c90();
label_040eac56:
    pSStack_20 = (System_Object_array *)0x40eac5b;
    auVar18 = il2cpp_runtime_helper_022b2ca0();
    pSVar6 = auVar18._8_8_;
    uStack_30 = auVar18._0_8_;
    unaff_R14 = pSVar14;
    pSStack_28 = __a;
    pSStack_20 = (System_Object_array *)__c;
    if (g_data_057ac747 == '\0') {
      pSStack_38 = (System_Object_array *)0x40eac7f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      pSStack_38 = (System_Object_array *)0x40eac8b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac747 = '\x01';
    }
    if (pSVar6 == (System_Object_array *)0x0) {
label_040eace1:
      pSStack_38 = (System_Object_array *)0x40eace6;
      il2cpp_runtime_helper_022b2c90();
    }
    else if (*(int *)&pSVar6->max_length != 0) {
      pSVar6 = (System_Object_array *)pSVar6->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_38 = (System_Object_array *)0x40eacb9;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_38 = (System_Object_array *)0x40eaccb;
      unaff_R14 = MethodInfo_Int32_ConvertTo_Int32;
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)pSVar6;
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)pSVar6,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (pSVar14 != (System_Object_array *)0x0) {
        pUVar12 = (UnityEngine_Collision_o *)(ulong)uVar4;
        puVar9 = auStack_18;
        __c = (CustomLogic_CustomLogicCollisionBuiltin_o *)pSStack_28;
        unaff_R14 = pSStack_20;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms;
      }
      goto label_040eace1;
    }
    pSStack_38 = (System_Object_array *)0x40eaceb;
    auVar18 = il2cpp_runtime_helper_022b2ca0();
    obj = auVar18._8_8_;
    _Stack_48 = auVar18._0_8_;
    pSVar15 = unaff_R14;
    pSStack_40 = pSVar6;
    pSStack_38 = pSVar14;
    if (g_data_057ac748 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac748 = '\x01';
    }
    if (obj == (System_Object_array *)0x0) {
label_040ead71:
      il2cpp_runtime_helper_022b2c90();
    }
    else if (*(int *)&obj->max_length != 0) {
      obj = (System_Object_array *)obj->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = MethodInfo_Int32_ConvertTo_Int32;
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)obj;
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (unaff_R14 != (System_Object_array *)0x0) {
        pUVar13 = (UnityEngine_Collision_o *)(ulong)uVar4;
        puVar10 = &uStack_30;
        pSVar14 = pSStack_40;
        obj = unaff_R14;
        unaff_R14 = pSStack_38;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses;
      }
      goto label_040ead71;
    }
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057ac749 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac749 = '\x01';
    }
    if (extraout_RDX != 0) {
      if (*(int *)(extraout_RDX + 0x18) == 0) goto label_040eae06;
      __this = *(CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (pSVar15 != (System_Object_array *)0x0) {
        p_Var11 = &_Stack_48;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_040eae06:
    il2cpp_runtime_helper_022b2ca0();
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  if ((int)__a->max_length == 0) goto label_040eac56;
  __a = (System_Object_array *)__a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pSStack_20 = (System_Object_array *)0x40eac29;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_Object_array *)0x40eac3b;
  pSVar14 = MethodInfo_Int32_ConvertTo_Int32;
  __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)__a;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (__c == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) goto label_040eac51;
  unaff_RBP = (ulong)uVar4;
  puVar9 = &stack0xffffffffffffff68;
  pSVar14 = (System_Object_array *)__c;
  if (g_data_057ac735 == '\0') {
    pSVar14 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar12 = (__c->fields).collision;
  if (pUVar12 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&pSStack_40,pUVar12,uVar4,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = pSStack_40;
    __this_00.fields.m_Impulse.fields._0_8_ = pSStack_38;
    __this_00.fields.m_Impulse.fields.z = (float)uStack_30;
    __this_00.fields.m_ThisColliderInstanceID = (int32_t)uStack_30._4_4_;
    __this_00.fields._40_8_ = pSStack_28;
    UVar17 = UnityEngine_ContactPoint__get_point(__this_00,(MethodInfo *)&stack0xffffffffffffff78);
    fVar16 = UVar17.fields.z;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar5[1].monitor = fVar16;
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms:
  *(ulong *)(puVar9 + -8) = unaff_RBP;
  *(CustomLogic_CustomLogicCollisionBuiltin_o **)(puVar9 + -0x10) = __c;
  puVar10 = (undefined8 *)(puVar9 + -0x98);
  unaff_RBP = (ulong)pUVar12 & 0xffffffff;
  obj = pSVar14;
  if (g_data_057ac736 == '\0') {
    obj = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)(puVar9 + -0xa0) = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  *(undefined8 *)(puVar9 + -0x78) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x88) = 0;
  *(undefined8 *)(puVar9 + -0x80) = 0;
  pUVar13 = (UnityEngine_Collision_o *)pSVar14->m_Items[2];
  if (pUVar13 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)(puVar9 + -0xa0) = 0x40e9877;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)(puVar9 + -0x40),pUVar13,(int32_t)pUVar12,(MethodInfo *)0x0);
    *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)(puVar9 + -0x20);
    *(undefined8 *)(puVar9 + -0x60) = *(undefined8 *)(puVar9 + -0x18);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x30);
    *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x40);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x38);
    *(undefined8 *)(puVar9 + -0xa0) = 0x40e98a1;
    UVar17 = UnityEngine_ContactPoint__get_normal
                       ((UnityEngine_ContactPoint_o)*(UnityEngine_ContactPoint_Fields *)(puVar9 + -0x98),
                        (MethodInfo *)(puVar9 + -0x88));
    auVar3._8_4_ = extraout_XMM0_Dc;
    auVar3._0_8_ = UVar17.fields._0_8_;
    auVar3._12_4_ = extraout_XMM0_Dd;
    *(undefined1 (*) [16])(puVar9 + -0x58) = auVar3;
    *(float *)(puVar9 + -0x8c) = UVar17.fields.z;
    *(undefined8 *)(puVar9 + -0xa0) = 0x40e98bb;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      *(undefined8 *)(puVar9 + -0xa0) = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)(puVar9 + -0xa0) = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar9 + -0xa0) = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = *(CustomLogic_BuiltinClassInstance_c **)(puVar9 + -0x58);
    *(undefined4 *)&pCVar5[1].monitor = *(undefined4 *)(puVar9 + -0x8c);
    return (Il2CppObject *)pCVar5;
  }
  *(undefined8 *)(puVar9 + -0xa0) = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses:
  *(ulong *)((long)puVar10 + -8) = unaff_RBP;
  *(System_Object_array **)((long)puVar10 + -0x10) = pSVar14;
  p_Var11 = (_union_14 *)((long)puVar10 + -0x98);
  unaff_RBP = (ulong)pUVar13 & 0xffffffff;
  pSVar15 = obj;
  if (g_data_057ac737 == '\0') {
    pSVar15 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  *(undefined8 *)((long)puVar10 + -0x68) = 0;
  *(undefined8 *)((long)puVar10 + -0x60) = 0;
  *(undefined8 *)((long)puVar10 + -0x78) = 0;
  *(undefined8 *)((long)puVar10 + -0x70) = 0;
  *(undefined8 *)((long)puVar10 + -0x88) = 0;
  *(undefined8 *)((long)puVar10 + -0x80) = 0;
  pUVar12 = (UnityEngine_Collision_o *)obj->m_Items[2];
  if (pUVar12 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e9987;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)((long)puVar10 + -0x40),pUVar12,(int32_t)pUVar13,
               (MethodInfo *)0x0);
    *(undefined8 *)((long)puVar10 + -0x68) = *(undefined8 *)((long)puVar10 + -0x20);
    *(undefined8 *)((long)puVar10 + -0x60) = *(undefined8 *)((long)puVar10 + -0x18);
    *(undefined8 *)((long)puVar10 + -0x78) = *(undefined8 *)((long)puVar10 + -0x30);
    *(undefined8 *)((long)puVar10 + -0x70) = *(undefined8 *)((long)puVar10 + -0x28);
    *(undefined8 *)((long)puVar10 + -0x88) = *(undefined8 *)((long)puVar10 + -0x40);
    *(undefined8 *)((long)puVar10 + -0x80) = *(undefined8 *)((long)puVar10 + -0x38);
    *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e99b1;
    UVar17 = UnityEngine_ContactPoint__get_impulse
                       ((UnityEngine_ContactPoint_o)
                        *(UnityEngine_ContactPoint_Fields *)((long)puVar10 + -0x98),
                        (MethodInfo *)((long)puVar10 + -0x88));
    auVar18._8_4_ = extraout_XMM0_Dc_00;
    auVar18._0_8_ = UVar17.fields._0_8_;
    auVar18._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])((long)puVar10 + -0x58) = auVar18;
    *(float *)((long)puVar10 + -0x8c) = UVar17.fields.z;
    *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e99cb;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = *(CustomLogic_BuiltinClassInstance_c **)((long)puVar10 + -0x58);
    *(undefined4 *)&pCVar5[1].monitor = *(undefined4 *)((long)puVar10 + -0x8c);
    return (Il2CppObject *)pCVar5;
  }
  *(undefined8 *)((long)puVar10 + -0xa0) = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  index = (int32_t)pUVar12;
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations:
  *(ulong *)((long)p_Var11 + -8) = unaff_RBP;
  *(System_Object_array **)((long)p_Var11 + -0x10) = obj;
  pSVar14 = pSVar15;
  if (g_data_057ac738 == '\0') {
    pSVar14 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9a60;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  *(undefined8 *)((long)p_Var11 + -0x58) = 0;
  *(undefined8 *)((long)p_Var11 + -0x50) = 0;
  *(undefined8 *)((long)p_Var11 + -0x68) = 0;
  *(undefined8 *)((long)p_Var11 + -0x60) = 0;
  *(undefined8 *)((long)p_Var11 + -0x78) = 0;
  *(undefined8 *)((long)p_Var11 + -0x70) = 0;
  pUVar13 = (UnityEngine_Collision_o *)pSVar15->m_Items[2];
  if (pUVar13 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9a94;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)((long)p_Var11 + -0x40),pUVar13,index,(MethodInfo *)0x0);
    *(undefined8 *)((long)p_Var11 + -0x58) = *(undefined8 *)((long)p_Var11 + -0x20);
    *(undefined8 *)((long)p_Var11 + -0x50) = *(undefined8 *)((long)p_Var11 + -0x18);
    *(undefined8 *)((long)p_Var11 + -0x68) = *(undefined8 *)((long)p_Var11 + -0x30);
    *(undefined8 *)((long)p_Var11 + -0x60) = *(undefined8 *)((long)p_Var11 + -0x28);
    *(undefined8 *)((long)p_Var11 + -0x78) = *(undefined8 *)((long)p_Var11 + -0x40);
    *(undefined8 *)((long)p_Var11 + -0x70) = *(undefined8 *)((long)p_Var11 + -0x38);
    *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9abe;
    fVar16 = UnityEngine_ContactPoint__get_separation
                       ((UnityEngine_ContactPoint_o)
                        *(UnityEngine_ContactPoint_Fields *)((long)p_Var11 + -0x88),
                        (MethodInfo *)((long)p_Var11 + -0x78));
    *(float *)((long)p_Var11 + -0x7c) = fVar16;
    *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9ad3;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9aeb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9b0a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9b14;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((long)p_Var11 + -0x7c);
    *(undefined4 *)&pCVar5[1].klass = uVar1;
    *(undefined4 *)((long)&pCVar5[1].klass + 4) = uVar1;
    *(undefined4 *)&pCVar5[1].monitor = uVar1;
    return (Il2CppObject *)pCVar5;
  }
  *(undefined8 *)((long)p_Var11 + -0x90) = 0x40e9b38;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)p_Var11 + -0x90) = unaff_R15;
  *(System_Object_array **)((long)p_Var11 + -0x98) = unaff_R14;
  *(System_Object_array **)((long)p_Var11 + -0xa0) = pSVar15;
  if (g_data_057ac739 == '\0') {
    *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9b5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9b69;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9b84;
  pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar6 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9bee;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar2 = pSVar14->m_Items[2];
    if (pIVar2 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9ba4;
      lVar7 = il2cpp_runtime_helper_023051f0(pIVar2);
      if (lVar7 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = pIVar2;
      *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9bc3;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items,pIVar2);
      *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9bd2;
      auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9be0;
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar18._0_8_,pSVar6,auVar18._8_8_);
      return (Il2CppObject *)auVar18._0_8_;
    }
  }
  *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9bf3;
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9bf8;
  uVar8 = il2cpp_runtime_helper_0231b270();
  lVar7 = 0;
  *(undefined8 *)((long)p_Var11 + -0xa8) = 0x40e9c02;
  auVar18 = il2cpp_runtime_helper_022b2b10(uVar8);
  return (Il2CppObject *)CONCAT71(auVar18._1_7_,lVar7 == auVar18._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactNorms>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40eac60

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_ContactPoint_o __this_00;
  uint uVar3;
  int32_t index;
  CustomLogic_BuiltinClassInstance_o *pCVar4;
  System_Object_array *pSVar5;
  long lVar6;
  undefined8 uVar7;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong unaff_RBP;
  UnityEngine_Collision_o *__this_01;
  UnityEngine_Collision_o *pUVar10;
  System_Object_array *pSVar11;
  System_Object_array *pSVar12;
  System_Object_array *unaff_R14;
  undefined8 unaff_R15;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar14;
  undefined1 auVar15 [16];
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  System_Object_array *pSStack_20;
  undefined1 auStack_18 [8];
  
  pSVar11 = (System_Object_array *)__c;
  if (g_data_057ac747 == '\0') {
    pSStack_20 = (System_Object_array *)0x40eac7f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_20 = (System_Object_array *)0x40eac8b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac747 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040eace1:
    pSStack_20 = (System_Object_array *)0x40eace6;
    il2cpp_runtime_helper_022b2c90();
label_040eace6:
    pSStack_20 = (System_Object_array *)0x40eaceb;
    auVar15 = il2cpp_runtime_helper_022b2ca0();
    pSVar5 = auVar15._8_8_;
    uStack_30 = auVar15._0_8_;
    pSVar12 = pSVar11;
    pSStack_28 = __a;
    pSStack_20 = (System_Object_array *)__c;
    if (g_data_057ac748 == '\0') {
      pSStack_38 = (System_Object_array *)0x40ead0f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      pSStack_38 = (System_Object_array *)0x40ead1b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac748 = '\x01';
    }
    if (pSVar5 == (System_Object_array *)0x0) {
label_040ead71:
      pSStack_38 = (System_Object_array *)0x40ead76;
      il2cpp_runtime_helper_022b2c90();
    }
    else if (*(int *)&pSVar5->max_length != 0) {
      pSVar5 = (System_Object_array *)pSVar5->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_38 = (System_Object_array *)0x40ead49;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_38 = (System_Object_array *)0x40ead5b;
      pSVar12 = MethodInfo_Int32_ConvertTo_Int32;
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)pSVar5;
      uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)pSVar5,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (pSVar11 != (System_Object_array *)0x0) {
        pUVar10 = (UnityEngine_Collision_o *)(ulong)uVar3;
        puVar8 = auStack_18;
        __c = (CustomLogic_CustomLogicCollisionBuiltin_o *)pSStack_28;
        unaff_R14 = pSStack_20;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses;
      }
      goto label_040ead71;
    }
    pSStack_38 = (System_Object_array *)0x40ead7b;
    il2cpp_runtime_helper_022b2ca0();
    pSStack_40 = pSVar5;
    pSStack_38 = pSVar11;
    if (g_data_057ac749 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac749 = '\x01';
    }
    if (extraout_RDX != 0) {
      if (*(int *)(extraout_RDX + 0x18) == 0) goto label_040eae06;
      __this = *(CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (pSVar12 != (System_Object_array *)0x0) {
        puVar9 = &uStack_30;
        pSVar11 = pSStack_40;
        unaff_R14 = pSStack_38;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_040eae06:
    il2cpp_runtime_helper_022b2ca0();
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  if ((int)__a->max_length == 0) goto label_040eace6;
  __a = (System_Object_array *)__a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pSStack_20 = (System_Object_array *)0x40eacb9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_Object_array *)0x40eaccb;
  pSVar11 = MethodInfo_Int32_ConvertTo_Int32;
  __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)__a;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (__c == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) goto label_040eace1;
  unaff_RBP = (ulong)uVar3;
  puVar8 = &stack0xffffffffffffff68;
  pSVar11 = (System_Object_array *)__c;
  if (g_data_057ac736 == '\0') {
    pSVar11 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar10 = (__c->fields).collision;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&pSStack_40,pUVar10,uVar3,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = pSStack_40;
    __this_00.fields.m_Impulse.fields._0_8_ = pSStack_38;
    __this_00.fields.m_Impulse.fields.z = (float)uStack_30;
    __this_00.fields.m_ThisColliderInstanceID = (int32_t)uStack_30._4_4_;
    __this_00.fields._40_8_ = pSStack_28;
    UVar14 = UnityEngine_ContactPoint__get_normal(__this_00,(MethodInfo *)&stack0xffffffffffffff78);
    fVar13 = UVar14.fields.z;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar14.fields._0_8_;
    *(float *)&pCVar4[1].monitor = fVar13;
    return (Il2CppObject *)pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses:
  *(ulong *)(puVar8 + -8) = unaff_RBP;
  *(CustomLogic_CustomLogicCollisionBuiltin_o **)(puVar8 + -0x10) = __c;
  puVar9 = (undefined8 *)(puVar8 + -0x98);
  unaff_RBP = (ulong)pUVar10 & 0xffffffff;
  pSVar12 = pSVar11;
  if (g_data_057ac737 == '\0') {
    pSVar12 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)(puVar8 + -0xa0) = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  *(undefined8 *)(puVar8 + -0x68) = 0;
  *(undefined8 *)(puVar8 + -0x60) = 0;
  *(undefined8 *)(puVar8 + -0x78) = 0;
  *(undefined8 *)(puVar8 + -0x70) = 0;
  *(undefined8 *)(puVar8 + -0x88) = 0;
  *(undefined8 *)(puVar8 + -0x80) = 0;
  __this_01 = (UnityEngine_Collision_o *)pSVar11->m_Items[2];
  if (__this_01 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)(puVar8 + -0xa0) = 0x40e9987;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)(puVar8 + -0x40),__this_01,(int32_t)pUVar10,(MethodInfo *)0x0);
    *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x20);
    *(undefined8 *)(puVar8 + -0x60) = *(undefined8 *)(puVar8 + -0x18);
    *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x30);
    *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x28);
    *(undefined8 *)(puVar8 + -0x88) = *(undefined8 *)(puVar8 + -0x40);
    *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x38);
    *(undefined8 *)(puVar8 + -0xa0) = 0x40e99b1;
    UVar14 = UnityEngine_ContactPoint__get_impulse
                       ((UnityEngine_ContactPoint_o)*(UnityEngine_ContactPoint_Fields *)(puVar8 + -0x98),
                        (MethodInfo *)(puVar8 + -0x88));
    auVar15._8_4_ = extraout_XMM0_Dc;
    auVar15._0_8_ = UVar14.fields._0_8_;
    auVar15._12_4_ = extraout_XMM0_Dd;
    *(undefined1 (*) [16])(puVar8 + -0x58) = auVar15;
    *(float *)(puVar8 + -0x8c) = UVar14.fields.z;
    *(undefined8 *)(puVar8 + -0xa0) = 0x40e99cb;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      *(undefined8 *)(puVar8 + -0xa0) = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)(puVar8 + -0xa0) = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar8 + -0xa0) = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = *(CustomLogic_BuiltinClassInstance_c **)(puVar8 + -0x58);
    *(undefined4 *)&pCVar4[1].monitor = *(undefined4 *)(puVar8 + -0x8c);
    return (Il2CppObject *)pCVar4;
  }
  *(undefined8 *)(puVar8 + -0xa0) = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  index = (int32_t)__this_01;
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations:
  *(ulong *)((long)puVar9 + -8) = unaff_RBP;
  *(System_Object_array **)((long)puVar9 + -0x10) = pSVar11;
  pSVar11 = pSVar12;
  if (g_data_057ac738 == '\0') {
    pSVar11 = (System_Object_array *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9a60;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  *(undefined8 *)((long)puVar9 + -0x58) = 0;
  *(undefined8 *)((long)puVar9 + -0x50) = 0;
  *(undefined8 *)((long)puVar9 + -0x68) = 0;
  *(undefined8 *)((long)puVar9 + -0x60) = 0;
  *(undefined8 *)((long)puVar9 + -0x78) = 0;
  *(undefined8 *)((long)puVar9 + -0x70) = 0;
  pUVar10 = (UnityEngine_Collision_o *)pSVar12->m_Items[2];
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9a94;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)((long)puVar9 + -0x40),pUVar10,index,(MethodInfo *)0x0);
    *(undefined8 *)((long)puVar9 + -0x58) = *(undefined8 *)((long)puVar9 + -0x20);
    *(undefined8 *)((long)puVar9 + -0x50) = *(undefined8 *)((long)puVar9 + -0x18);
    *(undefined8 *)((long)puVar9 + -0x68) = *(undefined8 *)((long)puVar9 + -0x30);
    *(undefined8 *)((long)puVar9 + -0x60) = *(undefined8 *)((long)puVar9 + -0x28);
    *(undefined8 *)((long)puVar9 + -0x78) = *(undefined8 *)((long)puVar9 + -0x40);
    *(undefined8 *)((long)puVar9 + -0x70) = *(undefined8 *)((long)puVar9 + -0x38);
    *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9abe;
    fVar13 = UnityEngine_ContactPoint__get_separation
                       ((UnityEngine_ContactPoint_o)*(UnityEngine_ContactPoint_Fields *)((long)puVar9 + -0x88)
                        ,(MethodInfo *)((long)puVar9 + -0x78));
    *(float *)((long)puVar9 + -0x7c) = fVar13;
    *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9ad3;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9aeb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9b0a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9b14;
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((long)puVar9 + -0x7c);
    *(undefined4 *)&pCVar4[1].klass = uVar1;
    *(undefined4 *)((long)&pCVar4[1].klass + 4) = uVar1;
    *(undefined4 *)&pCVar4[1].monitor = uVar1;
    return (Il2CppObject *)pCVar4;
  }
  *(undefined8 *)((long)puVar9 + -0x90) = 0x40e9b38;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar9 + -0x90) = unaff_R15;
  *(System_Object_array **)((long)puVar9 + -0x98) = unaff_R14;
  *(System_Object_array **)((long)puVar9 + -0xa0) = pSVar12;
  if (g_data_057ac739 == '\0') {
    *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9b5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9b69;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9b84;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar5 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9bee;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar2 = pSVar11->m_Items[2];
    if (pIVar2 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9ba4;
      lVar6 = il2cpp_runtime_helper_023051f0(pIVar2);
      if (lVar6 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pIVar2;
      *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9bc3;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pIVar2);
      *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9bd2;
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9be0;
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar15._0_8_,pSVar5,auVar15._8_8_);
      return (Il2CppObject *)auVar15._0_8_;
    }
  }
  *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9bf3;
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9bf8;
  uVar7 = il2cpp_runtime_helper_0231b270();
  lVar6 = 0;
  *(undefined8 *)((long)puVar9 + -0xa8) = 0x40e9c02;
  auVar15 = il2cpp_runtime_helper_022b2b10(uVar7);
  return (Il2CppObject *)CONCAT71(auVar15._1_7_,lVar6 == auVar15._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactImpulses>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40eacf0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_ContactPoint_o __this_00;
  uint index;
  int32_t index_00;
  CustomLogic_BuiltinClassInstance_o *pCVar3;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  Il2CppObject *extraout_RAX;
  undefined1 *puVar6;
  ulong unaff_RBP;
  UnityEngine_Collision_o *pUVar7;
  MethodInfo_24EE950 *pMVar8;
  MethodInfo_24EE950 *pMVar9;
  CustomLogic_CustomLogicCollisionBuiltin_o *unaff_R14;
  undefined8 unaff_R15;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined1 auVar12 [16];
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  undefined1 auStack_40 [32];
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_20;
  undefined1 auStack_18 [8];
  
  pMVar8 = (MethodInfo_24EE950 *)__c;
  if (g_data_057ac748 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead1b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac748 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_040ead71:
    pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead76;
    il2cpp_runtime_helper_022b2c90();
label_040ead76:
    pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead7b;
    auVar12 = il2cpp_runtime_helper_022b2ca0();
    lVar4 = auVar12._8_8_;
    auStack_40._16_8_ = auVar12._0_8_;
    auStack_40._24_8_ = __a;
    pCStack_20 = __c;
    if (g_data_057ac749 == '\0') {
      auStack_40._8_4_ = 1.6771743e-36;
      auStack_40._12_4_ = 0.0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
      auStack_40._8_4_ = 1.6771764e-36;
      auStack_40._12_4_ = 0.0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac749 = '\x01';
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) goto label_040eae06;
      __this = *(CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o **)(lVar4 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        auStack_40._8_4_ = 1.6771847e-36;
        auStack_40._12_4_ = 0.0;
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_40._8_4_ = 1.6771879e-36;
      auStack_40._12_4_ = 0.0;
      index_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__this,MethodInfo_Int32_ConvertTo_Int32);
      if (pMVar8 != (MethodInfo_24EE950 *)0x0) {
        puVar6 = auStack_18;
        __c = (CustomLogic_CustomLogicCollisionBuiltin_o *)auStack_40._24_8_;
        unaff_R14 = pCStack_20;
        goto CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations;
      }
    }
    auStack_40._8_4_ = 1.6771927e-36;
    auStack_40._12_4_ = 0.0;
    il2cpp_runtime_helper_022b2c90();
label_040eae06:
    auStack_40._8_4_ = 1.6771936e-36;
    auStack_40._12_4_ = 0.0;
    il2cpp_runtime_helper_022b2ca0();
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  if ((int)__a->max_length == 0) goto label_040ead76;
  __a = (System_Object_array *)__a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead49;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40ead5b;
  pMVar8 = MethodInfo_Int32_ConvertTo_Int32;
  __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)__a;
  index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__a,MethodInfo_Int32_ConvertTo_Int32);
  if (__c == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) goto label_040ead71;
  unaff_RBP = (ulong)index;
  puVar6 = &stack0xffffffffffffff68;
  pMVar8 = (MethodInfo_24EE950 *)__c;
  if (g_data_057ac737 == '\0') {
    pMVar8 = (MethodInfo_24EE950 *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar7 = (__c->fields).collision;
  if (pUVar7 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact((UnityEngine_ContactPoint_o *)auStack_40,pUVar7,index,(MethodInfo *)0x0)
    ;
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_00.fields.m_Normal.fields.y = (float)auStack_40._0_4_;
    __this_00.fields.m_Normal.fields.z = (float)auStack_40._4_4_;
    __this_00.fields.m_Impulse.fields.x = (float)auStack_40._8_4_;
    __this_00.fields.m_Impulse.fields.y = (float)auStack_40._12_4_;
    __this_00.fields.m_Impulse.fields.z = (float)auStack_40._16_4_;
    __this_00.fields.m_ThisColliderInstanceID = auStack_40._20_4_;
    __this_00.fields.m_OtherColliderInstanceID = auStack_40._24_4_;
    __this_00.fields.m_Separation = (float)auStack_40._28_4_;
    UVar11 = UnityEngine_ContactPoint__get_impulse(__this_00,(MethodInfo *)&stack0xffffffffffffff78);
    fVar10 = UVar11.fields.z;
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    pCVar3[1].klass = UVar11.fields._0_8_;
    *(float *)&pCVar3[1].monitor = fVar10;
    return (Il2CppObject *)pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  index_00 = (int32_t)pUVar7;
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations:
  *(ulong *)(puVar6 + -8) = unaff_RBP;
  *(CustomLogic_CustomLogicCollisionBuiltin_o **)(puVar6 + -0x10) = __c;
  pMVar9 = pMVar8;
  if (g_data_057ac738 == '\0') {
    pMVar9 = (MethodInfo_24EE950 *)&TypeInfo_CustomLogicVector3Builtin;
    *(undefined8 *)(puVar6 + -0x90) = 0x40e9a60;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  *(undefined8 *)(puVar6 + -0x78) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  pUVar7 = (UnityEngine_Collision_o *)pMVar8->parameters;
  if (pUVar7 != (UnityEngine_Collision_o *)0x0) {
    *(undefined8 *)(puVar6 + -0x90) = 0x40e9a94;
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)(puVar6 + -0x40),pUVar7,index_00,(MethodInfo *)0x0);
    *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x20);
    *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x18);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x30);
    *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x28);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x40);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x38);
    *(undefined8 *)(puVar6 + -0x90) = 0x40e9abe;
    fVar10 = UnityEngine_ContactPoint__get_separation
                       ((UnityEngine_ContactPoint_o)*(UnityEngine_ContactPoint_Fields *)(puVar6 + -0x88),
                        (MethodInfo *)(puVar6 + -0x78));
    *(float *)(puVar6 + -0x7c) = fVar10;
    *(undefined8 *)(puVar6 + -0x90) = 0x40e9ad3;
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      *(undefined8 *)(puVar6 + -0x90) = 0x40e9aeb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      *(undefined8 *)(puVar6 + -0x90) = 0x40e9b0a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar6 + -0x90) = 0x40e9b14;
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)(puVar6 + -0x7c);
    *(undefined4 *)&pCVar3[1].klass = uVar1;
    *(undefined4 *)((long)&pCVar3[1].klass + 4) = uVar1;
    *(undefined4 *)&pCVar3[1].monitor = uVar1;
    return (Il2CppObject *)pCVar3;
  }
  *(undefined8 *)(puVar6 + -0x90) = 0x40e9b38;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar6 + -0x90) = unaff_R15;
  *(CustomLogic_CustomLogicCollisionBuiltin_o **)(puVar6 + -0x98) = unaff_R14;
  *(MethodInfo_24EE950 **)(puVar6 + -0xa0) = pMVar8;
  if (g_data_057ac739 == '\0') {
    *(undefined8 *)(puVar6 + -0xa8) = 0x40e9b5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    *(undefined8 *)(puVar6 + -0xa8) = 0x40e9b69;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  *(undefined8 *)(puVar6 + -0xa8) = 0x40e9b84;
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    *(undefined8 *)(puVar6 + -0xa8) = 0x40e9bee;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar2 = (Il2CppObject *)pMVar9->parameters;
    if (pIVar2 != (Il2CppObject *)0x0) {
      *(undefined8 *)(puVar6 + -0xa8) = 0x40e9ba4;
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar2);
      if (lVar4 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar2;
      *(undefined8 *)(puVar6 + -0xa8) = 0x40e9bc3;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar2);
      *(undefined8 *)(puVar6 + -0xa8) = 0x40e9bd2;
      auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      *(undefined8 *)(puVar6 + -0xa8) = 0x40e9be0;
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar12._0_8_,parameters,auVar12._8_8_);
      return (Il2CppObject *)auVar12._0_8_;
    }
  }
  *(undefined8 *)(puVar6 + -0xa8) = 0x40e9bf3;
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  *(undefined8 *)(puVar6 + -0xa8) = 0x40e9bf8;
  uVar5 = il2cpp_runtime_helper_0231b270();
  lVar4 = 0;
  *(undefined8 *)(puVar6 + -0xa8) = 0x40e9c02;
  auVar12 = il2cpp_runtime_helper_022b2b10(uVar5);
  return (Il2CppObject *)CONCAT71(auVar12._1_7_,lVar4 == auVar12._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactSeparations>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40ead80

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  UnityEngine_ContactPoint_o __this_00;
  int32_t index;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 in_stack_ffffffffffffff84;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac749 == '\0') {
    uStack_20 = 0x40ead9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_20 = 0x40eadab;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac749 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_040eae06;
    __this = (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_20 = 0x40eadd9;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_20 = 0x40eadeb;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__this,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar4 = __c;
      if (g_data_057ac738 == '\0') {
        pCVar4 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
        il2cpp_runtime_helper_023445d0();
        g_data_057ac738 = '\x01';
      }
      pUVar1 = (__c->fields).collision;
      if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
        UnityEngine_Collision__GetContact
                  ((UnityEngine_ContactPoint_o *)&_Stack_40,pUVar1,index,(MethodInfo *)0x0);
        __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff84;
        __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78._0_4_;
        __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff78._4_4_;
        __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff78._8_4_;
        __this_00.fields.m_Normal.fields._4_8_ = _Stack_40.rgctx_data;
        __this_00.fields.m_Impulse.fields._0_8_ = _Stack_38.genericMethod;
        __this_00.fields._32_8_ = uStack_30;
        __this_00.fields._40_8_ = uStack_28;
        fVar5 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xffffffffffffff88);
        __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
        if (g_data_057ac643 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057ac643 = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
        *(float *)&__this_01[1].klass = fVar5;
        *(float *)((long)&__this_01[1].klass + 4) = fVar5;
        *(float *)&__this_01[1].monitor = fVar5;
        return (Il2CppObject *)__this_01;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac739 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        g_data_057ac739 = '\x01';
      }
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (parameters == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pUVar1 = (pCVar4->fields).collision;
        if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
          lVar2 = il2cpp_runtime_helper_023051f0(pUVar1);
          if (lVar2 == 0) goto label_040e9bf3;
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = (Il2CppObject *)pUVar1;
          il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar1);
          auVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar6._0_8_,parameters,auVar6._8_8_);
          return (Il2CppObject *)auVar6._0_8_;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
      uVar3 = il2cpp_runtime_helper_0231b270();
      lVar2 = 0;
      auVar6 = il2cpp_runtime_helper_022b2b10(uVar3);
      return (Il2CppObject *)CONCAT71(auVar6._1_7_,lVar2 == auVar6._8_8_);
    }
  }
  uStack_20 = 0x40eae06;
  il2cpp_runtime_helper_022b2c90();
label_040eae06:
  uStack_20 = 0x40eae0b;
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40e9d40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  undefined8 *puVar5;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ac73b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ContactCount");
    il2cpp_runtime_helper_023445d0(&"GetContactPoint");
    il2cpp_runtime_helper_023445d0(&"Collider");
    il2cpp_runtime_helper_023445d0(&"GetContactImpulses");
    il2cpp_runtime_helper_023445d0(&"Impulse");
    il2cpp_runtime_helper_023445d0(&"GetContactSeparations");
    il2cpp_runtime_helper_023445d0(&"GetContactNorms");
    il2cpp_runtime_helper_023445d0(&"RelativeVelocity");
    g_data_057ac73b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x454bad02) {
    if (uVar3 < 0x2cfc1e5e) {
      if (uVar3 == 0x2706c88a) {
        bVar4 = System_String__op_Equality(name,"RelativeVelocity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac73e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RelativeVelocity_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
            g_data_057ac73e = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
          System_Func_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x2cfc1e5d) &&
              (bVar4 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puVar5 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider;
      }
    }
    else if (uVar3 == 0x3e98dfb0) {
      bVar4 = System_String__op_Equality(name,"GetContactNorms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac741 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactNorms_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac741 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x454bad01) &&
            (bVar4 = System_String__op_Equality(name,"GetContactImpulses",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac742 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactImpulses_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac742 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x4fa9d68e) {
    if (uVar3 == 0x4bf628c6) {
      bVar4 = System_String__op_Equality(name,"GetContactSeparations",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac743 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactSeparations_b__9);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac743 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x4fa9d68d) &&
            (bVar4 = System_String__op_Equality(name,"GetContactPoint",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac740 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactPoint_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac740 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb7ea1ec2) {
    bVar4 = System_String__op_Equality(name,"ContactCount",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac73f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContactCount_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
        g_data_057ac73f = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0x7fde94f4) &&
          (bVar4 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac73d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_3_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
      g_data_057ac73d = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    System_Func_object__object____ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollisionBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar5 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar6);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar5;
  if (g_data_057ac73c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea149;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea155;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea161;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea16d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73c = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea183;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea19c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea1ab;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ea1c5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x40ea130

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac73c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Collider_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x40ea1d0

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__RelativeVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity (const MethodInfo* method);
// 0x40ea270

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac73e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RelativeVelocity_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__ContactCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount (const MethodInfo* method);
// 0x40ea310

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac73f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContactCount_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object);
    g_data_057ac73f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint (const MethodInfo* method);
// 0x40ea3b0

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac740 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactPoint_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac740 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactNorms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms (const MethodInfo* method);
// 0x40ea500

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac741 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactNorms_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac741 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactImpulses
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses (const MethodInfo* method);
// 0x40ea650

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac742 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactImpulses_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac742 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactSeparations
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations (const MethodInfo* method);
// 0x40ea7a0

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (g_data_057ac743 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetContactSeparations_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac743 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40ea8f0

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor(MethodInfo *method)

{
  UnityEngine_ContactPoint_o __this;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  int32_t iVar1;
  System_Object_array *pSVar2;
  long lVar3;
  CustomLogic_BuiltinClassInstance_o *pCVar4;
  undefined8 uVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  ulong uVar9;
  UnityEngine_Collision_o *pUVar10;
  MethodInfo *method_00;
  UnityEngine_Collision_o *pUVar11;
  UnityEngine_Collision_o *pUVar12;
  UnityEngine_Collision_o *pUVar13;
  UnityEngine_Collision_o *pUVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  undefined1 auVar17 [16];
  undefined1 in_stack_fffffffffffffd28 [12];
  undefined4 in_stack_fffffffffffffd34;
  _union_13 _Stack_290;
  _union_14 _Stack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  UnityEngine_Collision_o *pUStack_260;
  ulong uStack_258;
  undefined1 in_stack_fffffffffffffdb0 [12];
  undefined4 in_stack_fffffffffffffdbc;
  UnityEngine_ContactPoint_o UStack_1f8;
  UnityEngine_Collision_o *pUStack_1c8;
  ulong uStack_1c0;
  undefined1 in_stack_fffffffffffffe48 [12];
  undefined4 in_stack_fffffffffffffe54;
  UnityEngine_ContactPoint_o UStack_160;
  UnityEngine_Collision_o *pUStack_130;
  ulong uStack_128;
  undefined1 in_stack_fffffffffffffee0 [12];
  undefined4 in_stack_fffffffffffffeec;
  UnityEngine_ContactPoint_o UStack_c8;
  System_Collections_Generic_HashSet_object__o *pSStack_98;
  undefined8 uStack_38;
  undefined8 uStack_30;
  System_Collections_Generic_HashSet_object__o *pSStack_28;
  
  if (g_data_057ac744 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ContactCount");
    il2cpp_runtime_helper_023445d0(&"GetContactPoint");
    il2cpp_runtime_helper_023445d0(&"Collider");
    il2cpp_runtime_helper_023445d0(&"GetContactImpulses");
    il2cpp_runtime_helper_023445d0(&"Impulse");
    il2cpp_runtime_helper_023445d0(&"GetContactSeparations");
    il2cpp_runtime_helper_023445d0(&"GetContactNorms");
    il2cpp_runtime_helper_023445d0(&"RelativeVelocity");
    g_data_057ac744 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  method_00 = MethodInfo_HashSet_1_System_String;
  pSVar8 = pSVar6;
  System_Collections_Generic_HashSet_object____ctor(pSVar6,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(pSVar6,"Collider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"Impulse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"RelativeVelocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"ContactCount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"GetContactPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"GetContactNorms",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"GetContactImpulses",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar6,"GetContactSeparations",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = pSVar6;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),pSVar6);
    return;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_28 = (System_Collections_Generic_HashSet_object__o *)0x40eaac1;
    pSStack_28 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_022b2c90();
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      CustomLogic_CustomLogicCollisionBuiltin__get_Impulse
                ((CustomLogic_CustomLogicCollisionBuiltin_o *)pSVar8,method_00);
      return;
    }
    uStack_30 = 0x40eaae1;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity
                ((CustomLogic_CustomLogicCollisionBuiltin_o *)pSVar8,method_00);
      return;
    }
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40eab01;
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_022b2c90();
    if ((pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
       (pUVar10 = (UnityEngine_Collision_o *)(pSVar8->fields)._comparer,
       pUVar10 != (UnityEngine_Collision_o *)0x0)) {
      iVar1 = UnityEngine_Collision__get_contactCount(pUVar10,(MethodInfo *)0x0);
      uStack_38 = (System_Collections_Generic_HashSet_object__o *)CONCAT44(iVar1,(undefined4)uStack_38);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_38 + 4);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac745 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac745 = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
    return;
  }
  pSStack_28 = pSVar6;
  if (g_data_057ac734 == '\0') {
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e94ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e94b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac734 = '\x01';
  }
  uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e94d3;
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pUVar10 = (UnityEngine_Collision_o *)(pSVar8->fields)._comparer;
  if (pUVar10 == (UnityEngine_Collision_o *)0x0) {
label_040e9549:
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e954e;
    il2cpp_runtime_helper_022b2c90();
label_040e954e:
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9553;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e94e6;
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)
             UnityEngine_Collision__get_collider(pUVar10,(MethodInfo *)0x0);
    if (pSVar2 == (System_Object_array *)0x0) goto label_040e9549;
    pSVar8 = pSVar6;
    if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_040e9507:
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = (Il2CppObject *)pSVar6;
        uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9521;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items,pSVar6);
        uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9530;
        auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
        uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e953e;
        CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar17._0_8_,pSVar2,auVar17._8_8_);
        return;
      }
      goto label_040e954e;
    }
    uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9502;
    lVar3 = il2cpp_runtime_helper_023051f0(pSVar6);
    if (lVar3 != 0) goto label_040e9507;
  }
  uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9558;
  lVar3 = il2cpp_runtime_helper_0231b270();
  uVar9 = 0;
  uStack_38 = (System_Collections_Generic_HashSet_object__o *)0x40e9562;
  il2cpp_runtime_helper_022b2b10();
  pUVar10 = *(UnityEngine_Collision_o **)(lVar3 + 0x30);
  uStack_38 = pSVar8;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UVar16 = UnityEngine_Collision__get_impulse(pUVar10,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar4[1].monitor = UVar16.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UVar16 = UnityEngine_Collision__get_relativeVelocity(pUVar10,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar4[1].monitor = UVar16.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__get_contactCount(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar10;
  pSStack_98 = pSVar8;
  if (g_data_057ac735 == '\0') {
    pUVar11 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_128 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar14 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar14 != (UnityEngine_Collision_o *)0x0) {
    uStack_128 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_c8,pUVar14,(int32_t)uVar9,(MethodInfo *)0x0);
    uStack_128 = 0x40e9791;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffeec;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffee0._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffee0._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffee0._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_c8.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_c8.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_c8.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_c8.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_c8.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_c8.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_c8.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_c8.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_point(__this_02,(MethodInfo *)&stack0xfffffffffffffef0);
    fVar15 = UVar16.fields.z;
    uStack_128 = 0x40e97ab;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_128 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_128 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_128 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar4[1].monitor = fVar15;
    return;
  }
  uStack_128 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  pUStack_130 = pUVar10;
  uStack_128 = uVar9 & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar12 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1c0 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_1c0 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_160,pUVar10,(int32_t)pUVar14,(MethodInfo *)0x0);
    uStack_1c0 = 0x40e98a1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe54;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe48._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe48._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe48._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_160.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_160.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_160.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_160.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_160.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_160.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_160.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_160.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_normal(__this_01,(MethodInfo *)&stack0xfffffffffffffe58);
    fVar15 = UVar16.fields.z;
    uStack_1c0 = 0x40e98bb;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1c0 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1c0 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1c0 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar4[1].monitor = fVar15;
    return;
  }
  uStack_1c0 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar12;
  pUStack_1c8 = pUVar11;
  uStack_1c0 = (ulong)pUVar14 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar13 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_258 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar12->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    uStack_258 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_1f8,pUVar11,(int32_t)pUVar10,(MethodInfo *)0x0);
    uStack_258 = 0x40e99b1;
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdbc;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffdb0._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffdb0._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffdb0._8_4_;
    __this_00.fields.m_Normal.fields.y = UStack_1f8.fields.m_Point.fields.x;
    __this_00.fields.m_Normal.fields.z = UStack_1f8.fields.m_Point.fields.y;
    __this_00.fields.m_Impulse.fields.x = UStack_1f8.fields.m_Point.fields.z;
    __this_00.fields.m_Impulse.fields.y = UStack_1f8.fields.m_Normal.fields.x;
    __this_00.fields.m_Impulse.fields.z = UStack_1f8.fields.m_Normal.fields.y;
    __this_00.fields.m_ThisColliderInstanceID = (int32_t)UStack_1f8.fields.m_Normal.fields.z;
    __this_00.fields.m_OtherColliderInstanceID = (int32_t)UStack_1f8.fields.m_Impulse.fields.x;
    __this_00.fields.m_Separation = UStack_1f8.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_impulse(__this_00,(MethodInfo *)&stack0xfffffffffffffdc0);
    fVar15 = UVar16.fields.z;
    uStack_258 = 0x40e99cb;
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_258 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_258 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_258 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    pCVar4[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar4[1].monitor = fVar15;
    return;
  }
  uStack_258 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar13;
  pUStack_260 = pUVar12;
  uStack_258 = (ulong)pUVar10 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar14 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar13->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_290,pUVar10,(int32_t)pUVar11,(MethodInfo *)0x0);
    __this.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd34;
    __this.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd28._0_4_;
    __this.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd28._4_4_;
    __this.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd28._8_4_;
    __this.fields.m_Normal.fields._4_8_ = _Stack_290.rgctx_data;
    __this.fields.m_Impulse.fields._0_8_ = _Stack_288.genericMethod;
    __this.fields._32_8_ = uStack_280;
    __this.fields._40_8_ = uStack_278;
    fVar15 = UnityEngine_ContactPoint__get_separation(__this,(MethodInfo *)&stack0xfffffffffffffd38);
    pCVar4 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar4,(MethodInfo *)0x0);
    *(float *)&pCVar4[1].klass = fVar15;
    *(float *)((long)&pCVar4[1].klass + 4) = fVar15;
    *(float *)&pCVar4[1].monitor = fVar15;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  if (pSVar2 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar7 = *(Il2CppObject **)&(pUVar14->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar7 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pIVar7,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items,pIVar7);
      auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar17._0_8_,pSVar2,auVar17._8_8_);
      return;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar5 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar5,0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x40eaab0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_ContactPoint_o __this;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  int32_t iVar1;
  System_Object_array *pSVar2;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar3;
  long lVar4;
  CustomLogic_BuiltinClassInstance_o *pCVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  Il2CppObject *pIVar8;
  ulong uVar9;
  UnityEngine_Collision_o *pUVar10;
  UnityEngine_Collision_o *pUVar11;
  UnityEngine_Collision_o *pUVar12;
  UnityEngine_Collision_o *pUVar13;
  UnityEngine_Collision_o *pUVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  undefined1 auVar17 [16];
  undefined1 in_stack_fffffffffffffd40 [12];
  undefined4 in_stack_fffffffffffffd4c;
  _union_13 _Stack_278;
  _union_14 _Stack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  UnityEngine_Collision_o *pUStack_248;
  ulong uStack_240;
  undefined1 in_stack_fffffffffffffdc8 [12];
  undefined4 in_stack_fffffffffffffdd4;
  UnityEngine_ContactPoint_o UStack_1e0;
  UnityEngine_Collision_o *pUStack_1b0;
  ulong uStack_1a8;
  undefined1 in_stack_fffffffffffffe60 [12];
  undefined4 in_stack_fffffffffffffe6c;
  UnityEngine_ContactPoint_o UStack_148;
  UnityEngine_Collision_o *pUStack_118;
  ulong uStack_110;
  undefined1 in_stack_fffffffffffffef8 [12];
  undefined4 in_stack_ffffffffffffff04;
  UnityEngine_ContactPoint_o UStack_b0;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_80;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar7 = CustomLogic_CustomLogicCollisionBuiltin__get_Impulse(__i,method);
      return (Il2CppObject *)pCVar7;
    }
    uStack_18 = 0x40eaae1;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar7 = CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity(__i,method);
      return (Il2CppObject *)pCVar7;
    }
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40eab01;
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)il2cpp_runtime_helper_022b2c90();
    if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
       (pUVar10 = (__i->fields).collision, pUVar10 != (UnityEngine_Collision_o *)0x0)) {
      iVar1 = UnityEngine_Collision__get_contactCount(pUVar10,(MethodInfo *)0x0);
      uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)CONCAT44(iVar1,(undefined4)uStack_20);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac745 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac745 = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return pIVar8;
  }
  if (g_data_057ac734 == '\0') {
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e94ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e94b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac734 = '\x01';
  }
  uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e94d3;
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pUVar10 = (__i->fields).collision;
  if (pUVar10 == (UnityEngine_Collision_o *)0x0) {
label_040e9549:
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e954e;
    il2cpp_runtime_helper_022b2c90();
label_040e954e:
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9553;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e94e6;
    pCVar3 = (CustomLogic_CustomLogicCollisionBuiltin_o *)
             UnityEngine_Collision__get_collider(pUVar10,(MethodInfo *)0x0);
    if (pSVar2 == (System_Object_array *)0x0) goto label_040e9549;
    __i = pCVar3;
    if (pCVar3 == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
label_040e9507:
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = (Il2CppObject *)pCVar3;
        uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9521;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items,pCVar3);
        uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9530;
        auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
        uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e953e;
        CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar17._0_8_,pSVar2,auVar17._8_8_);
        return (Il2CppObject *)auVar17._0_8_;
      }
      goto label_040e954e;
    }
    uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9502;
    lVar4 = il2cpp_runtime_helper_023051f0(pCVar3);
    if (lVar4 != 0) goto label_040e9507;
  }
  uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9558;
  lVar4 = il2cpp_runtime_helper_0231b270();
  uVar9 = 0;
  uStack_20 = (CustomLogic_CustomLogicCollisionBuiltin_o *)0x40e9562;
  il2cpp_runtime_helper_022b2b10();
  pUVar10 = *(UnityEngine_Collision_o **)(lVar4 + 0x30);
  uStack_20 = __i;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UVar16 = UnityEngine_Collision__get_impulse(pUVar10,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar5[1].monitor = UVar16.fields.z;
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UVar16 = UnityEngine_Collision__get_relativeVelocity(pUVar10,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar5[1].monitor = UVar16.fields.z;
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    iVar1 = UnityEngine_Collision__get_contactCount(pUVar10,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,iVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar10;
  pCStack_80 = __i;
  if (g_data_057ac735 == '\0') {
    pUVar11 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_110 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar14 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar14 != (UnityEngine_Collision_o *)0x0) {
    uStack_110 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_b0,pUVar14,(int32_t)uVar9,(MethodInfo *)0x0);
    uStack_110 = 0x40e9791;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff04;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffef8._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffef8._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffef8._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_b0.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_b0.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_b0.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_b0.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_b0.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_b0.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_b0.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_b0.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_point(__this_02,(MethodInfo *)&stack0xffffffffffffff08);
    fVar15 = UVar16.fields.z;
    uStack_110 = 0x40e97ab;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_110 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_110 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_110 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar5[1].monitor = fVar15;
    return (Il2CppObject *)pCVar5;
  }
  uStack_110 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  pUStack_118 = pUVar10;
  uStack_110 = uVar9 & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar12 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1a8 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_1a8 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_148,pUVar10,(int32_t)pUVar14,(MethodInfo *)0x0);
    uStack_1a8 = 0x40e98a1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe6c;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe60._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe60._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe60._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_148.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_148.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_148.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_148.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_148.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_148.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_148.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_148.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_normal(__this_01,(MethodInfo *)&stack0xfffffffffffffe70);
    fVar15 = UVar16.fields.z;
    uStack_1a8 = 0x40e98bb;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1a8 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1a8 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1a8 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar5[1].monitor = fVar15;
    return (Il2CppObject *)pCVar5;
  }
  uStack_1a8 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar12;
  pUStack_1b0 = pUVar11;
  uStack_1a8 = (ulong)pUVar14 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar13 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_240 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar12->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    uStack_240 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_1e0,pUVar11,(int32_t)pUVar10,(MethodInfo *)0x0);
    uStack_240 = 0x40e99b1;
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdd4;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffdc8._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffdc8._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffdc8._8_4_;
    __this_00.fields.m_Normal.fields.y = UStack_1e0.fields.m_Point.fields.x;
    __this_00.fields.m_Normal.fields.z = UStack_1e0.fields.m_Point.fields.y;
    __this_00.fields.m_Impulse.fields.x = UStack_1e0.fields.m_Point.fields.z;
    __this_00.fields.m_Impulse.fields.y = UStack_1e0.fields.m_Normal.fields.x;
    __this_00.fields.m_Impulse.fields.z = UStack_1e0.fields.m_Normal.fields.y;
    __this_00.fields.m_ThisColliderInstanceID = (int32_t)UStack_1e0.fields.m_Normal.fields.z;
    __this_00.fields.m_OtherColliderInstanceID = (int32_t)UStack_1e0.fields.m_Impulse.fields.x;
    __this_00.fields.m_Separation = UStack_1e0.fields.m_Impulse.fields.y;
    UVar16 = UnityEngine_ContactPoint__get_impulse(__this_00,(MethodInfo *)&stack0xfffffffffffffdd8);
    fVar15 = UVar16.fields.z;
    uStack_240 = 0x40e99cb;
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_240 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_240 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_240 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    pCVar5[1].klass = UVar16.fields._0_8_;
    *(float *)&pCVar5[1].monitor = fVar15;
    return (Il2CppObject *)pCVar5;
  }
  uStack_240 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar13;
  pUStack_248 = pUVar12;
  uStack_240 = (ulong)pUVar10 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar14 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar13->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_278,pUVar10,(int32_t)pUVar11,(MethodInfo *)0x0);
    __this.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd4c;
    __this.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd40._0_4_;
    __this.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd40._4_4_;
    __this.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd40._8_4_;
    __this.fields.m_Normal.fields._4_8_ = _Stack_278.rgctx_data;
    __this.fields.m_Impulse.fields._0_8_ = _Stack_270.genericMethod;
    __this.fields._32_8_ = uStack_268;
    __this.fields._40_8_ = uStack_260;
    fVar15 = UnityEngine_ContactPoint__get_separation(__this,(MethodInfo *)&stack0xfffffffffffffd50);
    pCVar5 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar5,(MethodInfo *)0x0);
    *(float *)&pCVar5[1].klass = fVar15;
    *(float *)((long)&pCVar5[1].klass + 4) = fVar15;
    *(float *)&pCVar5[1].monitor = fVar15;
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar2 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar8 = *(Il2CppObject **)&(pUVar14->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar8 != (Il2CppObject *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar8);
      if (lVar4 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = pIVar8;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items,pIVar8);
      auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar17._0_8_,pSVar2,auVar17._8_8_);
      return (Il2CppObject *)auVar17._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar6 = il2cpp_runtime_helper_0231b270();
  lVar4 = 0;
  auVar17 = il2cpp_runtime_helper_022b2b10(uVar6);
  return (Il2CppObject *)CONCAT71(auVar17._1_7_,lVar4 == auVar17._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x40eaad0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  int32_t iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicCollisionBuiltin__get_Impulse(__i,method);
    return (Il2CppObject *)pCVar2;
  }
  uStack_10 = 0x40eaae1;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity(__i,method);
    return (Il2CppObject *)pCVar2;
  }
  uStack_18 = 0x40eab01;
  uStack_18 = il2cpp_runtime_helper_022b2c90();
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    iVar1 = UnityEngine_Collision__get_contactCount(__this,(MethodInfo *)0x0);
    uStack_18 = CONCAT44(iVar1,(undefined4)uStack_18);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_18 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac745 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac745 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__RelativeVelocity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x40eaaf0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  int32_t iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_10;
  
  if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity(__i,method);
    return (Il2CppObject *)pCVar2;
  }
  uStack_10 = 0x40eab01;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    iVar1 = UnityEngine_Collision__get_contactCount(__this,(MethodInfo *)0x0);
    uStack_10 = CONCAT44(iVar1,(undefined4)uStack_10);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_10 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac745 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac745 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__ContactCount>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x40eab10

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    UnityEngine_Collision__get_contactCount(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac745 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac745 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9340

void CustomLogic_CustomLogicCollisionBuiltin___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac732 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac732 = '\x01';
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


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x40e93b0

void CustomLogic_CustomLogicCollisionBuiltin___ctor_3fe93b0
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  Il2CppClass *pIVar3;
  System_Object_array *pSVar4;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar5;
  long lVar6;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar9;
  ulong uVar10;
  UnityEngine_Collision_o *pUVar11;
  UnityEngine_Collision_o *pUVar12;
  UnityEngine_Collision_o *pUVar13;
  UnityEngine_Collision_o *pUVar14;
  UnityEngine_Collision_o *pUVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  undefined1 auVar18 [16];
  undefined1 in_stack_fffffffffffffd28 [12];
  undefined4 in_stack_fffffffffffffd34;
  _union_13 _Stack_290;
  _union_14 _Stack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  UnityEngine_Collision_o *pUStack_260;
  ulong uStack_258;
  undefined1 in_stack_fffffffffffffdb0 [12];
  undefined4 in_stack_fffffffffffffdbc;
  UnityEngine_ContactPoint_o UStack_1f8;
  UnityEngine_Collision_o *pUStack_1c8;
  ulong uStack_1c0;
  undefined1 in_stack_fffffffffffffe48 [12];
  undefined4 in_stack_fffffffffffffe54;
  UnityEngine_ContactPoint_o UStack_160;
  UnityEngine_Collision_o *pUStack_130;
  ulong uStack_128;
  undefined1 in_stack_fffffffffffffee0 [12];
  undefined4 in_stack_fffffffffffffeec;
  UnityEngine_ContactPoint_o UStack_c8;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_98;
  
  if (g_data_057ac733 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Collision);
    g_data_057ac733 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar9 = __this;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pIVar3 = TypeInfo_Collision;
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)parameters->max_length != 0) {
    pUVar11 = (UnityEngine_Collision_o *)parameters->m_Items[0];
    if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
      bVar1 = (TypeInfo_Collision->_2).naturalAligment;
      if ((bVar1 <= (((Il2CppClass *)pUVar11->klass)->_2).naturalAligment) &&
         ((((Il2CppClass *)pUVar11->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Collision)) {
        (__this->fields).collision = pUVar11;
        if ((bVar1 <= (((Il2CppClass *)pUVar11->klass)->_2).naturalAligment) &&
           ((((Il2CppClass *)pUVar11->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
        goto label_040e9472;
      }
      il2cpp_runtime_helper_022b2fd0(pUVar11,pIVar3);
    }
    (__this->fields).collision = (UnityEngine_Collision_o *)0x0;
label_040e9472:
    il2cpp_runtime_helper_022b4080(&(__this->fields).collision);
    return;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac734 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac734 = '\x01';
  }
  pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pUVar11 = (pCVar9->fields).collision;
  if (pUVar11 == (UnityEngine_Collision_o *)0x0) {
label_040e9549:
    il2cpp_runtime_helper_022b2c90();
label_040e954e:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pCVar5 = (CustomLogic_CustomLogicCollisionBuiltin_o *)
             UnityEngine_Collision__get_collider(pUVar11,(MethodInfo *)0x0);
    if (pSVar4 == (System_Object_array *)0x0) goto label_040e9549;
    pCVar9 = pCVar5;
    if (pCVar5 == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
label_040e9507:
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = (Il2CppObject *)pCVar5;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items,pCVar5);
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar18._0_8_,pSVar4,auVar18._8_8_);
        return;
      }
      goto label_040e954e;
    }
    lVar6 = il2cpp_runtime_helper_023051f0(pCVar5);
    if (lVar6 != 0) goto label_040e9507;
  }
  lVar6 = il2cpp_runtime_helper_0231b270();
  uVar10 = 0;
  il2cpp_runtime_helper_022b2b10();
  pUVar11 = *(UnityEngine_Collision_o **)(lVar6 + 0x30);
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    UVar17 = UnityEngine_Collision__get_impulse(pUVar11,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    pCVar7[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar7[1].monitor = UVar17.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    UVar17 = UnityEngine_Collision__get_relativeVelocity(pUVar11,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    pCVar7[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar7[1].monitor = UVar17.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__get_contactCount(pUVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  pCStack_98 = pCVar9;
  if (g_data_057ac735 == '\0') {
    pUVar12 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_128 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar15 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar15 != (UnityEngine_Collision_o *)0x0) {
    uStack_128 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_c8,pUVar15,(int32_t)uVar10,(MethodInfo *)0x0);
    uStack_128 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffeec;
    __this_03.fields.m_Point.fields.x = (float)in_stack_fffffffffffffee0._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_fffffffffffffee0._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_fffffffffffffee0._8_4_;
    __this_03.fields.m_Normal.fields.y = UStack_c8.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = UStack_c8.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = UStack_c8.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = UStack_c8.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = UStack_c8.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)UStack_c8.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)UStack_c8.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = UStack_c8.fields.m_Impulse.fields.y;
    UVar17 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xfffffffffffffef0);
    fVar16 = UVar17.fields.z;
    uStack_128 = 0x40e97ab;
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_128 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_128 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_128 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    pCVar7[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar7[1].monitor = fVar16;
    return;
  }
  uStack_128 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar12;
  pUStack_130 = pUVar11;
  uStack_128 = uVar10 & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar13 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1c0 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar12->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    uStack_1c0 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_160,pUVar11,(int32_t)pUVar15,(MethodInfo *)0x0);
    uStack_1c0 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe54;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe48._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe48._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe48._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_160.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_160.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_160.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_160.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_160.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_160.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_160.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_160.fields.m_Impulse.fields.y;
    UVar17 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffe58);
    fVar16 = UVar17.fields.z;
    uStack_1c0 = 0x40e98bb;
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1c0 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1c0 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1c0 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    pCVar7[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar7[1].monitor = fVar16;
    return;
  }
  uStack_1c0 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar13;
  pUStack_1c8 = pUVar12;
  uStack_1c0 = (ulong)pUVar15 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar14 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_258 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar12 = *(UnityEngine_Collision_o **)&(pUVar13->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar12 != (UnityEngine_Collision_o *)0x0) {
    uStack_258 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_1f8,pUVar12,(int32_t)pUVar11,(MethodInfo *)0x0);
    uStack_258 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdbc;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffdb0._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffdb0._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffdb0._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_1f8.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_1f8.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_1f8.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_1f8.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_1f8.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_1f8.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_1f8.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_1f8.fields.m_Impulse.fields.y;
    UVar17 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffdc0);
    fVar16 = UVar17.fields.z;
    uStack_258 = 0x40e99cb;
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_258 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_258 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_258 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    pCVar7[1].klass = UVar17.fields._0_8_;
    *(float *)&pCVar7[1].monitor = fVar16;
    return;
  }
  uStack_258 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = pUVar14;
  pUStack_260 = pUVar13;
  uStack_258 = (ulong)pUVar11 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar15 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar11 = *(UnityEngine_Collision_o **)&(pUVar14->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar11 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_290,pUVar11,(int32_t)pUVar12,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd34;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd28._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd28._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd28._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_290.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_288.genericMethod;
    __this_00.fields._32_8_ = uStack_280;
    __this_00.fields._40_8_ = uStack_278;
    fVar16 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffd38);
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar7,(MethodInfo *)0x0);
    *(float *)&pCVar7[1].klass = fVar16;
    *(float *)((long)&pCVar7[1].klass + 4) = fVar16;
    *(float *)&pCVar7[1].monitor = fVar16;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  if (pSVar4 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar2 = *(Il2CppObject **)&(pUVar15->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar6 = il2cpp_runtime_helper_023051f0(pIVar2,(((pSVar4->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items,pIVar2);
      auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar18._0_8_,pSVar4,auVar18._8_8_);
      return;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Collider
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Collider (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9490

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Collider
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  int32_t iVar2;
  System_Object_array *pSVar3;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar4;
  long lVar5;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  ulong uVar8;
  UnityEngine_Collision_o *pUVar9;
  UnityEngine_Collision_o *pUVar10;
  UnityEngine_Collision_o *pUVar11;
  UnityEngine_Collision_o *pUVar12;
  UnityEngine_Collision_o *pUVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  undefined1 auVar16 [16];
  undefined1 in_stack_fffffffffffffd40 [12];
  undefined4 in_stack_fffffffffffffd4c;
  _union_13 _Stack_278;
  _union_14 _Stack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  UnityEngine_Collision_o *pUStack_248;
  ulong uStack_240;
  undefined1 in_stack_fffffffffffffdc8 [12];
  undefined4 in_stack_fffffffffffffdd4;
  UnityEngine_ContactPoint_o UStack_1e0;
  UnityEngine_Collision_o *pUStack_1b0;
  ulong uStack_1a8;
  undefined1 in_stack_fffffffffffffe60 [12];
  undefined4 in_stack_fffffffffffffe6c;
  UnityEngine_ContactPoint_o UStack_148;
  UnityEngine_Collision_o *pUStack_118;
  ulong uStack_110;
  undefined1 in_stack_fffffffffffffef8 [12];
  undefined4 in_stack_ffffffffffffff04;
  UnityEngine_ContactPoint_o UStack_b0;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_80;
  
  if (g_data_057ac734 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac734 = '\x01';
  }
  pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  pUVar9 = (__this->fields).collision;
  if (pUVar9 == (UnityEngine_Collision_o *)0x0) {
label_040e9549:
    il2cpp_runtime_helper_022b2c90();
label_040e954e:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pCVar4 = (CustomLogic_CustomLogicCollisionBuiltin_o *)
             UnityEngine_Collision__get_collider(pUVar9,(MethodInfo *)0x0);
    if (pSVar3 == (System_Object_array *)0x0) goto label_040e9549;
    __this = pCVar4;
    if (pCVar4 == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
label_040e9507:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = (Il2CppObject *)pCVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items,pCVar4);
        auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar16._0_8_,pSVar3,auVar16._8_8_);
        return auVar16._0_8_;
      }
      goto label_040e954e;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pCVar4);
    if (lVar5 != 0) goto label_040e9507;
  }
  lVar5 = il2cpp_runtime_helper_0231b270();
  uVar8 = 0;
  il2cpp_runtime_helper_022b2b10();
  pUVar9 = *(UnityEngine_Collision_o **)(lVar5 + 0x30);
  if (pUVar9 != (UnityEngine_Collision_o *)0x0) {
    UVar15 = UnityEngine_Collision__get_impulse(pUVar9,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields).collider = UVar15.fields._0_8_;
    *(float *)&pCVar6[1].klass = UVar15.fields.z;
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar9 != (UnityEngine_Collision_o *)0x0) {
    UVar15 = UnityEngine_Collision__get_relativeVelocity(pUVar9,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields).collider = UVar15.fields._0_8_;
    *(float *)&pCVar6[1].klass = UVar15.fields.z;
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar9 != (UnityEngine_Collision_o *)0x0) {
    iVar2 = UnityEngine_Collision__get_contactCount(pUVar9,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicColliderBuiltin_o *)CONCAT44(extraout_var,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  pCStack_80 = __this;
  if (g_data_057ac735 == '\0') {
    pUVar10 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_110 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar13 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar13 != (UnityEngine_Collision_o *)0x0) {
    uStack_110 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_b0,pUVar13,(int32_t)uVar8,(MethodInfo *)0x0);
    uStack_110 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff04;
    __this_03.fields.m_Point.fields.x = (float)in_stack_fffffffffffffef8._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_fffffffffffffef8._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_fffffffffffffef8._8_4_;
    __this_03.fields.m_Normal.fields.y = UStack_b0.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = UStack_b0.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = UStack_b0.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = UStack_b0.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = UStack_b0.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)UStack_b0.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)UStack_b0.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = UStack_b0.fields.m_Impulse.fields.y;
    UVar15 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xffffffffffffff08);
    fVar14 = UVar15.fields.z;
    uStack_110 = 0x40e97ab;
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_110 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_110 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_110 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields).collider = UVar15.fields._0_8_;
    *(float *)&pCVar6[1].klass = fVar14;
    return pCVar6;
  }
  uStack_110 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar10;
  pUStack_118 = pUVar9;
  uStack_110 = uVar8 & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar11 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1a8 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar9 = *(UnityEngine_Collision_o **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar9 != (UnityEngine_Collision_o *)0x0) {
    uStack_1a8 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_148,pUVar9,(int32_t)pUVar13,(MethodInfo *)0x0);
    uStack_1a8 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe6c;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe60._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe60._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe60._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_148.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_148.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_148.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_148.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_148.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_148.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_148.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_148.fields.m_Impulse.fields.y;
    UVar15 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffe70);
    fVar14 = UVar15.fields.z;
    uStack_1a8 = 0x40e98bb;
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1a8 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1a8 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1a8 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields).collider = UVar15.fields._0_8_;
    *(float *)&pCVar6[1].klass = fVar14;
    return pCVar6;
  }
  uStack_1a8 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar11;
  pUStack_1b0 = pUVar10;
  uStack_1a8 = (ulong)pUVar13 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar12 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_240 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar11->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_240 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_1e0,pUVar10,(int32_t)pUVar9,(MethodInfo *)0x0);
    uStack_240 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdd4;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffdc8._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffdc8._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffdc8._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_1e0.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_1e0.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_1e0.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_1e0.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_1e0.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_1e0.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_1e0.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_1e0.fields.m_Impulse.fields.y;
    UVar15 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffdd8);
    fVar14 = UVar15.fields.z;
    uStack_240 = 0x40e99cb;
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_240 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_240 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_240 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields).collider = UVar15.fields._0_8_;
    *(float *)&pCVar6[1].klass = fVar14;
    return pCVar6;
  }
  uStack_240 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar12;
  pUStack_248 = pUVar11;
  uStack_240 = (ulong)pUVar9 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar13 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar9 = *(UnityEngine_Collision_o **)&(pUVar12->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar9 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_278,pUVar9,(int32_t)pUVar10,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd4c;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd40._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd40._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd40._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_278.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_270.genericMethod;
    __this_00.fields._32_8_ = uStack_268;
    __this_00.fields._40_8_ = uStack_260;
    fVar14 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffd50);
    pCVar6 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    *(float *)&(pCVar6->fields).collider = fVar14;
    *(float *)((long)&(pCVar6->fields).collider + 4) = fVar14;
    *(float *)&pCVar6[1].klass = fVar14;
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar3 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar1 = *(Il2CppObject **)&(pUVar13->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar1 != (Il2CppObject *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pIVar1);
      if (lVar5 == 0) goto label_040e9bf3;
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items,pIVar1);
      auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar16._0_8_,pSVar3,auVar16._8_8_);
      return auVar16._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar7 = il2cpp_runtime_helper_0231b270();
  lVar5 = 0;
  auVar16 = il2cpp_runtime_helper_022b2b10(uVar7);
  return (CustomLogic_CustomLogicColliderBuiltin_o *)CONCAT71(auVar16._1_7_,lVar5 == auVar16._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Impulse
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Impulse (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9570

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Impulse
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  undefined4 extraout_var;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  UnityEngine_Collision_o *pUVar6;
  UnityEngine_Collision_o *pUVar7;
  UnityEngine_Collision_o *pUVar8;
  UnityEngine_Collision_o *pUVar9;
  UnityEngine_Collision_o *pUVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [16];
  undefined1 in_stack_fffffffffffffd58 [12];
  undefined4 in_stack_fffffffffffffd64;
  _union_13 _Stack_260;
  _union_14 _Stack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  UnityEngine_Collision_o *pUStack_230;
  ulong uStack_228;
  undefined1 in_stack_fffffffffffffde0 [12];
  undefined4 in_stack_fffffffffffffdec;
  UnityEngine_ContactPoint_o UStack_1c8;
  UnityEngine_Collision_o *pUStack_198;
  ulong uStack_190;
  undefined1 in_stack_fffffffffffffe78 [12];
  undefined4 in_stack_fffffffffffffe84;
  UnityEngine_ContactPoint_o UStack_130;
  UnityEngine_Collision_o *pUStack_100;
  ulong uStack_f8;
  undefined1 in_stack_ffffffffffffff10 [12];
  undefined4 in_stack_ffffffffffffff1c;
  UnityEngine_ContactPoint_o UStack_98;
  
  pUVar6 = (__this->fields).collision;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UVar12 = UnityEngine_Collision__get_impulse(pUVar6,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = UVar12.fields.z;
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UVar12 = UnityEngine_Collision__get_relativeVelocity(pUVar6,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = UVar12.fields.z;
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    iVar2 = UnityEngine_Collision__get_contactCount(pUVar6,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_var,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar6;
  if (g_data_057ac735 == '\0') {
    pUVar7 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_f8 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_f8 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_98,pUVar10,(int32_t)method,(MethodInfo *)0x0);
    uStack_f8 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff1c;
    __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff10._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff10._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff10._8_4_;
    __this_03.fields.m_Normal.fields.y = UStack_98.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = UStack_98.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = UStack_98.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = UStack_98.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = UStack_98.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)UStack_98.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)UStack_98.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = UStack_98.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xffffffffffffff20);
    fVar11 = UVar12.fields.z;
    uStack_f8 = 0x40e97ab;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_f8 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_f8 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_f8 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_f8 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar7;
  pUStack_100 = pUVar6;
  uStack_f8 = (ulong)method & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar8 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_190 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar7->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    uStack_190 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_130,pUVar6,(int32_t)pUVar10,(MethodInfo *)0x0);
    uStack_190 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe84;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe78._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe78._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe78._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_130.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_130.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_130.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_130.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_130.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_130.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_130.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_130.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffe88);
    fVar11 = UVar12.fields.z;
    uStack_190 = 0x40e98bb;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_190 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_190 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_190 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_190 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar8;
  pUStack_198 = pUVar7;
  uStack_190 = (ulong)pUVar10 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar9 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_228 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar7 = *(UnityEngine_Collision_o **)&(pUVar8->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar7 != (UnityEngine_Collision_o *)0x0) {
    uStack_228 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_1c8,pUVar7,(int32_t)pUVar6,(MethodInfo *)0x0);
    uStack_228 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdec;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffde0._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffde0._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffde0._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_1c8.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_1c8.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_1c8.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_1c8.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_1c8.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_1c8.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_1c8.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_1c8.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffdf0);
    fVar11 = UVar12.fields.z;
    uStack_228 = 0x40e99cb;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_228 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_228 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_228 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_228 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  pUStack_230 = pUVar8;
  uStack_228 = (ulong)pUVar6 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar10 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_260,pUVar6,(int32_t)pUVar7,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd64;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd58._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd58._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd58._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_260.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_258.genericMethod;
    __this_00.fields._32_8_ = uStack_250;
    __this_00.fields._40_8_ = uStack_248;
    fVar11 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffd68);
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = fVar11;
    (pCVar3->fields).Value.fields.y = fVar11;
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar1 = *(Il2CppObject **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar1 != (Il2CppObject *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar1);
      if (lVar4 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar1);
      auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar13._0_8_,parameters,auVar13._8_8_);
      return auVar13._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar5 = il2cpp_runtime_helper_0231b270();
  lVar4 = 0;
  auVar13 = il2cpp_runtime_helper_022b2b10(uVar5);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar13._1_7_,lVar4 == auVar13._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_RelativeVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9630

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  undefined4 extraout_var;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  UnityEngine_Collision_o *pUVar6;
  UnityEngine_Collision_o *pUVar7;
  UnityEngine_Collision_o *pUVar8;
  UnityEngine_Collision_o *pUVar9;
  UnityEngine_Collision_o *pUVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [16];
  undefined1 in_stack_fffffffffffffd80 [12];
  undefined4 in_stack_fffffffffffffd8c;
  _union_13 local_238;
  _union_14 _Stack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  UnityEngine_Collision_o *pUStack_208;
  ulong uStack_200;
  undefined1 in_stack_fffffffffffffe08 [12];
  undefined4 in_stack_fffffffffffffe14;
  UnityEngine_ContactPoint_o local_1a0;
  UnityEngine_Collision_o *pUStack_170;
  ulong uStack_168;
  undefined1 in_stack_fffffffffffffea0 [12];
  undefined4 in_stack_fffffffffffffeac;
  UnityEngine_ContactPoint_o local_108;
  UnityEngine_Collision_o *pUStack_d8;
  ulong uStack_d0;
  undefined1 in_stack_ffffffffffffff38 [12];
  undefined4 in_stack_ffffffffffffff44;
  UnityEngine_ContactPoint_o local_70;
  
  pUVar6 = (__this->fields).collision;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UVar12 = UnityEngine_Collision__get_relativeVelocity(pUVar6,(MethodInfo *)0x0);
    if (g_data_057ac651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
      g_data_057ac651 = '\x01';
    }
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = UVar12.fields.z;
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    iVar2 = UnityEngine_Collision__get_contactCount(pUVar6,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_var,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar6;
  if (g_data_057ac735 == '\0') {
    pUVar7 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_d0 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_d0 = 0x40e9767;
    UnityEngine_Collision__GetContact(&local_70,pUVar10,(int32_t)method,(MethodInfo *)0x0);
    uStack_d0 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff44;
    __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff38._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff38._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff38._8_4_;
    __this_03.fields.m_Normal.fields.y = local_70.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = local_70.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = local_70.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = local_70.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = local_70.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)local_70.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)local_70.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = local_70.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xffffffffffffff48);
    fVar11 = UVar12.fields.z;
    uStack_d0 = 0x40e97ab;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_d0 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_d0 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_d0 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_d0 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar7;
  pUStack_d8 = pUVar6;
  uStack_d0 = (ulong)method & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar8 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_168 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar7->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    uStack_168 = 0x40e9877;
    UnityEngine_Collision__GetContact(&local_108,pUVar6,(int32_t)pUVar10,(MethodInfo *)0x0);
    uStack_168 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffeac;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffea0._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffea0._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffea0._8_4_;
    __this_02.fields.m_Normal.fields.y = local_108.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = local_108.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = local_108.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = local_108.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = local_108.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)local_108.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)local_108.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = local_108.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffeb0);
    fVar11 = UVar12.fields.z;
    uStack_168 = 0x40e98bb;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_168 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_168 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_168 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_168 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar8;
  pUStack_170 = pUVar7;
  uStack_168 = (ulong)pUVar10 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar9 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_200 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar7 = *(UnityEngine_Collision_o **)&(pUVar8->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar7 != (UnityEngine_Collision_o *)0x0) {
    uStack_200 = 0x40e9987;
    UnityEngine_Collision__GetContact(&local_1a0,pUVar7,(int32_t)pUVar6,(MethodInfo *)0x0);
    uStack_200 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe14;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe08._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe08._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe08._8_4_;
    __this_01.fields.m_Normal.fields.y = local_1a0.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = local_1a0.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = local_1a0.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = local_1a0.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = local_1a0.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)local_1a0.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)local_1a0.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = local_1a0.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffe18);
    fVar11 = UVar12.fields.z;
    uStack_200 = 0x40e99cb;
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_200 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_200 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_200 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = (float)(int)UVar12.fields._0_8_;
    (pCVar3->fields).Value.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  uStack_200 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  pUStack_208 = pUVar8;
  uStack_200 = (ulong)pUVar6 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar10 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&local_238,pUVar6,(int32_t)pUVar7,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffd8c;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffd80._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffd80._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffd80._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = local_238.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_230.genericMethod;
    __this_00.fields._32_8_ = local_228;
    __this_00.fields._40_8_ = uStack_220;
    fVar11 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffd90);
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.x = fVar11;
    (pCVar3->fields).Value.fields.y = fVar11;
    (pCVar3->fields).Value.fields.z = fVar11;
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar1 = *(Il2CppObject **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar1 != (Il2CppObject *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar1);
      if (lVar4 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar1);
      auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar13._0_8_,parameters,auVar13._8_8_);
      return auVar13._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar5 = il2cpp_runtime_helper_0231b270();
  lVar4 = 0;
  auVar13 = il2cpp_runtime_helper_022b2b10(uVar5);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar13._1_7_,lVar4 == auVar13._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ContactCount
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e96f0

int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  int32_t iVar2;
  CustomLogic_BuiltinClassInstance_o *pCVar3;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  UnityEngine_Collision_o *pUVar6;
  UnityEngine_Collision_o *pUVar7;
  UnityEngine_Collision_o *pUVar8;
  UnityEngine_Collision_o *pUVar9;
  UnityEngine_Collision_o *pUVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [16];
  undefined1 in_stack_fffffffffffffda8 [12];
  undefined4 in_stack_fffffffffffffdb4;
  _union_13 _Stack_210;
  _union_14 _Stack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  UnityEngine_Collision_o *pUStack_1e0;
  ulong uStack_1d8;
  undefined1 in_stack_fffffffffffffe30 [12];
  undefined4 in_stack_fffffffffffffe3c;
  UnityEngine_ContactPoint_o UStack_178;
  UnityEngine_Collision_o *pUStack_148;
  ulong uStack_140;
  undefined1 in_stack_fffffffffffffec8 [12];
  undefined4 in_stack_fffffffffffffed4;
  UnityEngine_ContactPoint_o UStack_e0;
  UnityEngine_Collision_o *pUStack_b0;
  ulong uStack_a8;
  undefined1 in_stack_ffffffffffffff60 [12];
  undefined4 in_stack_ffffffffffffff6c;
  UnityEngine_ContactPoint_o UStack_48;
  
  pUVar6 = (__this->fields).collision;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    iVar2 = UnityEngine_Collision__get_contactCount(pUVar6,(MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar6;
  if (g_data_057ac735 == '\0') {
    pUVar7 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_a8 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar10 = *(UnityEngine_Collision_o **)&(pUVar6->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar10 != (UnityEngine_Collision_o *)0x0) {
    uStack_a8 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_48,pUVar10,(int32_t)method,(MethodInfo *)0x0);
    uStack_a8 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff6c;
    __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff60._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff60._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff60._8_4_;
    __this_03.fields.m_Normal.fields.y = UStack_48.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = UStack_48.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = UStack_48.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = UStack_48.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = UStack_48.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)UStack_48.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)UStack_48.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = UStack_48.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xffffffffffffff70);
    fVar11 = UVar12.fields.z;
    uStack_a8 = 0x40e97ab;
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_a8 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_a8 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a8 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    pCVar3[1].klass = UVar12.fields._0_8_;
    *(float *)&pCVar3[1].monitor = fVar11;
    return (int32_t)pCVar3;
  }
  uStack_a8 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar7;
  pUStack_b0 = pUVar6;
  uStack_a8 = (ulong)method & 0xffffffff;
  if (g_data_057ac736 == '\0') {
    pUVar8 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_140 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar7->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    uStack_140 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_e0,pUVar6,(int32_t)pUVar10,(MethodInfo *)0x0);
    uStack_140 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffed4;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffec8._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffec8._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffec8._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_e0.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_e0.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_e0.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_e0.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_e0.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_e0.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_e0.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_e0.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffed8);
    fVar11 = UVar12.fields.z;
    uStack_140 = 0x40e98bb;
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_140 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_140 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_140 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    pCVar3[1].klass = UVar12.fields._0_8_;
    *(float *)&pCVar3[1].monitor = fVar11;
    return (int32_t)pCVar3;
  }
  uStack_140 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar8;
  pUStack_148 = pUVar7;
  uStack_140 = (ulong)pUVar10 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pUVar9 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1d8 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar7 = *(UnityEngine_Collision_o **)&(pUVar8->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar7 != (UnityEngine_Collision_o *)0x0) {
    uStack_1d8 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_178,pUVar7,(int32_t)pUVar6,(MethodInfo *)0x0);
    uStack_1d8 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe3c;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe30._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe30._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe30._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_178.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_178.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_178.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_178.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_178.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_178.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_178.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_178.fields.m_Impulse.fields.y;
    UVar12 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffe40);
    fVar11 = UVar12.fields.z;
    uStack_1d8 = 0x40e99cb;
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1d8 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1d8 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1d8 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    pCVar3[1].klass = UVar12.fields._0_8_;
    *(float *)&pCVar3[1].monitor = fVar11;
    return (int32_t)pCVar3;
  }
  uStack_1d8 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  pUStack_1e0 = pUVar8;
  uStack_1d8 = (ulong)pUVar6 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pUVar10 = (UnityEngine_Collision_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar6 = *(UnityEngine_Collision_o **)&(pUVar9->fields).m_Header.fields.m_RelativeVelocity.fields.z;
  if (pUVar6 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_210,pUVar6,(int32_t)pUVar7,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdb4;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffda8._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffda8._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffda8._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_210.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_208.genericMethod;
    __this_00.fields._32_8_ = uStack_200;
    __this_00.fields._40_8_ = uStack_1f8;
    fVar11 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffdb8);
    pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
    *(float *)&pCVar3[1].klass = fVar11;
    *(float *)((long)&pCVar3[1].klass + 4) = fVar11;
    *(float *)&pCVar3[1].monitor = fVar11;
    return (int32_t)pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar1 = *(Il2CppObject **)&(pUVar10->fields).m_Header.fields.m_RelativeVelocity.fields.z;
    if (pIVar1 != (Il2CppObject *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar1);
      if (lVar4 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar1);
      auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar13._0_8_,parameters,auVar13._8_8_);
      return auVar13._0_4_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar5 = il2cpp_runtime_helper_0231b270();
  lVar4 = 0;
  auVar13 = il2cpp_runtime_helper_022b2b10(uVar5);
  return (int32_t)CONCAT71(auVar13._1_7_,lVar4 == auVar13._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40e9710

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  UnityEngine_ContactPoint_o __this_03;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  UnityEngine_Collision_o *pUVar4;
  UnityEngine_Collision_o *pUVar5;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar6;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar7;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  undefined1 auVar11 [16];
  undefined1 in_stack_fffffffffffffdb0 [12];
  undefined4 in_stack_fffffffffffffdbc;
  _union_13 _Stack_208;
  _union_14 _Stack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_1d8;
  ulong uStack_1d0;
  undefined1 in_stack_fffffffffffffe38 [12];
  undefined4 in_stack_fffffffffffffe44;
  UnityEngine_ContactPoint_o UStack_170;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_140;
  ulong uStack_138;
  undefined1 in_stack_fffffffffffffed0 [12];
  undefined4 in_stack_fffffffffffffedc;
  UnityEngine_ContactPoint_o UStack_d8;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_a8;
  ulong uStack_a0;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  pCVar6 = __this;
  if (g_data_057ac735 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_a0 = 0x40e9733;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac735 = '\x01';
  }
  pUVar4 = (__this->fields).collision;
  if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
    uStack_a0 = 0x40e9767;
    UnityEngine_Collision__GetContact(&UStack_40,pUVar4,index,(MethodInfo *)0x0);
    uStack_a0 = 0x40e9791;
    __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_03.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_03.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_03.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_03.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_03.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_03.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_03.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_03.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar10 = UnityEngine_ContactPoint__get_point(__this_03,(MethodInfo *)&stack0xffffffffffffff78);
    fVar9 = UVar10.fields.z;
    uStack_a0 = 0x40e97ab;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_a0 = 0x40e97c3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_a0 = 0x40e97e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x40e97ec;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar10.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar10.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar9;
    return pCVar1;
  }
  uStack_a0 = 0x40e9812;
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = pCVar6;
  pCStack_a8 = __this;
  uStack_a0 = (ulong)(uint)index;
  if (g_data_057ac736 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_138 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar5 = (pCVar6->fields).collision;
  if (pUVar5 != (UnityEngine_Collision_o *)0x0) {
    uStack_138 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_d8,pUVar5,(int32_t)pUVar4,(MethodInfo *)0x0);
    uStack_138 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffedc;
    __this_02.fields.m_Point.fields.x = (float)in_stack_fffffffffffffed0._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_fffffffffffffed0._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_fffffffffffffed0._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_d8.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_d8.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_d8.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_d8.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_d8.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_d8.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_d8.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_d8.fields.m_Impulse.fields.y;
    UVar10 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xfffffffffffffee0);
    fVar9 = UVar10.fields.z;
    uStack_138 = 0x40e98bb;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_138 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_138 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_138 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar10.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar10.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar9;
    return pCVar1;
  }
  uStack_138 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = pCVar7;
  pCStack_140 = pCVar6;
  uStack_138 = (ulong)pUVar4 & 0xffffffff;
  if (g_data_057ac737 == '\0') {
    pCVar8 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_1d0 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar4 = (pCVar7->fields).collision;
  if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
    uStack_1d0 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_170,pUVar4,(int32_t)pUVar5,(MethodInfo *)0x0);
    uStack_1d0 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe44;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe38._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe38._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe38._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_170.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_170.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_170.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_170.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_170.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_170.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_170.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_170.fields.m_Impulse.fields.y;
    UVar10 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffe48);
    fVar9 = UVar10.fields.z;
    uStack_1d0 = 0x40e99cb;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_1d0 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_1d0 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1d0 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar10.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar10.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar9;
    return pCVar1;
  }
  uStack_1d0 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar8;
  pCStack_1d8 = pCVar7;
  uStack_1d0 = (ulong)pUVar5 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar5 = (pCVar8->fields).collision;
  if (pUVar5 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_208,pUVar5,(int32_t)pUVar4,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffdbc;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffdb0._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffdb0._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffdb0._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_208.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_200.genericMethod;
    __this_00.fields._32_8_ = uStack_1f8;
    __this_00.fields._40_8_ = uStack_1f0;
    fVar9 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffdc0);
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = fVar9;
    (pCVar1->fields).Value.fields.y = fVar9;
    (pCVar1->fields).Value.fields.z = fVar9;
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = (pCVar6->fields).collision;
    if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pUVar4);
      if (lVar2 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pUVar4;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar4);
      auVar11 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar11._0_8_,parameters,auVar11._8_8_);
      return auVar11._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar3 = il2cpp_runtime_helper_0231b270();
  lVar2 = 0;
  auVar11 = il2cpp_runtime_helper_022b2b10(uVar3);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar11._1_7_,lVar2 == auVar11._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactNorms
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40e9820

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_ContactPoint_o __this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  UnityEngine_Collision_o *pUVar4;
  UnityEngine_Collision_o *__this_03;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar5;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar6;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined1 auVar10 [16];
  undefined1 in_stack_fffffffffffffe48 [12];
  undefined4 in_stack_fffffffffffffe54;
  _union_13 _Stack_170;
  _union_14 _Stack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_140;
  ulong uStack_138;
  undefined1 in_stack_fffffffffffffed0 [12];
  undefined4 in_stack_fffffffffffffedc;
  UnityEngine_ContactPoint_o UStack_d8;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_a8;
  ulong uStack_a0;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  pCVar5 = __this;
  if (g_data_057ac736 == '\0') {
    pCVar5 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_a0 = 0x40e9843;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac736 = '\x01';
  }
  pUVar4 = (__this->fields).collision;
  if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
    uStack_a0 = 0x40e9877;
    UnityEngine_Collision__GetContact(&UStack_40,pUVar4,index,(MethodInfo *)0x0);
    uStack_a0 = 0x40e98a1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar9 = UnityEngine_ContactPoint__get_normal(__this_02,(MethodInfo *)&stack0xffffffffffffff78);
    fVar8 = UVar9.fields.z;
    uStack_a0 = 0x40e98bb;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_a0 = 0x40e98d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_a0 = 0x40e98f2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x40e98fc;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar9.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar9.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar8;
    return pCVar1;
  }
  uStack_a0 = 0x40e9922;
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar5;
  pCStack_a8 = __this;
  uStack_a0 = (ulong)(uint)index;
  if (g_data_057ac737 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_138 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  __this_03 = (pCVar5->fields).collision;
  if (__this_03 != (UnityEngine_Collision_o *)0x0) {
    uStack_138 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_d8,__this_03,(int32_t)pUVar4,(MethodInfo *)0x0);
    uStack_138 = 0x40e99b1;
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffedc;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffed0._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffed0._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffed0._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_d8.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_d8.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_d8.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_d8.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_d8.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_d8.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_d8.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_d8.fields.m_Impulse.fields.y;
    UVar9 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xfffffffffffffee0);
    fVar8 = UVar9.fields.z;
    uStack_138 = 0x40e99cb;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_138 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_138 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_138 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar9.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar9.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar8;
    return pCVar1;
  }
  uStack_138 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = pCVar6;
  pCStack_140 = pCVar5;
  uStack_138 = (ulong)pUVar4 & 0xffffffff;
  if (g_data_057ac738 == '\0') {
    pCVar7 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar4 = (pCVar6->fields).collision;
  if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_170,pUVar4,(int32_t)__this_03,(MethodInfo *)0x0);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffe54;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe48._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe48._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe48._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_170.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_168.genericMethod;
    __this_00.fields._32_8_ = uStack_160;
    __this_00.fields._40_8_ = uStack_158;
    fVar8 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xfffffffffffffe58);
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = fVar8;
    (pCVar1->fields).Value.fields.y = fVar8;
    (pCVar1->fields).Value.fields.z = fVar8;
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = (pCVar7->fields).collision;
    if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pUVar4);
      if (lVar2 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pUVar4;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar4);
      auVar10 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar10._0_8_,parameters,auVar10._8_8_);
      return auVar10._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar3 = il2cpp_runtime_helper_0231b270();
  lVar2 = 0;
  auVar10 = il2cpp_runtime_helper_022b2b10(uVar3);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar10._1_7_,lVar2 == auVar10._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactImpulses
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40e9930

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_o __this_02;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  UnityEngine_Collision_o *pUVar4;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar5;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  undefined1 auVar9 [16];
  undefined1 in_stack_fffffffffffffee0 [12];
  undefined4 in_stack_fffffffffffffeec;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCStack_a8;
  ulong uStack_a0;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  pCVar5 = __this;
  if (g_data_057ac737 == '\0') {
    pCVar5 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    uStack_a0 = 0x40e9953;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac737 = '\x01';
  }
  pUVar4 = (__this->fields).collision;
  if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
    uStack_a0 = 0x40e9987;
    UnityEngine_Collision__GetContact(&UStack_40,pUVar4,index,(MethodInfo *)0x0);
    uStack_a0 = 0x40e99b1;
    __this_02.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_02.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_02.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_02.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_02.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_02.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_02.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_02.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_02.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar8 = UnityEngine_ContactPoint__get_impulse(__this_02,(MethodInfo *)&stack0xffffffffffffff78);
    fVar7 = UVar8.fields.z;
    uStack_a0 = 0x40e99cb;
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      uStack_a0 = 0x40e99e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      uStack_a0 = 0x40e9a02;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x40e9a0c;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = (float)(int)UVar8.fields._0_8_;
    (pCVar1->fields).Value.fields.y = (float)(int)((ulong)UVar8.fields._0_8_ >> 0x20);
    (pCVar1->fields).Value.fields.z = fVar7;
    return pCVar1;
  }
  uStack_a0 = 0x40e9a32;
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar5;
  pCStack_a8 = __this;
  uStack_a0 = (ulong)(uint)index;
  if (g_data_057ac738 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  __this_00 = (pCVar5->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_d8,__this_00,(int32_t)pUVar4,(MethodInfo *)0x0);
    __this_01.fields.m_Normal.fields.x = (float)in_stack_fffffffffffffeec;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffee0._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffee0._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffee0._8_4_;
    __this_01.fields.m_Normal.fields._4_8_ = _Stack_d8.rgctx_data;
    __this_01.fields.m_Impulse.fields._0_8_ = _Stack_d0.genericMethod;
    __this_01.fields._32_8_ = uStack_c8;
    __this_01.fields._40_8_ = uStack_c0;
    fVar7 = UnityEngine_ContactPoint__get_separation(__this_01,(MethodInfo *)&stack0xfffffffffffffef0);
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    (pCVar1->fields).Value.fields.x = fVar7;
    (pCVar1->fields).Value.fields.y = fVar7;
    (pCVar1->fields).Value.fields.z = fVar7;
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = (pCVar6->fields).collision;
    if (pUVar4 != (UnityEngine_Collision_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pUVar4);
      if (lVar2 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pUVar4;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar4);
      auVar9 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar9._0_8_,parameters,auVar9._8_8_);
      return auVar9._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar3 = il2cpp_runtime_helper_0231b270();
  lVar2 = 0;
  auVar9 = il2cpp_runtime_helper_022b2b10(uVar3);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar9._1_7_,lVar2 == auVar9._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactSeparations
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x40e9a40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  UnityEngine_ContactPoint_o __this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_CustomLogicCollisionBuiltin_o *pCVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 in_stack_ffffffffffffff84;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pCVar4 = __this;
  if (g_data_057ac738 == '\0') {
    pCVar4 = (CustomLogic_CustomLogicCollisionBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac738 = '\x01';
  }
  pUVar1 = (__this->fields).collision;
  if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact((UnityEngine_ContactPoint_o *)&_Stack_40,pUVar1,index,(MethodInfo *)0x0)
    ;
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff84;
    __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff78._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff78._8_4_;
    __this_00.fields.m_Normal.fields._4_8_ = _Stack_40.rgctx_data;
    __this_00.fields.m_Impulse.fields._0_8_ = _Stack_38.genericMethod;
    __this_00.fields._32_8_ = uStack_30;
    __this_00.fields._40_8_ = uStack_28;
    fVar5 = UnityEngine_ContactPoint__get_separation(__this_00,(MethodInfo *)&stack0xffffffffffffff88);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac643 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac643 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0)
    ;
    (__this_01->fields).Value.fields.x = fVar5;
    (__this_01->fields).Value.fields.y = fVar5;
    (__this_01->fields).Value.fields.z = fVar5;
    return __this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar1 = (pCVar4->fields).collision;
    if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pUVar1);
      if (lVar2 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pUVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar1);
      auVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030
                ((CustomLogic_CustomLogicColliderBuiltin_o *)auVar6._0_8_,parameters,auVar6._8_8_);
      return auVar6._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar3 = il2cpp_runtime_helper_0231b270();
  lVar2 = 0;
  auVar6 = il2cpp_runtime_helper_022b2b10(uVar3);
  return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT71(auVar6._1_7_,lVar2 == auVar6._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin____Copy__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9b40

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin____Copy__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (g_data_057ac739 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ac739 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (parameters == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar1 = (__this->fields).collision;
    if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pUVar1);
      if (lVar2 == 0) goto label_040e9bf3;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pUVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pUVar1);
      auVar4 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_3fe6030(auVar4._0_8_,parameters,auVar4._8_8_);
      return (Il2CppObject *)auVar4._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040e9bf3:
  uVar3 = il2cpp_runtime_helper_0231b270();
  lVar2 = 0;
  auVar4 = il2cpp_runtime_helper_022b2b10(uVar3);
  return (Il2CppObject *)CONCAT71(auVar4._1_7_,lVar2 == auVar4._8_8_);
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin____Eq__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40e9c10

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin____Eq__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),self == other);
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9c20

int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).collision;
  if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtableDispatch)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac73a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Collision");
    g_data_057ac73a = '\x01';
  }
  return (int32_t)"Collision";
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionBuiltin__get_ClassName (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9c50

System_String_o *
CustomLogic_CustomLogicCollisionBuiltin__get_ClassName
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac73a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Collision");
    g_data_057ac73a = '\x01';
  }
  return "Collision";
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9c80

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9c90

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x40e9ca0

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


