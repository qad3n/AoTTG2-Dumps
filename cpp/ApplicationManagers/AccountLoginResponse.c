// Type: ApplicationManagers.AccountLoginResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountLoginResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountLoginResponse.ProfileData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_ProfileData_o* ApplicationManagers_AccountLoginResponse_ProfileData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4499d40

ApplicationManagers_AccountLoginResponse_ProfileData_o *
ApplicationManagers_AccountLoginResponse_ProfileData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar5;
  bool_conflict bVar6;
  int32_t capacity;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this_03;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar9;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar10;
  Il2CppObject *a;
  Il2CppObject *pIVar11;
  long lVar12;
  long lVar13;
  System_Collections_Generic_List_object__o *__this_04;
  System_Object_array *pSVar14;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  SimpleJSONFixed_JSONNode_o *unaff_RBX;
  MethodInfo *method_13;
  Il2CppObject *pIVar15;
  Il2CppObject *__this_05;
  long *plVar16;
  MethodInfo *unaff_R15;
  System_DateTimeOffset_o SVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  Il2CppClass *pIVar19;
  Il2CppMethodPointer pIVar20;
  InvokerMethod pIVar21;
  char *pcVar22;
  Il2CppClass *pIVar23;
  Il2CppType *pIVar24;
  Il2CppType **ppIVar25;
  _union_13 _Var26;
  _union_14 _Var27;
  Il2CppClass *local_a0;
  Il2CppMethodPointer pIStack_98;
  InvokerMethod local_90;
  char *pcStack_88;
  Il2CppClass *local_80;
  Il2CppType *pIStack_78;
  Il2CppType **local_70;
  _union_13 _Stack_68;
  _union_14 local_60;
  SimpleJSONFixed_JSONNode_o *pSStack_58;
  SimpleJSONFixed_JSONNode_o *pSStack_50;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAStack_48;
  SimpleJSONFixed_JSONNode_o *pSStack_40;
  MethodInfo *pMStack_38;
  
  if (g_data_057ae94a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileData);
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"oAuthLinks");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"emailVerified");
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"createdAt");
    il2cpp_runtime_helper_023445d0(&"restriction");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"photonUserId");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"hasPassword");
    il2cpp_runtime_helper_023445d0(&"permissions");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    il2cpp_runtime_helper_023445d0(&"restrictionStatus");
    g_data_057ae94a = '\x01';
  }
  __this_03 = (ApplicationManagers_AccountLoginResponse_ProfileData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor(__this_03,method);
  plVar16 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return __this_03;
  }
  method_13 = "accountId";
  pIVar11 = (Il2CppObject *)node;
  pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                     (node,(System_String_o *)"accountId",method_00);
  if (__this_03 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    (__this_03->fields).AccountId = pSVar7;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"email",method_01);
    (__this_03->fields).Email = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Email,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"displayName",method_02);
    (__this_03->fields).DisplayName = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).DisplayName,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"photonUserId",method_03);
    (__this_03->fields).PhotonUserId = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).PhotonUserId,pSVar7);
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool(node,"emailVerified",method_04);
    *(char *)&(__this_03->fields).EmailVerified = (char)bVar6;
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool(node,"hasPassword",method_05);
    *(char *)((long)&(__this_03->fields).EmailVerified + 1) = (char)bVar6;
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"roles",method_06);
    (__this_03->fields).Roles = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Roles,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"permissions",method_07);
    (__this_03->fields).Permissions = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Permissions,pSVar8);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"restrictionStatus",method_08);
    (__this_03->fields).RestrictionStatus = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).RestrictionStatus);
    unaff_R15 = "restriction";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_13 = (MethodInfo *)0x0;
    pIVar11 = (Il2CppObject *)node;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449a2be;
      cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,unaff_R15,(node->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)
                    (*(node->klass->vtable)._7_get_Item.methodPtr)
                              (node,unaff_R15,(node->klass->vtable)._7_get_Item.method);
      }
    }
    (__this_03->fields).Restriction = unaff_RBX;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Restriction);
    unaff_R15 = "patreon";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_13 = (MethodInfo *)0x0;
    pIVar11 = (Il2CppObject *)node;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449a2be;
      method_13 = unaff_R15;
      cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,unaff_R15,(node->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)
                    (*(node->klass->vtable)._7_get_Item.methodPtr)
                              (node,unaff_R15,(node->klass->vtable)._7_get_Item.method);
        method_13 = unaff_R15;
      }
    }
    pAVar9 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(unaff_RBX,method_13);
    (__this_03->fields).Patreon = pAVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Patreon);
    unaff_R15 = "oAuthLinks";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_13 = (MethodInfo *)0x0;
    pIVar11 = (Il2CppObject *)node;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449a2be;
      method_13 = unaff_R15;
      cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,unaff_R15,(node->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        unaff_RBX = (SimpleJSONFixed_JSONNode_o *)
                    (*(node->klass->vtable)._7_get_Item.methodPtr)
                              (node,unaff_R15,(node->klass->vtable)._7_get_Item.method);
        method_13 = unaff_R15;
      }
    }
    pAVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(unaff_RBX,method_13);
    (__this_03->fields).OAuthLinks = pAVar10;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).OAuthLinks,pAVar10);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"description",method_09);
    (__this_03->fields).Description = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Description,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"avatarKey",method_10);
    (__this_03->fields).AvatarKey = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).AvatarKey,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString(node,"bannerKey",method_11);
    (__this_03->fields).BannerKey = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).BannerKey);
    unaff_R15 = "socials";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar16 = (long *)0x0;
    method_13 = (MethodInfo *)0x0;
    pIVar11 = (Il2CppObject *)node;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0449a27a:
      (__this_03->fields).Socials = (SimpleJSONFixed_JSONNode_o *)plVar16;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).Socials,plVar16);
      SVar17 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                         (node,"createdAt",method_12);
      (__this_03->fields).CreatedAt.fields._dateTime.fields._dateData =
           (uint64_t)SVar17.fields._dateTime.fields._dateData.fields;
      (__this_03->fields).CreatedAt.fields._offsetMinutes = SVar17.fields._offsetMinutes;
      return __this_03;
    }
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,unaff_R15,(node->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                    (node,unaff_R15,(node->klass->vtable)._7_get_Item.method);
      }
      goto label_0449a27a;
    }
  }
label_0449a2be:
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = (Il2CppObject *)&stack0xffffffffffffff10;
  pSStack_58 = unaff_RBX;
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)plVar16;
  pAStack_48 = __this_03;
  pSStack_40 = node;
  pMStack_38 = unaff_R15;
  if (g_data_057ae949 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae949 = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject *)0x0;
  __this_05 = pIVar11;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449a3e5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar11 == (Il2CppObject *)0x0) goto label_0449a713;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar11,method_13,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      a = (Il2CppObject *)
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_7_get_Item).methodPtr)
                    (pIVar11,method_13,
                     (((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_7_get_Item).method);
      goto label_0449a3e5;
    }
    a = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = a;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449a44c:
    lVar12 = MethodInfo_String_Empty_String;
    if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar13 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    }
    return (ApplicationManagers_AccountLoginResponse_ProfileData_o *)
           (System_Object_array *)**(undefined8 **)(lVar12 + 0xb8);
  }
  if (a != (Il2CppObject *)0x0) {
    pIVar11 = (Il2CppObject *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_45_get_AsArray).methodPtr)(a);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = pIVar11;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto label_0449a44c;
    if (pIVar11 != (Il2CppObject *)0x0) {
      capacity = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_11_get_Count).methodPtr)
                           (pIVar11,(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->
                                    _11_get_Count).method);
      __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362b930(__this_04,capacity,MethodInfo_List_1_System_String);
      (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_32_unknown).methodPtr)
                (&local_a0,pIVar11,
                 (((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_32_unknown).method);
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
      __this.fields._0_8_ = local_a0;
      __this.fields.m_Object.fields._8_8_ = local_90;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_80;
      __this.fields.m_Object.fields._32_8_ = pIStack_78;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_70;
      __this.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
      __this.fields.m_Array.fields._current = local_60.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff10);
      if ((char)bVar6 == '\0') {
        __this_05 = pIVar15;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449a695;
      }
      else {
        pIVar19 = local_a0;
        pIVar20 = pIStack_98;
        pIVar21 = local_90;
        pcVar22 = pcStack_88;
        pIVar23 = local_80;
        pIVar24 = pIStack_78;
        ppIVar25 = local_70;
        _Var26 = _Stack_68;
        _Var27 = local_60;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
            __this_01.fields._0_8_ = pIVar19;
            __this_01.fields.m_Object.fields._8_8_ = pIVar21;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
            __this_01.fields.m_Object.fields._32_8_ = pIVar24;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar25;
            __this_01.fields.m_Array.fields._8_8_ = _Var26.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var27.genericMethod;
            SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xffffffffffffff10);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar11 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
            __this_05 = pIVar11;
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            pIVar15 = (Il2CppObject *)0x0;
            if ((char)bVar6 != '\0') {
              if (pIVar11 == (Il2CppObject *)0x0) goto label_0449a713;
              pIVar15 = (Il2CppObject *)
                        (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).
                          methodPtr)(pIVar11,(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->
                                             _9_get_Value).method);
              __this_05 = pIVar11;
            }
            lVar12 = MethodInfo_Void_Add;
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar14 = (__this_04->fields)._items;
            if (pSVar14 == (System_Object_array *)0x0) goto label_0449a713;
            uVar4 = (__this_04->fields)._size;
            if (uVar4 < (uint)pSVar14->max_length) {
              (__this_04->fields)._size = uVar4 + 1;
              pSVar14->m_Items[(int)uVar4] = pIVar15;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_04,pIVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
            __this_00.fields._0_8_ = pIVar19;
            __this_00.fields.m_Object.fields._8_8_ = pIVar21;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
            __this_00.fields.m_Object.fields._32_8_ = pIVar24;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar25;
            __this_00.fields.m_Array.fields._8_8_ = _Var26.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var27.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff10);
          } while ((char)bVar6 != '\0');
label_0449a695:
          pSVar14 = System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
          return (ApplicationManagers_AccountLoginResponse_ProfileData_o *)pSVar14;
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
        __this_02.fields._0_8_ = local_a0;
        __this_02.fields.m_Object.fields._8_8_ = local_90;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_80;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_78;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_70;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
        __this_02.fields.m_Array.fields._current = local_60.genericMethod;
        SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff10);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar11 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
        __this_05 = pIVar11;
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar6 != '\0') && (pIVar11 != (Il2CppObject *)0x0)) {
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).methodPtr)
                    (pIVar11,(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).
                             method);
          __this_05 = pIVar11;
        }
      }
    }
  }
label_0449a713:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae950 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae950 = '\x01';
  }
  lVar12 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  __this_05[3].monitor = (void *)**(undefined8 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_05[3].monitor);
  lVar12 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  __this_05[4].klass = (Il2CppClass *)**(undefined8 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_05 + 4);
  lVar12 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  __this_05[6].klass = (Il2CppClass *)**(undefined8 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_05 + 6);
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449aae0

bool_conflict
ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  int32_t iVar8;
  bool_conflict extraout_EAX;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_object__o *a;
  System_Collections_Generic_List_object__o *a_00;
  long lVar10;
  long lVar11;
  System_Collections_Generic_List_object__o *__this_07;
  System_Object_array *pSVar12;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this_08;
  System_String_o *pSVar13;
  System_String_array *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  System_Globalization_CultureInfo_o *formatProvider;
  Il2CppClass *pIVar18;
  long *plVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  long *unaff_RBP;
  MethodInfo *pMVar20;
  System_Collections_Generic_List_object__o *a_01;
  Il2CppObject *a_02;
  bool_conflict bVar21;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar22;
  System_DateTimeOffset_o SVar23;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_DateTimeOffset_o SStackY_208;
  System_String_o *pSStackY_1f0;
  MethodInfo *pMStackY_1e8;
  MethodInfo *pMStackY_1e0;
  System_Collections_Generic_List_object__o *pSStackY_1d8;
  Il2CppMethodPointer pIVar24;
  Il2CppMethodPointer pIVar25;
  InvokerMethod pIVar26;
  char *pcVar27;
  Il2CppType *pIVar28;
  Il2CppType **ppIVar29;
  _union_13 _Var30;
  _union_14 _Var31;
  Il2CppMethodPointer pIStack_180;
  Il2CppMethodPointer pIStack_178;
  InvokerMethod pIStack_170;
  char *pcStack_168;
  Il2CppClass *pIStack_160;
  Il2CppType *pIStack_158;
  Il2CppType **ppIStack_150;
  _union_13 _Stack_148;
  _union_14 _Stack_140;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAStack_138;
  MethodInfo *pMStack_130;
  long *plStack_128;
  System_Collections_Generic_List_object__o *pSStack_120;
  System_Collections_Generic_List_object__o *pSStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  System_Collections_Generic_List_object__o *pSStack_100;
  System_Collections_Generic_List_object__o *pSStack_f8;
  System_Collections_Generic_List_object__c *pSVar32;
  System_Collections_Generic_List_object__c *pSStack_a0;
  Il2CppMethodPointer pIStack_98;
  System_Object_array *pSStack_90;
  char *pcStack_88;
  Il2CppClass *pIStack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  _union_13 _Stack_68;
  _union_14 _Stack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if (g_data_057ae94b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae94b = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449abde;
label_0449ab08:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449ab08;
label_0449abde:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar19 = &TypeInfo_JSONNode;
  pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
  a_00 = (System_Collections_Generic_List_object__o *)0x0;
  __this_07 = (System_Collections_Generic_List_object__o *)node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449ab72:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ab7d:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (System_Collections_Generic_List_object__o *)0x0;
    __this_07 = pSVar9;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return 0;
    }
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar6 = (*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._39_get_AsBool.methodPtr)
                        (pSVar9,(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._39_get_AsBool.method)
      ;
      return bVar6;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSVar9 = (System_Collections_Generic_List_object__o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449ab72;
    }
    pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ab7d;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_JSONNode;
  pSVar9 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
  uStack_58 = 0;
  if (g_data_057ae94d == '\0') {
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ac6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ac78;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ac84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ac90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ac9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449aca8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae94d = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ace3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad03;
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_Collections_Generic_List_object__o *)0x0;
  pMVar20 = (MethodInfo *)0x0;
  pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad11;
  a_01 = __this_07;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)__this_07,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449ad55:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ad60:
    if (iVar3 == 0) {
      pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad67;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad73;
    a_01 = a;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
label_0449adbc:
      lVar10 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ae15;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar11 + 0x135);
      }
      else {
        lVar11 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar11 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ae2b;
        lVar11 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar11 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar11 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ae3c;
        il2cpp_runtime_helper_02337ed0();
        lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449adfe;
        lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
      }
      return (bool_conflict)**(undefined8 **)(lVar10 + 0xb8);
    }
    if (a != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad93;
      a_00 = (System_Collections_Generic_List_object__o *)
             (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._45_get_AsArray.methodPtr)(a);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ada8;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = (MethodInfo *)0x0;
      pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449adb4;
      a_01 = a_00;
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_0449adbc;
      if (a_00 != (System_Collections_Generic_List_object__o *)0x0) {
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ae83;
        uVar7 = (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._11_get_Count.methodPtr)
                          (a_00,(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._11_get_Count.method);
        a = (System_Collections_Generic_List_object__o *)(ulong)uVar7;
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ae94;
        __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449aeab;
        System_Collections_Generic_List_object____ctor_362b930(__this_07,uVar7,MethodInfo_List_1_System_String);
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449aec3;
        (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._32_unknown.methodPtr)
                  (&pSStack_a0,a_00,(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._32_unknown.method);
        pMVar20 = (MethodInfo *)0x0;
        pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af04;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
        __this_03.fields._0_8_ = pSStack_a0;
        __this_03.fields.m_Object.fields._8_8_ = pSStack_90;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_80;
        __this_03.fields.m_Object.fields._32_8_ = pIStack_78;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_70;
        __this_03.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
        __this_03.fields.m_Array.fields._current = _Stack_60.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_03,(MethodInfo *)&stack0xffffffffffffff10);
        if ((char)bVar6 == '\0') {
          a_01 = pSVar9;
          if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b005;
        }
        else {
          if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
            unaff_RBP = &MethodInfo_Void_Add;
            pSVar32 = pSStack_a0;
            pIVar24 = pIStack_98;
            pSVar12 = pSStack_90;
            pcVar27 = pcStack_88;
            pIVar18 = pIStack_80;
            pIVar28 = pIStack_78;
            ppIVar29 = ppIStack_70;
            _Var30 = _Stack_68;
            _Var31 = _Stack_60;
            do {
              pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af63;
              __this_05.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
              __this_05.fields._0_8_ = pSVar32;
              __this_05.fields.m_Object.fields._8_8_ = pSVar12;
              __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
              __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
              __this_05.fields.m_Object.fields._32_8_ = pIVar28;
              __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
              __this_05.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
              __this_05.fields.m_Array.fields._current = _Var31.genericMethod;
              SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_05,(MethodInfo *)&stack0xffffffffffffff10);
              plVar19 = (long *)SVar22.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af7b;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af88;
              a = (System_Collections_Generic_List_object__o *)
                  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
              pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af97;
              a_01 = a;
              bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar20 = (MethodInfo *)0x0;
              if ((char)bVar6 != '\0') {
                a_00 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
                if (a == (System_Collections_Generic_List_object__o *)0x0) goto label_0449b083;
                pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449afbc;
                a_01 = a;
                pMVar20 = (MethodInfo *)
                          (*(a->klass->vtable)._9_unknown.methodPtr)(a,(a->klass->vtable)._9_unknown.method);
              }
              lVar10 = MethodInfo_Void_Add;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_07->fields)._items;
              a_00 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449b083;
              uVar7 = (__this_07->fields)._size;
              if (uVar7 < (uint)pSVar4->max_length) {
                (__this_07->fields)._size = uVar7 + 1;
                pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pMVar20;
                pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449affb;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar7);
              }
              else {
                pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af47;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_07,(Il2CppObject *)pMVar20,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449af51;
              __this_04.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
              __this_04.fields._0_8_ = pSVar32;
              __this_04.fields.m_Object.fields._8_8_ = pSVar12;
              __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
              __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
              __this_04.fields.m_Object.fields._32_8_ = pIVar28;
              __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
              __this_04.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
              __this_04.fields.m_Array.fields._current = _Var31.genericMethod;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_04,(MethodInfo *)&stack0xffffffffffffff10);
            } while ((char)bVar6 != '\0');
label_0449b005:
            pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b017;
            pSVar12 = System_Collections_Generic_List_object___ToArray(__this_07,MethodInfo_String_ToArray);
            return (bool_conflict)pSVar12;
          }
          pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b033;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
          __this_06.fields._0_8_ = pSStack_a0;
          __this_06.fields.m_Object.fields._8_8_ = pSStack_90;
          __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_80;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_78;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_70;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
          __this_06.fields.m_Array.fields._current = _Stack_60.genericMethod;
          SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_06,(MethodInfo *)&stack0xffffffffffffff10);
          a_00 = (System_Collections_Generic_List_object__o *)SVar22.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b04b;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b058;
          a = (System_Collections_Generic_List_object__o *)
              SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
          pMVar20 = (MethodInfo *)0x0;
          pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b067;
          a_01 = a;
          bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar6 != '\0') && (a != (System_Collections_Generic_List_object__o *)0x0)) {
            pMVar20 = (a->klass->vtable)._9_unknown.method;
            pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b083;
            a_01 = a;
            (*(a->klass->vtable)._9_unknown.methodPtr)();
          }
        }
      }
    }
  }
  else if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
    pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad34;
    cVar5 = (*(__this_07->klass->vtable)._28_RemoveAt.methodPtr)
                      (__this_07,a_00,(__this_07->klass->vtable)._28_RemoveAt.method);
    if (cVar5 != '\0') {
      pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449ad52;
      a = (System_Collections_Generic_List_object__o *)
          (*(__this_07->klass->vtable)._7_Insert.methodPtr)
                    (__this_07,a_00,(__this_07->klass->vtable)._7_Insert.method);
      goto label_0449ad55;
    }
    a = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ad60;
  }
label_0449b083:
  pSStack_f8 = (System_Collections_Generic_List_object__o *)0x449b088;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pSStack_100 = a;
  pSStack_f8 = a_00;
  if (g_data_057ae951 == '\0') {
    plStack_110 = (long *)0x449b0ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_110 = (long *)0x449b0b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PatreonData);
    plStack_110 = (long *)0x449b0c4;
    il2cpp_runtime_helper_023445d0(&"tierIds");
    plStack_110 = (long *)0x449b0d0;
    il2cpp_runtime_helper_023445d0(&"linked");
    plStack_110 = (long *)0x449b0dc;
    il2cpp_runtime_helper_023445d0(&"28767500");
    plStack_110 = (long *)0x449b0e8;
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    plStack_110 = (long *)0x449b0f4;
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    plStack_110 = (long *)0x449b100;
    il2cpp_runtime_helper_023445d0(&"28767505");
    plStack_110 = (long *)0x449b10c;
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    plStack_110 = (long *)0x449b118;
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae951 = '\x01';
  }
  plStack_110 = (long *)0x449b12e;
  __this_08 = (ApplicationManagers_AccountLoginResponse_PatreonData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PatreonData);
  plStack_110 = (long *)0x449b139;
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor(__this_08,pMVar20);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    plStack_110 = (long *)0x449b151;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_110 = (long *)0x449b15d;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449b23a:
    return (bool_conflict)__this_08;
  }
  plStack_110 = (long *)0x449b177;
  pSVar9 = a_01;
  bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                    ((SimpleJSONFixed_JSONNode_o *)a_01,"linked",method_00);
  if (__this_08 != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
    *(char *)&(__this_08->fields).Linked = (char)bVar6;
    plStack_110 = (long *)0x449b195;
    pSVar13 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"patronStatus",method_01);
    (__this_08->fields).PatronStatus = pSVar13;
    plStack_110 = (long *)0x449b1a5;
    il2cpp_runtime_helper_022b4080(&(__this_08->fields).PatronStatus,pSVar13);
    plStack_110 = (long *)0x449b1b7;
    pSVar14 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"tierIds",method_02);
    (__this_08->fields).TierIds = pSVar14;
    plStack_110 = (long *)0x449b1ca;
    il2cpp_runtime_helper_022b4080(&(__this_08->fields).TierIds,pSVar14);
    plStack_110 = (long *)0x449b1dd;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this_08->fields).TierIds,"28767500",method_03);
    *(char *)&(__this_08->fields).HasTier2 = (char)bVar6;
    plStack_110 = (long *)0x449b1f3;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this_08->fields).TierIds,"28767505",method_04);
    *(char *)((long)&(__this_08->fields).HasTier2 + 1) = (char)bVar6;
    plStack_110 = (long *)0x449b208;
    iVar8 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"entitledAmountCents",method_05);
    (__this_08->fields).EntitledAmountCents = iVar8;
    plStack_110 = (long *)0x449b21d;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"manualOverride",method_06);
    *(char *)&(__this_08->fields).ManualOverride = (char)bVar6;
    plStack_110 = (long *)0x449b232;
    SVar23 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                       ((SimpleJSONFixed_JSONNode_o *)a_01,"lastSyncedAt",method_07);
    (__this_08->fields).LastSyncedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar23.fields._dateTime.fields._dateData.fields;
    (__this_08->fields).LastSyncedAt.fields._offsetMinutes = SVar23.fields._offsetMinutes;
    goto label_0449b23a;
  }
  plStack_110 = (long *)0x449b24a;
  il2cpp_runtime_helper_022b2c90();
  plStack_128 = &TypeInfo_JSONNode;
  pAStack_138 = __this_08;
  pMStack_130 = (MethodInfo *)plVar19;
  pSStack_120 = a_01;
  pSStack_118 = __this_07;
  plStack_110 = unaff_RBP;
  if (g_data_057ae94f == '\0') {
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b279;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b285;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b291;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b29d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b2a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b2b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OAuthLinkData);
    g_data_057ae94f = '\x01';
  }
  ppIVar29 = (Il2CppType **)0x0;
  _Var30.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar18 = (Il2CppClass *)0x0;
  pIVar28 = (Il2CppType *)0x0;
  pIVar26 = (InvokerMethod)0x0;
  pcVar27 = (char *)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppMethodPointer)0x0;
  _Var31.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b300;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449b349:
    lVar10 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
      pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b3a2;
      il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    else {
      lVar11 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b3b8;
      lVar11 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar11 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar11 + 0xe4);
    }
    if (iVar3 == 0) {
      pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b3c9;
      il2cpp_runtime_helper_02337ed0();
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b38b;
      lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
    }
    return (bool_conflict)**(undefined8 **)(lVar10 + 0xb8);
  }
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto label_0449b561;
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b320;
  pSVar15 = (SimpleJSONFixed_JSONNode_o *)(*(code *)pSVar9->klass[1]._1.nestedTypes)(pSVar9);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b335;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b341;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_0449b349;
  if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449b561:
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b566;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b3f8;
    iVar8 = (*(pSVar15->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar15,(pSVar15->klass->vtable)._11_get_Count.method);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b409;
    __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OAuthLinkData);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b420;
    System_Collections_Generic_List_object____ctor_362b930(__this_07,iVar8,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b438;
    (*(pSVar15->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_180,pSVar15,(pSVar15->klass->vtable)._32_unknown.method);
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b479;
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_178;
    __this.fields._0_8_ = pIStack_180;
    __this.fields.m_Object.fields._8_8_ = pIStack_170;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_168;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_160;
    __this.fields.m_Object.fields._32_8_ = pIStack_158;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_150;
    __this.fields.m_Array.fields._8_8_ = _Stack_148.rgctx_data;
    __this.fields.m_Array.fields._current = _Stack_140.genericMethod;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffe30);
    pIVar24 = pIStack_180;
    pIVar25 = pIStack_178;
    pIVar26 = pIStack_170;
    pcVar27 = pcStack_168;
    pIVar18 = pIStack_160;
    pIVar28 = pIStack_158;
    ppIVar29 = ppIStack_150;
    _Var30 = _Stack_148;
    _Var31 = _Stack_140;
    if ((char)bVar6 == '\0') {
      if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b53d;
      goto label_0449b561;
    }
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4d2;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
        __this_01.fields._0_8_ = pIVar24;
        __this_01.fields.m_Object.fields._8_8_ = pIVar26;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
        __this_01.fields.m_Object.fields._32_8_ = pIVar28;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_01.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var31.genericMethod;
        SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffe30);
        plVar19 = (long *)SVar22.fields.value;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4ea;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4f7;
        pMVar20 = (MethodInfo *)plVar19;
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
        pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4ff;
        item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar15,pMVar20);
        lVar10 = MethodInfo_Void_Add;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (__this_07->fields)._items;
        if (pSVar12 == (System_Object_array *)0x0) goto label_0449b561;
        uVar7 = (__this_07->fields)._size;
        if (uVar7 < (uint)pSVar12->max_length) {
          (__this_07->fields)._size = uVar7 + 1;
          pSVar12->m_Items[(int)uVar7] = (Il2CppObject *)item;
          pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b536;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar7,item);
        }
        else {
          pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4ba;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b4c4;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
        __this_00.fields._0_8_ = pIVar24;
        __this_00.fields.m_Object.fields._8_8_ = pIVar26;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
        __this_00.fields.m_Object.fields._32_8_ = pIVar28;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
        __this_00.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var31.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffe30);
      } while ((char)bVar6 != '\0');
label_0449b53d:
      pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b54f;
      pSVar12 = System_Collections_Generic_List_object___ToArray(__this_07,MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
      return (bool_conflict)pSVar12;
    }
  }
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b570;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
  __this_02.fields._0_8_ = pIVar24;
  __this_02.fields.m_Object.fields._8_8_ = pIVar26;
  __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
  __this_02.fields.m_Object.fields._32_8_ = pIVar28;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar29;
  __this_02.fields.m_Array.fields._8_8_ = _Var30.rgctx_data;
  __this_02.fields.m_Array.fields._current = _Var31.genericMethod;
  aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
              SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffe30);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b588;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b595;
  pMVar20 = (MethodInfo *)aKeyValue.value;
  pIVar16 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                       (MethodInfo *)0x0);
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b59d;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse((SimpleJSONFixed_JSONNode_o *)pIVar16,pMVar20)
  ;
  pSStackY_1d8 = (System_Collections_Generic_List_object__o *)0x449b5a2;
  il2cpp_runtime_helper_022b2c90();
  pMStackY_1e8 = (MethodInfo *)plVar19;
  pSStackY_1d8 = __this_07;
  if (g_data_057ae94e == '\0') {
    pSStackY_1f0 = aKeyValue.key;
    pMStackY_1e0 = (MethodInfo *)aKeyValue.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1e0;
    aKeyValue.key = pSStackY_1f0;
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    SStackY_208.fields._offsetMinutes = 0;
    SStackY_208.fields._10_6_ = 0;
    SStackY_208.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    pMStackY_1e0 = (MethodInfo *)aKeyValue.value;
    pSStackY_1f0 = aKeyValue.key;
    SStackY_208.fields._offsetMinutes = 0;
    SStackY_208.fields._10_6_ = 0;
    SStackY_208.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1e0;
    aKeyValue.key = pSStackY_1f0;
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_1e0 = (MethodInfo *)aKeyValue.value;
    pSStackY_1f0 = aKeyValue.key;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1e0;
    aKeyValue.key = pSStackY_1f0;
  }
  pMStackY_1e0 = (MethodInfo *)aKeyValue.value;
  pSStackY_1f0 = aKeyValue.key;
  pIVar17 = (Il2CppObject *)0x0;
  a_02 = pIVar16;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449b64c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar16 == (Il2CppObject *)0x0) goto label_0449b7c6;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar16->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar16,pMVar20,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar16->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      pIVar17 = (Il2CppObject *)
                (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar16->klass->vtable)->_7_get_Item).methodPtr)
                          (pIVar16,pMVar20,
                           (((SimpleJSONFixed_JSONNode_VTable *)pIVar16->klass->vtable)->_7_get_Item).method);
      goto label_0449b64c;
    }
    pIVar17 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar21 = 0;
  a_02 = pIVar17;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar17,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (pIVar17 == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor(pIVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_02,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pIVar17 = a_02;
        pIVar18 = (Il2CppClass *)
                  ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"provider",method_08);
        if (pIVar16 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar10 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar11 + 0x135);
          }
          else {
            lVar11 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar11 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar11 = il2cpp_runtime_helper_023009c0();
            iVar3 = *(int *)(lVar11 + 0xe4);
          }
          else {
            iVar3 = *(int *)(lVar11 + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          else {
            lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
          }
          pIVar17[2].klass = (Il2CppClass *)**(undefined8 **)(lVar10 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar17 + 2);
          System_Object___ctor(pIVar17,(MethodInfo *)0x0);
          return extraout_EAX;
        }
        pIVar16[1].klass = pIVar18;
        il2cpp_runtime_helper_022b4080(pIVar16 + 1,pIVar18);
        pSVar13 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerUserId",method_09);
        pIVar16[1].monitor = pSVar13;
        il2cpp_runtime_helper_022b4080(&pIVar16[1].monitor,pSVar13);
        pIVar18 = (Il2CppClass *)
                  ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerEmail",method_10);
        pIVar16[2].klass = pIVar18;
        il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar18);
        SVar23 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a_02,"linkedAt",method_11);
        pIVar16[2].monitor = (void *)SVar23.fields._dateTime.fields._dateData.fields;
        *(int16_t *)&pIVar16[3].klass = SVar23.fields._offsetMinutes;
      }
      return (bool_conflict)pIVar16;
    }
    pSVar13 = (System_String_o *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_9_get_Value).methodPtr)
                        (pIVar17,(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_9_get_Value).
                                 method,0);
    bVar21 = 0;
    bVar6 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar21 = 0;
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar13,(System_IFormatProvider_o *)formatProvider,0x80,&SStackY_208,
                         (MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)0x0;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar20 = extraout_RDX;
        }
        SVar23.fields._8_8_ = 0;
        SVar23.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_208;
        SVar23 = System_DateTimeOffset__ToUniversalTime(SVar23,pMVar20);
        bVar21 = (bool_conflict)SVar23.fields._dateTime.fields._dateData;
      }
    }
  }
  return bVar21;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_ProfileData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449a980

System_String_o *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  int32_t iVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_List_object__o *a;
  long lVar12;
  long lVar13;
  System_Collections_Generic_List_object__o *__this_07;
  System_Object_array *pSVar14;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this_08;
  System_String_array *pSVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  Il2CppObject *pIVar17;
  Il2CppObject *a_00;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTime_Fields SVar18;
  System_String_o *pSVar19;
  System_String_c *pSVar20;
  System_String_o *extraout_RAX;
  long *plVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  long *unaff_RBP;
  undefined8 uVar22;
  MethodInfo *pMVar23;
  System_Collections_Generic_List_object__o *a_01;
  Il2CppObject *a_02;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar24;
  System_DateTimeOffset_o SVar25;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_DateTimeOffset_o SStackY_230;
  System_String_o *pSStackY_218;
  MethodInfo *pMStackY_210;
  MethodInfo *pMStackY_208;
  System_Collections_Generic_List_object__o *pSStackY_200;
  Il2CppMethodPointer pIVar26;
  Il2CppMethodPointer pIVar27;
  InvokerMethod pIVar28;
  char *pcVar29;
  Il2CppClass *pIVar30;
  Il2CppType *pIVar31;
  Il2CppType **ppIVar32;
  _union_13 _Var33;
  _union_14 _Var34;
  Il2CppMethodPointer pIStack_1a8;
  Il2CppMethodPointer pIStack_1a0;
  InvokerMethod pIStack_198;
  char *pcStack_190;
  Il2CppClass *pIStack_188;
  Il2CppType *pIStack_180;
  Il2CppType **ppIStack_178;
  _union_13 _Stack_170;
  _union_14 _Stack_168;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAStack_160;
  MethodInfo *pMStack_158;
  long *plStack_150;
  System_Collections_Generic_List_object__o *pSStack_148;
  System_Collections_Generic_List_object__o *pSStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  System_Collections_Generic_List_object__o *pSStack_128;
  System_Collections_Generic_List_object__o *pSStack_120;
  System_Collections_Generic_List_object__c *pSVar35;
  System_Collections_Generic_List_object__c *pSStack_c8;
  Il2CppMethodPointer pIStack_c0;
  System_Object_array *pSStack_b8;
  char *pcStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppType *pIStack_a0;
  Il2CppType **ppIStack_98;
  _union_13 _Stack_90;
  _union_14 _Stack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  if (g_data_057ae94c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae94c = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449aa7e;
label_0449a9a8:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449a9a8;
label_0449aa7e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
  uVar22 = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449aa12:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449aa1d:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar22 = 0;
    pSVar11 = pSVar9;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._9_get_Value.methodPtr)
                          (pSVar9,(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._9_get_Value.method)
      ;
      return pSVar10;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSVar9 = (System_Collections_Generic_List_object__o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449aa12;
    }
    pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449aa1d;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae94b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae94b = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449abde;
label_0449ab08:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449ab08;
label_0449abde:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar21 = &TypeInfo_JSONNode;
  pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
  a = (System_Collections_Generic_List_object__o *)0x0;
  __this_07 = pSVar11;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449ab72:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ab7d:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a = (System_Collections_Generic_List_object__o *)0x0;
    __this_07 = pSVar9;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._39_get_AsBool.methodPtr)
                          (pSVar9,(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._39_get_AsBool.
                                  method);
      return pSVar10;
    }
  }
  else if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    cVar5 = (*(pSVar11->klass->vtable)._28_RemoveAt.methodPtr)
                      (pSVar11,uVar22,(pSVar11->klass->vtable)._28_RemoveAt.method);
    if (cVar5 != '\0') {
      pSVar9 = (System_Collections_Generic_List_object__o *)
               (*(pSVar11->klass->vtable)._7_Insert.methodPtr)
                         (pSVar11,uVar22,(pSVar11->klass->vtable)._7_Insert.method);
      goto label_0449ab72;
    }
    pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ab7d;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_78 = &TypeInfo_JSONNode;
  pSVar9 = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
  uStack_80 = 0;
  if (g_data_057ae94d == '\0') {
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ac6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ac78;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ac84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ac90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ac9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449aca8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae94d = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ace3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad03;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
  pMVar23 = (MethodInfo *)0x0;
  pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad11;
  a_01 = __this_07;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)__this_07,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449ad55:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ad60:
    if (iVar3 == 0) {
      pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad67;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar23 = (MethodInfo *)0x0;
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad73;
    a_01 = pSVar11;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
label_0449adbc:
      lVar12 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ae15;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      else {
        lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ae2b;
        lVar13 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ae3c;
        il2cpp_runtime_helper_02337ed0();
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449adfe;
        lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
      }
      return (System_String_o *)(System_Object_array *)**(undefined8 **)(lVar12 + 0xb8);
    }
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad93;
      a = (System_Collections_Generic_List_object__o *)
          (*(((SimpleJSONFixed_JSONNode_c *)pSVar11->klass)->vtable)._45_get_AsArray.methodPtr)(pSVar11);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ada8;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar23 = (MethodInfo *)0x0;
      pSStack_120 = (System_Collections_Generic_List_object__o *)0x449adb4;
      a_01 = a;
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_0449adbc;
      if (a != (System_Collections_Generic_List_object__o *)0x0) {
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ae83;
        uVar7 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._11_get_Count.methodPtr)
                          (a,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._11_get_Count.method);
        pSVar11 = (System_Collections_Generic_List_object__o *)(ulong)uVar7;
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ae94;
        __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449aeab;
        System_Collections_Generic_List_object____ctor_362b930(__this_07,uVar7,MethodInfo_List_1_System_String);
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449aec3;
        (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._32_unknown.methodPtr)
                  (&pSStack_c8,a,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._32_unknown.method);
        pMVar23 = (MethodInfo *)0x0;
        pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af04;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_c0;
        __this_03.fields._0_8_ = pSStack_c8;
        __this_03.fields.m_Object.fields._8_8_ = pSStack_b8;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_b0;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_a8;
        __this_03.fields.m_Object.fields._32_8_ = pIStack_a0;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_98;
        __this_03.fields.m_Array.fields._8_8_ = _Stack_90.rgctx_data;
        __this_03.fields.m_Array.fields._current = _Stack_88.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_03,(MethodInfo *)&stack0xfffffffffffffee8);
        if ((char)bVar6 == '\0') {
          a_01 = pSVar9;
          if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b005;
        }
        else {
          if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
            unaff_RBP = &MethodInfo_Void_Add;
            pSVar35 = pSStack_c8;
            pIVar26 = pIStack_c0;
            pSVar14 = pSStack_b8;
            pcVar29 = pcStack_b0;
            pIVar30 = pIStack_a8;
            pIVar31 = pIStack_a0;
            ppIVar32 = ppIStack_98;
            _Var33 = _Stack_90;
            _Var34 = _Stack_88;
            do {
              pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af63;
              __this_05.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar26;
              __this_05.fields._0_8_ = pSVar35;
              __this_05.fields.m_Object.fields._8_8_ = pSVar14;
              __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
              __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
              __this_05.fields.m_Object.fields._32_8_ = pIVar31;
              __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
              __this_05.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
              __this_05.fields.m_Array.fields._current = _Var34.genericMethod;
              SVar24 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_05,(MethodInfo *)&stack0xfffffffffffffee8);
              plVar21 = (long *)SVar24.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af7b;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af88;
              pSVar11 = (System_Collections_Generic_List_object__o *)
                        SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar24,(MethodInfo *)0x0);
              pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af97;
              a_01 = pSVar11;
              bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar23 = (MethodInfo *)0x0;
              if ((char)bVar6 != '\0') {
                a = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
                if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0449b083;
                pSStack_120 = (System_Collections_Generic_List_object__o *)0x449afbc;
                a_01 = pSVar11;
                pMVar23 = (MethodInfo *)
                          (*(pSVar11->klass->vtable)._9_unknown.methodPtr)
                                    (pSVar11,(pSVar11->klass->vtable)._9_unknown.method);
              }
              lVar12 = MethodInfo_Void_Add;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_07->fields)._items;
              a = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449b083;
              uVar7 = (__this_07->fields)._size;
              if (uVar7 < (uint)pSVar4->max_length) {
                (__this_07->fields)._size = uVar7 + 1;
                pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pMVar23;
                pSStack_120 = (System_Collections_Generic_List_object__o *)0x449affb;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar7);
              }
              else {
                pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af47;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_07,(Il2CppObject *)pMVar23,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_120 = (System_Collections_Generic_List_object__o *)0x449af51;
              __this_04.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar26;
              __this_04.fields._0_8_ = pSVar35;
              __this_04.fields.m_Object.fields._8_8_ = pSVar14;
              __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
              __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
              __this_04.fields.m_Object.fields._32_8_ = pIVar31;
              __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
              __this_04.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
              __this_04.fields.m_Array.fields._current = _Var34.genericMethod;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_04,(MethodInfo *)&stack0xfffffffffffffee8);
            } while ((char)bVar6 != '\0');
label_0449b005:
            pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b017;
            pSVar14 = System_Collections_Generic_List_object___ToArray(__this_07,MethodInfo_String_ToArray);
            return (System_String_o *)pSVar14;
          }
          pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b033;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_c0;
          __this_06.fields._0_8_ = pSStack_c8;
          __this_06.fields.m_Object.fields._8_8_ = pSStack_b8;
          __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_b0;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_a8;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_a0;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_98;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_90.rgctx_data;
          __this_06.fields.m_Array.fields._current = _Stack_88.genericMethod;
          SVar24 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_06,(MethodInfo *)&stack0xfffffffffffffee8);
          a = (System_Collections_Generic_List_object__o *)SVar24.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b04b;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b058;
          pSVar11 = (System_Collections_Generic_List_object__o *)
                    SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar24,(MethodInfo *)0x0);
          pMVar23 = (MethodInfo *)0x0;
          pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b067;
          a_01 = pSVar11;
          bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar6 != '\0') && (pSVar11 != (System_Collections_Generic_List_object__o *)0x0)) {
            pMVar23 = (pSVar11->klass->vtable)._9_unknown.method;
            pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b083;
            a_01 = pSVar11;
            (*(pSVar11->klass->vtable)._9_unknown.methodPtr)();
          }
        }
      }
    }
  }
  else if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
    pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad34;
    cVar5 = (*(__this_07->klass->vtable)._28_RemoveAt.methodPtr)
                      (__this_07,a,(__this_07->klass->vtable)._28_RemoveAt.method);
    if (cVar5 != '\0') {
      pSStack_120 = (System_Collections_Generic_List_object__o *)0x449ad52;
      pSVar11 = (System_Collections_Generic_List_object__o *)
                (*(__this_07->klass->vtable)._7_Insert.methodPtr)
                          (__this_07,a,(__this_07->klass->vtable)._7_Insert.method);
      goto label_0449ad55;
    }
    pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ad60;
  }
label_0449b083:
  pSStack_120 = (System_Collections_Generic_List_object__o *)0x449b088;
  uStack_130 = il2cpp_runtime_helper_022b2c90();
  pSStack_128 = pSVar11;
  pSStack_120 = a;
  if (g_data_057ae951 == '\0') {
    plStack_138 = (long *)0x449b0ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_138 = (long *)0x449b0b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PatreonData);
    plStack_138 = (long *)0x449b0c4;
    il2cpp_runtime_helper_023445d0(&"tierIds");
    plStack_138 = (long *)0x449b0d0;
    il2cpp_runtime_helper_023445d0(&"linked");
    plStack_138 = (long *)0x449b0dc;
    il2cpp_runtime_helper_023445d0(&"28767500");
    plStack_138 = (long *)0x449b0e8;
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    plStack_138 = (long *)0x449b0f4;
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    plStack_138 = (long *)0x449b100;
    il2cpp_runtime_helper_023445d0(&"28767505");
    plStack_138 = (long *)0x449b10c;
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    plStack_138 = (long *)0x449b118;
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae951 = '\x01';
  }
  plStack_138 = (long *)0x449b12e;
  __this_08 = (ApplicationManagers_AccountLoginResponse_PatreonData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PatreonData);
  plStack_138 = (long *)0x449b139;
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor(__this_08,pMVar23);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    plStack_138 = (long *)0x449b151;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_138 = (long *)0x449b15d;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (System_String_o *)__this_08;
  }
  plStack_138 = (long *)0x449b177;
  pSVar9 = a_01;
  bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                    ((SimpleJSONFixed_JSONNode_o *)a_01,"linked",method_00);
  if (__this_08 != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
    *(char *)&(__this_08->fields).Linked = (char)bVar6;
    plStack_138 = (long *)0x449b195;
    pSVar10 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"patronStatus",method_01);
    (__this_08->fields).PatronStatus = pSVar10;
    plStack_138 = (long *)0x449b1a5;
    il2cpp_runtime_helper_022b4080(&(__this_08->fields).PatronStatus,pSVar10);
    plStack_138 = (long *)0x449b1b7;
    pSVar15 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"tierIds",method_02);
    (__this_08->fields).TierIds = pSVar15;
    plStack_138 = (long *)0x449b1ca;
    il2cpp_runtime_helper_022b4080(&(__this_08->fields).TierIds,pSVar15);
    plStack_138 = (long *)0x449b1dd;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this_08->fields).TierIds,"28767500",method_03);
    *(char *)&(__this_08->fields).HasTier2 = (char)bVar6;
    plStack_138 = (long *)0x449b1f3;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this_08->fields).TierIds,"28767505",method_04);
    *(char *)((long)&(__this_08->fields).HasTier2 + 1) = (char)bVar6;
    plStack_138 = (long *)0x449b208;
    iVar8 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"entitledAmountCents",method_05);
    (__this_08->fields).EntitledAmountCents = iVar8;
    plStack_138 = (long *)0x449b21d;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"manualOverride",method_06);
    *(char *)&(__this_08->fields).ManualOverride = (char)bVar6;
    plStack_138 = (long *)0x449b232;
    SVar25 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                       ((SimpleJSONFixed_JSONNode_o *)a_01,"lastSyncedAt",method_07);
    (__this_08->fields).LastSyncedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar25.fields._dateTime.fields._dateData.fields;
    (__this_08->fields).LastSyncedAt.fields._offsetMinutes = SVar25.fields._offsetMinutes;
    return (System_String_o *)__this_08;
  }
  plStack_138 = (long *)0x449b24a;
  il2cpp_runtime_helper_022b2c90();
  plStack_150 = &TypeInfo_JSONNode;
  pAStack_160 = __this_08;
  pMStack_158 = (MethodInfo *)plVar21;
  pSStack_148 = a_01;
  pSStack_140 = __this_07;
  plStack_138 = unaff_RBP;
  if (g_data_057ae94f == '\0') {
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b279;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b285;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b291;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b29d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b2a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b2b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OAuthLinkData);
    g_data_057ae94f = '\x01';
  }
  ppIVar32 = (Il2CppType **)0x0;
  _Var33.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar30 = (Il2CppClass *)0x0;
  pIVar31 = (Il2CppType *)0x0;
  pIVar28 = (InvokerMethod)0x0;
  pcVar29 = (char *)0x0;
  pIVar26 = (Il2CppMethodPointer)0x0;
  pIVar27 = (Il2CppMethodPointer)0x0;
  _Var34.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b300;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449b349:
    lVar12 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
      pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b3a2;
      il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b3b8;
      lVar13 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    if (iVar3 == 0) {
      pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b3c9;
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b38b;
      lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    }
    return (System_String_o *)(System_Object_array *)**(undefined8 **)(lVar12 + 0xb8);
  }
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto label_0449b561;
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b320;
  pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*(code *)pSVar9->klass[1]._1.nestedTypes)(pSVar9);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b335;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b341;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_0449b349;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449b561:
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b566;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b3f8;
    iVar8 = (*(pSVar16->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar16,(pSVar16->klass->vtable)._11_get_Count.method);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b409;
    __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OAuthLinkData);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b420;
    System_Collections_Generic_List_object____ctor_362b930(__this_07,iVar8,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b438;
    (*(pSVar16->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_1a8,pSVar16,(pSVar16->klass->vtable)._32_unknown.method);
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b479;
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_1a0;
    __this.fields._0_8_ = pIStack_1a8;
    __this.fields.m_Object.fields._8_8_ = pIStack_198;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_190;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_188;
    __this.fields.m_Object.fields._32_8_ = pIStack_180;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_178;
    __this.fields.m_Array.fields._8_8_ = _Stack_170.rgctx_data;
    __this.fields.m_Array.fields._current = _Stack_168.genericMethod;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffe08);
    pIVar26 = pIStack_1a8;
    pIVar27 = pIStack_1a0;
    pIVar28 = pIStack_198;
    pcVar29 = pcStack_190;
    pIVar30 = pIStack_188;
    pIVar31 = pIStack_180;
    ppIVar32 = ppIStack_178;
    _Var33 = _Stack_170;
    _Var34 = _Stack_168;
    if ((char)bVar6 == '\0') {
      if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b53d;
      goto label_0449b561;
    }
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4d2;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_01.fields._0_8_ = pIVar26;
        __this_01.fields.m_Object.fields._8_8_ = pIVar28;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_01.fields.m_Object.fields._32_8_ = pIVar31;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_01.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var34.genericMethod;
        SVar24 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffe08);
        plVar21 = (long *)SVar24.fields.value;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4ea;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4f7;
        pMVar23 = (MethodInfo *)plVar21;
        pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar24,(MethodInfo *)0x0);
        pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4ff;
        item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar16,pMVar23);
        lVar12 = MethodInfo_Void_Add;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar14 = (__this_07->fields)._items;
        if (pSVar14 == (System_Object_array *)0x0) goto label_0449b561;
        uVar7 = (__this_07->fields)._size;
        if (uVar7 < (uint)pSVar14->max_length) {
          (__this_07->fields)._size = uVar7 + 1;
          pSVar14->m_Items[(int)uVar7] = (Il2CppObject *)item;
          pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b536;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar7,item);
        }
        else {
          pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4ba;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b4c4;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
        __this_00.fields._0_8_ = pIVar26;
        __this_00.fields.m_Object.fields._8_8_ = pIVar28;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_00.fields.m_Object.fields._32_8_ = pIVar31;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
        __this_00.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var34.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffe08);
      } while ((char)bVar6 != '\0');
label_0449b53d:
      pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b54f;
      pSVar14 = System_Collections_Generic_List_object___ToArray(__this_07,MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
      return (System_String_o *)pSVar14;
    }
  }
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b570;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar27;
  __this_02.fields._0_8_ = pIVar26;
  __this_02.fields.m_Object.fields._8_8_ = pIVar28;
  __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
  __this_02.fields.m_Object.fields._32_8_ = pIVar31;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
  __this_02.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
  __this_02.fields.m_Array.fields._current = _Var34.genericMethod;
  aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
              SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffe08);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b588;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b595;
  pMVar23 = (MethodInfo *)aKeyValue.value;
  pIVar17 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                       (MethodInfo *)0x0);
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b59d;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse((SimpleJSONFixed_JSONNode_o *)pIVar17,pMVar23)
  ;
  pSStackY_200 = (System_Collections_Generic_List_object__o *)0x449b5a2;
  il2cpp_runtime_helper_022b2c90();
  pMStackY_210 = (MethodInfo *)plVar21;
  pSStackY_200 = __this_07;
  if (g_data_057ae94e == '\0') {
    pSStackY_218 = aKeyValue.key;
    pMStackY_208 = (MethodInfo *)aKeyValue.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_208;
    aKeyValue.key = pSStackY_218;
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    SStackY_230.fields._offsetMinutes = 0;
    SStackY_230.fields._10_6_ = 0;
    SStackY_230.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    pMStackY_208 = (MethodInfo *)aKeyValue.value;
    pSStackY_218 = aKeyValue.key;
    SStackY_230.fields._offsetMinutes = 0;
    SStackY_230.fields._10_6_ = 0;
    SStackY_230.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_208;
    aKeyValue.key = pSStackY_218;
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_208 = (MethodInfo *)aKeyValue.value;
    pSStackY_218 = aKeyValue.key;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_208;
    aKeyValue.key = pSStackY_218;
  }
  pMStackY_208 = (MethodInfo *)aKeyValue.value;
  pSStackY_218 = aKeyValue.key;
  a_00 = (Il2CppObject *)0x0;
  a_02 = pIVar17;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar17,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449b64c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar17 == (Il2CppObject *)0x0) goto label_0449b7c6;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar17,pMVar23,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      a_00 = (Il2CppObject *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_7_get_Item).methodPtr)
                       (pIVar17,pMVar23,
                        (((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_7_get_Item).method);
      goto label_0449b64c;
    }
    a_00 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar18._dateData = 0;
  a_02 = a_00;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (a_00 == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_02,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pIVar17 = a_02;
        pSVar19 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"provider",method_08);
        if (pSVar10 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar12 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar13 + 0x135);
          }
          else {
            lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar13 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar13 = il2cpp_runtime_helper_023009c0();
            iVar3 = *(int *)(lVar13 + 0xe4);
          }
          else {
            iVar3 = *(int *)(lVar13 + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar12 + 0x135);
          }
          else {
            lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar12 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
          }
          pIVar17[2].klass = (Il2CppClass *)**(undefined8 **)(lVar12 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar17 + 2);
          System_Object___ctor(pIVar17,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        *(System_String_o **)&(pSVar10->fields)._stringLength = pSVar19;
        il2cpp_runtime_helper_022b4080(&pSVar10->fields,pSVar19);
        pSVar20 = (System_String_c *)
                  ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerUserId",method_09);
        pSVar10[1].klass = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar10 + 1,pSVar20);
        pSVar19 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerEmail",method_10);
        pSVar10[1].monitor = pSVar19;
        il2cpp_runtime_helper_022b4080(&pSVar10[1].monitor,pSVar19);
        SVar25 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a_02,"linkedAt",method_11);
        pSVar10[1].fields = (System_String_Fields)SVar25.fields._dateTime.fields._dateData;
        *(int16_t *)&pSVar10[2].klass = SVar25.fields._offsetMinutes;
      }
      return pSVar10;
    }
    pSVar10 = (System_String_o *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)a_00->klass->vtable)->_9_get_Value).methodPtr)
                        (a_00,(((SimpleJSONFixed_JSONNode_VTable *)a_00->klass->vtable)->_9_get_Value).method,
                         0);
    SVar18._dateData = 0;
    bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar18._dateData = 0;
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar10,(System_IFormatProvider_o *)formatProvider,0x80,&SStackY_230,
                         (MethodInfo *)0x0);
      pMVar23 = (MethodInfo *)0x0;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar23 = extraout_RDX;
        }
        SVar25.fields._8_8_ = 0;
        SVar25.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_230;
        SVar25 = System_DateTimeOffset__ToUniversalTime(SVar25,pMVar23);
        SVar18._dateData = (uint64_t)SVar25.fields._dateTime.fields._dateData;
      }
    }
  }
  return (System_String_o *)SVar18._dateData;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449ac40

System_String_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  int32_t iVar8;
  System_String_o *a;
  long lVar9;
  long lVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  Il2CppObject *pIVar15;
  Il2CppObject *a_00;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTime_Fields SVar16;
  System_String_array *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  long *unaff_RBP;
  MethodInfo *pMVar17;
  System_String_o *a_01;
  Il2CppObject *a_02;
  MethodInfo *unaff_R12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  System_DateTimeOffset_o SVar19;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_DateTimeOffset_o SStackY_1e0;
  System_String_o *pSStackY_1c8;
  MethodInfo *pMStackY_1c0;
  MethodInfo *pMStackY_1b8;
  System_Collections_Generic_List_object__o *pSStackY_1b0;
  Il2CppMethodPointer pIVar20;
  Il2CppMethodPointer pIVar21;
  InvokerMethod pIVar22;
  char *pcVar23;
  Il2CppClass *pIVar24;
  Il2CppType *pIVar25;
  Il2CppType **ppIVar26;
  _union_13 _Var27;
  _union_14 _Var28;
  Il2CppMethodPointer pIStack_158;
  Il2CppMethodPointer pIStack_150;
  InvokerMethod pIStack_148;
  char *pcStack_140;
  Il2CppClass *pIStack_138;
  Il2CppType *pIStack_130;
  Il2CppType **ppIStack_128;
  _union_13 _Stack_120;
  _union_14 _Stack_118;
  System_String_array *pSStack_110;
  MethodInfo *pMStack_108;
  long *plStack_100;
  System_String_o *pSStack_f8;
  System_Collections_Generic_List_object__o *pSStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  System_String_o *pSStack_d8;
  System_String_o *pSStack_d0;
  System_String_c *pSVar29;
  System_String_Fields SVar30;
  System_String_c *local_78;
  Il2CppMethodPointer pIStack_70;
  System_String_Fields local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  pSVar12 = (System_String_o *)&stack0xffffffffffffff38;
  if (g_data_057ae94d == '\0') {
    pSStack_d0 = (System_String_o *)0x449ac6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStack_d0 = (System_String_o *)0x449ac78;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_d0 = (System_String_o *)0x449ac84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_d0 = (System_String_o *)0x449ac90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_d0 = (System_String_o *)0x449ac9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_d0 = (System_String_o *)0x449aca8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae94d = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    pSStack_d0 = (System_String_o *)0x449ace3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_d0 = (System_String_o *)0x449ad03;
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_String_o *)0x0;
  pMVar17 = (MethodInfo *)0x0;
  pSStack_d0 = (System_String_o *)0x449ad11;
  a_01 = (System_String_o *)node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449ad55:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ad60:
    if (iVar3 == 0) {
      pSStack_d0 = (System_String_o *)0x449ad67;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    pSStack_d0 = (System_String_o *)0x449ad73;
    a_01 = a;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
label_0449adbc:
      lVar9 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStack_d0 = (System_String_o *)0x449ae15;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_d0 = (System_String_o *)0x449ae2b;
        lVar10 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar10 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar10 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStack_d0 = (System_String_o *)0x449ae3c;
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStack_d0 = (System_String_o *)0x449adfe;
        lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      }
      return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
    }
    if (a != (System_String_o *)0x0) {
      pSStack_d0 = (System_String_o *)0x449ad93;
      key = (System_String_o *)
            (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._45_get_AsArray.methodPtr)(a);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_d0 = (System_String_o *)0x449ada8;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (MethodInfo *)0x0;
      pSStack_d0 = (System_String_o *)0x449adb4;
      a_01 = key;
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)key,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_0449adbc;
      if (key != (System_String_o *)0x0) {
        pSStack_d0 = (System_String_o *)0x449ae83;
        uVar7 = (*(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._11_get_Count.methodPtr)
                          (key,(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._11_get_Count.method);
        a = (System_String_o *)(ulong)uVar7;
        pSStack_d0 = (System_String_o *)0x449ae94;
        node = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStack_d0 = (System_String_o *)0x449aeab;
        System_Collections_Generic_List_object____ctor_362b930
                  ((System_Collections_Generic_List_object__o *)node,uVar7,MethodInfo_List_1_System_String);
        pSStack_d0 = (System_String_o *)0x449aec3;
        (*(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._32_unknown.methodPtr)
                  (&local_78,key,(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._32_unknown.method);
        pMVar17 = (MethodInfo *)0x0;
        pSStack_d0 = (System_String_o *)0x449af04;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_03.fields._0_8_ = local_78;
        __this_03.fields.m_Object.fields._8_8_ = local_68;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this_03.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this_03.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_03.fields.m_Array.fields._current = local_38.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar6 == '\0') {
          a_01 = pSVar12;
          if ((System_Collections_Generic_List_object__o *)node !=
              (System_Collections_Generic_List_object__o *)0x0) goto label_0449b005;
        }
        else {
          if ((System_Collections_Generic_List_object__o *)node !=
              (System_Collections_Generic_List_object__o *)0x0) {
            unaff_RBP = &MethodInfo_Void_Add;
            pSVar29 = local_78;
            pIVar20 = pIStack_70;
            SVar30 = local_68;
            pcVar23 = pcStack_60;
            pIVar24 = local_58;
            pIVar25 = pIStack_50;
            ppIVar26 = local_48;
            _Var27 = _Stack_40;
            _Var28 = local_38;
            do {
              pSStack_d0 = (System_String_o *)0x449af63;
              __this_05.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
              __this_05.fields._0_8_ = pSVar29;
              __this_05.fields.m_Object.fields._8_8_ = SVar30;
              __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
              __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
              __this_05.fields.m_Object.fields._32_8_ = pIVar25;
              __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
              __this_05.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
              __this_05.fields.m_Array.fields._current = _Var28.genericMethod;
              SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
              unaff_R12 = (MethodInfo *)SVar18.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_d0 = (System_String_o *)0x449af7b;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_d0 = (System_String_o *)0x449af88;
              a = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
              pSStack_d0 = (System_String_o *)0x449af97;
              a_01 = a;
              bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar17 = (MethodInfo *)0x0;
              if ((char)bVar6 != '\0') {
                key = (System_String_o *)&stack0xffffffffffffff38;
                if (a == (System_String_o *)0x0) goto label_0449b083;
                pSStack_d0 = (System_String_o *)0x449afbc;
                a_01 = a;
                pMVar17 = (MethodInfo *)
                          (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.methodPtr)
                                    (a,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.method)
                ;
              }
              lVar9 = MethodInfo_Void_Add;
              piVar1 = &(((System_Collections_Generic_List_object__o *)node)->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (((System_Collections_Generic_List_object__o *)node)->fields)._items;
              key = (System_String_o *)&stack0xffffffffffffff38;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449b083;
              uVar7 = (((System_Collections_Generic_List_object__o *)node)->fields)._size;
              if (uVar7 < (uint)pSVar4->max_length) {
                (((System_Collections_Generic_List_object__o *)node)->fields)._size = uVar7 + 1;
                pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pMVar17;
                pSStack_d0 = (System_String_o *)0x449affb;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar7);
              }
              else {
                pSStack_d0 = (System_String_o *)0x449af47;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)node,(Il2CppObject *)pMVar17,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_d0 = (System_String_o *)0x449af51;
              __this_04.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
              __this_04.fields._0_8_ = pSVar29;
              __this_04.fields.m_Object.fields._8_8_ = SVar30;
              __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
              __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
              __this_04.fields.m_Object.fields._32_8_ = pIVar25;
              __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
              __this_04.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
              __this_04.fields.m_Array.fields._current = _Var28.genericMethod;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
            } while ((char)bVar6 != '\0');
label_0449b005:
            pSStack_d0 = (System_String_o *)0x449b017;
            pSVar11 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)node,MethodInfo_String_ToArray);
            return pSVar11;
          }
          pSStack_d0 = (System_String_o *)0x449b033;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
          __this_06.fields._0_8_ = local_78;
          __this_06.fields.m_Object.fields._8_8_ = local_68;
          __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_50;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
          __this_06.fields.m_Array.fields._current = local_38.genericMethod;
          SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
          key = (System_String_o *)SVar18.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_d0 = (System_String_o *)0x449b04b;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_d0 = (System_String_o *)0x449b058;
          a = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
          pMVar17 = (MethodInfo *)0x0;
          pSStack_d0 = (System_String_o *)0x449b067;
          a_01 = a;
          bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar6 != '\0') && (a != (System_String_o *)0x0)) {
            pMVar17 = (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.method;
            pSStack_d0 = (System_String_o *)0x449b083;
            a_01 = a;
            (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.methodPtr)();
          }
        }
      }
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_d0 = (System_String_o *)0x449ad34;
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSStack_d0 = (System_String_o *)0x449ad52;
      a = (System_String_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449ad55;
    }
    a = (System_String_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ad60;
  }
label_0449b083:
  pSStack_d0 = (System_String_o *)0x449b088;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pSStack_d8 = a;
  pSStack_d0 = key;
  if (g_data_057ae951 == '\0') {
    plStack_e8 = (long *)0x449b0ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_e8 = (long *)0x449b0b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PatreonData);
    plStack_e8 = (long *)0x449b0c4;
    il2cpp_runtime_helper_023445d0(&"tierIds");
    plStack_e8 = (long *)0x449b0d0;
    il2cpp_runtime_helper_023445d0(&"linked");
    plStack_e8 = (long *)0x449b0dc;
    il2cpp_runtime_helper_023445d0(&"28767500");
    plStack_e8 = (long *)0x449b0e8;
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    plStack_e8 = (long *)0x449b0f4;
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    plStack_e8 = (long *)0x449b100;
    il2cpp_runtime_helper_023445d0(&"28767505");
    plStack_e8 = (long *)0x449b10c;
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    plStack_e8 = (long *)0x449b118;
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae951 = '\x01';
  }
  plStack_e8 = (long *)0x449b12e;
  pSVar11 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_PatreonData);
  plStack_e8 = (long *)0x449b139;
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor
            ((ApplicationManagers_AccountLoginResponse_PatreonData_o *)pSVar11,pMVar17);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    plStack_e8 = (long *)0x449b151;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_e8 = (long *)0x449b15d;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return pSVar11;
  }
  plStack_e8 = (long *)0x449b177;
  pSVar12 = a_01;
  bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                    ((SimpleJSONFixed_JSONNode_o *)a_01,"linked",method_00);
  if (pSVar11 != (System_String_array *)0x0) {
    *(char *)&((ApplicationManagers_AccountLoginResponse_PatreonData_Fields *)&pSVar11->bounds)->Linked =
         (char)bVar6;
    plStack_e8 = (long *)0x449b195;
    pSVar12 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"patronStatus",method_01);
    pSVar11->max_length = (il2cpp_array_size_t)pSVar12;
    plStack_e8 = (long *)0x449b1a5;
    il2cpp_runtime_helper_022b4080(&pSVar11->max_length,pSVar12);
    plStack_e8 = (long *)0x449b1b7;
    pSVar13 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                        ((SimpleJSONFixed_JSONNode_o *)a_01,"tierIds",method_02);
    pSVar11->m_Items[0] = (System_String_o *)pSVar13;
    plStack_e8 = (long *)0x449b1ca;
    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar13);
    plStack_e8 = (long *)0x449b1dd;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((System_String_array *)pSVar11->m_Items[0],"28767500",method_03);
    *(char *)(pSVar11->m_Items + 4) = (char)bVar6;
    plStack_e8 = (long *)0x449b1f3;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((System_String_array *)pSVar11->m_Items[0],"28767505",method_04);
    *(char *)((long)pSVar11->m_Items + 0x21) = (char)bVar6;
    plStack_e8 = (long *)0x449b208;
    iVar8 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"entitledAmountCents",method_05);
    *(int32_t *)(pSVar11->m_Items + 1) = iVar8;
    plStack_e8 = (long *)0x449b21d;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)a_01,"manualOverride",method_06);
    *(char *)((long)pSVar11->m_Items + 0xc) = (char)bVar6;
    plStack_e8 = (long *)0x449b232;
    SVar19 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                       ((SimpleJSONFixed_JSONNode_o *)a_01,"lastSyncedAt",method_07);
    (((System_DateTimeOffset_o *)(pSVar11->m_Items + 2))->fields)._dateTime.fields._dateData =
         (uint64_t)SVar19.fields._dateTime.fields._dateData.fields;
    *(int16_t *)(pSVar11->m_Items + 3) = SVar19.fields._offsetMinutes;
    return pSVar11;
  }
  plStack_e8 = (long *)0x449b24a;
  il2cpp_runtime_helper_022b2c90();
  plStack_100 = &TypeInfo_JSONNode;
  pSStack_110 = pSVar11;
  pMStack_108 = unaff_R12;
  pSStack_f8 = a_01;
  pSStack_f0 = (System_Collections_Generic_List_object__o *)node;
  plStack_e8 = unaff_RBP;
  if (g_data_057ae94f == '\0') {
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b279;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b285;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b291;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b29d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b2a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b2b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OAuthLinkData);
    g_data_057ae94f = '\x01';
  }
  ppIVar26 = (Il2CppType **)0x0;
  _Var27.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar24 = (Il2CppClass *)0x0;
  pIVar25 = (Il2CppType *)0x0;
  pIVar22 = (InvokerMethod)0x0;
  pcVar23 = (char *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  pIVar21 = (Il2CppMethodPointer)0x0;
  _Var28.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b300;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449b349:
    lVar9 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
      pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b3a2;
      il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b3b8;
      lVar10 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b3c9;
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b38b;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (pSVar12 == (System_String_o *)0x0) goto label_0449b561;
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b320;
  pSVar14 = (SimpleJSONFixed_JSONNode_o *)(**(code **)&pSVar12->klass[1]._2.field_count)(pSVar12);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b335;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b341;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_0449b349;
  if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449b561:
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b566;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b3f8;
    iVar8 = (*(pSVar14->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar14,(pSVar14->klass->vtable)._11_get_Count.method);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b409;
    node = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OAuthLinkData);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b420;
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)node,iVar8,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b438;
    (*(pSVar14->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_158,pSVar14,(pSVar14->klass->vtable)._32_unknown.method);
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b479;
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_150;
    __this.fields._0_8_ = pIStack_158;
    __this.fields.m_Object.fields._8_8_ = pIStack_148;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_140;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_138;
    __this.fields.m_Object.fields._32_8_ = pIStack_130;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_128;
    __this.fields.m_Array.fields._8_8_ = _Stack_120.rgctx_data;
    __this.fields.m_Array.fields._current = _Stack_118.genericMethod;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffe58);
    pIVar20 = pIStack_158;
    pIVar21 = pIStack_150;
    pIVar22 = pIStack_148;
    pcVar23 = pcStack_140;
    pIVar24 = pIStack_138;
    pIVar25 = pIStack_130;
    ppIVar26 = ppIStack_128;
    _Var27 = _Stack_120;
    _Var28 = _Stack_118;
    if ((char)bVar6 == '\0') {
      if ((System_Collections_Generic_List_object__o *)node !=
          (System_Collections_Generic_List_object__o *)0x0) goto label_0449b53d;
      goto label_0449b561;
    }
    if ((System_Collections_Generic_List_object__o *)node != (System_Collections_Generic_List_object__o *)0x0)
    {
      do {
        pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4d2;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar21;
        __this_01.fields._0_8_ = pIVar20;
        __this_01.fields.m_Object.fields._8_8_ = pIVar22;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_01.fields.m_Object.fields._32_8_ = pIVar25;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
        __this_01.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var28.genericMethod;
        SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffe58);
        unaff_R12 = (MethodInfo *)SVar18.fields.value;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4ea;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4f7;
        pMVar17 = unaff_R12;
        pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
        pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4ff;
        item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar14,pMVar17);
        lVar9 = MethodInfo_Void_Add;
        piVar1 = &(((System_Collections_Generic_List_object__o *)node)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (((System_Collections_Generic_List_object__o *)node)->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_0449b561;
        uVar7 = (((System_Collections_Generic_List_object__o *)node)->fields)._size;
        if (uVar7 < (uint)pSVar4->max_length) {
          (((System_Collections_Generic_List_object__o *)node)->fields)._size = uVar7 + 1;
          pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)item;
          pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b536;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar7,item);
        }
        else {
          pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4ba;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)node,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b4c4;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar21;
        __this_00.fields._0_8_ = pIVar20;
        __this_00.fields.m_Object.fields._8_8_ = pIVar22;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_00.fields.m_Object.fields._32_8_ = pIVar25;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
        __this_00.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var28.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffe58);
      } while ((char)bVar6 != '\0');
label_0449b53d:
      pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b54f;
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)node,MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
      return pSVar11;
    }
  }
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b570;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar21;
  __this_02.fields._0_8_ = pIVar20;
  __this_02.fields.m_Object.fields._8_8_ = pIVar22;
  __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
  __this_02.fields.m_Object.fields._32_8_ = pIVar25;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
  __this_02.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
  __this_02.fields.m_Array.fields._current = _Var28.genericMethod;
  aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
              SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffe58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b588;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b595;
  pMVar17 = (MethodInfo *)aKeyValue.value;
  pIVar15 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                       (MethodInfo *)0x0);
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b59d;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse((SimpleJSONFixed_JSONNode_o *)pIVar15,pMVar17)
  ;
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)0x449b5a2;
  il2cpp_runtime_helper_022b2c90();
  pMStackY_1c0 = unaff_R12;
  pSStackY_1b0 = (System_Collections_Generic_List_object__o *)node;
  if (g_data_057ae94e == '\0') {
    pSStackY_1c8 = aKeyValue.key;
    pMStackY_1b8 = (MethodInfo *)aKeyValue.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1b8;
    aKeyValue.key = pSStackY_1c8;
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    SStackY_1e0.fields._offsetMinutes = 0;
    SStackY_1e0.fields._10_6_ = 0;
    SStackY_1e0.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    pMStackY_1b8 = (MethodInfo *)aKeyValue.value;
    pSStackY_1c8 = aKeyValue.key;
    SStackY_1e0.fields._offsetMinutes = 0;
    SStackY_1e0.fields._10_6_ = 0;
    SStackY_1e0.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1b8;
    aKeyValue.key = pSStackY_1c8;
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_1b8 = (MethodInfo *)aKeyValue.value;
    pSStackY_1c8 = aKeyValue.key;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_1b8;
    aKeyValue.key = pSStackY_1c8;
  }
  pMStackY_1b8 = (MethodInfo *)aKeyValue.value;
  pSStackY_1c8 = aKeyValue.key;
  a_00 = (Il2CppObject *)0x0;
  a_02 = pIVar15;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449b64c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar15 == (Il2CppObject *)0x0) goto label_0449b7c6;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar15,pMVar17,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      a_00 = (Il2CppObject *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_7_get_Item).methodPtr)
                       (pIVar15,pMVar17,
                        (((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_7_get_Item).method);
      goto label_0449b64c;
    }
    a_00 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar16._dateData = 0;
  a_02 = a_00;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (a_00 == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      pSVar11 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_02,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pIVar15 = a_02;
        pSVar12 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"provider",method_08);
        if (pSVar11 == (System_String_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar9 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          else {
            lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0();
            iVar3 = *(int *)(lVar10 + 0xe4);
          }
          else {
            iVar3 = *(int *)(lVar10 + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar9 + 0x135);
          }
          else {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar9 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
          }
          pIVar15[2].klass = (Il2CppClass *)**(undefined8 **)(lVar9 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar15 + 2);
          System_Object___ctor(pIVar15,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        pSVar11->bounds = (Il2CppArrayBounds *)pSVar12;
        il2cpp_runtime_helper_022b4080(&pSVar11->bounds,pSVar12);
        pSVar12 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerUserId",method_09);
        pSVar11->max_length = (il2cpp_array_size_t)pSVar12;
        il2cpp_runtime_helper_022b4080(&pSVar11->max_length,pSVar12);
        pSVar12 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_02,"providerEmail",method_10);
        pSVar11->m_Items[0] = pSVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar12);
        SVar19 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a_02,"linkedAt",method_11);
        pSVar11->m_Items[1] = (System_String_o *)SVar19.fields._dateTime.fields._dateData.fields;
        *(int16_t *)(pSVar11->m_Items + 2) = SVar19.fields._offsetMinutes;
      }
      return pSVar11;
    }
    pSVar12 = (System_String_o *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)a_00->klass->vtable)->_9_get_Value).methodPtr)
                        (a_00,(((SimpleJSONFixed_JSONNode_VTable *)a_00->klass->vtable)->_9_get_Value).method,
                         0);
    SVar16._dateData = 0;
    bVar6 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar16._dateData = 0;
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar12,(System_IFormatProvider_o *)formatProvider,0x80,&SStackY_1e0,
                         (MethodInfo *)0x0);
      pMVar17 = (MethodInfo *)0x0;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar17 = extraout_RDX;
        }
        SVar19.fields._8_8_ = 0;
        SVar19.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_1e0;
        SVar19 = System_DateTimeOffset__ToUniversalTime(SVar19,pMVar17);
        SVar16._dateData = (uint64_t)SVar19.fields._dateTime.fields._dateData;
      }
    }
  }
  return (System_String_array *)SVar16._dateData;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449b5b0

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *formatProvider;
  Il2CppClass *pIVar7;
  long lVar8;
  System_DateTime_o extraout_RAX;
  long lVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Il2CppObject *a;
  System_DateTimeOffset_Fields SVar11;
  System_DateTimeOffset_o SVar12;
  System_DateTimeOffset_o SVar13;
  System_DateTimeOffset_o SVar14;
  System_DateTimeOffset_o local_38;
  undefined8 extraout_RDX_00;
  
  if (g_data_057ae94e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = (Il2CppObject *)0x0;
  a = (Il2CppObject *)node;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_0449b64c:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449b7c6;
    cVar3 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      pIVar5 = (Il2CppObject *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449b64c;
    }
    pIVar5 = (Il2CppObject *)0x0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = pIVar5;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar11 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar4 == '\0') {
    if (pIVar5 == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      SVar13.fields._dateTime.fields._dateData = (System_DateTime_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor((Il2CppObject *)SVar13.fields._dateTime.fields._dateData,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pMVar10 = method_00;
      if ((char)bVar4 == '\0') {
        pIVar5 = a;
        pIVar7 = (Il2CppClass *)
                 ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                           ((SimpleJSONFixed_JSONNode_o *)a,"provider",method_00);
        if (SVar13.fields._dateTime.fields._dateData == 0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar8 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            bVar1 = *(byte *)(lVar9 + 0x135);
          }
          else {
            lVar9 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar1 = *(byte *)(lVar9 + 0x135);
          }
          if ((bVar1 & 1) == 0) {
            lVar9 = il2cpp_runtime_helper_023009c0();
            iVar2 = *(int *)(lVar9 + 0xe4);
          }
          else {
            iVar2 = *(int *)(lVar9 + 0xe4);
          }
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            bVar1 = *(byte *)(lVar8 + 0x135);
          }
          else {
            lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            bVar1 = *(byte *)(lVar8 + 0x135);
          }
          if ((bVar1 & 1) == 0) {
            lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
          }
          pIVar5[2].klass = (Il2CppClass *)**(undefined8 **)(lVar8 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar5 + 2);
          System_Object___ctor(pIVar5,(MethodInfo *)0x0);
          SVar14.fields._8_8_ = extraout_RDX_00;
          SVar14.fields._dateTime.fields._dateData = extraout_RAX.fields._dateData;
          return (System_DateTimeOffset_o)SVar14.fields;
        }
        ((Il2CppObject *)((long)SVar13.fields._dateTime.fields._dateData + 0x10))->klass = pIVar7;
        il2cpp_runtime_helper_022b4080((Il2CppObject *)((long)SVar13.fields._dateTime.fields._dateData + 0x10),pIVar7);
        pSVar6 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                           ((SimpleJSONFixed_JSONNode_o *)a,"providerUserId",method_01);
        *(System_String_o **)((long)SVar13.fields._dateTime.fields._dateData + 0x18) = pSVar6;
        il2cpp_runtime_helper_022b4080((void **)((long)SVar13.fields._dateTime.fields._dateData + 0x18),pSVar6);
        pIVar7 = (Il2CppClass *)
                 ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                           ((SimpleJSONFixed_JSONNode_o *)a,"providerEmail",method_02);
        ((Il2CppObject *)((long)SVar13.fields._dateTime.fields._dateData + 0x20))->klass = pIVar7;
        il2cpp_runtime_helper_022b4080((Il2CppObject *)((long)SVar13.fields._dateTime.fields._dateData + 0x20),pIVar7);
        SVar12 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a,"linkedAt",method_03);
        pMVar10 = SVar12.fields._8_8_;
        *(System_DateTime_Fields *)((long)SVar13.fields._dateTime.fields._dateData + 0x28) =
             SVar12.fields._dateTime.fields._dateData.fields;
        *(int16_t *)&((Il2CppObject *)((long)SVar13.fields._dateTime.fields._dateData + 0x30))->klass =
             SVar12.fields._offsetMinutes;
      }
      SVar13.fields._8_8_ = pMVar10;
      return (System_DateTimeOffset_o)SVar13.fields;
    }
    pSVar6 = (System_String_o *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->klass->vtable)->_9_get_Value).methodPtr)(pIVar5);
    bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    SVar11 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_DateTimeOffset__TryParse
                        (pSVar6,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      pMVar10 = (MethodInfo *)0x0;
      SVar11 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar10 = extraout_RDX;
        }
        SVar12.fields._8_8_ = 0;
        SVar12.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar11 = (System_DateTimeOffset_Fields)System_DateTimeOffset__ToUniversalTime(SVar12,pMVar10);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar11;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ParseOAuthLinks
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_array* ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x449b250

ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar6;
  bool_conflict bVar7;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long lVar9;
  long lVar10;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar11;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *a;
  System_String_o *pSVar14;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTime_Fields SVar15;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *extraout_RAX;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Il2CppObject *a_00;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__o *unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_DateTimeOffset_o SVar17;
  System_DateTimeOffset_o SStackY_100;
  System_String_o *pSStackY_e8;
  MethodInfo *pMStackY_e0;
  MethodInfo *pMStackY_d8;
  System_Collections_Generic_List_object__o *pSStackY_d0;
  Il2CppMethodPointer pIVar18;
  Il2CppMethodPointer pIVar19;
  InvokerMethod pIVar20;
  char *pcVar21;
  Il2CppClass *pIVar22;
  Il2CppType *pIVar23;
  Il2CppType **ppIVar24;
  _union_13 _Var25;
  _union_14 _Var26;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae94f == '\0') {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b279;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b285;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b291;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b29d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b2a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b2b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OAuthLinkData);
    g_data_057ae94f = '\x01';
  }
  ppIVar24 = (Il2CppType **)0x0;
  _Var25.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar22 = (Il2CppClass *)0x0;
  pIVar23 = (Il2CppType *)0x0;
  pIVar20 = (InvokerMethod)0x0;
  pcVar21 = (char *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  pIVar19 = (Il2CppMethodPointer)0x0;
  _Var26.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b300;
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_0449b349:
    lVar9 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b3a2;
      il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b3b8;
      lVar10 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b3c9;
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b38b;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449b561;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b320;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)(*(node->klass->vtable)._45_get_AsArray.methodPtr)(node);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b335;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b341;
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') goto label_0449b349;
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449b561:
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b566;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b3f8;
    capacity = (*(pSVar8->klass->vtable)._11_get_Count.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._11_get_Count.method);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b409;
    unaff_R15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OAuthLinkData);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b420;
    System_Collections_Generic_List_object____ctor_362b930(unaff_R15,capacity,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b438;
    (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
              (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b479;
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this.fields._0_8_ = local_78;
    __this.fields.m_Object.fields._8_8_ = local_68;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this.fields.m_Object.fields._32_8_ = pIStack_50;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this.fields.m_Array.fields._current = local_38.genericMethod;
    bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff38);
    pIVar18 = local_78;
    pIVar19 = pIStack_70;
    pIVar20 = local_68;
    pcVar21 = pcStack_60;
    pIVar22 = local_58;
    pIVar23 = pIStack_50;
    ppIVar24 = local_48;
    _Var25 = _Stack_40;
    _Var26 = local_38;
    if ((char)bVar7 == '\0') {
      if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b53d;
      goto label_0449b561;
    }
    if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4d2;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
        __this_01.fields._0_8_ = pIVar18;
        __this_01.fields.m_Object.fields._8_8_ = pIVar20;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
        __this_01.fields.m_Object.fields._32_8_ = pIVar23;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar24;
        __this_01.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var26.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = (MethodInfo *)aKeyValue.fields.value;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4ea;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4f7;
        pMVar16 = unaff_R12;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4ff;
        pAVar11 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar8,pMVar16);
        lVar9 = MethodInfo_Void_Add;
        piVar1 = &(unaff_R15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (unaff_R15->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0449b561;
        uVar4 = (unaff_R15->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (unaff_R15->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pAVar11;
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b536;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,pAVar11);
        }
        else {
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4ba;
          System_Collections_Generic_List_object___AddWithResize
                    (unaff_R15,(Il2CppObject *)pAVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b4c4;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
        __this_00.fields._0_8_ = pIVar18;
        __this_00.fields.m_Object.fields._8_8_ = pIVar20;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
        __this_00.fields.m_Object.fields._32_8_ = pIVar23;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar24;
        __this_00.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var26.genericMethod;
        bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      } while ((char)bVar7 != '\0');
label_0449b53d:
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b54f;
      pAVar12 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
                System_Collections_Generic_List_object___ToArray(unaff_R15,MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
      return pAVar12;
    }
  }
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b570;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
  __this_02.fields._0_8_ = pIVar18;
  __this_02.fields.m_Object.fields._8_8_ = pIVar20;
  __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
  __this_02.fields.m_Object.fields._32_8_ = pIVar23;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar24;
  __this_02.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
  __this_02.fields.m_Array.fields._current = _Var26.genericMethod;
  aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                 SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b588;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b595;
  pMVar16 = (MethodInfo *)aKeyValue_00.value;
  pIVar13 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                       (MethodInfo *)0x0);
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b59d;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse((SimpleJSONFixed_JSONNode_o *)pIVar13,pMVar16)
  ;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449b5a2;
  il2cpp_runtime_helper_022b2c90();
  pMStackY_e0 = unaff_R12;
  pSStackY_d0 = unaff_R15;
  if (g_data_057ae94e == '\0') {
    pSStackY_e8 = aKeyValue_00.key;
    pMStackY_d8 = (MethodInfo *)aKeyValue_00.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_d8;
    aKeyValue_00.key = pSStackY_e8;
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    SStackY_100.fields._offsetMinutes = 0;
    SStackY_100.fields._10_6_ = 0;
    SStackY_100.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    pMStackY_d8 = (MethodInfo *)aKeyValue_00.value;
    pSStackY_e8 = aKeyValue_00.key;
    SStackY_100.fields._offsetMinutes = 0;
    SStackY_100.fields._10_6_ = 0;
    SStackY_100.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_d8;
    aKeyValue_00.key = pSStackY_e8;
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_d8 = (MethodInfo *)aKeyValue_00.value;
    pSStackY_e8 = aKeyValue_00.key;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_d8;
    aKeyValue_00.key = pSStackY_e8;
  }
  pMStackY_d8 = (MethodInfo *)aKeyValue_00.value;
  pSStackY_e8 = aKeyValue_00.key;
  a = (Il2CppObject *)0x0;
  a_00 = pIVar13;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_0449b64c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar13 == (Il2CppObject *)0x0) goto label_0449b7c6;
    cVar6 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar13->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar13,pMVar16,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar13->klass->vtable)->_28_HasKey).method);
    if (cVar6 != '\0') {
      a = (Il2CppObject *)
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar13->klass->vtable)->_7_get_Item).methodPtr)
                    (pIVar13,pMVar16,
                     (((SimpleJSONFixed_JSONNode_VTable *)pIVar13->klass->vtable)->_7_get_Item).method);
      goto label_0449b64c;
    }
    a = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15._dateData = 0;
  a_00 = a;
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (a == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      pAVar12 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor((Il2CppObject *)pAVar12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pIVar13 = a_00;
        pSVar14 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_00,"provider",method_00);
        if (pAVar12 == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar9 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          else {
            lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar10 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0();
            iVar3 = *(int *)(lVar10 + 0xe4);
          }
          else {
            iVar3 = *(int *)(lVar10 + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar9 + 0x135);
          }
          else {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar9 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
          }
          pIVar13[2].klass = (Il2CppClass *)**(undefined8 **)(lVar9 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar13 + 2);
          System_Object___ctor(pIVar13,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        pAVar12->bounds = (Il2CppArrayBounds *)pSVar14;
        il2cpp_runtime_helper_022b4080(&pAVar12->bounds,pSVar14);
        pSVar14 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_00,"providerUserId",method_01);
        pAVar12->max_length = (il2cpp_array_size_t)pSVar14;
        il2cpp_runtime_helper_022b4080(&pAVar12->max_length,pSVar14);
        pAVar11 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)
                  ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_00,"providerEmail",method_02);
        pAVar12->m_Items[0] = pAVar11;
        il2cpp_runtime_helper_022b4080(pAVar12->m_Items,pAVar11);
        SVar17 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a_00,"linkedAt",method_03);
        pAVar12->m_Items[1] =
             (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)
             SVar17.fields._dateTime.fields._dateData.fields;
        *(int16_t *)(pAVar12->m_Items + 2) = SVar17.fields._offsetMinutes;
      }
      return pAVar12;
    }
    pSVar14 = (System_String_o *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_9_get_Value).methodPtr)
                        (a,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_9_get_Value).method,0);
    SVar15._dateData = 0;
    bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar15._dateData = 0;
      bVar7 = System_DateTimeOffset__TryParse
                        (pSVar14,(System_IFormatProvider_o *)formatProvider,0x80,&SStackY_100,
                         (MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar16 = extraout_RDX;
        }
        SVar17.fields._8_8_ = 0;
        SVar17.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_100;
        SVar17 = System_DateTimeOffset__ToUniversalTime(SVar17,pMVar16);
        SVar15._dateData = (uint64_t)SVar17.fields._dateTime.fields._dateData;
      }
    }
  }
  return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)SVar15._dateData;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_ProfileData___ctor (ApplicationManagers_AccountLoginResponse_ProfileData_o* __this, const MethodInfo* method);
// 0x449a720

void ApplicationManagers_AccountLoginResponse_ProfileData___ctor
               (ApplicationManagers_AccountLoginResponse_ProfileData_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (g_data_057ae950 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae950 = '\x01';
  }
  lVar3 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  (__this->fields).Roles = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).Roles);
  lVar3 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  (__this->fields).Permissions = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).Permissions);
  lVar3 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  (__this->fields).OAuthLinks =
       (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).OAuthLinks);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_PatreonData_o* ApplicationManagers_AccountLoginResponse_PatreonData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x449b090

ApplicationManagers_AccountLoginResponse_PatreonData_o *
ApplicationManagers_AccountLoginResponse_PatreonData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar8;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  long lVar12;
  long lVar13;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  System_Object_array *pSVar14;
  Il2CppObject *pIVar15;
  Il2CppObject *a;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTime_Fields SVar16;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *pMVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  Il2CppObject *a_00;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__o *unaff_R15;
  System_DateTimeOffset_o SVar18;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_DateTimeOffset_o SStackY_118;
  System_String_o *pSStackY_100;
  MethodInfo *pMStackY_f8;
  MethodInfo *pMStackY_f0;
  System_Collections_Generic_List_object__o *pSStackY_e8;
  Il2CppMethodPointer pIVar19;
  Il2CppMethodPointer pIVar20;
  InvokerMethod pIVar21;
  char *pcVar22;
  Il2CppClass *pIVar23;
  Il2CppType *pIVar24;
  Il2CppType **ppIVar25;
  _union_13 _Var26;
  _union_14 _Var27;
  Il2CppMethodPointer pIStack_90;
  Il2CppMethodPointer pIStack_88;
  InvokerMethod pIStack_80;
  char *pcStack_78;
  Il2CppClass *pIStack_70;
  Il2CppType *pIStack_68;
  Il2CppType **ppIStack_60;
  _union_13 _Stack_58;
  _union_14 _Stack_50;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAStack_48;
  
  if (g_data_057ae951 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PatreonData);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"28767500");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"28767505");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae951 = '\x01';
  }
  pAVar8 = (ApplicationManagers_AccountLoginResponse_PatreonData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PatreonData);
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor(pAVar8,method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return pAVar8;
  }
  pSVar11 = node;
  bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool(node,"linked",method_00);
  if (pAVar8 != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
    *(char *)&(pAVar8->fields).Linked = (char)bVar6;
    pSVar9 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString(node,"patronStatus",method_01);
    (pAVar8->fields).PatronStatus = pSVar9;
    il2cpp_runtime_helper_022b4080(&(pAVar8->fields).PatronStatus,pSVar9);
    pSVar10 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                        (node,"tierIds",method_02);
    (pAVar8->fields).TierIds = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pAVar8->fields).TierIds,pSVar10);
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((pAVar8->fields).TierIds,"28767500",method_03);
    *(char *)&(pAVar8->fields).HasTier2 = (char)bVar6;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((pAVar8->fields).TierIds,"28767505",method_04);
    *(char *)((long)&(pAVar8->fields).HasTier2 + 1) = (char)bVar6;
    iVar7 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt(node,"entitledAmountCents",method_05);
    (pAVar8->fields).EntitledAmountCents = iVar7;
    bVar6 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool(node,"manualOverride",method_06);
    *(char *)&(pAVar8->fields).ManualOverride = (char)bVar6;
    SVar18 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                       (node,"lastSyncedAt",method_07);
    (pAVar8->fields).LastSyncedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar18.fields._dateTime.fields._dateData.fields;
    (pAVar8->fields).LastSyncedAt.fields._offsetMinutes = SVar18.fields._offsetMinutes;
    return pAVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_48 = pAVar8;
  if (g_data_057ae94f == '\0') {
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b279;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b285;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b291;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b29d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b2a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b2b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OAuthLinkData);
    g_data_057ae94f = '\x01';
  }
  ppIVar25 = (Il2CppType **)0x0;
  _Var26.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppType *)0x0;
  pIVar21 = (InvokerMethod)0x0;
  pcVar22 = (char *)0x0;
  pIVar19 = (Il2CppMethodPointer)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  _Var27.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b300;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449b349:
    lVar12 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
      pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b3a2;
      il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b3b8;
      lVar13 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    if (iVar3 == 0) {
      pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b3c9;
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b38b;
      lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    }
    return (ApplicationManagers_AccountLoginResponse_PatreonData_o *)
           (System_Object_array *)**(undefined8 **)(lVar12 + 0xb8);
  }
  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449b561;
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b320;
  pSVar11 = (SimpleJSONFixed_JSONNode_o *)(*(pSVar11->klass->vtable)._45_get_AsArray.methodPtr)(pSVar11);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b335;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b341;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_0449b349;
  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449b561:
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b566;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b3f8;
    iVar7 = (*(pSVar11->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar11,(pSVar11->klass->vtable)._11_get_Count.method);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b409;
    unaff_R15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OAuthLinkData);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b420;
    System_Collections_Generic_List_object____ctor_362b930(unaff_R15,iVar7,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse_OAuthLin);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b438;
    (*(pSVar11->klass->vtable)._32_unknown.methodPtr)
              (&pIStack_90,pSVar11,(pSVar11->klass->vtable)._32_unknown.method);
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b479;
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_88;
    __this.fields._0_8_ = pIStack_90;
    __this.fields.m_Object.fields._8_8_ = pIStack_80;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_78;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_70;
    __this.fields.m_Object.fields._32_8_ = pIStack_68;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_60;
    __this.fields.m_Array.fields._8_8_ = _Stack_58.rgctx_data;
    __this.fields.m_Array.fields._current = _Stack_50.genericMethod;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff20);
    pIVar19 = pIStack_90;
    pIVar20 = pIStack_88;
    pIVar21 = pIStack_80;
    pcVar22 = pcStack_78;
    pIVar23 = pIStack_70;
    pIVar24 = pIStack_68;
    ppIVar25 = ppIStack_60;
    _Var26 = _Stack_58;
    _Var27 = _Stack_50;
    if ((char)bVar6 == '\0') {
      if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449b53d;
      goto label_0449b561;
    }
    if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4d2;
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_01.fields._0_8_ = pIVar19;
        __this_01.fields.m_Object.fields._8_8_ = pIVar21;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_01.fields.m_Object.fields._32_8_ = pIVar24;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar25;
        __this_01.fields.m_Array.fields._8_8_ = _Var26.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var27.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff20);
        unaff_R12 = (MethodInfo *)aKeyValue.fields.value;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4ea;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4f7;
        pMVar17 = unaff_R12;
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
        pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4ff;
        item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar11,pMVar17);
        lVar12 = MethodInfo_Void_Add;
        piVar1 = &(unaff_R15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar14 = (unaff_R15->fields)._items;
        if (pSVar14 == (System_Object_array *)0x0) goto label_0449b561;
        uVar4 = (unaff_R15->fields)._size;
        if (uVar4 < (uint)pSVar14->max_length) {
          (unaff_R15->fields)._size = uVar4 + 1;
          pSVar14->m_Items[(int)uVar4] = (Il2CppObject *)item;
          pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b536;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar4,item);
        }
        else {
          pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4ba;
          System_Collections_Generic_List_object___AddWithResize
                    (unaff_R15,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b4c4;
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_00.fields._0_8_ = pIVar19;
        __this_00.fields.m_Object.fields._8_8_ = pIVar21;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_00.fields.m_Object.fields._32_8_ = pIVar24;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar25;
        __this_00.fields.m_Array.fields._8_8_ = _Var26.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var27.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff20);
      } while ((char)bVar6 != '\0');
label_0449b53d:
      pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b54f;
      pSVar14 = System_Collections_Generic_List_object___ToArray(unaff_R15,MethodInfo_AccountLoginResponse_OAuthLinkData_ToArray);
      return (ApplicationManagers_AccountLoginResponse_PatreonData_o *)pSVar14;
    }
  }
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b570;
  __this_02.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
  __this_02.fields._0_8_ = pIVar19;
  __this_02.fields.m_Object.fields._8_8_ = pIVar21;
  __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
  __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
  __this_02.fields.m_Object.fields._32_8_ = pIVar24;
  __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar25;
  __this_02.fields.m_Array.fields._8_8_ = _Var26.rgctx_data;
  __this_02.fields.m_Array.fields._current = _Var27.genericMethod;
  aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                 SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff20);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b588;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b595;
  pMVar17 = (MethodInfo *)aKeyValue_00.value;
  pIVar15 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                       (MethodInfo *)0x0);
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b59d;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse((SimpleJSONFixed_JSONNode_o *)pIVar15,pMVar17)
  ;
  pSStackY_e8 = (System_Collections_Generic_List_object__o *)0x449b5a2;
  il2cpp_runtime_helper_022b2c90();
  pMStackY_f8 = unaff_R12;
  pSStackY_e8 = unaff_R15;
  if (g_data_057ae94e == '\0') {
    pSStackY_100 = aKeyValue_00.key;
    pMStackY_f0 = (MethodInfo *)aKeyValue_00.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_f0;
    aKeyValue_00.key = pSStackY_100;
    g_data_057ae94e = '\x01';
    if (g_data_057ae946 == '\0') goto label_0449b779;
label_0449b5e2:
    SStackY_118.fields._offsetMinutes = 0;
    SStackY_118.fields._10_6_ = 0;
    SStackY_118.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_0449b5e2;
label_0449b779:
    pMStackY_f0 = (MethodInfo *)aKeyValue_00.value;
    pSStackY_100 = aKeyValue_00.key;
    SStackY_118.fields._offsetMinutes = 0;
    SStackY_118.fields._10_6_ = 0;
    SStackY_118.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_f0;
    aKeyValue_00.key = pSStackY_100;
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_f0 = (MethodInfo *)aKeyValue_00.value;
    pSStackY_100 = aKeyValue_00.key;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)pMStackY_f0;
    aKeyValue_00.key = pSStackY_100;
  }
  pMStackY_f0 = (MethodInfo *)aKeyValue_00.value;
  pSStackY_100 = aKeyValue_00.key;
  a = (Il2CppObject *)0x0;
  a_00 = pIVar15;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449b64c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar15 == (Il2CppObject *)0x0) goto label_0449b7c6;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar15,pMVar17,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      a = (Il2CppObject *)
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_7_get_Item).methodPtr)
                    (pIVar15,pMVar17,
                     (((SimpleJSONFixed_JSONNode_VTable *)pIVar15->klass->vtable)->_7_get_Item).method);
      goto label_0449b64c;
    }
    a = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar16._dateData = 0;
  a_00 = a;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (a == (Il2CppObject *)0x0) {
label_0449b7c6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
        il2cpp_runtime_helper_023445d0(&"provider");
        il2cpp_runtime_helper_023445d0(&"linkedAt");
        il2cpp_runtime_helper_023445d0(&"providerUserId");
        il2cpp_runtime_helper_023445d0(&"providerEmail");
        g_data_057ae95a = '\x01';
      }
      pAVar8 = (ApplicationManagers_AccountLoginResponse_PatreonData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
      System_Object___ctor((Il2CppObject *)pAVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pIVar15 = a_00;
        pSVar9 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                           ((SimpleJSONFixed_JSONNode_o *)a_00,"provider",method_08);
        if (pAVar8 == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae959 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            g_data_057ae959 = '\x01';
          }
          lVar12 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar13 + 0x135);
          }
          else {
            lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar13 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar13 = il2cpp_runtime_helper_023009c0();
            iVar3 = *(int *)(lVar13 + 0xe4);
          }
          else {
            iVar3 = *(int *)(lVar13 + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar12 + 0x135);
          }
          else {
            lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar12 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
          }
          pIVar15[2].klass = (Il2CppClass *)**(undefined8 **)(lVar12 + 0xb8);
          il2cpp_runtime_helper_022b4080(pIVar15 + 2);
          System_Object___ctor(pIVar15,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        *(System_String_o **)&(pAVar8->fields).Linked = pSVar9;
        il2cpp_runtime_helper_022b4080(&pAVar8->fields,pSVar9);
        pSVar9 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                           ((SimpleJSONFixed_JSONNode_o *)a_00,"providerUserId",method_09);
        (pAVar8->fields).PatronStatus = pSVar9;
        il2cpp_runtime_helper_022b4080(&(pAVar8->fields).PatronStatus,pSVar9);
        pSVar10 = (System_String_array *)
                  ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                            ((SimpleJSONFixed_JSONNode_o *)a_00,"providerEmail",method_10);
        (pAVar8->fields).TierIds = pSVar10;
        il2cpp_runtime_helper_022b4080(&(pAVar8->fields).TierIds,pSVar10);
        SVar18 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                           ((SimpleJSONFixed_JSONNode_o *)a_00,"linkedAt",method_11);
        *(System_DateTime_Fields *)&(pAVar8->fields).EntitledAmountCents =
             SVar18.fields._dateTime.fields._dateData.fields;
        *(int16_t *)&(pAVar8->fields).LastSyncedAt.fields._dateTime.fields._dateData =
             SVar18.fields._offsetMinutes;
      }
      return pAVar8;
    }
    pSVar9 = (System_String_o *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_9_get_Value).methodPtr)
                       (a,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_9_get_Value).method,0);
    SVar16._dateData = 0;
    bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar16._dateData = 0;
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar9,(System_IFormatProvider_o *)formatProvider,0x80,&SStackY_118,(MethodInfo *)0x0
                        );
      pMVar17 = (MethodInfo *)0x0;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar17 = extraout_RDX;
        }
        SVar18.fields._8_8_ = 0;
        SVar18.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_118;
        SVar18 = System_DateTimeOffset__ToUniversalTime(SVar18,pMVar17);
        SVar16._dateData = (uint64_t)SVar18.fields._dateTime.fields._dateData;
      }
    }
  }
  return (ApplicationManagers_AccountLoginResponse_PatreonData_o *)SVar16._dateData;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ToJsonNode
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x449c540

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode
          (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar2;
  undefined2 uVar3;
  char cVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  ulong uVar9;
  undefined8 uVar10;
  System_String_o *__this_02;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_03;
  
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  bVar5 = (__this->fields).Linked;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)(byte)bVar5,(MethodInfo *)0x0);
  if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
label_0449c8bf:
    il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
    pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
    pSVar7 = pSVar8->m_Items[0];
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae958 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae958 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = pSVar7;
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (pSVar7 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      cVar4 = (*(code *)pSVar7->klass[1]._1.name)(pSVar7,uVar10,pSVar7->klass[1]._1.namespaze);
      if (cVar4 != '\0') {
        vtableDispatch = (pSVar7->klass->vtable)._7_CompareTo.methodPtr;
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*vtableDispatch)
                           (pSVar7,uVar10,(pSVar7->klass->vtable)._7_CompareTo.method,vtableDispatch);
        return pSVar6;
      }
    }
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"linked",pSVar6,(__this_00->klass->vtable)._8_set_Item.method);
  bVar5 = System_String__IsNullOrEmpty((__this->fields).PatronStatus,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar7 = (__this->fields).PatronStatus;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"patronStatus",pSVar6,(__this_00->klass->vtable)._8_set_Item.method);
  }
  __this_01 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).TierIds;
  if (pSVar8 != (System_String_array *)0x0) {
    if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      if (0 < (int)pSVar8->max_length) goto label_0449c8c9;
    }
    else {
      uVar9 = 0;
      uVar1 = (uint)pSVar8->max_length;
      if (0 < (int)uVar1) {
        do {
          if (uVar1 <= uVar9) goto label_0449c8c4;
          pSVar7 = pSVar8->m_Items[uVar9];
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._21_Add.methodPtr)
                    (__this_01,pSVar6,(__this_01->klass->vtable)._21_Add.method);
          uVar9 = uVar9 + 1;
          pSVar8 = (__this->fields).TierIds;
          if (pSVar8 == (System_String_array *)0x0) goto label_0449c8bf;
          uVar1 = (uint)pSVar8->max_length;
        } while ((long)uVar9 < (long)(int)uVar1);
      }
    }
  }
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"tierIds",__this_01,(__this_00->klass->vtable)._8_set_Item.method);
  n = (__this->fields).EntitledAmountCents;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"entitledAmountCents",pSVar6,(__this_00->klass->vtable)._8_set_Item.method);
  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                     ((uint)(byte)(__this->fields).ManualOverride,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)(__this_00,"manualOverride",pSVar6);
  uVar2 = (__this->fields).LastSyncedAt.fields._dateTime;
  uVar3 = (__this->fields).LastSyncedAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar3;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar2;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  left.fields._10_6_ = 0;
  bVar5 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03.fields._8_8_ = "o";
    __this_03.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(__this->fields).LastSyncedAt;
    pSVar7 = System_DateTimeOffset__ToString_3c98830
                       (__this_03,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"lastSyncedAt",pSVar6,(__this_00->klass->vtable)._8_set_Item.method);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449b9e0

bool_conflict
ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  unkuint10 Var5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  int32_t iVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  bool_conflict extraout_EAX;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_List_object__o *a;
  long lVar12;
  long lVar13;
  System_Collections_Generic_List_object__o *__this_03;
  System_Object_array *pSVar14;
  MethodInfo *a_00;
  System_String_o *pSVar15;
  System_Globalization_CultureInfo_o *pSVar16;
  SimpleJSONFixed_JSONObject_o *__this_04;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  SimpleJSONFixed_JSONArray_o *__this_05;
  Il2CppClass *pIVar18;
  long *plVar19;
  MethodInfo *extraout_RDX;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  MethodInfo *pMVar24;
  MethodInfo *pMVar25;
  System_Collections_Generic_List_object__o *pSVar26;
  MethodInfo *pMVar27;
  System_String_o *__this_06;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar28;
  System_DateTimeOffset_o SVar29;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_07;
  System_DateTimeOffset_o SStackY_1a0;
  undefined8 uStackY_188;
  long *plStackY_180;
  MethodInfo *pMStackY_178;
  MethodInfo *pMStackY_170;
  undefined8 uStackY_168;
  ulong uStackY_160;
  System_Collections_Generic_List_object__o *pSStackY_158;
  MethodInfo *pMStackY_150;
  MethodInfo *pMStackY_148;
  undefined8 uStackY_140;
  System_Collections_Generic_List_object__o *pSStackY_138;
  SimpleJSONFixed_JSONNode_o *pSStackY_130;
  System_Collections_Generic_List_object__o *pSStackY_128;
  System_Collections_Generic_List_object__o *pSStackY_120;
  System_Collections_Generic_List_object__c *pSVar30;
  Il2CppMethodPointer vtableDispatch;
  char *pcVar31;
  Il2CppType *pIVar32;
  Il2CppType **ppIVar33;
  _union_13 _Var34;
  _union_14 _Var35;
  System_Collections_Generic_List_object__c *pSStack_c8;
  Il2CppMethodPointer pIStack_c0;
  System_Object_array *pSStack_b8;
  char *pcStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppType *pIStack_a0;
  Il2CppType **ppIStack_98;
  _union_13 _Stack_90;
  _union_14 _Stack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  if (g_data_057ae953 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae953 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449ba08;
label_0449bade:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449bade;
label_0449ba08:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
  uVar23 = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)node;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449ba72:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ba7d:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar23 = 0;
    pSVar11 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar8 = (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._39_get_AsBool.methodPtr)
                        (pSVar10,(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._39_get_AsBool.
                                 method);
      return bVar8;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar7 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar7 != '\0') {
      pSVar10 = (System_Collections_Generic_List_object__o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449ba72;
    }
    pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ba7d;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae955 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae955 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449bb68;
label_0449bc3e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449bc3e;
label_0449bb68:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar19 = &TypeInfo_JSONNode;
  pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
  a = (System_Collections_Generic_List_object__o *)0x0;
  __this_03 = pSVar11;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449bbd2:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449bbdd:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a = (System_Collections_Generic_List_object__o *)0x0;
    __this_03 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar8 = (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.methodPtr)
                        (pSVar10,(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.method)
      ;
      return bVar8;
    }
  }
  else if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    cVar7 = (*(pSVar11->klass->vtable)._28_RemoveAt.methodPtr)
                      (pSVar11,uVar23,(pSVar11->klass->vtable)._28_RemoveAt.method);
    if (cVar7 != '\0') {
      pSVar10 = (System_Collections_Generic_List_object__o *)
                (*(pSVar11->klass->vtable)._7_Insert.methodPtr)
                          (pSVar11,uVar23,(pSVar11->klass->vtable)._7_Insert.method);
      goto label_0449bbd2;
    }
    pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449bbdd;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_78 = &TypeInfo_JSONNode;
  pSVar10 = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
  uStack_80 = 0;
  if (g_data_057ae956 == '\0') {
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bccc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bcd8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bce4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bcf0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bcfc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bd08;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae956 = '\x01';
  }
  if (g_data_057ae958 == '\0') {
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bd43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bd63;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
  pMVar24 = (MethodInfo *)0x0;
  pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bd71;
  pSVar26 = __this_03;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)__this_03,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449bdb5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449bdc0:
    if (iVar3 == 0) {
      pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bdc7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar24 = (MethodInfo *)0x0;
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bdd3;
    pSVar26 = pSVar11;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
label_0449be1c:
      lVar12 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be75;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      else {
        lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be8b;
        lVar13 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be9c;
        il2cpp_runtime_helper_02337ed0();
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be5e;
        lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
      }
      return (bool_conflict)**(undefined8 **)(lVar12 + 0xb8);
    }
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bdf3;
      a = (System_Collections_Generic_List_object__o *)
          (*(((SimpleJSONFixed_JSONNode_c *)pSVar11->klass)->vtable)._45_get_AsArray.methodPtr)(pSVar11);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be08;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar24 = (MethodInfo *)0x0;
      pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449be14;
      pSVar26 = a;
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_0449be1c;
      if (a != (System_Collections_Generic_List_object__o *)0x0) {
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bee3;
        uVar9 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._11_get_Count.methodPtr)
                          (a,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._11_get_Count.method);
        pSVar11 = (System_Collections_Generic_List_object__o *)(ulong)uVar9;
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bef4;
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bf0b;
        System_Collections_Generic_List_object____ctor_362b930(__this_03,uVar9,MethodInfo_List_1_System_String);
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bf23;
        (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._32_unknown.methodPtr)
                  (&pSStack_c8,a,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._32_unknown.method);
        pMVar24 = (MethodInfo *)0x0;
        pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bf64;
        __this.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_c0;
        __this.fields._0_8_ = pSStack_c8;
        __this.fields.m_Object.fields._8_8_ = pSStack_b8;
        __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_b0;
        __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_a8;
        __this.fields.m_Object.fields._32_8_ = pIStack_a0;
        __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_98;
        __this.fields.m_Array.fields._8_8_ = _Stack_90.rgctx_data;
        __this.fields.m_Array.fields._current = _Stack_88.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffee8);
        if ((char)bVar8 == '\0') {
          pSVar26 = pSVar10;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449c065;
        }
        else {
          pSVar30 = pSStack_c8;
          vtableDispatch = pIStack_c0;
          pSVar14 = pSStack_b8;
          pcVar31 = pcStack_b0;
          pIVar18 = pIStack_a8;
          pIVar32 = pIStack_a0;
          ppIVar33 = ppIStack_98;
          _Var34 = _Stack_90;
          _Var35 = _Stack_88;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            do {
              pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bfc3;
              __this_01.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_01.fields._0_8_ = pSVar30;
              __this_01.fields.m_Object.fields._8_8_ = pSVar14;
              __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar31;
              __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
              __this_01.fields.m_Object.fields._32_8_ = pIVar32;
              __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
              __this_01.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
              __this_01.fields.m_Array.fields._current = _Var35.genericMethod;
              SVar28 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
              plVar19 = (long *)SVar28.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bfdb;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bfe8;
              pSVar11 = (System_Collections_Generic_List_object__o *)
                        SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar28,(MethodInfo *)0x0);
              pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bff7;
              pSVar26 = pSVar11;
              bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar24 = (MethodInfo *)0x0;
              if ((char)bVar8 != '\0') {
                a = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
                if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0449c0e3;
                pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c01c;
                pSVar26 = pSVar11;
                pMVar24 = (MethodInfo *)
                          (*(pSVar11->klass->vtable)._9_unknown.methodPtr)
                                    (pSVar11,(pSVar11->klass->vtable)._9_unknown.method);
              }
              lVar12 = MethodInfo_Void_Add;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_03->fields)._items;
              a = (System_Collections_Generic_List_object__o *)&stack0xfffffffffffffee8;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449c0e3;
              uVar9 = (__this_03->fields)._size;
              if (uVar9 < (uint)pSVar4->max_length) {
                (__this_03->fields)._size = uVar9 + 1;
                pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pMVar24;
                pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c05b;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar9);
              }
              else {
                pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bfa7;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_03,(Il2CppObject *)pMVar24,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bfb1;
              __this_00.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_00.fields._0_8_ = pSVar30;
              __this_00.fields.m_Object.fields._8_8_ = pSVar14;
              __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar31;
              __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
              __this_00.fields.m_Object.fields._32_8_ = pIVar32;
              __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar33;
              __this_00.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
              __this_00.fields.m_Array.fields._current = _Var35.genericMethod;
              bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_00,(MethodInfo *)&stack0xfffffffffffffee8);
            } while ((char)bVar8 != '\0');
label_0449c065:
            pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c077;
            pSVar14 = System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
            return (bool_conflict)pSVar14;
          }
          pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c093;
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_c0;
          __this_02.fields._0_8_ = pSStack_c8;
          __this_02.fields.m_Object.fields._8_8_ = pSStack_b8;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_b0;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_a8;
          __this_02.fields.m_Object.fields._32_8_ = pIStack_a0;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_98;
          __this_02.fields.m_Array.fields._8_8_ = _Stack_90.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Stack_88.genericMethod;
          SVar28 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xfffffffffffffee8);
          a = (System_Collections_Generic_List_object__o *)SVar28.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c0ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c0b8;
          pSVar11 = (System_Collections_Generic_List_object__o *)
                    SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar28,(MethodInfo *)0x0);
          pMVar24 = (MethodInfo *)0x0;
          pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c0c7;
          pSVar26 = pSVar11;
          bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar8 != '\0') && (pSVar11 != (System_Collections_Generic_List_object__o *)0x0)) {
            pMVar24 = (pSVar11->klass->vtable)._9_unknown.method;
            pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c0e3;
            pSVar26 = pSVar11;
            (*(pSVar11->klass->vtable)._9_unknown.methodPtr)();
          }
        }
      }
    }
  }
  else if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bd94;
    cVar7 = (*(__this_03->klass->vtable)._28_RemoveAt.methodPtr)
                      (__this_03,a,(__this_03->klass->vtable)._28_RemoveAt.method);
    if (cVar7 != '\0') {
      pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449bdb2;
      pSVar11 = (System_Collections_Generic_List_object__o *)
                (*(__this_03->klass->vtable)._7_Insert.methodPtr)
                          (__this_03,a,(__this_03->klass->vtable)._7_Insert.method);
      goto label_0449bdb5;
    }
    pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449bdc0;
  }
label_0449c0e3:
  pSStackY_120 = (System_Collections_Generic_List_object__o *)0x449c0e8;
  uStackY_140 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar26 == (System_Collections_Generic_List_object__o *)0x0) ||
     (lVar12._0_4_ = (pSVar26->fields)._size, lVar12._4_4_ = (pSVar26->fields)._version, lVar12 == 0)) {
    return 0;
  }
  pMVar27 = (MethodInfo *)0x0;
  pMVar25 = (MethodInfo *)0x0;
  pMStackY_148 = (MethodInfo *)0x449c11f;
  a_00 = pMVar24;
  pSStackY_138 = pSVar11;
  pSStackY_130 = (SimpleJSONFixed_JSONNode_o *)plVar19;
  pSStackY_128 = a;
  pSStackY_120 = __this_03;
  bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar24,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  uVar22._0_4_ = (pSVar26->fields)._size;
  uVar22._4_4_ = (pSVar26->fields)._version;
  if ((int)(undefined4)uVar22 < 1) {
    return 0;
  }
  uVar20 = 0;
  if ((uVar22 & 0xffffffff) != 0) {
    do {
      pMVar27 = (MethodInfo *)(&(pSVar26->fields)._syncRoot)[uVar20];
      pMVar25 = (MethodInfo *)0x0;
      pMStackY_148 = (MethodInfo *)0x449c167;
      a_00 = pMVar27;
      bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar27,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (pMVar27 == (MethodInfo *)0x0) goto label_0449c1ac;
        pMStackY_148 = (MethodInfo *)0x449c17a;
        a_00 = (MethodInfo *)System_String__Trim((System_String_o *)pMVar27,(MethodInfo *)0x0);
        pMStackY_148 = (MethodInfo *)0x449c18c;
        pMVar25 = pMVar24;
        bVar8 = System_String__Equals_3af50f0
                          ((System_String_o *)a_00,(System_String_o *)pMVar24,4,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)pMVar27 >> 8),1);
        }
      }
      uVar20 = uVar20 + 1;
      uVar9 = (pSVar26->fields)._size;
      if ((long)(int)uVar9 <= (long)uVar20) {
        return 0;
      }
    } while (uVar20 < uVar9);
  }
  pMStackY_148 = (MethodInfo *)0x449c1ac;
  il2cpp_runtime_helper_022b2ca0();
label_0449c1ac:
  pMStackY_148 = (MethodInfo *)0x449c1b1;
  uStackY_168 = il2cpp_runtime_helper_022b2c90();
  uStackY_160 = uVar20;
  pSStackY_158 = pSVar26;
  pMStackY_150 = pMVar24;
  pMStackY_148 = pMVar27;
  if (g_data_057ae954 == '\0') {
    pMStackY_170 = (MethodInfo *)0x449c2aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae954 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449c1e8;
label_0449c2be:
    pMStackY_170 = (MethodInfo *)0x449c2ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449c2be;
label_0449c1e8:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_170 = (MethodInfo *)0x449c2ee;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar24 = (MethodInfo *)0x0;
  uVar23 = 0;
  pMStackY_170 = (MethodInfo *)0x449c20e;
  pMVar27 = a_00;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c252:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c25d:
    if (iVar3 == 0) {
      pMStackY_170 = (MethodInfo *)0x449c264;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar23 = 0;
    pMStackY_170 = (MethodInfo *)0x449c270;
    pMVar27 = pMVar24;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar24,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pMVar24 != (MethodInfo *)0x0) {
      bVar8 = (*((System_String_c *)pMVar24->methodPointer)[1]._1.fields)
                        (pMVar24,((System_String_c *)pMVar24->methodPointer)[1]._1.events);
      return bVar8;
    }
  }
  else if (a_00 != (MethodInfo *)0x0) {
    pMStackY_170 = (MethodInfo *)0x449c231;
    cVar7 = (*(code *)((System_String_c *)a_00->methodPointer)[1]._1.name)
                      (a_00,pMVar25,((System_String_c *)a_00->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMStackY_170 = (MethodInfo *)0x449c24f;
      pMVar24 = (MethodInfo *)
                (*(((System_String_c *)a_00->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (a_00,pMVar25,(((System_String_c *)a_00->methodPointer)->vtable)._7_CompareTo.method
                          );
      goto label_0449c252;
    }
    pMVar24 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c25d;
  }
  uVar21 = 0;
  pMStackY_170 = (MethodInfo *)0x449c31e;
  il2cpp_runtime_helper_022b2c90();
  plStackY_180 = &TypeInfo_JSONNode;
  uStackY_188 = uVar21;
  pMStackY_178 = pMVar25;
  pMStackY_170 = a_00;
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    SStackY_1a0.fields._offsetMinutes = 0;
    SStackY_1a0.fields._10_6_ = 0;
    SStackY_1a0.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    SStackY_1a0.fields._offsetMinutes = 0;
    SStackY_1a0.fields._10_6_ = 0;
    SStackY_1a0.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar24 = (MethodInfo *)0x0;
  pMVar25 = pMVar27;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar27,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c3bc:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar25 = pMVar24;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar24,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return 0;
    }
    if (pMVar24 != (MethodInfo *)0x0) {
      pSVar15 = (System_String_o *)
                (*(((System_String_c *)pMVar24->methodPointer)->vtable)._9_GetTypeCode.methodPtr)
                          (pMVar24,(((System_String_c *)pMVar24->methodPointer)->vtable)._9_GetTypeCode.method
                           ,0);
      bVar8 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_DateTimeOffset__TryParse
                        (pSVar15,(System_IFormatProvider_o *)pSVar16,0x80,&SStackY_1a0,(MethodInfo *)0x0);
      pMVar24 = (MethodInfo *)0x0;
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar24 = extraout_RDX;
        }
        SVar29.fields._8_8_ = 0;
        SVar29.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_1a0;
        SVar29 = System_DateTimeOffset__ToUniversalTime(SVar29,pMVar24);
        return (bool_conflict)SVar29.fields._dateTime.fields._dateData;
      }
      return 0;
    }
  }
  else if (pMVar27 != (MethodInfo *)0x0) {
    cVar7 = (*(code *)((System_String_c *)pMVar27->methodPointer)[1]._1.name)
                      (pMVar27,uVar23,((System_String_c *)pMVar27->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMVar24 = (MethodInfo *)
                (*(((System_String_c *)pMVar27->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (pMVar27,uVar23,
                           (((System_String_c *)pMVar27->methodPointer)->vtable)._7_CompareTo.method);
      goto label_0449c3bc;
    }
    pMVar24 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
  iVar6 = ((System_String_Fields *)&pMVar25->invoker_method)->_stringLength;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)(byte)iVar6,(MethodInfo *)0x0);
  if (__this_04 == (SimpleJSONFixed_JSONObject_o *)0x0) {
label_0449c8bf:
    il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
    pSVar15 = (pIVar18->_1).byval_arg.data;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar23 = 0;
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar15,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae958 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae958 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = pSVar15;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pSVar15 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
        return extraout_EAX;
      }
      cVar7 = (*(code *)pSVar15->klass[1]._1.name)(pSVar15,uVar23,pSVar15->klass[1]._1.namespaze);
      if (cVar7 != '\0') {
        vtableDispatch = (pSVar15->klass->vtable)._7_CompareTo.methodPtr;
        bVar8 = (*vtableDispatch)
                          (pSVar15,uVar23,(pSVar15->klass->vtable)._7_CompareTo.method,vtableDispatch);
        return bVar8;
      }
    }
    return 0;
  }
  (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
            (__this_04,"linked",pSVar17,(__this_04->klass->vtable)._8_set_Item.method);
  bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar25->name,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pSVar15 = (System_String_o *)pMVar25->name;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar15,(MethodInfo *)0x0);
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
              (__this_04,"patronStatus",pSVar17,(__this_04->klass->vtable)._8_set_Item.method);
  }
  __this_05 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_05,(MethodInfo *)0x0);
  pIVar18 = pMVar25->klass;
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (__this_05 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      if (0 < *(int *)&(pIVar18->_1).namespaze) goto label_0449c8c9;
    }
    else {
      uVar22 = 0;
      uVar9 = *(uint *)&(pIVar18->_1).namespaze;
      if (0 < (int)uVar9) {
        do {
          if (uVar9 <= uVar22) goto label_0449c8c4;
          pSVar15 = (&(pIVar18->_1).byval_arg.data)[uVar22];
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar15,(MethodInfo *)0x0);
          (*(__this_05->klass->vtable)._21_Add.methodPtr)
                    (__this_05,pSVar17,(__this_05->klass->vtable)._21_Add.method);
          uVar22 = uVar22 + 1;
          pIVar18 = pMVar25->klass;
          if (pIVar18 == (Il2CppClass *)0x0) goto label_0449c8bf;
          uVar9 = *(uint *)&(pIVar18->_1).namespaze;
        } while ((long)uVar22 < (long)(int)uVar9);
      }
    }
  }
  (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
            (__this_04,"tierIds",__this_05,(__this_04->klass->vtable)._8_set_Item.method);
  iVar6 = *(int32_t *)&pMVar25->return_type;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(iVar6,(MethodInfo *)0x0);
  (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
            (__this_04,"entitledAmountCents",pSVar17,(__this_04->klass->vtable)._8_set_Item.method);
  pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                      ((uint)(byte)*(undefined1 *)((long)&pMVar25->return_type + 4),(MethodInfo *)0x0);
  (*(__this_04->klass->vtable)._8_set_Item.methodPtr)(__this_04,"manualOverride",pSVar17);
  Var5 = *(unkuint10 *)&pMVar25->parameters;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar24 = (MethodInfo *)0x0;
  left.fields._10_6_ = 0;
  left.fields._0_10_ = Var5;
  bVar8 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_07.fields._8_8_ = "o";
    __this_07.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&pMVar25->parameters;
    pSVar15 = System_DateTimeOffset__ToString_3c98830
                        (__this_07,(System_String_o *)pSVar16,(System_IFormatProvider_o *)0x0,pMVar24);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar15,(MethodInfo *)0x0);
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
              (__this_04,"lastSyncedAt",pSVar17,(__this_04->klass->vtable)._8_set_Item.method);
  }
  return (bool_conflict)__this_04;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadInt
// il2cpp: int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449c1c0

int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                  (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Il2CppMethodPointer vtableDispatch;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int32_t extraout_EAX;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_Globalization_CultureInfo_o *pSVar10;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNode_c *pSVar11;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *__this_01;
  System_DateTimeOffset_o SVar17;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  System_DateTimeOffset_o SStack_60;
  undefined8 uStack_48;
  long *plStack_40;
  System_String_o *pSStack_38;
  SimpleJSONFixed_JSONNode_o *pSStack_30;
  
  if (g_data_057ae954 == '\0') {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c2aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae954 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c2be;
label_0449c1e8:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c1e8;
label_0449c2be:
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c2ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c2ee;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  uVar15 = 0;
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c20e;
  a = node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449c252:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c25d:
    if (iVar2 == 0) {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c264;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar15 = 0;
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c270;
    a = pSVar8;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return 0;
    }
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar7 = (*(pSVar8->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar8,(pSVar8->klass->vtable)._35_get_AsInt.method);
      return iVar7;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c231;
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c24f;
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449c252;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c25d;
  }
  uVar13 = 0;
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c31e;
  il2cpp_runtime_helper_022b2c90();
  plStack_40 = &TypeInfo_JSONNode;
  uStack_48 = uVar13;
  pSStack_38 = key;
  pSStack_30 = node;
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    SStack_60.fields._offsetMinutes = 0;
    SStack_60.fields._10_6_ = 0;
    SStack_60.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    SStack_60.fields._offsetMinutes = 0;
    SStack_60.fields._10_6_ = 0;
    SStack_60.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar16 = a;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449c3bc:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = pSVar8;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar9 = (System_String_o *)
               (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method,0);
      bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar9,(System_IFormatProvider_o *)pSVar10,0x80,&SStack_60,(MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)0x0;
      if ((char)bVar6 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX;
      }
      SVar17.fields._8_8_ = 0;
      SVar17.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStack_60;
      SVar17 = System_DateTimeOffset__ToUniversalTime(SVar17,pMVar12);
      return (int32_t)SVar17.fields._dateTime.fields._dateData;
    }
  }
  else if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar5 = (*(a->klass->vtable)._28_HasKey.methodPtr)(a,uVar15,(a->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(a->klass->vtable)._7_get_Item.methodPtr)(a,uVar15,(a->klass->vtable)._7_get_Item.method);
      goto label_0449c3bc;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  bVar1 = *(byte *)&pSVar16[1].klass;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"linked",pSVar8,(__this->klass->vtable)._8_set_Item.method);
    bVar6 = System_String__IsNullOrEmpty(pSVar16[1].monitor,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pSVar9 = pSVar16[1].monitor;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"patronStatus",pSVar8,(__this->klass->vtable)._8_set_Item.method);
    }
    __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
    pSVar11 = pSVar16[2].klass;
    if (pSVar11 != (SimpleJSONFixed_JSONNode_c *)0x0) {
      if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        if (0 < *(int *)&(pSVar11->_1).namespaze) goto label_0449c8c9;
      }
      else {
        uVar14 = 0;
        uVar3 = *(uint *)&(pSVar11->_1).namespaze;
        if (0 < (int)uVar3) {
          do {
            if (uVar3 <= uVar14) goto label_0449c8c4;
            pSVar9 = (&(pSVar11->_1).byval_arg.data)[uVar14];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
            (*(__this_00->klass->vtable)._21_Add.methodPtr)
                      (__this_00,pSVar8,(__this_00->klass->vtable)._21_Add.method);
            uVar14 = uVar14 + 1;
            pSVar11 = pSVar16[2].klass;
            if (pSVar11 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_0449c8bf;
            uVar3 = *(uint *)&(pSVar11->_1).namespaze;
          } while ((long)uVar14 < (long)(int)uVar3);
        }
      }
    }
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
    iVar7 = *(int32_t *)&pSVar16[2].monitor;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(iVar7,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"entitledAmountCents",pSVar8,(__this->klass->vtable)._8_set_Item.method);
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                       ((uint)*(byte *)((long)&pSVar16[2].monitor + 4),(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar8);
    Var4 = *(unkuint10 *)(pSVar16 + 3);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    left.fields._10_6_ = 0;
    left.fields._0_10_ = Var4;
    bVar6 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02.fields._8_8_ = "o";
      __this_02.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)(pSVar16 + 3);
      pSVar9 = System_DateTimeOffset__ToString_3c98830
                         (__this_02,(System_String_o *)pSVar10,(System_IFormatProvider_o *)0x0,pMVar12);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"lastSyncedAt",pSVar8,(__this->klass->vtable)._8_set_Item.method);
    }
    return (int32_t)__this;
  }
label_0449c8bf:
  il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
  pSVar11 = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
  pSVar9 = (pSVar11->_1).byval_arg.data;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar15 = 0;
  SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae958 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = pSVar9;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (pSVar9 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    cVar5 = (*(code *)pSVar9->klass[1]._1.name)(pSVar9,uVar15,pSVar9->klass[1]._1.namespaze);
    if (cVar5 != '\0') {
      vtableDispatch = (pSVar9->klass->vtable)._7_CompareTo.methodPtr;
      iVar7 = (*vtableDispatch)
                        (pSVar9,uVar15,(pSVar9->klass->vtable)._7_CompareTo.method,vtableDispatch);
      return iVar7;
    }
  }
  return 0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_PatreonData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449bb40

System_String_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  unkuint10 Var5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  int32_t iVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *a;
  System_Collections_Generic_List_object__o *a_00;
  long lVar12;
  long lVar13;
  System_Collections_Generic_List_object__o *__this_03;
  System_Object_array *pSVar14;
  MethodInfo *a_01;
  System_Globalization_CultureInfo_o *pSVar15;
  SimpleJSONFixed_JSONObject_o *__this_04;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  SimpleJSONFixed_JSONArray_o *__this_05;
  Il2CppClass *pIVar17;
  System_String_o *extraout_RAX;
  long *plVar18;
  MethodInfo *extraout_RDX;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  MethodInfo *pMVar22;
  MethodInfo *pMVar23;
  undefined8 uVar24;
  System_Collections_Generic_List_object__o *pSVar25;
  MethodInfo *pMVar26;
  System_String_o *__this_06;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar27;
  System_DateTimeOffset_o SVar28;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_07;
  System_DateTimeOffset_o SStackY_178;
  undefined8 uStackY_160;
  long *plStackY_158;
  MethodInfo *pMStackY_150;
  MethodInfo *pMStackY_148;
  undefined8 uStackY_140;
  ulong uStackY_138;
  System_Collections_Generic_List_object__o *pSStackY_130;
  MethodInfo *pMStackY_128;
  MethodInfo *pMStackY_120;
  undefined8 uStackY_118;
  System_Collections_Generic_List_object__o *pSStackY_110;
  SimpleJSONFixed_JSONNode_o *pSStackY_108;
  System_Collections_Generic_List_object__o *pSStackY_100;
  System_Collections_Generic_List_object__o *pSStackY_f8;
  System_Collections_Generic_List_object__c *pSVar29;
  Il2CppMethodPointer vtableDispatch;
  char *pcVar30;
  Il2CppType *pIVar31;
  Il2CppType **ppIVar32;
  _union_13 _Var33;
  _union_14 _Var34;
  System_Collections_Generic_List_object__c *pSStack_a0;
  Il2CppMethodPointer pIStack_98;
  System_Object_array *pSStack_90;
  char *pcStack_88;
  Il2CppClass *pIStack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  _union_13 _Stack_68;
  _union_14 _Stack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if (g_data_057ae955 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae955 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449bc3e;
label_0449bb68:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449bb68;
label_0449bc3e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar18 = &TypeInfo_JSONNode;
  pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
  a_00 = (System_Collections_Generic_List_object__o *)0x0;
  __this_03 = (System_Collections_Generic_List_object__o *)node;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449bbd2:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449bbdd:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (System_Collections_Generic_List_object__o *)0x0;
    __this_03 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar11 = (System_String_o *)
                (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.methodPtr)
                          (pSVar10,(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.
                                   method);
      return pSVar11;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar7 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar7 != '\0') {
      pSVar10 = (System_Collections_Generic_List_object__o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449bbd2;
    }
    pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449bbdd;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_JSONNode;
  pSVar10 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
  uStack_58 = 0;
  if (g_data_057ae956 == '\0') {
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bccc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bcd8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bce4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bcf0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bcfc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bd08;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae956 = '\x01';
  }
  if (g_data_057ae958 == '\0') {
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bd43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bd63;
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_Collections_Generic_List_object__o *)0x0;
  pMVar22 = (MethodInfo *)0x0;
  pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bd71;
  pSVar25 = __this_03;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)__this_03,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449bdb5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449bdc0:
    if (iVar3 == 0) {
      pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bdc7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar22 = (MethodInfo *)0x0;
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bdd3;
    pSVar25 = a;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
label_0449be1c:
      lVar12 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be75;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      else {
        lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be8b;
        lVar13 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar13 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be9c;
        il2cpp_runtime_helper_02337ed0();
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be5e;
        lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
      }
      return (System_String_o *)**(undefined8 **)(lVar12 + 0xb8);
    }
    if (a != (System_Collections_Generic_List_object__o *)0x0) {
      pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bdf3;
      a_00 = (System_Collections_Generic_List_object__o *)
             (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._45_get_AsArray.methodPtr)(a);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be08;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar22 = (MethodInfo *)0x0;
      pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449be14;
      pSVar25 = a_00;
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_0449be1c;
      if (a_00 != (System_Collections_Generic_List_object__o *)0x0) {
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bee3;
        uVar9 = (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._11_get_Count.methodPtr)
                          (a_00,(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._11_get_Count.method);
        a = (System_Collections_Generic_List_object__o *)(ulong)uVar9;
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bef4;
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bf0b;
        System_Collections_Generic_List_object____ctor_362b930(__this_03,uVar9,MethodInfo_List_1_System_String);
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bf23;
        (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._32_unknown.methodPtr)
                  (&pSStack_a0,a_00,(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._32_unknown.method);
        pMVar22 = (MethodInfo *)0x0;
        pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bf64;
        __this.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
        __this.fields._0_8_ = pSStack_a0;
        __this.fields.m_Object.fields._8_8_ = pSStack_90;
        __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
        __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_80;
        __this.fields.m_Object.fields._32_8_ = pIStack_78;
        __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_70;
        __this.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
        __this.fields.m_Array.fields._current = _Stack_60.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff10);
        if ((char)bVar8 == '\0') {
          pSVar25 = pSVar10;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449c065;
        }
        else {
          pSVar29 = pSStack_a0;
          vtableDispatch = pIStack_98;
          pSVar14 = pSStack_90;
          pcVar30 = pcStack_88;
          pIVar17 = pIStack_80;
          pIVar31 = pIStack_78;
          ppIVar32 = ppIStack_70;
          _Var33 = _Stack_68;
          _Var34 = _Stack_60;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            do {
              pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bfc3;
              __this_01.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_01.fields._0_8_ = pSVar29;
              __this_01.fields.m_Object.fields._8_8_ = pSVar14;
              __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
              __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
              __this_01.fields.m_Object.fields._32_8_ = pIVar31;
              __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
              __this_01.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
              __this_01.fields.m_Array.fields._current = _Var34.genericMethod;
              SVar27 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_01,(MethodInfo *)&stack0xffffffffffffff10);
              plVar18 = (long *)SVar27.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bfdb;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bfe8;
              a = (System_Collections_Generic_List_object__o *)
                  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar27,(MethodInfo *)0x0);
              pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bff7;
              pSVar25 = a;
              bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar22 = (MethodInfo *)0x0;
              if ((char)bVar8 != '\0') {
                a_00 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
                if (a == (System_Collections_Generic_List_object__o *)0x0) goto label_0449c0e3;
                pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c01c;
                pSVar25 = a;
                pMVar22 = (MethodInfo *)
                          (*(a->klass->vtable)._9_unknown.methodPtr)(a,(a->klass->vtable)._9_unknown.method);
              }
              lVar12 = MethodInfo_Void_Add;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_03->fields)._items;
              a_00 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff10;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449c0e3;
              uVar9 = (__this_03->fields)._size;
              if (uVar9 < (uint)pSVar4->max_length) {
                (__this_03->fields)._size = uVar9 + 1;
                pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pMVar22;
                pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c05b;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar9);
              }
              else {
                pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bfa7;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_03,(Il2CppObject *)pMVar22,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bfb1;
              __this_00.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_00.fields._0_8_ = pSVar29;
              __this_00.fields.m_Object.fields._8_8_ = pSVar14;
              __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar30;
              __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
              __this_00.fields.m_Object.fields._32_8_ = pIVar31;
              __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar32;
              __this_00.fields.m_Array.fields._8_8_ = _Var33.rgctx_data;
              __this_00.fields.m_Array.fields._current = _Var34.genericMethod;
              bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_00,(MethodInfo *)&stack0xffffffffffffff10);
            } while ((char)bVar8 != '\0');
label_0449c065:
            pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c077;
            pSVar14 = System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
            return (System_String_o *)pSVar14;
          }
          pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c093;
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_98;
          __this_02.fields._0_8_ = pSStack_a0;
          __this_02.fields.m_Object.fields._8_8_ = pSStack_90;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_88;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_80;
          __this_02.fields.m_Object.fields._32_8_ = pIStack_78;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_70;
          __this_02.fields.m_Array.fields._8_8_ = _Stack_68.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Stack_60.genericMethod;
          SVar27 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff10);
          a_00 = (System_Collections_Generic_List_object__o *)SVar27.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c0ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c0b8;
          a = (System_Collections_Generic_List_object__o *)
              SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar27,(MethodInfo *)0x0);
          pMVar22 = (MethodInfo *)0x0;
          pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c0c7;
          pSVar25 = a;
          bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar8 != '\0') && (a != (System_Collections_Generic_List_object__o *)0x0)) {
            pMVar22 = (a->klass->vtable)._9_unknown.method;
            pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c0e3;
            pSVar25 = a;
            (*(a->klass->vtable)._9_unknown.methodPtr)();
          }
        }
      }
    }
  }
  else if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bd94;
    cVar7 = (*(__this_03->klass->vtable)._28_RemoveAt.methodPtr)
                      (__this_03,a_00,(__this_03->klass->vtable)._28_RemoveAt.method);
    if (cVar7 != '\0') {
      pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449bdb2;
      a = (System_Collections_Generic_List_object__o *)
          (*(__this_03->klass->vtable)._7_Insert.methodPtr)
                    (__this_03,a_00,(__this_03->klass->vtable)._7_Insert.method);
      goto label_0449bdb5;
    }
    a = (System_Collections_Generic_List_object__o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449bdc0;
  }
label_0449c0e3:
  pSStackY_f8 = (System_Collections_Generic_List_object__o *)0x449c0e8;
  uStackY_118 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar25 == (System_Collections_Generic_List_object__o *)0x0) ||
     (lVar12._0_4_ = (pSVar25->fields)._size, lVar12._4_4_ = (pSVar25->fields)._version, lVar12 == 0)) {
label_0449c195:
    pMVar26 = (MethodInfo *)0x0;
label_0449c198:
    return (System_String_o *)((ulong)pMVar26 & 0xffffffff);
  }
  pMVar26 = (MethodInfo *)0x0;
  pMVar23 = (MethodInfo *)0x0;
  pMStackY_120 = (MethodInfo *)0x449c11f;
  a_01 = pMVar22;
  pSStackY_110 = a;
  pSStackY_108 = (SimpleJSONFixed_JSONNode_o *)plVar18;
  pSStackY_100 = a_00;
  pSStackY_f8 = __this_03;
  bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar22,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') goto label_0449c198;
  uVar21._0_4_ = (pSVar25->fields)._size;
  uVar21._4_4_ = (pSVar25->fields)._version;
  if ((int)(undefined4)uVar21 < 1) goto label_0449c195;
  uVar19 = 0;
  if ((uVar21 & 0xffffffff) != 0) {
    do {
      pMVar26 = (MethodInfo *)(&(pSVar25->fields)._syncRoot)[uVar19];
      pMVar23 = (MethodInfo *)0x0;
      pMStackY_120 = (MethodInfo *)0x449c167;
      a_01 = pMVar26;
      bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar26,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (pMVar26 == (MethodInfo *)0x0) goto label_0449c1ac;
        pMStackY_120 = (MethodInfo *)0x449c17a;
        a_01 = (MethodInfo *)System_String__Trim((System_String_o *)pMVar26,(MethodInfo *)0x0);
        pMStackY_120 = (MethodInfo *)0x449c18c;
        pMVar23 = pMVar22;
        bVar8 = System_String__Equals_3af50f0
                          ((System_String_o *)a_01,(System_String_o *)pMVar22,4,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pMVar26 = (MethodInfo *)CONCAT71((int7)((ulong)pMVar26 >> 8),1);
          goto label_0449c198;
        }
      }
      uVar19 = uVar19 + 1;
      uVar9 = (pSVar25->fields)._size;
      if ((long)(int)uVar9 <= (long)uVar19) goto label_0449c195;
    } while (uVar19 < uVar9);
  }
  pMStackY_120 = (MethodInfo *)0x449c1ac;
  il2cpp_runtime_helper_022b2ca0();
label_0449c1ac:
  pMStackY_120 = (MethodInfo *)0x449c1b1;
  uStackY_140 = il2cpp_runtime_helper_022b2c90();
  uStackY_138 = uVar19;
  pSStackY_130 = pSVar25;
  pMStackY_128 = pMVar22;
  pMStackY_120 = pMVar26;
  if (g_data_057ae954 == '\0') {
    pMStackY_148 = (MethodInfo *)0x449c2aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae954 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c2be;
label_0449c1e8:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c1e8;
label_0449c2be:
    pMStackY_148 = (MethodInfo *)0x449c2ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_148 = (MethodInfo *)0x449c2ee;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar22 = (MethodInfo *)0x0;
  uVar24 = 0;
  pMStackY_148 = (MethodInfo *)0x449c20e;
  pMVar26 = a_01;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c252:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c25d:
    if (iVar3 == 0) {
      pMStackY_148 = (MethodInfo *)0x449c264;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar24 = 0;
    pMStackY_148 = (MethodInfo *)0x449c270;
    pMVar26 = pMVar22;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar22,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pMVar22 != (MethodInfo *)0x0) {
      pSVar11 = (System_String_o *)
                (*((System_String_c *)pMVar22->methodPointer)[1]._1.fields)
                          (pMVar22,((System_String_c *)pMVar22->methodPointer)[1]._1.events);
      return pSVar11;
    }
  }
  else if (a_01 != (MethodInfo *)0x0) {
    pMStackY_148 = (MethodInfo *)0x449c231;
    cVar7 = (*(code *)((System_String_c *)a_01->methodPointer)[1]._1.name)
                      (a_01,pMVar23,((System_String_c *)a_01->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMStackY_148 = (MethodInfo *)0x449c24f;
      pMVar22 = (MethodInfo *)
                (*(((System_String_c *)a_01->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (a_01,pMVar23,(((System_String_c *)a_01->methodPointer)->vtable)._7_CompareTo.method
                          );
      goto label_0449c252;
    }
    pMVar22 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c25d;
  }
  uVar20 = 0;
  pMStackY_148 = (MethodInfo *)0x449c31e;
  il2cpp_runtime_helper_022b2c90();
  plStackY_158 = &TypeInfo_JSONNode;
  uStackY_160 = uVar20;
  pMStackY_150 = pMVar23;
  pMStackY_148 = a_01;
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    SStackY_178.fields._offsetMinutes = 0;
    SStackY_178.fields._10_6_ = 0;
    SStackY_178.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    SStackY_178.fields._offsetMinutes = 0;
    SStackY_178.fields._10_6_ = 0;
    SStackY_178.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar22 = (MethodInfo *)0x0;
  pMVar23 = pMVar26;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar26,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c3bc:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar23 = pMVar22;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar22,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return (System_String_o *)0x0;
    }
    if (pMVar22 != (MethodInfo *)0x0) {
      pSVar11 = (System_String_o *)
                (*(((System_String_c *)pMVar22->methodPointer)->vtable)._9_GetTypeCode.methodPtr)
                          (pMVar22,(((System_String_c *)pMVar22->methodPointer)->vtable)._9_GetTypeCode.method
                           ,0);
      bVar8 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (System_String_o *)0x0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_DateTimeOffset__TryParse
                        (pSVar11,(System_IFormatProvider_o *)pSVar15,0x80,&SStackY_178,(MethodInfo *)0x0);
      pMVar22 = (MethodInfo *)0x0;
      if ((char)bVar8 == '\0') {
        return (System_String_o *)0x0;
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar22 = extraout_RDX;
      }
      SVar28.fields._8_8_ = 0;
      SVar28.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_178;
      SVar28 = System_DateTimeOffset__ToUniversalTime(SVar28,pMVar22);
      return (System_String_o *)SVar28.fields._dateTime.fields._dateData.fields._dateData;
    }
  }
  else if (pMVar26 != (MethodInfo *)0x0) {
    cVar7 = (*(code *)((System_String_c *)pMVar26->methodPointer)[1]._1.name)
                      (pMVar26,uVar24,((System_String_c *)pMVar26->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMVar22 = (MethodInfo *)
                (*(((System_String_c *)pMVar26->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (pMVar26,uVar24,
                           (((System_String_c *)pMVar26->methodPointer)->vtable)._7_CompareTo.method);
      goto label_0449c3bc;
    }
    pMVar22 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
  iVar6 = ((System_String_Fields *)&pMVar23->invoker_method)->_stringLength;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)(byte)iVar6,(MethodInfo *)0x0);
  if (__this_04 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
              (__this_04,"linked",pSVar16,(__this_04->klass->vtable)._8_set_Item.method);
    bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar23->name,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pSVar11 = (System_String_o *)pMVar23->name;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
      (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
                (__this_04,"patronStatus",pSVar16,(__this_04->klass->vtable)._8_set_Item.method);
    }
    __this_05 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_05,(MethodInfo *)0x0);
    pIVar17 = pMVar23->klass;
    if (pIVar17 != (Il2CppClass *)0x0) {
      if (__this_05 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        if (0 < *(int *)&(pIVar17->_1).namespaze) goto label_0449c8c9;
      }
      else {
        uVar21 = 0;
        uVar9 = *(uint *)&(pIVar17->_1).namespaze;
        if (0 < (int)uVar9) {
          do {
            if (uVar9 <= uVar21) goto label_0449c8c4;
            pSVar11 = (&(pIVar17->_1).byval_arg.data)[uVar21];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
            (*(__this_05->klass->vtable)._21_Add.methodPtr)
                      (__this_05,pSVar16,(__this_05->klass->vtable)._21_Add.method);
            uVar21 = uVar21 + 1;
            pIVar17 = pMVar23->klass;
            if (pIVar17 == (Il2CppClass *)0x0) goto label_0449c8bf;
            uVar9 = *(uint *)&(pIVar17->_1).namespaze;
          } while ((long)uVar21 < (long)(int)uVar9);
        }
      }
    }
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
              (__this_04,"tierIds",__this_05,(__this_04->klass->vtable)._8_set_Item.method);
    iVar6 = *(int32_t *)&pMVar23->return_type;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(iVar6,(MethodInfo *)0x0);
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
              (__this_04,"entitledAmountCents",pSVar16,(__this_04->klass->vtable)._8_set_Item.method);
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                        ((uint)(byte)*(undefined1 *)((long)&pMVar23->return_type + 4),(MethodInfo *)0x0);
    (*(__this_04->klass->vtable)._8_set_Item.methodPtr)(__this_04,"manualOverride",pSVar16);
    Var5 = *(unkuint10 *)&pMVar23->parameters;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar22 = (MethodInfo *)0x0;
    left.fields._10_6_ = 0;
    left.fields._0_10_ = Var5;
    bVar8 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_07.fields._8_8_ = "o";
      __this_07.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)&pMVar23->parameters;
      pSVar11 = System_DateTimeOffset__ToString_3c98830
                          (__this_07,(System_String_o *)pSVar15,(System_IFormatProvider_o *)0x0,pMVar22);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
      (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
                (__this_04,"lastSyncedAt",pSVar16,(__this_04->klass->vtable)._8_set_Item.method);
    }
    return (System_String_o *)__this_04;
  }
label_0449c8bf:
  il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
  pSVar11 = (pIVar17->_1).byval_arg.data;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar24 = 0;
  SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae958 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_06 = pSVar11;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (pSVar11 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    cVar7 = (*(code *)pSVar11->klass[1]._1.name)(pSVar11,uVar24,pSVar11->klass[1]._1.namespaze);
    if (cVar7 != '\0') {
      vtableDispatch = (pSVar11->klass->vtable)._7_CompareTo.methodPtr;
      pSVar11 = (System_String_o *)
                (*vtableDispatch)
                          (pSVar11,uVar24,(pSVar11->klass->vtable)._7_CompareTo.method,vtableDispatch);
      return pSVar11;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449bca0

System_String_array *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  unkuint10 Var5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  int32_t iVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_String_o *pSVar10;
  long lVar11;
  long lVar12;
  System_String_array *pSVar13;
  MethodInfo *a;
  System_String_o *pSVar14;
  System_Globalization_CultureInfo_o *pSVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  SimpleJSONFixed_JSONArray_o *__this_03;
  Il2CppClass *pIVar17;
  System_String_array *extraout_RAX;
  MethodInfo *extraout_RDX;
  undefined8 uVar18;
  ulong uVar19;
  MethodInfo *pMVar20;
  MethodInfo *pMVar21;
  undefined8 uVar22;
  System_String_o *pSVar23;
  MethodInfo *pMVar24;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar25;
  System_DateTimeOffset_o SVar26;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_04;
  System_DateTimeOffset_o SStackY_150;
  undefined8 uStackY_138;
  long *plStackY_130;
  MethodInfo *pMStackY_128;
  MethodInfo *pMStackY_120;
  undefined8 uStackY_118;
  ulong uStackY_110;
  System_String_o *pSStackY_108;
  MethodInfo *pMStackY_100;
  MethodInfo *pMStackY_f8;
  undefined8 uStackY_f0;
  System_String_o *pSStackY_e8;
  SimpleJSONFixed_JSONNode_o *pSStackY_e0;
  System_String_o *pSStackY_d8;
  System_Collections_Generic_List_object__o *pSStackY_d0;
  System_String_c *pSVar27;
  Il2CppMethodPointer vtableDispatch;
  System_String_Fields SVar28;
  char *pcVar29;
  Il2CppType *pIVar30;
  Il2CppType **ppIVar31;
  _union_13 _Var32;
  _union_14 _Var33;
  System_String_c *local_78;
  Il2CppMethodPointer pIStack_70;
  System_String_Fields local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  pSVar14 = (System_String_o *)&stack0xffffffffffffff38;
  if (g_data_057ae956 == '\0') {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bccc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bcd8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bce4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bcf0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bcfc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bd08;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae956 = '\x01';
  }
  if (g_data_057ae958 == '\0') {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bd43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bd63;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)0x0;
  pMVar20 = (MethodInfo *)0x0;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bd71;
  pSVar23 = (System_String_o *)node;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449bdb5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449bdc0:
    if (iVar3 == 0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bdc7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bdd3;
    pSVar23 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
label_0449be1c:
      lVar11 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be75;
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      else {
        lVar12 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be8b;
        lVar12 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar12 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar12 + 0xe4);
      }
      if (iVar3 == 0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be9c;
        il2cpp_runtime_helper_02337ed0();
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar11 + 0x135);
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar11 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be5e;
        lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
      }
      return (System_String_array *)**(undefined8 **)(lVar11 + 0xb8);
    }
    if (pSVar10 != (System_String_o *)0x0) {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bdf3;
      key = (System_String_o *)
            (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._45_get_AsArray.methodPtr)(pSVar10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be08;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = (MethodInfo *)0x0;
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449be14;
      pSVar23 = key;
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)key,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_0449be1c;
      if (key != (System_String_o *)0x0) {
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bee3;
        uVar9 = (*(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._11_get_Count.methodPtr)
                          (key,(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._11_get_Count.method);
        pSVar10 = (System_String_o *)(ulong)uVar9;
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bef4;
        node = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bf0b;
        System_Collections_Generic_List_object____ctor_362b930
                  ((System_Collections_Generic_List_object__o *)node,uVar9,MethodInfo_List_1_System_String);
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bf23;
        (*(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._32_unknown.methodPtr)
                  (&local_78,key,(((SimpleJSONFixed_JSONNode_c *)key->klass)->vtable)._32_unknown.method);
        pMVar20 = (MethodInfo *)0x0;
        pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bf64;
        __this.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this.fields._0_8_ = local_78;
        __this.fields.m_Object.fields._8_8_ = local_68;
        __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this.fields.m_Object.fields._32_8_ = pIStack_50;
        __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this.fields.m_Array.fields._current = local_38.genericMethod;
        bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar8 == '\0') {
          pSVar23 = pSVar14;
          if ((System_Collections_Generic_List_object__o *)node !=
              (System_Collections_Generic_List_object__o *)0x0) goto label_0449c065;
        }
        else {
          pSVar27 = local_78;
          vtableDispatch = pIStack_70;
          SVar28 = local_68;
          pcVar29 = pcStack_60;
          pIVar17 = local_58;
          pIVar30 = pIStack_50;
          ppIVar31 = local_48;
          _Var32 = _Stack_40;
          _Var33 = local_38;
          if ((System_Collections_Generic_List_object__o *)node !=
              (System_Collections_Generic_List_object__o *)0x0) {
            do {
              pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bfc3;
              __this_01.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_01.fields._0_8_ = pSVar27;
              __this_01.fields.m_Object.fields._8_8_ = SVar28;
              __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
              __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
              __this_01.fields.m_Object.fields._32_8_ = pIVar30;
              __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
              __this_01.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
              __this_01.fields.m_Array.fields._current = _Var33.genericMethod;
              SVar25 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
              unaff_R12 = SVar25.fields.value;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bfdb;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bfe8;
              pSVar10 = (System_String_o *)
                        SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar25,(MethodInfo *)0x0);
              pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bff7;
              pSVar23 = pSVar10;
              bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              pMVar20 = (MethodInfo *)0x0;
              if ((char)bVar8 != '\0') {
                key = (System_String_o *)&stack0xffffffffffffff38;
                if (pSVar10 == (System_String_o *)0x0) goto label_0449c0e3;
                pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c01c;
                pSVar23 = pSVar10;
                pMVar20 = (MethodInfo *)
                          (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.methodPtr)
                                    (pSVar10,(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable).
                                             _9_get_Value.method);
              }
              lVar11 = MethodInfo_Void_Add;
              piVar1 = &(((System_Collections_Generic_List_object__o *)node)->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (((System_Collections_Generic_List_object__o *)node)->fields)._items;
              key = (System_String_o *)&stack0xffffffffffffff38;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0449c0e3;
              uVar9 = (((System_Collections_Generic_List_object__o *)node)->fields)._size;
              if (uVar9 < (uint)pSVar4->max_length) {
                (((System_Collections_Generic_List_object__o *)node)->fields)._size = uVar9 + 1;
                pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pMVar20;
                pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c05b;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar9);
              }
              else {
                pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bfa7;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)node,(Il2CppObject *)pMVar20,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bfb1;
              __this_00.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
              __this_00.fields._0_8_ = pSVar27;
              __this_00.fields.m_Object.fields._8_8_ = SVar28;
              __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
              __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
              __this_00.fields.m_Object.fields._32_8_ = pIVar30;
              __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
              __this_00.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
              __this_00.fields.m_Array.fields._current = _Var33.genericMethod;
              bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
            } while ((char)bVar8 != '\0');
label_0449c065:
            pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c077;
            pSVar13 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)node,MethodInfo_String_ToArray);
            return pSVar13;
          }
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c093;
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
          __this_02.fields._0_8_ = local_78;
          __this_02.fields.m_Object.fields._8_8_ = local_68;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
          __this_02.fields.m_Object.fields._32_8_ = pIStack_50;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
          __this_02.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
          __this_02.fields.m_Array.fields._current = local_38.genericMethod;
          SVar25 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          key = (System_String_o *)SVar25.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c0ab;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c0b8;
          pSVar10 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar25,(MethodInfo *)0x0)
          ;
          pMVar20 = (MethodInfo *)0x0;
          pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c0c7;
          pSVar23 = pSVar10;
          bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar8 != '\0') && (pSVar10 != (System_String_o *)0x0)) {
            pMVar20 = (((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.method;
            pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c0e3;
            pSVar23 = pSVar10;
            (*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._9_get_Value.methodPtr)();
          }
        }
      }
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bd94;
    cVar7 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar7 != '\0') {
      pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449bdb2;
      pSVar10 = (System_String_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449bdb5;
    }
    pSVar10 = (System_String_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449bdc0;
  }
label_0449c0e3:
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)0x449c0e8;
  uStackY_f0 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar23 == (System_String_o *)0x0) || (pSVar23[1].klass == (System_String_c *)0x0)) {
label_0449c195:
    pMVar24 = (MethodInfo *)0x0;
label_0449c198:
    return (System_String_array *)((ulong)pMVar24 & 0xffffffff);
  }
  pMVar24 = (MethodInfo *)0x0;
  pMVar21 = (MethodInfo *)0x0;
  pMStackY_f8 = (MethodInfo *)0x449c11f;
  a = pMVar20;
  pSStackY_e8 = pSVar10;
  pSStackY_e0 = unaff_R12;
  pSStackY_d8 = key;
  pSStackY_d0 = (System_Collections_Generic_List_object__o *)node;
  bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar20,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') goto label_0449c198;
  if ((int)pSVar23[1].klass < 1) goto label_0449c195;
  uVar19 = 0;
  if (((ulong)pSVar23[1].klass & 0xffffffff) != 0) {
    do {
      pMVar24 = (&pSVar23[1].monitor)[uVar19];
      pMVar21 = (MethodInfo *)0x0;
      pMStackY_f8 = (MethodInfo *)0x449c167;
      a = pMVar24;
      bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar24,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (pMVar24 == (MethodInfo *)0x0) goto label_0449c1ac;
        pMStackY_f8 = (MethodInfo *)0x449c17a;
        a = (MethodInfo *)System_String__Trim((System_String_o *)pMVar24,(MethodInfo *)0x0);
        pMStackY_f8 = (MethodInfo *)0x449c18c;
        pMVar21 = pMVar20;
        bVar8 = System_String__Equals_3af50f0
                          ((System_String_o *)a,(System_String_o *)pMVar20,4,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pMVar24 = (MethodInfo *)CONCAT71((int7)((ulong)pMVar24 >> 8),1);
          goto label_0449c198;
        }
      }
      uVar19 = uVar19 + 1;
      if ((long)(int)*(uint *)&pSVar23[1].klass <= (long)uVar19) goto label_0449c195;
    } while (uVar19 < *(uint *)&pSVar23[1].klass);
  }
  pMStackY_f8 = (MethodInfo *)0x449c1ac;
  il2cpp_runtime_helper_022b2ca0();
label_0449c1ac:
  pMStackY_f8 = (MethodInfo *)0x449c1b1;
  uStackY_118 = il2cpp_runtime_helper_022b2c90();
  uStackY_110 = uVar19;
  pSStackY_108 = pSVar23;
  pMStackY_100 = pMVar20;
  pMStackY_f8 = pMVar24;
  if (g_data_057ae954 == '\0') {
    pMStackY_120 = (MethodInfo *)0x449c2aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae954 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c2be;
label_0449c1e8:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c1e8;
label_0449c2be:
    pMStackY_120 = (MethodInfo *)0x449c2ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pMStackY_120 = (MethodInfo *)0x449c2ee;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  uVar22 = 0;
  pMStackY_120 = (MethodInfo *)0x449c20e;
  pMVar24 = a;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c252:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c25d:
    if (iVar3 == 0) {
      pMStackY_120 = (MethodInfo *)0x449c264;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar22 = 0;
    pMStackY_120 = (MethodInfo *)0x449c270;
    pMVar24 = pMVar20;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar20,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (System_String_array *)0x0;
    }
    if (pMVar20 != (MethodInfo *)0x0) {
      pSVar13 = (System_String_array *)
                (*((System_String_c *)pMVar20->methodPointer)[1]._1.fields)
                          (pMVar20,((System_String_c *)pMVar20->methodPointer)[1]._1.events);
      return pSVar13;
    }
  }
  else if (a != (MethodInfo *)0x0) {
    pMStackY_120 = (MethodInfo *)0x449c231;
    cVar7 = (*(code *)((System_String_c *)a->methodPointer)[1]._1.name)
                      (a,pMVar21,((System_String_c *)a->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMStackY_120 = (MethodInfo *)0x449c24f;
      pMVar20 = (MethodInfo *)
                (*(((System_String_c *)a->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (a,pMVar21,(((System_String_c *)a->methodPointer)->vtable)._7_CompareTo.method);
      goto label_0449c252;
    }
    pMVar20 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c25d;
  }
  uVar18 = 0;
  pMStackY_120 = (MethodInfo *)0x449c31e;
  il2cpp_runtime_helper_022b2c90();
  plStackY_130 = &TypeInfo_JSONNode;
  uStackY_138 = uVar18;
  pMStackY_128 = pMVar21;
  pMStackY_120 = a;
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    SStackY_150.fields._offsetMinutes = 0;
    SStackY_150.fields._10_6_ = 0;
    SStackY_150.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    SStackY_150.fields._offsetMinutes = 0;
    SStackY_150.fields._10_6_ = 0;
    SStackY_150.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  pMVar21 = pMVar24;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar24,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449c3bc:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar21 = pMVar20;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar20,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return (System_String_array *)0x0;
    }
    if (pMVar20 != (MethodInfo *)0x0) {
      pSVar14 = (System_String_o *)
                (*(((System_String_c *)pMVar20->methodPointer)->vtable)._9_GetTypeCode.methodPtr)
                          (pMVar20,(((System_String_c *)pMVar20->methodPointer)->vtable)._9_GetTypeCode.method
                           ,0);
      bVar8 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return (System_String_array *)0x0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_DateTimeOffset__TryParse
                        (pSVar14,(System_IFormatProvider_o *)pSVar15,0x80,&SStackY_150,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)0x0;
      if ((char)bVar8 == '\0') {
        return (System_String_array *)0x0;
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar20 = extraout_RDX;
      }
      SVar26.fields._8_8_ = 0;
      SVar26.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStackY_150;
      SVar26 = System_DateTimeOffset__ToUniversalTime(SVar26,pMVar20);
      return (System_String_array *)SVar26.fields._dateTime.fields._dateData.fields._dateData;
    }
  }
  else if (pMVar24 != (MethodInfo *)0x0) {
    cVar7 = (*(code *)((System_String_c *)pMVar24->methodPointer)[1]._1.name)
                      (pMVar24,uVar22,((System_String_c *)pMVar24->methodPointer)[1]._1.namespaze);
    if (cVar7 != '\0') {
      pMVar20 = (MethodInfo *)
                (*(((System_String_c *)pMVar24->methodPointer)->vtable)._7_CompareTo.methodPtr)
                          (pMVar24,uVar22,
                           (((System_String_c *)pMVar24->methodPointer)->vtable)._7_CompareTo.method);
      goto label_0449c3bc;
    }
    pMVar20 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  pSVar13 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pSVar13,(MethodInfo *)0x0);
  iVar6 = ((System_String_Fields *)&pMVar21->invoker_method)->_stringLength;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)(byte)iVar6,(MethodInfo *)0x0);
  if (pSVar13 != (System_String_array *)0x0) {
    pIVar17 = (pSVar13->obj).klass;
    (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).methodPtr)
              (pSVar13,"linked",pSVar16,
               (((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).method);
    bVar8 = System_String__IsNullOrEmpty((System_String_o *)pMVar21->name,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pSVar14 = (System_String_o *)pMVar21->name;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar14,(MethodInfo *)0x0);
      pIVar17 = (pSVar13->obj).klass;
      (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).methodPtr)
                (pSVar13,"patronStatus",pSVar16,
                 (((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).method);
    }
    __this_03 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_03,(MethodInfo *)0x0);
    pIVar17 = pMVar21->klass;
    if (pIVar17 != (Il2CppClass *)0x0) {
      if (__this_03 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        if (0 < *(int *)&(pIVar17->_1).namespaze) goto label_0449c8c9;
      }
      else {
        uVar19 = 0;
        uVar9 = *(uint *)&(pIVar17->_1).namespaze;
        if (0 < (int)uVar9) {
          do {
            if (uVar9 <= uVar19) goto label_0449c8c4;
            pSVar14 = (&(pIVar17->_1).byval_arg.data)[uVar19];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar14,(MethodInfo *)0x0);
            (*(__this_03->klass->vtable)._21_Add.methodPtr)
                      (__this_03,pSVar16,(__this_03->klass->vtable)._21_Add.method);
            uVar19 = uVar19 + 1;
            pIVar17 = pMVar21->klass;
            if (pIVar17 == (Il2CppClass *)0x0) goto label_0449c8bf;
            uVar9 = *(uint *)&(pIVar17->_1).namespaze;
          } while ((long)uVar19 < (long)(int)uVar9);
        }
      }
    }
    pIVar17 = (pSVar13->obj).klass;
    (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).methodPtr)
              (pSVar13,"tierIds",__this_03,
               (((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).method);
    iVar6 = *(int32_t *)&pMVar21->return_type;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(iVar6,(MethodInfo *)0x0);
    pIVar17 = (pSVar13->obj).klass;
    (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).methodPtr)
              (pSVar13,"entitledAmountCents",pSVar16,
               (((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).method);
    pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                        ((uint)(byte)*(undefined1 *)((long)&pMVar21->return_type + 4),(MethodInfo *)0x0);
    (*(((SimpleJSONFixed_JSONObject_VTable *)((pSVar13->obj).klass)->vtable)->_8_set_Item).methodPtr)
              (pSVar13,"manualOverride",pSVar16);
    Var5 = *(unkuint10 *)&pMVar21->parameters;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    left.fields._10_6_ = 0;
    left.fields._0_10_ = Var5;
    bVar8 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04.fields._8_8_ = "o";
      __this_04.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)&pMVar21->parameters;
      pSVar14 = System_DateTimeOffset__ToString_3c98830
                          (__this_04,(System_String_o *)pSVar15,(System_IFormatProvider_o *)0x0,pMVar20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar14,(MethodInfo *)0x0);
      pIVar17 = (pSVar13->obj).klass;
      (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).methodPtr)
                (pSVar13,"lastSyncedAt",pSVar16,
                 (((SimpleJSONFixed_JSONObject_VTable *)pIVar17->vtable)->_8_set_Item).method);
    }
    return pSVar13;
  }
label_0449c8bf:
  il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
  pSVar14 = (pIVar17->_1).byval_arg.data;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar22 = 0;
  SimpleJSONFixed_JSONNode__op_Implicit(pSVar14,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae958 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = pSVar14;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (pSVar14 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    cVar7 = (*(code *)pSVar14->klass[1]._1.name)(pSVar14,uVar22,pSVar14->klass[1]._1.namespaze);
    if (cVar7 != '\0') {
      vtableDispatch = (pSVar14->klass->vtable)._7_CompareTo.methodPtr;
      pSVar13 = (System_String_array *)
                (*vtableDispatch)
                          (pSVar14,uVar22,(pSVar14->klass->vtable)._7_CompareTo.method,vtableDispatch);
      return pSVar13;
    }
  }
  return (System_String_array *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449c320

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  unkuint10 Var4;
  undefined1 auVar5 [16];
  char cVar6;
  bool_conflict bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_Globalization_CultureInfo_o *pSVar10;
  SimpleJSONFixed_JSONArray_o *__this;
  SimpleJSONFixed_JSONNode_c *pSVar11;
  System_DateTime_o extraout_RAX;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar13;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong uVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_String_o *__this_00;
  System_DateTimeOffset_Fields SVar16;
  System_DateTimeOffset_o SVar17;
  System_DateTimeOffset_o SVar18;
  System_DateTimeOffset_o SVar19;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_01;
  System_DateTimeOffset_o local_38;
  undefined8 extraout_RDX_04;
  
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar15 = node;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_0449c3bc:
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = pSVar8;
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (System_DateTimeOffset_o)(System_DateTimeOffset_Fields)ZEXT816(0);
    }
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar9 = (System_String_o *)(*(pSVar8->klass->vtable)._9_get_Value.methodPtr)(pSVar8);
      bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (System_DateTimeOffset_o)(System_DateTimeOffset_Fields)ZEXT816(0);
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = System_DateTimeOffset__TryParse
                        (pSVar9,(System_IFormatProvider_o *)pSVar10,0x80,&local_38,(MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)0x0;
      if ((char)bVar7 == '\0') {
        return (System_DateTimeOffset_o)(System_DateTimeOffset_Fields)ZEXT816(0);
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX;
      }
      SVar18.fields._8_8_ = 0;
      SVar18.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
      SVar16 = (System_DateTimeOffset_Fields)System_DateTimeOffset__ToUniversalTime(SVar18,pMVar12);
      return (System_DateTimeOffset_o)SVar16;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar6 != '\0') {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449c3bc;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  SVar17.fields._dateTime.fields._dateData = (System_DateTime_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor
            ((SimpleJSONFixed_JSONObject_o *)SVar17.fields._dateTime.fields._dateData,(MethodInfo *)0x0);
  bVar1 = *(byte *)&pSVar15[1].klass;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
  if (SVar17.fields._dateTime.fields._dateData != 0) {
    (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
              (SVar17.fields._dateTime.fields._dateData,"linked",pSVar8,
               *(undefined8 *)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1c0));
    bVar7 = System_String__IsNullOrEmpty(pSVar15[1].monitor,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar9 = pSVar15[1].monitor;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
      (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
                (SVar17.fields._dateTime.fields._dateData,"patronStatus",pSVar8,
                 *(undefined8 *)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1c0));
    }
    __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
    pSVar11 = pSVar15[2].klass;
    if (pSVar11 != (SimpleJSONFixed_JSONNode_c *)0x0) {
      if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
        if (0 < *(int *)&(pSVar11->_1).namespaze) goto label_0449c8c9;
      }
      else {
        uVar14 = 0;
        uVar3 = *(uint *)&(pSVar11->_1).namespaze;
        if (0 < (int)uVar3) {
          do {
            if (uVar3 <= uVar14) goto label_0449c8c4;
            pSVar9 = (&(pSVar11->_1).byval_arg.data)[uVar14];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar8,(__this->klass->vtable)._21_Add.method)
            ;
            uVar14 = uVar14 + 1;
            pSVar11 = pSVar15[2].klass;
            if (pSVar11 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_0449c8bf;
            uVar3 = *(uint *)&(pSVar11->_1).namespaze;
          } while ((long)uVar14 < (long)(int)uVar3);
        }
      }
    }
    (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
              (SVar17.fields._dateTime.fields._dateData,"tierIds",__this,
               *(undefined8 *)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1c0));
    n = *(int32_t *)&pSVar15[2].monitor;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
    (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
              (SVar17.fields._dateTime.fields._dateData,"entitledAmountCents",pSVar8,
               *(undefined8 *)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1c0));
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                       ((uint)*(byte *)((long)&pSVar15[2].monitor + 4),(MethodInfo *)0x0);
    (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
              (SVar17.fields._dateTime.fields._dateData,"manualOverride",pSVar8);
    Var4 = *(unkuint10 *)(pSVar15 + 3);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    left.fields._10_6_ = 0;
    left.fields._0_10_ = Var4;
    bVar7 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
    uVar13 = extraout_RDX_00;
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01.fields._8_8_ = "o";
      __this_01.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)(pSVar15 + 3);
      pSVar9 = System_DateTimeOffset__ToString_3c98830
                         (__this_01,(System_String_o *)pSVar10,(System_IFormatProvider_o *)0x0,pMVar12);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
      (**(code **)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1b8))
                (SVar17.fields._dateTime.fields._dateData,"lastSyncedAt",pSVar8,
                 *(undefined8 *)(*(long *)SVar17.fields._dateTime.fields._dateData + 0x1c0));
      uVar13 = extraout_RDX_01;
    }
    SVar17.fields._8_8_ = uVar13;
    return (System_DateTimeOffset_o)SVar17.fields;
  }
label_0449c8bf:
  il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
  pSVar11 = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
  pSVar9 = (pSVar11->_1).byval_arg.data;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae958 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = pSVar9;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar14 = extraout_RDX_02;
  if ((char)bVar7 != '\0') {
    if (pSVar9 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      SVar19.fields._8_8_ = extraout_RDX_04;
      SVar19.fields._dateTime.fields._dateData = extraout_RAX.fields._dateData;
      return (System_DateTimeOffset_o)SVar19.fields;
    }
    cVar6 = (*(code *)pSVar9->klass[1]._1.name)(pSVar9,uVar13,pSVar9->klass[1]._1.namespaze);
    uVar14 = extraout_RDX_03;
    if (cVar6 != '\0') {
      vtableDispatch = (pSVar9->klass->vtable)._7_CompareTo.methodPtr;
      SVar18.fields =
           (System_DateTimeOffset_Fields)
           (*vtableDispatch)
                     (pSVar9,uVar13,(pSVar9->klass->vtable)._7_CompareTo.method,vtableDispatch);
      return (System_DateTimeOffset_o)SVar18.fields;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  return (System_DateTimeOffset_Fields)(auVar5 << 0x40);
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449c8f0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ae958 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Il2CppObject *)node;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      vtableDispatch = (node->klass->vtable)._7_get_Item.methodPtr;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*vtableDispatch)
                         (node,key,(node->klass->vtable)._7_get_Item.method,vtableDispatch);
      return pSVar3;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$HasTier
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x449c0f0

bool_conflict
ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
          (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_c *s;
  Il2CppMethodPointer vtableDispatch;
  unkuint10 Var3;
  int32_t iVar4;
  char cVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  System_String_o *a;
  System_String_o *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONArray_o *__this_00;
  void *pvVar10;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX;
  undefined8 uVar12;
  ulong uVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  System_String_o *a_00;
  System_DateTimeOffset_o SVar16;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_01;
  System_DateTimeOffset_o SStack_88;
  undefined8 uStack_70;
  long *plStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  System_String_array *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  if ((tierIds == (System_String_array *)0x0) || (tierIds->max_length == 0)) {
    return 0;
  }
  pSVar7 = (System_String_o *)0x0;
  pSVar14 = (System_String_o *)0x0;
  pSStack_30 = (System_String_o *)0x449c11f;
  a = targetTier;
  bVar6 = System_String__IsNullOrEmpty(targetTier,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return 0;
  }
  if ((int)tierIds->max_length < 1) {
    return 0;
  }
  uVar13 = 0;
  if ((tierIds->max_length & 0xffffffff) != 0) {
    do {
      pSVar7 = tierIds->m_Items[uVar13];
      pSVar14 = (System_String_o *)0x0;
      pSStack_30 = (System_String_o *)0x449c167;
      a = pSVar7;
      bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (pSVar7 == (System_String_o *)0x0) goto label_0449c1ac;
        pSStack_30 = (System_String_o *)0x449c17a;
        a = System_String__Trim(pSVar7,(MethodInfo *)0x0);
        pSStack_30 = (System_String_o *)0x449c18c;
        pSVar14 = targetTier;
        bVar6 = System_String__Equals_3af50f0(a,targetTier,4,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar7 >> 8),1);
        }
      }
      uVar13 = uVar13 + 1;
      uVar2 = (uint)tierIds->max_length;
      if ((long)(int)uVar2 <= (long)uVar13) {
        return 0;
      }
    } while (uVar13 < uVar2);
  }
  pSStack_30 = (System_String_o *)0x449c1ac;
  il2cpp_runtime_helper_022b2ca0();
label_0449c1ac:
  pSStack_30 = (System_String_o *)0x449c1b1;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  uStack_48 = uVar13;
  pSStack_40 = tierIds;
  pSStack_38 = targetTier;
  pSStack_30 = pSVar7;
  if (g_data_057ae954 == '\0') {
    pSStack_58 = (System_String_o *)0x449c2aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae954 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449c1e8;
label_0449c2be:
    pSStack_58 = (System_String_o *)0x449c2ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449c2be;
label_0449c1e8:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    pSStack_58 = (System_String_o *)0x449c2ee;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  uVar15 = 0;
  pSStack_58 = (System_String_o *)0x449c20e;
  a_00 = a;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449c252:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c25d:
    if (iVar1 == 0) {
      pSStack_58 = (System_String_o *)0x449c264;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar15 = 0;
    pSStack_58 = (System_String_o *)0x449c270;
    a_00 = pSVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return 0;
    }
    if (pSVar7 != (System_String_o *)0x0) {
      bVar6 = (*pSVar7->klass[1]._1.fields)(pSVar7,pSVar7->klass[1]._1.events);
      return bVar6;
    }
  }
  else if (a != (System_String_o *)0x0) {
    pSStack_58 = (System_String_o *)0x449c231;
    cVar5 = (*(code *)a->klass[1]._1.name)(a,pSVar14,a->klass[1]._1.namespaze);
    if (cVar5 != '\0') {
      pSStack_58 = (System_String_o *)0x449c24f;
      pSVar7 = (System_String_o *)
               (*(a->klass->vtable)._7_CompareTo.methodPtr)(a,pSVar14,(a->klass->vtable)._7_CompareTo.method);
      goto label_0449c252;
    }
    pSVar7 = (System_String_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c25d;
  }
  uVar12 = 0;
  pSStack_58 = (System_String_o *)0x449c31e;
  il2cpp_runtime_helper_022b2c90();
  plStack_68 = &TypeInfo_JSONNode;
  uStack_70 = uVar12;
  pSStack_60 = pSVar14;
  pSStack_58 = a;
  if (g_data_057ae957 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae957 = '\x01';
    if (g_data_057ae958 != '\0') goto label_0449c352;
label_0449c4e9:
    SStack_88.fields._offsetMinutes = 0;
    SStack_88.fields._10_6_ = 0;
    SStack_88.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae958 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae958 == '\0') goto label_0449c4e9;
label_0449c352:
    SStack_88.fields._offsetMinutes = 0;
    SStack_88.fields._10_6_ = 0;
    SStack_88.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  pSVar14 = a_00;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449c3bc:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449c3c7:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = pSVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
    if (pSVar7 != (System_String_o *)0x0) {
      pSVar7 = (System_String_o *)
               (*(pSVar7->klass->vtable)._9_GetTypeCode.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._9_GetTypeCode.method,0);
      bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar7,(System_IFormatProvider_o *)pSVar8,0x80,&SStack_88,(MethodInfo *)0x0);
      pMVar11 = (MethodInfo *)0x0;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar11 = extraout_RDX;
        }
        SVar16.fields._8_8_ = 0;
        SVar16.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStack_88;
        SVar16 = System_DateTimeOffset__ToUniversalTime(SVar16,pMVar11);
        return (bool_conflict)SVar16.fields._dateTime.fields._dateData;
      }
      return 0;
    }
  }
  else if (a_00 != (System_String_o *)0x0) {
    cVar5 = (*(code *)a_00->klass[1]._1.name)(a_00,uVar15,a_00->klass[1]._1.namespaze);
    if (cVar5 != '\0') {
      pSVar7 = (System_String_o *)
               (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                         (a_00,uVar15,(a_00->klass->vtable)._7_CompareTo.method);
      goto label_0449c3bc;
    }
    pSVar7 = (System_String_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449c3c7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae952 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"o");
    il2cpp_runtime_helper_023445d0(&"tierIds");
    il2cpp_runtime_helper_023445d0(&"linked");
    il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
    il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
    il2cpp_runtime_helper_023445d0(&"manualOverride");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057ae952 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  iVar4 = (pSVar14->fields)._stringLength;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)(byte)iVar4,(MethodInfo *)0x0);
  if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
label_0449c8bf:
    il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
    pvVar10 = (void *)il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
    pSVar7 = *(System_String_o **)((long)pvVar10 + 0x20);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar15 = 0;
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae958 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae958 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = pSVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pSVar7 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
        return extraout_EAX;
      }
      cVar5 = (*(code *)pSVar7->klass[1]._1.name)(pSVar7,uVar15,pSVar7->klass[1]._1.namespaze);
      if (cVar5 != '\0') {
        vtableDispatch = (pSVar7->klass->vtable)._7_CompareTo.methodPtr;
        bVar6 = (*vtableDispatch)
                          (pSVar7,uVar15,(pSVar7->klass->vtable)._7_CompareTo.method,vtableDispatch);
        return bVar6;
      }
    }
    return 0;
  }
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"linked",pSVar9,(__this->klass->vtable)._8_set_Item.method);
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar14[1].klass,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    s = pSVar14[1].klass;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"patronStatus",pSVar9,(__this->klass->vtable)._8_set_Item.method);
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  pvVar10 = pSVar14[1].monitor;
  if (pvVar10 != (void *)0x0) {
    if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      if (0 < *(int *)((long)pvVar10 + 0x18)) goto label_0449c8c9;
    }
    else {
      uVar13 = 0;
      uVar2 = *(uint *)((long)pvVar10 + 0x18);
      if (0 < (int)uVar2) {
        do {
          if (uVar2 <= uVar13) goto label_0449c8c4;
          pSVar7 = *(System_String_o **)((long)pvVar10 + uVar13 * 8 + 0x20);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,pSVar9,(__this_00->klass->vtable)._21_Add.method);
          uVar13 = uVar13 + 1;
          pvVar10 = pSVar14[1].monitor;
          if (pvVar10 == (void *)0x0) goto label_0449c8bf;
          uVar2 = *(uint *)((long)pvVar10 + 0x18);
        } while ((long)uVar13 < (long)(int)uVar2);
      }
    }
  }
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
  iVar4 = pSVar14[1].fields._stringLength;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(iVar4,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"entitledAmountCents",pSVar9,(__this->klass->vtable)._8_set_Item.method);
  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                     ((uint)(byte)pSVar14[1].fields._firstChar,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar9);
  Var3 = *(unkuint10 *)(pSVar14 + 2);
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)0x0;
  left.fields._10_6_ = 0;
  left.fields._0_10_ = Var3;
  bVar6 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01.fields._8_8_ = "o";
    __this_01.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)(pSVar14 + 2);
    pSVar7 = System_DateTimeOffset__ToString_3c98830
                       (__this_01,(System_String_o *)pSVar8,(System_IFormatProvider_o *)0x0,pMVar11);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"lastSyncedAt",pSVar9,(__this->klass->vtable)._8_set_Item.method);
  }
  return (bool_conflict)__this;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_PatreonData___ctor (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x449b910

void ApplicationManagers_AccountLoginResponse_PatreonData___ctor
               (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (g_data_057ae959 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae959 = '\x01';
  }
  lVar3 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  (__this->fields).TierIds = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).TierIds);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x449b7d0

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this;
  System_String_o *pSVar4;
  long lVar5;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *extraout_RAX;
  long lVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Il2CppObject *__this_00;
  System_DateTimeOffset_o SVar7;
  
  if (g_data_057ae95a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthLinkData);
    il2cpp_runtime_helper_023445d0(&"provider");
    il2cpp_runtime_helper_023445d0(&"linkedAt");
    il2cpp_runtime_helper_023445d0(&"providerUserId");
    il2cpp_runtime_helper_023445d0(&"providerEmail");
    g_data_057ae95a = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthLinkData);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    __this_00 = (Il2CppObject *)node;
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString(node,"provider",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae959 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
        g_data_057ae959 = '\x01';
      }
      lVar5 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        bVar1 = *(byte *)(lVar6 + 0x135);
      }
      else {
        lVar6 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar1 = *(byte *)(lVar6 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        lVar6 = il2cpp_runtime_helper_023009c0();
        iVar2 = *(int *)(lVar6 + 0xe4);
      }
      else {
        iVar2 = *(int *)(lVar6 + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        bVar1 = *(byte *)(lVar5 + 0x135);
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        bVar1 = *(byte *)(lVar5 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        lVar5 = il2cpp_runtime_helper_023009c0(lVar5);
      }
      __this_00[2].klass = (Il2CppClass *)**(undefined8 **)(lVar5 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_00 + 2);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    (__this->fields).Provider = pSVar4;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString(node,"providerUserId",method_01);
    (__this->fields).ProviderUserId = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).ProviderUserId,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString(node,"providerEmail",method_02);
    (__this->fields).ProviderEmail = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).ProviderEmail,pSVar4);
    SVar7 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                      (node,"linkedAt",method_03);
    (__this->fields).LinkedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar7.fields._dateTime.fields._dateData.fields;
    (__this->fields).LinkedAt.fields._offsetMinutes = SVar7.fields._offsetMinutes;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449c9a0

System_String_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTime_Fields SVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  undefined8 uVar7;
  SimpleJSONFixed_JSONNode_o *a;
  System_DateTimeOffset_o SVar8;
  System_DateTimeOffset_o SStack_60;
  undefined8 uStack_48;
  long *plStack_40;
  System_String_o *pSStack_38;
  SimpleJSONFixed_JSONNode_o *pSStack_30;
  
  if (g_data_057ae95b == '\0') {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c9c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae95b = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c9e3;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  uVar7 = 0;
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449c9f1;
  a = node;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_0449ca31:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0449ca3c:
    if (iVar1 == 0) {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449ca43;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar7 = 0;
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449ca4f;
    a = pSVar4;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
      return pSVar5;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449ca14;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449ca2e;
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449ca31;
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x0449ca3c;
  }
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449ca9d;
  il2cpp_runtime_helper_022b2c90();
  plStack_40 = &TypeInfo_JSONNode;
  uStack_48 = 0;
  pSStack_38 = key;
  pSStack_30 = node;
  if (g_data_057ae95c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae95c = '\x01';
  }
  SStack_60.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  SStack_60.fields._offsetMinutes = 0;
  SStack_60.fields._10_6_ = 0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_0449cb57:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449cc5d;
    cVar2 = (*(a->klass->vtable)._28_HasKey.methodPtr)(a,uVar7,(a->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(a->klass->vtable)._7_get_Item.methodPtr)(a,uVar7,(a->klass->vtable)._7_get_Item.method);
      goto label_0449cb57;
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar6._dateData = 0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449cc5d:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae95d = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 != 0) {
        return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
      }
      il2cpp_runtime_helper_02337ed0();
      return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
    }
    pSVar5 = (System_String_o *)
             (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method,0);
    SVar6._dateData = 0;
    bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar6._dateData = 0;
      bVar3 = System_DateTimeOffset__TryParse
                        (pSVar5,(System_IFormatProvider_o *)formatProvider,0x80,&SStack_60,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX;
        }
        SVar8.fields._8_8_ = 0;
        SVar8.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStack_60;
        SVar8 = System_DateTimeOffset__ToUniversalTime(SVar8,method_00);
        SVar6._dateData = (uint64_t)SVar8.fields._dateTime.fields._dateData;
      }
    }
  }
  return (System_String_o *)SVar6._dateData;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449caa0

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  System_DateTimeOffset_Fields SVar5;
  System_DateTimeOffset_o SVar6;
  System_DateTimeOffset_o SVar7;
  System_DateTimeOffset_o __this;
  System_DateTimeOffset_o local_38;
  
  if (g_data_057ae95c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae95c = '\x01';
  }
  local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_38.fields._offsetMinutes = 0;
  local_38.fields._10_6_ = 0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_0449cb57:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449cc5d;
    cVar3 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449cb57;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar5 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar4 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0449cc5d:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae95d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae95d = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        uVar2 = extraout_RDX_01;
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        uVar2 = extraout_RDX_00;
      }
      if (iVar1 != 0) {
        SVar6.fields._8_8_ = uVar2;
        SVar6.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)
             (System_DateTime_Fields)
             ((System_DateTime_Fields *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18))->_dateData;
        return (System_DateTimeOffset_o)SVar6.fields;
      }
      il2cpp_runtime_helper_02337ed0();
      SVar7.fields._8_8_ = extraout_RDX_02;
      SVar7.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)
           (System_DateTime_Fields)
           ((System_DateTime_Fields *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18))->_dateData;
      return (System_DateTimeOffset_o)SVar7.fields;
    }
    value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar5 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      SVar5 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX;
        }
        __this.fields._8_8_ = 0;
        __this.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar5 = (System_DateTimeOffset_Fields)System_DateTimeOffset__ToUniversalTime(__this,method_00);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar5;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* __this, const MethodInfo* method);
// 0x449c990

void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor
               (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountLoginResponse__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4499720

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountLoginResponse__Parse(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  ApplicationManagers_AccountLoginResponse_o *__this;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar4;
  ApplicationManagers_AccountLoginResponse_o *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar5;
  Il2CppObject *__this_00;
  System_DateTimeOffset_o SVar6;
  
  if (g_data_057ae945 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountLoginResponse);
    il2cpp_runtime_helper_023445d0(&"accessTokenExpiresAt");
    il2cpp_runtime_helper_023445d0(&"photonToken");
    il2cpp_runtime_helper_023445d0(&"profile");
    il2cpp_runtime_helper_023445d0(&"refreshToken");
    il2cpp_runtime_helper_023445d0(&"accessToken");
    il2cpp_runtime_helper_023445d0(&"photonTokenExpiresAt");
    g_data_057ae945 = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AccountLoginResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (Il2CppObject *)node;
  pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"accessToken",method_00);
  if (__this != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    (__this->fields).AccessToken = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar3);
    pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"refreshToken",method_01);
    (__this->fields).RefreshToken = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).RefreshToken,pSVar3);
    pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"photonToken",method_02);
    (__this->fields).PhotonToken = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).PhotonToken,pSVar3);
    SVar6 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset(node,"accessTokenExpiresAt",method_03);
    (__this->fields).AccessTokenExpiresAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar6.fields._dateTime.fields._dateData.fields;
    (__this->fields).AccessTokenExpiresAt.fields._offsetMinutes = SVar6.fields._offsetMinutes;
    SVar6 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset(node,"photonTokenExpiresAt",SVar6.fields._8_8_)
    ;
    (__this->fields).PhotonTokenExpiresAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar6.fields._dateTime.fields._dateData.fields;
    (__this->fields).PhotonTokenExpiresAt.fields._offsetMinutes = SVar6.fields._offsetMinutes;
    pMVar5 = "profile";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_04 = (MethodInfo *)0x0;
    __this_00 = (Il2CppObject *)node;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04499906;
      method_04 = pMVar5;
      cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,pMVar5,(node->klass->vtable)._28_HasKey.method);
      if (cVar1 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,pMVar5,(node->klass->vtable)._7_get_Item.method);
        method_04 = pMVar5;
      }
    }
    pAVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(node_00,method_04);
    (__this->fields).Profile = pAVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Profile,pAVar4);
    return __this;
  }
label_04499906:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountLoginResponse$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4499ca0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar5;
  bool_conflict bVar6;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this_03;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar10;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  long lVar14;
  System_Collections_Generic_List_object__o *__this_04;
  System_Object_array *pSVar15;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *pMVar16;
  Il2CppObject *pIVar17;
  Il2CppObject *__this_05;
  Il2CppObject *pIVar18;
  long *plVar19;
  MethodInfo *unaff_R15;
  System_DateTimeOffset_o SVar20;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar21;
  Il2CppClass *pIVar22;
  Il2CppMethodPointer vtableDispatch;
  InvokerMethod pIVar23;
  char *pcVar24;
  Il2CppClass *pIVar25;
  Il2CppType *pIVar26;
  Il2CppType **ppIVar27;
  _union_13 _Var28;
  _union_14 _Var29;
  Il2CppClass *pIStack_b8;
  Il2CppMethodPointer pIStack_b0;
  InvokerMethod pIStack_a8;
  char *pcStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppType *pIStack_90;
  Il2CppType **ppIStack_88;
  _union_13 _Stack_80;
  _union_14 _Stack_78;
  SimpleJSONFixed_JSONNode_o *pSStack_70;
  SimpleJSONFixed_JSONNode_o *pSStack_68;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAStack_60;
  Il2CppObject *pIStack_58;
  MethodInfo *pMStack_50;
  
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  pIVar12 = (Il2CppObject *)node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    vtableDispatch = (node->klass->vtable)._7_get_Item.methodPtr;
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)
             (*vtableDispatch)(node,key,(node->klass->vtable)._7_get_Item.method,vtableDispatch)
    ;
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae94a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileData);
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"oAuthLinks");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"emailVerified");
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"createdAt");
    il2cpp_runtime_helper_023445d0(&"restriction");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"photonUserId");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"hasPassword");
    il2cpp_runtime_helper_023445d0(&"permissions");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    il2cpp_runtime_helper_023445d0(&"restrictionStatus");
    g_data_057ae94a = '\x01';
  }
  __this_03 = (ApplicationManagers_AccountLoginResponse_ProfileData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor(__this_03,pMVar16);
  plVar19 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (SimpleJSONFixed_JSONNode_o *)__this_03;
  }
  pMVar16 = "accountId";
  pIVar17 = pIVar12;
  pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                     ((SimpleJSONFixed_JSONNode_o *)pIVar12,(System_String_o *)"accountId",method_00);
  pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (__this_03 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    (__this_03->fields).AccountId = pSVar8;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"email",method_01);
    (__this_03->fields).Email = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Email,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"displayName",method_02);
    (__this_03->fields).DisplayName = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).DisplayName,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"photonUserId",method_03);
    (__this_03->fields).PhotonUserId = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).PhotonUserId,pSVar8);
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,"emailVerified",method_04);
    *(char *)&(__this_03->fields).EmailVerified = (char)bVar6;
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,"hasPassword",method_05);
    *(char *)((long)&(__this_03->fields).EmailVerified + 1) = (char)bVar6;
    pSVar9 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"roles",method_06);
    (__this_03->fields).Roles = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Roles,pSVar9);
    pSVar9 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"permissions",method_07);
    (__this_03->fields).Permissions = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Permissions,pSVar9);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"restrictionStatus",method_08);
    (__this_03->fields).RestrictionStatus = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).RestrictionStatus);
    unaff_R15 = "restriction";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar16 = (MethodInfo *)0x0;
    pIVar17 = pIVar12;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0449a2be;
      cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar12,unaff_R15,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).method);
      if (cVar5 == '\0') {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).methodPtr)
                           (pIVar12,unaff_R15,
                            (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).method)
        ;
      }
    }
    (__this_03->fields).Restriction = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Restriction);
    unaff_R15 = "patreon";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar16 = (MethodInfo *)0x0;
    pIVar17 = pIVar12;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0449a2be;
      pMVar16 = unaff_R15;
      cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar12,unaff_R15,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).method);
      if (cVar5 == '\0') {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).methodPtr)
                           (pIVar12,unaff_R15,
                            (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).method)
        ;
        pMVar16 = unaff_R15;
      }
    }
    pAVar10 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(pSVar7,pMVar16);
    (__this_03->fields).Patreon = pAVar10;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Patreon);
    unaff_R15 = "oAuthLinks";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar16 = (MethodInfo *)0x0;
    pIVar17 = pIVar12;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0449a2be;
      pMVar16 = unaff_R15;
      cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar12,unaff_R15,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).method);
      if (cVar5 == '\0') {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).methodPtr)
                           (pIVar12,unaff_R15,
                            (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).method)
        ;
        pMVar16 = unaff_R15;
      }
    }
    pAVar11 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(pSVar7,pMVar16);
    (__this_03->fields).OAuthLinks = pAVar11;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).OAuthLinks,pAVar11);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"description",method_09);
    (__this_03->fields).Description = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Description,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"avatarKey",method_10);
    (__this_03->fields).AvatarKey = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).AvatarKey,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pIVar12,"bannerKey",method_11);
    (__this_03->fields).BannerKey = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).BannerKey);
    unaff_R15 = "socials";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar19 = (long *)0x0;
    pMVar16 = (MethodInfo *)0x0;
    pIVar17 = pIVar12;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0449a27a:
      (__this_03->fields).Socials = (SimpleJSONFixed_JSONNode_o *)plVar19;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).Socials,plVar19);
      SVar20 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                         ((SimpleJSONFixed_JSONNode_o *)pIVar12,"createdAt",method_12);
      (__this_03->fields).CreatedAt.fields._dateTime.fields._dateData =
           (uint64_t)SVar20.fields._dateTime.fields._dateData.fields;
      (__this_03->fields).CreatedAt.fields._offsetMinutes = SVar20.fields._offsetMinutes;
      return (SimpleJSONFixed_JSONNode_o *)__this_03;
    }
    if (pIVar12 != (Il2CppObject *)0x0) {
      cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar12,unaff_R15,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_28_HasKey).method);
      if (cVar5 == '\0') {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_7_get_Item).
                            methodPtr)(pIVar12,unaff_R15,
                                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->
                                       _7_get_Item).method);
      }
      goto label_0449a27a;
    }
  }
label_0449a2be:
  il2cpp_runtime_helper_022b2c90();
  pIVar18 = (Il2CppObject *)&stack0xfffffffffffffef8;
  pSStack_70 = pSVar7;
  pSStack_68 = (SimpleJSONFixed_JSONNode_o *)plVar19;
  pAStack_60 = __this_03;
  pIStack_58 = pIVar12;
  pMStack_50 = unaff_R15;
  if (g_data_057ae949 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae949 = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppObject *)0x0;
  __this_05 = pIVar17;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar17,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449a3e5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar17 == (Il2CppObject *)0x0) goto label_0449a713;
    cVar5 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar17,pMVar16,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_28_HasKey).method);
    if (cVar5 != '\0') {
      pIVar12 = (Il2CppObject *)
                (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_7_get_Item).methodPtr)
                          (pIVar17,pMVar16,
                           (((SimpleJSONFixed_JSONNode_VTable *)pIVar17->klass->vtable)->_7_get_Item).method);
      goto label_0449a3e5;
    }
    pIVar12 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = pIVar12;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449a44c:
    lVar13 = MethodInfo_String_Empty_String;
    if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
      lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    else {
      lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar14 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    }
    return (SimpleJSONFixed_JSONNode_o *)(System_Object_array *)**(undefined8 **)(lVar13 + 0xb8);
  }
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12 = (Il2CppObject *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_45_get_AsArray).methodPtr)
                        (pIVar12);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = pIVar12;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto label_0449a44c;
    if (pIVar12 != (Il2CppObject *)0x0) {
      capacity = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_11_get_Count).methodPtr)
                           (pIVar12,(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->
                                    _11_get_Count).method);
      __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362b930(__this_04,capacity,MethodInfo_List_1_System_String);
      (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_32_unknown).methodPtr)
                (&pIStack_b8,pIVar12,
                 (((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_32_unknown).method);
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_b0;
      __this.fields._0_8_ = pIStack_b8;
      __this.fields.m_Object.fields._8_8_ = pIStack_a8;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_a0;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_98;
      __this.fields.m_Object.fields._32_8_ = pIStack_90;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_88;
      __this.fields.m_Array.fields._8_8_ = _Stack_80.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_78.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffef8);
      if ((char)bVar6 == '\0') {
        __this_05 = pIVar18;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449a695;
      }
      else {
        pIVar22 = pIStack_b8;
        vtableDispatch = pIStack_b0;
        pIVar23 = pIStack_a8;
        pcVar24 = pcStack_a0;
        pIVar25 = pIStack_98;
        pIVar26 = pIStack_90;
        ppIVar27 = ppIStack_88;
        _Var28 = _Stack_80;
        _Var29 = _Stack_78;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
            __this_01.fields._0_8_ = pIVar22;
            __this_01.fields.m_Object.fields._8_8_ = pIVar23;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar24;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_01.fields.m_Object.fields._32_8_ = pIVar26;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
            __this_01.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var29.genericMethod;
            SVar21 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar12 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar21,(MethodInfo *)0x0);
            __this_05 = pIVar12;
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            pIVar17 = (Il2CppObject *)0x0;
            if ((char)bVar6 != '\0') {
              if (pIVar12 == (Il2CppObject *)0x0) goto label_0449a713;
              pIVar17 = (Il2CppObject *)
                        (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_9_get_Value).
                          methodPtr)(pIVar12,(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->
                                             _9_get_Value).method);
              __this_05 = pIVar12;
            }
            lVar13 = MethodInfo_Void_Add;
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_04->fields)._items;
            if (pSVar15 == (System_Object_array *)0x0) goto label_0449a713;
            uVar4 = (__this_04->fields)._size;
            if (uVar4 < (uint)pSVar15->max_length) {
              (__this_04->fields)._size = uVar4 + 1;
              pSVar15->m_Items[(int)uVar4] = pIVar17;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_04,pIVar17,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
            __this_00.fields._0_8_ = pIVar22;
            __this_00.fields.m_Object.fields._8_8_ = pIVar23;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar24;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_00.fields.m_Object.fields._32_8_ = pIVar26;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
            __this_00.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var29.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
          } while ((char)bVar6 != '\0');
label_0449a695:
          pSVar15 = System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
          return (SimpleJSONFixed_JSONNode_o *)pSVar15;
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_b0;
        __this_02.fields._0_8_ = pIStack_b8;
        __this_02.fields.m_Object.fields._8_8_ = pIStack_a8;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_a0;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_98;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_90;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_88;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_80.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Stack_78.genericMethod;
        SVar21 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar21,(MethodInfo *)0x0);
        __this_05 = pIVar12;
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar6 != '\0') && (pIVar12 != (Il2CppObject *)0x0)) {
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_9_get_Value).methodPtr)
                    (pIVar12,(((SimpleJSONFixed_JSONNode_VTable *)pIVar12->klass->vtable)->_9_get_Value).
                             method);
          __this_05 = pIVar12;
        }
      }
    }
  }
label_0449a713:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae950 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae950 = '\x01';
  }
  lVar13 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  else {
    lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar14 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
  }
  __this_05[3].monitor = (void *)**(undefined8 **)(lVar13 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_05[3].monitor);
  lVar13 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  else {
    lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar14 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
  }
  __this_05[4].klass = (Il2CppClass *)**(undefined8 **)(lVar13 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_05 + 4);
  lVar13 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  else {
    lVar14 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar14 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar14 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
  }
  __this_05[6].klass = (Il2CppClass *)**(undefined8 **)(lVar13 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_05 + 6);
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountLoginResponse$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4499920

System_String_o *
ApplicationManagers_AccountLoginResponse__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  code *vtableDispatch;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar5;
  bool_conflict bVar6;
  int32_t capacity;
  MethodInfo *pMVar7;
  System_String_o *pSVar8;
  System_Globalization_CultureInfo_o *formatProvider;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this_03;
  System_String_array *pSVar9;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar10;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar11;
  long lVar12;
  long lVar13;
  System_Collections_Generic_List_object__o *__this_04;
  System_Object_array *pSVar14;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  undefined8 uVar15;
  undefined8 uVar16;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  Il2CppObject *item;
  MethodInfo *pMVar20;
  long *plVar21;
  System_DateTimeOffset_o SVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar23;
  Il2CppMethodPointer pIVar24;
  Il2CppMethodPointer pIVar25;
  InvokerMethod pIVar26;
  char *pcVar27;
  Il2CppClass *pIVar28;
  Il2CppType *pIVar29;
  Il2CppType **ppIVar30;
  _union_13 _Var31;
  _union_14 _Var32;
  Il2CppMethodPointer pIStack_118;
  Il2CppMethodPointer pIStack_110;
  InvokerMethod pIStack_108;
  char *pcStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppType *pIStack_f0;
  Il2CppType **ppIStack_e8;
  _union_13 _Stack_e0;
  _union_14 _Stack_d8;
  SimpleJSONFixed_JSONNode_o *pSStack_d0;
  SimpleJSONFixed_JSONNode_o *pSStack_c8;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAStack_c0;
  MethodInfo *pMStack_b8;
  MethodInfo *pMStack_b0;
  System_DateTimeOffset_o SStack_60;
  undefined8 uStack_48;
  long *plStack_40;
  System_String_o *pSStack_38;
  SimpleJSONFixed_JSONNode_o *pSStack_30;
  
  if (g_data_057ae947 == '\0') {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x4499a0a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae947 = '\x01';
    if (g_data_057ae946 == '\0') goto label_04499a1e;
label_04499948:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_04499948;
label_04499a1e:
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x4499a2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x4499a4e;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  uVar16 = 0;
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x449996e;
  pMVar19 = (MethodInfo *)node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044999b2:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x044999bd:
    if (iVar3 == 0) {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x44999c4;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = 0;
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x44999d0;
    pMVar19 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_String_o *)0x0;
    }
    if (pMVar7 != (MethodInfo *)0x0) {
      pSVar8 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)pMVar7->methodPointer)->vtable)._9_get_Value.methodPtr)
                         (pMVar7,(((SimpleJSONFixed_JSONNode_c *)pMVar7->methodPointer)->vtable)._9_get_Value.
                                 method);
      return pSVar8;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x4499991;
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x44999af;
      pMVar7 = (MethodInfo *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_044999b2;
    }
    pMVar7 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x044999bd;
  }
  uVar15 = 0;
  pSStack_30 = (SimpleJSONFixed_JSONNode_o *)0x4499a7e;
  il2cpp_runtime_helper_022b2c90();
  plStack_40 = &TypeInfo_JSONNode;
  uStack_48 = uVar15;
  pSStack_38 = key;
  pSStack_30 = node;
  if (g_data_057ae948 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae948 = '\x01';
    if (g_data_057ae946 == '\0') goto label_04499c49;
label_04499ab2:
    SStack_60.fields._offsetMinutes = 0;
    SStack_60.fields._10_6_ = 0;
    SStack_60.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_04499ab2;
label_04499c49:
    SStack_60.fields._offsetMinutes = 0;
    SStack_60.fields._10_6_ = 0;
    SStack_60.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  uVar15 = 0;
  pMVar18 = pMVar19;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar19,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04499b1c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x04499b27:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar15 = 0;
    pMVar18 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return (System_String_o *)0x0;
    }
    if (pMVar7 != (MethodInfo *)0x0) {
      pSVar8 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)pMVar7->methodPointer)->vtable)._9_get_Value.methodPtr)
                         (pMVar7,(((SimpleJSONFixed_JSONNode_c *)pMVar7->methodPointer)->vtable)._9_get_Value.
                                 method,0);
      bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return (System_String_o *)0x0;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = System_DateTimeOffset__TryParse
                        (pSVar8,(System_IFormatProvider_o *)formatProvider,0x80,&SStack_60,(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      if ((char)bVar6 == '\0') {
        return (System_String_o *)0x0;
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar7 = extraout_RDX;
      }
      SVar22.fields._8_8_ = 0;
      SVar22.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStack_60;
      SVar22 = System_DateTimeOffset__ToUniversalTime(SVar22,pMVar7);
      return (System_String_o *)SVar22.fields._dateTime.fields._dateData;
    }
  }
  else if (pMVar19 != (MethodInfo *)0x0) {
    cVar5 = (**(code **)(pMVar19->methodPointer + 0x2f8))
                      (pMVar19,uVar16,*(undefined8 *)(pMVar19->methodPointer + 0x300));
    if (cVar5 != '\0') {
      pMVar7 = (MethodInfo *)
               (**(code **)(pMVar19->methodPointer + 0x1a8))
                         (pMVar19,uVar16,*(undefined8 *)(pMVar19->methodPointer + 0x1b0));
      goto label_04499b1c;
    }
    pMVar7 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x04499b27;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  pMVar7 = pMVar18;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar18,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return (System_String_o *)0x0;
  }
  if (pMVar18 != (MethodInfo *)0x0) {
    cVar5 = (**(code **)(pMVar18->methodPointer + 0x2f8))
                      (pMVar18,uVar15,*(undefined8 *)(pMVar18->methodPointer + 0x300));
    if (cVar5 == '\0') {
      return (System_String_o *)0x0;
    }
    vtableDispatch = *(code **)(pMVar18->methodPointer + 0x1a8);
    pSVar8 = (System_String_o *)
             (*vtableDispatch)
                       (pMVar18,uVar15,*(undefined8 *)(pMVar18->methodPointer + 0x1b0),vtableDispatch);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae94a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileData);
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"oAuthLinks");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"emailVerified");
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"createdAt");
    il2cpp_runtime_helper_023445d0(&"restriction");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"photonUserId");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"hasPassword");
    il2cpp_runtime_helper_023445d0(&"permissions");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    il2cpp_runtime_helper_023445d0(&"restrictionStatus");
    g_data_057ae94a = '\x01';
  }
  __this_03 = (ApplicationManagers_AccountLoginResponse_ProfileData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor(__this_03,pMVar17);
  plVar21 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (System_String_o *)__this_03;
  }
  pMVar18 = "accountId";
  pMVar17 = pMVar7;
  pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                     ((SimpleJSONFixed_JSONNode_o *)pMVar7,(System_String_o *)"accountId",method_00);
  node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (__this_03 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    (__this_03->fields).AccountId = pSVar8;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"email",method_01);
    (__this_03->fields).Email = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Email,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"displayName",method_02);
    (__this_03->fields).DisplayName = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).DisplayName,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"photonUserId",method_03);
    (__this_03->fields).PhotonUserId = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).PhotonUserId,pSVar8);
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,"emailVerified",method_04);
    *(char *)&(__this_03->fields).EmailVerified = (char)bVar6;
    bVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,"hasPassword",method_05);
    *(char *)((long)&(__this_03->fields).EmailVerified + 1) = (char)bVar6;
    pSVar9 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"roles",method_06);
    (__this_03->fields).Roles = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Roles,pSVar9);
    pSVar9 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"permissions",method_07);
    (__this_03->fields).Permissions = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Permissions,pSVar9);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"restrictionStatus",method_08);
    (__this_03->fields).RestrictionStatus = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).RestrictionStatus);
    pMVar19 = "restriction";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar18 = (MethodInfo *)0x0;
    pMVar17 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pMVar7 == (MethodInfo *)0x0) goto label_0449a2be;
      cVar5 = (**(code **)(pMVar7->methodPointer + 0x2f8))
                        (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x300));
      if (cVar5 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar7->methodPointer + 0x1a8))
                            (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x1b0));
      }
    }
    (__this_03->fields).Restriction = node_00;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Restriction);
    pMVar19 = "patreon";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar18 = (MethodInfo *)0x0;
    pMVar17 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pMVar7 == (MethodInfo *)0x0) goto label_0449a2be;
      pMVar18 = pMVar19;
      cVar5 = (**(code **)(pMVar7->methodPointer + 0x2f8))
                        (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x300));
      if (cVar5 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar7->methodPointer + 0x1a8))
                            (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x1b0));
        pMVar18 = pMVar19;
      }
    }
    pAVar10 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(node_00,pMVar18);
    (__this_03->fields).Patreon = pAVar10;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Patreon);
    pMVar19 = "oAuthLinks";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar18 = (MethodInfo *)0x0;
    pMVar17 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (pMVar7 == (MethodInfo *)0x0) goto label_0449a2be;
      pMVar18 = pMVar19;
      cVar5 = (**(code **)(pMVar7->methodPointer + 0x2f8))
                        (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x300));
      if (cVar5 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar7->methodPointer + 0x1a8))
                            (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x1b0));
        pMVar18 = pMVar19;
      }
    }
    pAVar11 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(node_00,pMVar18);
    (__this_03->fields).OAuthLinks = pAVar11;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).OAuthLinks,pAVar11);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"description",method_09);
    (__this_03->fields).Description = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).Description,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"avatarKey",method_10);
    (__this_03->fields).AvatarKey = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).AvatarKey,pSVar8);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar7,"bannerKey",method_11);
    (__this_03->fields).BannerKey = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).BannerKey);
    pMVar19 = "socials";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar21 = (long *)0x0;
    pMVar18 = (MethodInfo *)0x0;
    pMVar17 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0449a27a:
      (__this_03->fields).Socials = (SimpleJSONFixed_JSONNode_o *)plVar21;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).Socials,plVar21);
      SVar22 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                         ((SimpleJSONFixed_JSONNode_o *)pMVar7,"createdAt",method_12);
      (__this_03->fields).CreatedAt.fields._dateTime.fields._dateData =
           (uint64_t)SVar22.fields._dateTime.fields._dateData.fields;
      (__this_03->fields).CreatedAt.fields._offsetMinutes = SVar22.fields._offsetMinutes;
      return (System_String_o *)__this_03;
    }
    if (pMVar7 != (MethodInfo *)0x0) {
      cVar5 = (**(code **)(pMVar7->methodPointer + 0x2f8))
                        (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x300));
      if (cVar5 == '\0') {
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = (long *)(**(code **)(pMVar7->methodPointer + 0x1a8))
                                    (pMVar7,pMVar19,*(undefined8 *)(pMVar7->methodPointer + 0x1b0));
      }
      goto label_0449a27a;
    }
  }
label_0449a2be:
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = (MethodInfo *)&stack0xfffffffffffffe98;
  pSStack_d0 = node_00;
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)plVar21;
  pAStack_c0 = __this_03;
  pMStack_b8 = pMVar7;
  pMStack_b0 = pMVar19;
  if (g_data_057ae949 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae949 = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  pMVar19 = pMVar17;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar17,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_0449a3e5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pMVar17 == (MethodInfo *)0x0) goto label_0449a713;
    cVar5 = (**(code **)(pMVar17->methodPointer + 0x2f8))
                      (pMVar17,pMVar18,*(undefined8 *)(pMVar17->methodPointer + 0x300));
    if (cVar5 != '\0') {
      pMVar7 = (MethodInfo *)
               (**(code **)(pMVar17->methodPointer + 0x1a8))
                         (pMVar17,pMVar18,*(undefined8 *)(pMVar17->methodPointer + 0x1b0));
      goto label_0449a3e5;
    }
    pMVar7 = (MethodInfo *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar19 = pMVar7;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0449a44c:
    lVar12 = MethodInfo_String_Empty_String;
    if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar13 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar13 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    }
    return (System_String_o *)(System_Object_array *)**(undefined8 **)(lVar12 + 0xb8);
  }
  if (pMVar7 != (MethodInfo *)0x0) {
    pMVar7 = (MethodInfo *)
             (*(((SimpleJSONFixed_JSONNode_c *)pMVar7->methodPointer)->vtable)._45_get_AsArray.methodPtr)
                       (pMVar7);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = pMVar7;
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto label_0449a44c;
    if (pMVar7 != (MethodInfo *)0x0) {
      capacity = (**(code **)(pMVar7->methodPointer + 0x1e8))
                           (pMVar7,*(undefined8 *)(pMVar7->methodPointer + 0x1f0));
      __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362b930(__this_04,capacity,MethodInfo_List_1_System_String);
      (**(code **)(pMVar7->methodPointer + 0x338))
                (&pIStack_118,pMVar7,*(undefined8 *)(pMVar7->methodPointer + 0x340));
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_110;
      __this.fields._0_8_ = pIStack_118;
      __this.fields.m_Object.fields._8_8_ = pIStack_108;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_100;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f8;
      __this.fields.m_Object.fields._32_8_ = pIStack_f0;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_e8;
      __this.fields.m_Array.fields._8_8_ = _Stack_e0.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_d8.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffe98);
      if ((char)bVar6 == '\0') {
        pMVar19 = pMVar20;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449a695;
      }
      else {
        pIVar24 = pIStack_118;
        pIVar25 = pIStack_110;
        pIVar26 = pIStack_108;
        pcVar27 = pcStack_100;
        pIVar28 = pIStack_f8;
        pIVar29 = pIStack_f0;
        ppIVar30 = ppIStack_e8;
        _Var31 = _Stack_e0;
        _Var32 = _Stack_d8;
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
            __this_01.fields._0_8_ = pIVar24;
            __this_01.fields.m_Object.fields._8_8_ = pIVar26;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
            __this_01.fields.m_Object.fields._32_8_ = pIVar29;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar30;
            __this_01.fields.m_Array.fields._8_8_ = _Var31.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var32.genericMethod;
            SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xfffffffffffffe98);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar7 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar23,(MethodInfo *)0x0);
            pMVar19 = pMVar7;
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (Il2CppObject *)0x0;
            if ((char)bVar6 != '\0') {
              if (pMVar7 == (MethodInfo *)0x0) goto label_0449a713;
              item = (Il2CppObject *)
                     (**(code **)(pMVar7->methodPointer + 0x1c8))
                               (pMVar7,*(undefined8 *)(pMVar7->methodPointer + 0x1d0));
              pMVar19 = pMVar7;
            }
            lVar12 = MethodInfo_Void_Add;
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar14 = (__this_04->fields)._items;
            if (pSVar14 == (System_Object_array *)0x0) goto label_0449a713;
            uVar4 = (__this_04->fields)._size;
            if (uVar4 < (uint)pSVar14->max_length) {
              (__this_04->fields)._size = uVar4 + 1;
              pSVar14->m_Items[(int)uVar4] = item;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_04,item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
            __this_00.fields._0_8_ = pIVar24;
            __this_00.fields.m_Object.fields._8_8_ = pIVar26;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar27;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
            __this_00.fields.m_Object.fields._32_8_ = pIVar29;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar30;
            __this_00.fields.m_Array.fields._8_8_ = _Var31.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var32.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xfffffffffffffe98);
          } while ((char)bVar6 != '\0');
label_0449a695:
          pSVar14 = System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
          return (System_String_o *)pSVar14;
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_110;
        __this_02.fields._0_8_ = pIStack_118;
        __this_02.fields.m_Object.fields._8_8_ = pIStack_108;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_100;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f8;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_f0;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_e8;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_e0.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Stack_d8.genericMethod;
        SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffe98);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar7 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar23,(MethodInfo *)0x0);
        pMVar19 = pMVar7;
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pMVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar6 != '\0') && (pMVar7 != (MethodInfo *)0x0)) {
          (**(code **)(pMVar7->methodPointer + 0x1c8))(pMVar7,*(undefined8 *)(pMVar7->methodPointer + 0x1d0));
          pMVar19 = pMVar7;
        }
      }
    }
  }
label_0449a713:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae950 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae950 = '\x01';
  }
  lVar12 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  pMVar19->field7_0x38 = **(_union_13 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(&pMVar19->field7_0x38);
  lVar12 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  pMVar19->field8_0x40 = **(_union_14 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(&pMVar19->field8_0x40);
  lVar12 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  else {
    lVar13 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar13 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar13 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  pMVar19[1].virtualMethodPointer = (Il2CppMethodPointer)**(undefined8 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(&pMVar19[1].virtualMethodPointer);
  System_Object___ctor((Il2CppObject *)pMVar19,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountLoginResponse$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4499a80

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  undefined1 auVar6 [16];
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar7;
  bool_conflict bVar8;
  int32_t capacity;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_array *pSVar11;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar12;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar13;
  System_Collections_Generic_List_object__o *__this_03;
  System_DateTime_Fields SVar14;
  long lVar15;
  System_DateTime_o extraout_RAX;
  long lVar16;
  MethodInfo *pMVar17;
  MethodInfo *extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 uVar19;
  Il2CppObject *pIVar20;
  Il2CppObject *__this_04;
  Il2CppObject *pIVar21;
  long *plVar22;
  System_DateTimeOffset_Fields SVar23;
  undefined1 auVar24 [16];
  System_DateTimeOffset_o SVar26;
  System_DateTimeOffset_o SVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar30;
  System_DateTimeOffset_o SVar31;
  System_DateTimeOffset_o SVar32;
  Il2CppClass *pIVar33;
  Il2CppMethodPointer vtableDispatch;
  InvokerMethod pIVar34;
  char *pcVar35;
  Il2CppClass *pIVar36;
  Il2CppType *pIVar37;
  Il2CppType **ppIVar38;
  _union_13 _Var39;
  _union_14 _Var40;
  Il2CppClass *pIStack_f0;
  Il2CppMethodPointer pIStack_e8;
  InvokerMethod pIStack_e0;
  char *pcStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppType *pIStack_c8;
  Il2CppType **ppIStack_c0;
  _union_13 _Stack_b8;
  _union_14 _Stack_b0;
  SimpleJSONFixed_JSONNode_o *pSStack_a8;
  SimpleJSONFixed_JSONNode_o *pSStack_a0;
  System_DateTime_Fields SStack_98;
  Il2CppObject *pIStack_90;
  MethodInfo *pMStack_88;
  System_DateTimeOffset_o local_38;
  undefined1 auVar25 [16];
  undefined8 extraout_RDX_07;
  
  if (g_data_057ae948 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae948 = '\x01';
    if (g_data_057ae946 == '\0') goto label_04499c49;
label_04499ab2:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (g_data_057ae946 != '\0') goto label_04499ab2;
label_04499c49:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppObject *)0x0;
  uVar19 = 0;
  pIVar20 = (Il2CppObject *)node;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04499b1c:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x04499b27:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar19 = 0;
    pIVar20 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return (System_DateTimeOffset_o)(System_DateTimeOffset_Fields)ZEXT816(0);
    }
    if (pIVar9 != (Il2CppObject *)0x0) {
      pSVar10 = (System_String_o *)
                (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_9_get_Value).methodPtr)
                          (pIVar9);
      bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        auVar25._0_8_ = (System_DateTime_Fields)0x0;
        auVar25._8_2_ = 0;
        auVar25._10_6_ = 0;
        return (System_DateTimeOffset_o)auVar25;
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_DateTimeOffset__TryParse
                        (pSVar10,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      pMVar17 = (MethodInfo *)0x0;
      if ((char)bVar8 == '\0') {
        auVar24._0_8_ = (System_DateTime_Fields)0x0;
        auVar24._8_2_ = 0;
        auVar24._10_6_ = 0;
        return (System_DateTimeOffset_o)auVar24;
      }
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar17 = extraout_RDX;
      }
      SVar26.fields._8_8_ = 0;
      SVar26.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
      SVar23 = (System_DateTimeOffset_Fields)System_DateTimeOffset__ToUniversalTime(SVar26,pMVar17);
      auVar29._0_8_ = SVar23._dateTime.fields._dateData;
      auVar29._8_2_ = SVar23._offsetMinutes;
      auVar29._10_6_ = SVar23._10_6_;
      return (System_DateTimeOffset_o)auVar29;
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar7 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar7 != '\0') {
      pIVar9 = (Il2CppObject *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_04499b1c;
    }
    pIVar9 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    goto joined_r0x04499b27;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  pIVar9 = pIVar20;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar20,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar18 = extraout_RDX_00;
  if ((char)bVar8 == '\0') {
label_04499d2d:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    return (System_DateTimeOffset_Fields)(auVar6 << 0x40);
  }
  if (pIVar20 != (Il2CppObject *)0x0) {
    cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar20,uVar19,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_28_HasKey).method);
    uVar18 = extraout_RDX_01;
    if (cVar7 != '\0') {
      vtableDispatch =
           (((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_7_get_Item).methodPtr;
      SVar26.fields =
           (System_DateTimeOffset_Fields)
           (*vtableDispatch)
                     (pIVar20,uVar19,
                      (((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_7_get_Item).method,
                      vtableDispatch);
      return (System_DateTimeOffset_o)SVar26.fields;
    }
    goto label_04499d2d;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae94a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileData);
    il2cpp_runtime_helper_023445d0(&"patreon");
    il2cpp_runtime_helper_023445d0(&"oAuthLinks");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"emailVerified");
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"createdAt");
    il2cpp_runtime_helper_023445d0(&"restriction");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"photonUserId");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"hasPassword");
    il2cpp_runtime_helper_023445d0(&"permissions");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    il2cpp_runtime_helper_023445d0(&"restrictionStatus");
    g_data_057ae94a = '\x01';
  }
  SVar27.fields._dateTime.fields._dateData = (System_DateTime_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor
            ((ApplicationManagers_AccountLoginResponse_ProfileData_o *)
             SVar27.fields._dateTime.fields._dateData,pMVar17);
  plVar22 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pMVar17 = method_00;
  if ((char)bVar8 != '\0') goto label_0449a2b1;
  pMVar17 = "accountId";
  pIVar20 = pIVar9;
  pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(System_String_o *)"accountId",method_00);
  node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (SVar27.fields._dateTime.fields._dateData != 0) {
    ((ApplicationManagers_AccountLoginResponse_ProfileData_Fields *)
    ((long)SVar27.fields._dateTime.fields._dateData + 0x10))->AccountId = pSVar10;
    il2cpp_runtime_helper_022b4080((ApplicationManagers_AccountLoginResponse_ProfileData_Fields *)
                       ((long)SVar27.fields._dateTime.fields._dateData + 0x10),pSVar10);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"email",method_01);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x18) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x18),pSVar10);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"displayName",method_02);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x20) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x20),pSVar10);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"photonUserId",method_03);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x28) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x28),pSVar10);
    bVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,"emailVerified",method_04);
    *(char *)((long)SVar27.fields._dateTime.fields._dateData + 0x30) = (char)bVar8;
    bVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,"hasPassword",method_05);
    *(char *)((long)SVar27.fields._dateTime.fields._dateData + 0x31) = (char)bVar8;
    pSVar11 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"roles",method_06);
    *(System_String_array **)((long)SVar27.fields._dateTime.fields._dateData + 0x38) = pSVar11;
    il2cpp_runtime_helper_022b4080((System_String_array **)((long)SVar27.fields._dateTime.fields._dateData + 0x38),pSVar11
                      );
    pSVar11 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"permissions",method_07);
    *(System_String_array **)((long)SVar27.fields._dateTime.fields._dateData + 0x40) = pSVar11;
    il2cpp_runtime_helper_022b4080((System_String_array **)((long)SVar27.fields._dateTime.fields._dateData + 0x40),pSVar11
                      );
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"restrictionStatus",method_08);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x48) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x48));
    node = (SimpleJSONFixed_JSONNode_o *)"restriction";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar17 = (MethodInfo *)0x0;
    pIVar20 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a2be;
      cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar9,node,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).method);
      if (cVar7 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).methodPtr)
                            (pIVar9,node,
                             (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).method)
        ;
      }
    }
    *(SimpleJSONFixed_JSONNode_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x50) = node_00;
    il2cpp_runtime_helper_022b4080((SimpleJSONFixed_JSONNode_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x50))
    ;
    node = (SimpleJSONFixed_JSONNode_o *)"patreon";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar17 = (MethodInfo *)0x0;
    pIVar20 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a2be;
      pMVar17 = (MethodInfo *)node;
      cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar9,node,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).method);
      if (cVar7 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).methodPtr)
                            (pIVar9,node,
                             (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).method)
        ;
        pMVar17 = (MethodInfo *)node;
      }
    }
    pAVar12 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(node_00,pMVar17);
    *(ApplicationManagers_AccountLoginResponse_PatreonData_o **)
     ((long)SVar27.fields._dateTime.fields._dateData + 0x58) = pAVar12;
    il2cpp_runtime_helper_022b4080((ApplicationManagers_AccountLoginResponse_PatreonData_o **)
                       ((long)SVar27.fields._dateTime.fields._dateData + 0x58));
    node = (SimpleJSONFixed_JSONNode_o *)"oAuthLinks";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar17 = (MethodInfo *)0x0;
    pIVar20 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a2be;
      pMVar17 = (MethodInfo *)node;
      cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar9,node,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).method);
      if (cVar7 == '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).methodPtr)
                            (pIVar9,node,
                             (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).method)
        ;
        pMVar17 = (MethodInfo *)node;
      }
    }
    pAVar13 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(node_00,pMVar17);
    *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_array **)
     ((long)SVar27.fields._dateTime.fields._dateData + 0x60) = pAVar13;
    il2cpp_runtime_helper_022b4080((ApplicationManagers_AccountLoginResponse_OAuthLinkData_array **)
                       ((long)SVar27.fields._dateTime.fields._dateData + 0x60),pAVar13);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"description",method_09);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x68) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x68),pSVar10);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"avatarKey",method_10);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x70) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x70),pSVar10);
    pSVar10 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                        ((SimpleJSONFixed_JSONNode_o *)pIVar9,"bannerKey",method_11);
    *(System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x78) = pSVar10;
    il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x78));
    node = (SimpleJSONFixed_JSONNode_o *)"socials";
    if (g_data_057ae946 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae946 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar22 = (long *)0x0;
    pMVar17 = (MethodInfo *)0x0;
    pIVar20 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a2be;
      cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar9,node,
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_28_HasKey).method);
      if (cVar7 == '\0') {
        plVar22 = (long *)0x0;
      }
      else {
        plVar22 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_7_get_Item).
                            methodPtr)(pIVar9,node,
                                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->
                                       _7_get_Item).method);
      }
    }
    *(long **)((long)SVar27.fields._dateTime.fields._dateData + 0x80) = plVar22;
    il2cpp_runtime_helper_022b4080((SimpleJSONFixed_JSONNode_o **)((long)SVar27.fields._dateTime.fields._dateData + 0x80),
                       plVar22);
    SVar26 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                       ((SimpleJSONFixed_JSONNode_o *)pIVar9,"createdAt",method_12);
    pMVar17 = SVar26.fields._8_8_;
    (((System_DateTimeOffset_o *)((long)SVar27.fields._dateTime.fields._dateData + 0x88))->fields)._dateTime.
    fields._dateData = (uint64_t)SVar26.fields._dateTime.fields._dateData.fields;
    *(int16_t *)((long)SVar27.fields._dateTime.fields._dateData + 0x90) = SVar26.fields._offsetMinutes;
label_0449a2b1:
    SVar27.fields._8_8_ = pMVar17;
    return (System_DateTimeOffset_o)SVar27.fields;
  }
label_0449a2be:
  il2cpp_runtime_helper_022b2c90();
  pIVar21 = (Il2CppObject *)&stack0xfffffffffffffec0;
  pSStack_a8 = node_00;
  pSStack_a0 = (SimpleJSONFixed_JSONNode_o *)plVar22;
  SStack_98._dateData = (uint64_t)SVar27.fields._dateTime.fields._dateData;
  pIStack_90 = pIVar9;
  pMStack_88 = (MethodInfo *)node;
  if (g_data_057ae949 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae949 = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppObject *)0x0;
  __this_04 = pIVar20;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar20,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_0449a3e5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pIVar20 == (Il2CppObject *)0x0) goto label_0449a713;
    cVar7 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar20,pMVar17,
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_28_HasKey).method);
    if (cVar7 != '\0') {
      pIVar9 = (Il2CppObject *)
               (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_7_get_Item).methodPtr)
                         (pIVar20,pMVar17,
                          (((SimpleJSONFixed_JSONNode_VTable *)pIVar20->klass->vtable)->_7_get_Item).method);
      goto label_0449a3e5;
    }
    pIVar9 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = pIVar9;
  bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar19 = extraout_RDX_02;
  if ((char)bVar8 == '\0') {
    if (pIVar9 == (Il2CppObject *)0x0) {
label_0449a713:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae950 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
        g_data_057ae950 = '\x01';
      }
      lVar15 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      else {
        lVar16 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar16 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
      }
      __this_04[3].monitor = (void *)**(undefined8 **)(lVar15 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[3].monitor);
      lVar15 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      else {
        lVar16 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar16 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
      }
      __this_04[4].klass = (Il2CppClass *)**(undefined8 **)(lVar15 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_04 + 4);
      lVar15 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
      if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
        lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      else {
        lVar16 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar16 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar16 = il2cpp_runtime_helper_023009c0();
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      else {
        iVar3 = *(int *)(lVar16 + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar15 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
      }
      __this_04[6].klass = (Il2CppClass *)**(undefined8 **)(lVar15 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_04 + 6);
      System_Object___ctor(__this_04,(MethodInfo *)0x0);
      SVar32.fields._8_8_ = extraout_RDX_07;
      SVar32.fields._dateTime.fields._dateData = extraout_RAX.fields._dateData;
      return (System_DateTimeOffset_o)SVar32.fields;
    }
    pIVar9 = (Il2CppObject *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_45_get_AsArray).methodPtr)
                       (pIVar9);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = pIVar9;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    uVar19 = extraout_RDX_03;
    if ((char)bVar8 == '\0') {
      if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a713;
      capacity = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_11_get_Count).methodPtr)
                           (pIVar9,(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_11_get_Count)
                                   .method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362b930(__this_03,capacity,MethodInfo_List_1_System_String);
      (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_32_unknown).methodPtr)
                (&pIStack_f0,pIVar9,
                 (((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_32_unknown).method);
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e8;
      __this.fields._0_8_ = pIStack_f0;
      __this.fields.m_Object.fields._8_8_ = pIStack_e0;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_d8;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d0;
      __this.fields.m_Object.fields._32_8_ = pIStack_c8;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_c0;
      __this.fields.m_Array.fields._8_8_ = _Stack_b8.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_b0.genericMethod;
      bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffec0);
      if ((char)bVar8 == '\0') {
        __this_04 = pIVar21;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_0449a713;
      }
      else {
        pIVar33 = pIStack_f0;
        vtableDispatch = pIStack_e8;
        pIVar34 = pIStack_e0;
        pcVar35 = pcStack_d8;
        pIVar36 = pIStack_d0;
        pIVar37 = pIStack_c8;
        ppIVar38 = ppIStack_c0;
        _Var39 = _Stack_b8;
        _Var40 = _Stack_b0;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e8;
          __this_02.fields._0_8_ = pIStack_f0;
          __this_02.fields.m_Object.fields._8_8_ = pIStack_e0;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_d8;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d0;
          __this_02.fields.m_Object.fields._32_8_ = pIStack_c8;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_c0;
          __this_02.fields.m_Array.fields._8_8_ = _Stack_b8.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Stack_b0.genericMethod;
          SVar30 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xfffffffffffffec0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar9 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar30,(MethodInfo *)0x0);
          __this_04 = pIVar9;
          bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (((char)bVar8 != '\0') && (pIVar9 != (Il2CppObject *)0x0)) {
            (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_9_get_Value).methodPtr)
                      (pIVar9,(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_9_get_Value).
                              method);
            __this_04 = pIVar9;
          }
          goto label_0449a713;
        }
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
          __this_01.fields._0_8_ = pIVar33;
          __this_01.fields.m_Object.fields._8_8_ = pIVar34;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar35;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar36;
          __this_01.fields.m_Object.fields._32_8_ = pIVar37;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar38;
          __this_01.fields.m_Array.fields._8_8_ = _Var39.rgctx_data;
          __this_01.fields.m_Array.fields._current = _Var40.genericMethod;
          SVar30 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffec0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar9 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar30,(MethodInfo *)0x0);
          __this_04 = pIVar9;
          bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pIVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pIVar20 = (Il2CppObject *)0x0;
          if ((char)bVar8 != '\0') {
            if (pIVar9 == (Il2CppObject *)0x0) goto label_0449a713;
            pIVar20 = (Il2CppObject *)
                      (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_9_get_Value).methodPtr)
                                (pIVar9,(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->
                                        _9_get_Value).method);
            __this_04 = pIVar9;
          }
          lVar15 = MethodInfo_Void_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_03->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_0449a713;
          uVar4 = (__this_03->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_03->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = pIVar20;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_03,pIVar20,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)vtableDispatch;
          __this_00.fields._0_8_ = pIVar33;
          __this_00.fields.m_Object.fields._8_8_ = pIVar34;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar35;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar36;
          __this_00.fields.m_Object.fields._32_8_ = pIVar37;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar38;
          __this_00.fields.m_Array.fields._8_8_ = _Var39.rgctx_data;
          __this_00.fields.m_Array.fields._current = _Var40.genericMethod;
          bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffec0);
        } while ((char)bVar8 != '\0');
      }
      SVar14._dateData = (uint64_t)System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
      uVar19 = extraout_RDX_06;
      goto label_0449a6a7;
    }
  }
  lVar15 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar16 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    uVar19 = extraout_RDX_04;
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) goto label_0449a4b6;
label_0449a46c:
    if (*(int *)(lVar16 + 0xe4) != 0) goto label_0449a475;
label_0449a4c7:
    il2cpp_runtime_helper_02337ed0();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    auVar28._8_8_ = extraout_RDX_05;
    auVar28._0_8_ = lVar15;
    bVar2 = *(byte *)(lVar15 + 0x135);
  }
  else {
    lVar16 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) != 0) goto label_0449a46c;
label_0449a4b6:
    auVar29 = il2cpp_runtime_helper_023009c0();
    uVar19 = auVar29._8_8_;
    if (*(int *)(auVar29._0_8_ + 0xe4) == 0) goto label_0449a4c7;
label_0449a475:
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    auVar28._8_8_ = uVar19;
    auVar28._0_8_ = lVar15;
    bVar2 = *(byte *)(lVar15 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    auVar28 = il2cpp_runtime_helper_023009c0(lVar15);
  }
  uVar19 = auVar28._8_8_;
  SVar14._dateData = **(uint64_t **)(auVar28._0_8_ + 0xb8);
label_0449a6a7:
  SVar31.fields._8_8_ = uVar19;
  SVar31.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)SVar14._dateData;
  return (System_DateTimeOffset_o)SVar31.fields;
}


// ApplicationManagers.AccountLoginResponse$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x449a2d0

System_String_array *
ApplicationManagers_AccountLoginResponse__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar6;
  bool_conflict bVar7;
  int32_t capacity;
  Il2CppObject *pIVar8;
  long lVar9;
  long lVar10;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  System_String_array *extraout_RAX;
  Il2CppObject *__this_04;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  Il2CppClass *pIVar14;
  Il2CppMethodPointer pIVar15;
  InvokerMethod pIVar16;
  char *pcVar17;
  Il2CppClass *pIVar18;
  Il2CppType *pIVar19;
  Il2CppType **ppIVar20;
  _union_13 _Var21;
  _union_14 _Var22;
  Il2CppClass *pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  pIVar11 = (Il2CppObject *)&stack0xffffffffffffff38;
  if (g_data_057ae949 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae949 = '\x01';
  }
  if (g_data_057ae946 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae946 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppObject *)0x0;
  __this_04 = (Il2CppObject *)node;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_0449a3e5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0449a713;
    cVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar6 != '\0') {
      pIVar8 = (Il2CppObject *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_0449a3e5;
    }
    pIVar8 = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = pIVar8;
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_0449a44c:
    lVar9 = MethodInfo_String_Empty_String;
    if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8 = (Il2CppObject *)
             (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar8->klass->vtable)->_45_get_AsArray).methodPtr)
                       (pIVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = pIVar8;
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_0449a44c;
    if (pIVar8 != (Il2CppObject *)0x0) {
      capacity = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar8->klass->vtable)->_11_get_Count).methodPtr)
                           (pIVar8,(((SimpleJSONFixed_JSONNode_VTable *)pIVar8->klass->vtable)->_11_get_Count)
                                   .method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor_362b930(__this_03,capacity,MethodInfo_List_1_System_String);
      (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar8->klass->vtable)->_32_unknown).methodPtr)
                (&pIStack_78,pIVar8,
                 (((SimpleJSONFixed_JSONNode_VTable *)pIVar8->klass->vtable)->_32_unknown).method);
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this.fields._0_8_ = pIStack_78;
      __this.fields.m_Object.fields._8_8_ = pIStack_68;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
      __this.fields.m_Object.fields._32_8_ = pIStack_50;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
      __this.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_38.genericMethod;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        __this_04 = pIVar11;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto label_0449a695;
      }
      else {
        pIVar14 = pIStack_78;
        pIVar15 = pIStack_70;
        pIVar16 = pIStack_68;
        pcVar17 = pcStack_60;
        pIVar18 = pIStack_58;
        pIVar19 = pIStack_50;
        ppIVar20 = ppIStack_48;
        _Var21 = _Stack_40;
        _Var22 = _Stack_38;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_01.fields._0_8_ = pIVar14;
            __this_01.fields.m_Object.fields._8_8_ = pIVar16;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_01.fields.m_Object.fields._32_8_ = pIVar19;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_01.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var22.genericMethod;
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar11 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar13,(MethodInfo *)0x0);
            __this_04 = pIVar11;
            bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            pIVar8 = (Il2CppObject *)0x0;
            if ((char)bVar7 != '\0') {
              if (pIVar11 == (Il2CppObject *)0x0) goto label_0449a713;
              pIVar8 = (Il2CppObject *)
                       (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).methodPtr
                       )(pIVar11,(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).
                                 method);
              __this_04 = pIVar11;
            }
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_03->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto label_0449a713;
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = pIVar8;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_03,pIVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_00.fields._0_8_ = pIVar14;
            __this_00.fields.m_Object.fields._8_8_ = pIVar16;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_00.fields.m_Object.fields._32_8_ = pIVar19;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_00.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var22.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar7 != '\0');
label_0449a695:
          pSVar12 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
          return pSVar12;
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_02.fields._0_8_ = pIStack_78;
        __this_02.fields.m_Object.fields._8_8_ = pIStack_68;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_02.fields.m_Array.fields._current = _Stack_38.genericMethod;
        SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar11 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar13,(MethodInfo *)0x0);
        __this_04 = pIVar11;
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar7 != '\0') && (pIVar11 != (Il2CppObject *)0x0)) {
          (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).methodPtr)
                    (pIVar11,(((SimpleJSONFixed_JSONNode_VTable *)pIVar11->klass->vtable)->_9_get_Value).
                             method);
          __this_04 = pIVar11;
        }
      }
    }
  }
label_0449a713:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae950 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057ae950 = '\x01';
  }
  lVar9 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  else {
    lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar10 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
  }
  __this_04[3].monitor = (void *)**(undefined8 **)(lVar9 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_04[3].monitor);
  lVar9 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  else {
    lVar10 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar10 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
  }
  __this_04[4].klass = (Il2CppClass *)**(undefined8 **)(lVar9 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_04 + 4);
  lVar9 = MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes);
    lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  else {
    lVar10 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData_Empty_AccountLoginRes + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar10 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar10 = il2cpp_runtime_helper_023009c0();
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  else {
    iVar3 = *(int *)(lVar10 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar9 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
  }
  __this_04[6].klass = (Il2CppClass *)**(undefined8 **)(lVar9 + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_04 + 6);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountLoginResponse$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse___ctor (ApplicationManagers_AccountLoginResponse_o* __this, const MethodInfo* method);
// 0x4499910

void ApplicationManagers_AccountLoginResponse___ctor
               (ApplicationManagers_AccountLoginResponse_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


