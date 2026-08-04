// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (System_String_o* json, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x44c3150

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
          (System_String_o *json,ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,
          System_String_o **error,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *node;
  
  if (g_data_057aeab9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"empty_response");
    g_data_057aeab9 = '\x01';
  }
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_helper_022b4080(profile);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(error);
  bVar2 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  pSVar1 = "empty_response";
  if ((char)bVar2 == '\0') {
    node = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar2 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_43c32c0
                      (node,profile,error,method);
  }
  else {
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    bVar2 = 0;
    il2cpp_runtime_helper_022b4080(profile,0);
    *error = pSVar1;
    il2cpp_runtime_helper_022b4080(error,pSVar1);
  }
  return bVar2;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x44c32c0

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_43c32c0
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,
          System_String_o **error,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  Il2CppMethodPointer vtableDispatch;
  SimpleJSONFixed_JSONNode_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_DateTimeOffset_o createdAt;
  char cVar10;
  bool_conflict bVar11;
  undefined8 *puVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  System_Globalization_CultureInfo_o *formatProvider;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this;
  long *plVar18;
  Il2CppMethodPointer *ppIVar19;
  System_Object_array *pSVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar21;
  undefined8 extraout_RDX_01;
  int iVar22;
  long lVar23;
  long lVar24;
  System_DateTimeOffset_o SVar25;
  undefined1 auVar26 [12];
  long lStackY_128;
  MethodInfo *in_stack_ffffffffffffff60;
  System_DateTimeOffset_o local_98;
  System_String_o *local_88;
  System_String_o *local_80;
  System_String_array *local_78;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_DateTime_Fields local_58;
  int16_t iStack_50;
  undefined6 uStack_4e;
  System_Guid_Fields local_48;
  
  if (g_data_057aeaba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"bad_response");
    il2cpp_runtime_helper_023445d0(&"bad_display_name");
    il2cpp_runtime_helper_023445d0(&"characterInfo");
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"createdAt");
    il2cpp_runtime_helper_023445d0(&"characterName");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    g_data_057aeaba = '\x01';
  }
  local_98.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_98.fields._offsetMinutes = 0;
  local_98.fields._10_6_ = 0;
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_helper_022b4080(profile);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(error);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = node;
  bVar11 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    puVar12 = &"bad_response";
    goto label_044c34b3;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar21 = "accountId";
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    pSVar14 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar13,pMVar21);
    bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if (((char)bVar11 != '\0') ||
       (bVar11 = System_Guid__TryParse(pSVar14,(System_Guid_o *)&local_48,(MethodInfo *)0x0),
       (char)bVar11 == '\0')) {
      puVar12 = &"bad_account_id";
label_044c34b3:
      pSVar14 = (System_String_o *)*puVar12;
      *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
      il2cpp_runtime_helper_022b4080(profile,0);
      *error = pSVar14;
      il2cpp_runtime_helper_022b4080(error,pSVar14);
      return 0;
    }
    pMVar21 = "displayName";
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"displayName",(node->klass->vtable)._7_get_Item.method);
    pSVar15 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar13,pMVar21);
    bVar11 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      puVar12 = &"bad_display_name";
      goto label_044c34b3;
    }
    local_98.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    local_98.fields._offsetMinutes = 0;
    local_98.fields._10_6_ = 0;
    pMVar21 = "createdAt";
    local_60 = pSVar15;
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"createdAt",(node->klass->vtable)._7_get_Item.method);
    pSVar15 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar13,pMVar21);
    bVar11 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_DateTimeOffset__TryParse
                (pSVar15,(System_IFormatProvider_o *)formatProvider,0x80,&local_98,(MethodInfo *)0x0);
    }
    pMVar21 = "characterName";
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"characterName",(node->klass->vtable)._7_get_Item.method);
    pSVar15 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed(pSVar13,pMVar21);
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    if (g_data_057aeabb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057aeabb = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = (System_String_o *)0x0;
    pSVar13 = pSVar16;
    bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_044c3646:
      pMVar21 = "roles";
      local_70 = pSVar17;
      local_68 = pSVar15;
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"roles",(node->klass->vtable)._7_get_Item.method);
      local_78 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray(pSVar13,pMVar21);
      pMVar21 = "description";
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"description",(node->klass->vtable)._7_get_Item.method);
      local_80 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed(pSVar13,pMVar21)
      ;
      pMVar21 = "avatarKey";
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"avatarKey",(node->klass->vtable)._7_get_Item.method);
      local_88 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed(pSVar13,pMVar21)
      ;
      pMVar21 = "bannerKey";
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"bannerKey",(node->klass->vtable)._7_get_Item.method);
      pSVar15 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed(pSVar13,pMVar21);
      pMVar21 = extraout_RDX;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar21 = extraout_RDX_00;
      }
      SVar25.fields._8_8_ = 0;
      SVar25.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_98;
      SVar25 = System_DateTimeOffset__ToUniversalTime(SVar25,pMVar21);
      __this = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgPublicProfile);
      iStack_50 = SVar25.fields._offsetMinutes;
      createdAt.fields._10_6_ = uStack_4e;
      createdAt.fields._offsetMinutes = iStack_50;
      createdAt.fields._dateTime.fields._dateData = SVar25.fields._dateTime.fields._dateData.fields;
      local_58 = SVar25.fields._dateTime.fields._dateData.fields;
      ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
                (__this,pSVar14,local_60,local_68,local_70,local_78,local_80,local_88,pSVar15,createdAt,
                 in_stack_ffffffffffffff60);
      *profile = __this;
      il2cpp_runtime_helper_022b4080(profile,__this);
      return (bool_conflict)CONCAT71(SVar25.fields._dateTime.fields._dateData._1_7_,1);
    }
    if (pSVar16 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      cVar10 = (*(pSVar16->klass->vtable)._15_get_IsNull.methodPtr)
                         (pSVar16,(pSVar16->klass->vtable)._15_get_IsNull.method);
      if (cVar10 == '\0') {
        pSVar17 = (System_String_o *)
                  (*(pSVar16->klass->vtable)._3_ToString.methodPtr)
                            (pSVar16,(pSVar16->klass->vtable)._3_ToString.method);
      }
      else {
        pSVar17 = (System_String_o *)0x0;
      }
      goto label_044c3646;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeabe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabe = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = pSVar13;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_044c3804:
    return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar13 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar10 = (*(pSVar13->klass->vtable)._15_get_IsNull.methodPtr)
                       (pSVar13,(pSVar13->klass->vtable)._15_get_IsNull.method);
    if (cVar10 != '\0') goto label_044c3804;
    pSVar14 = (System_String_o *)(*(pSVar13->klass->vtable)._9_get_Value.methodPtr)();
    if ((pSVar14 != (System_String_o *)0x0) ||
       (pSVar14 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar16 = pSVar13,
       pSVar14 != (System_String_o *)0x0)) {
      pSVar14 = System_String__Trim(pSVar14,(MethodInfo *)0x0);
      return (bool_conflict)pSVar14;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeabd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = pSVar16;
  bVar11 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeabb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057aeabb = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = pSVar13;
      bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aeabc == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            g_data_057aeabc = '\x01';
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if (pSVar16 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              cVar10 = (*(pSVar16->klass->vtable)._16_get_IsArray.methodPtr)
                                 (pSVar16,(pSVar16->klass->vtable)._16_get_IsArray.method);
              if (cVar10 == '\0') goto label_044c3b15;
              profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o **)
                        il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)profile,MethodInfo_List_1_System_String);
              plVar18 = (long *)(*(pSVar16->klass->vtable)._27_get_Children.methodPtr)
                                          (pSVar16,(pSVar16->klass->vtable)._27_get_Children.method);
              if (plVar18 != (long *)0x0) {
                lVar24 = *plVar18;
                if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IEnumerable_JSONNode) {
                      puVar12 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138
                                );
                      goto label_044c3bc5;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
                }
                puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IEnumerable_JSONNode,0);
label_044c3bc5:
                node = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar12)(plVar18,puVar12[1]);
                if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044c3e10;
                lStackY_128 = 0;
label_044c3c1a:
                do {
                  pSVar8 = node->klass;
                  uVar3._0_1_ = (pSVar8->_2).rank;
                  uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
                  if ((ulong)uVar3 != 0) {
                    pIVar9 = (pSVar8->_1).interfaceOffsets;
                    lVar24 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar24) == TypeInfo_IEnumerator) {
                        ppIVar19 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar24)].
                                    methodPtr;
                        goto label_044c3c73;
                      }
                      lVar24 = lVar24 + 0x10;
                    } while ((ulong)uVar3 << 4 != lVar24);
                  }
                  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(node,TypeInfo_IEnumerator,0);
label_044c3c73:
                  bVar11 = (**ppIVar19)(node,(MethodInfo *)ppIVar19[1]);
                  if ((char)bVar11 == '\0') {
                    iVar22 = 6;
                    goto label_044c3d5a;
                  }
                  pSVar8 = node->klass;
                  uVar4._0_1_ = (pSVar8->_2).rank;
                  uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
                  if ((ulong)uVar4 != 0) {
                    pIVar9 = (pSVar8->_1).interfaceOffsets;
                    lVar24 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar24) == TypeInfo_IEnumerator_JSONNode) {
                        ppIVar19 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar24)].
                                    methodPtr;
                        goto label_044c3ce3;
                      }
                      lVar24 = lVar24 + 0x10;
                    } while ((ulong)uVar4 << 4 != lVar24);
                  }
                  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(node,TypeInfo_IEnumerator_JSONNode,0);
label_044c3ce3:
                  pMVar21 = (MethodInfo *)ppIVar19[1];
                  pSVar13 = (SimpleJSONFixed_JSONNode_o *)(**ppIVar19)(node);
                  pSVar14 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                                      (pSVar13,pMVar21);
                  bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
                  lVar24 = MethodInfo_Void_Add;
                } while ((char)bVar11 != '\0');
                if ((System_Collections_Generic_List_object__o *)profile !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(((System_Collections_Generic_List_object__o *)profile)->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (((System_Collections_Generic_List_object__o *)profile)->fields)._items;
                  if (pSVar20 == (System_Object_array *)0x0) goto label_044c3e06;
                  uVar7 = (((System_Collections_Generic_List_object__o *)profile)->fields)._size;
                  if (uVar7 < (uint)pSVar20->max_length) {
                    (((System_Collections_Generic_List_object__o *)profile)->fields)._size = uVar7 + 1;
                    pSVar20->m_Items[(int)uVar7] = (Il2CppObject *)pSVar14;
                    il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar7,pSVar14);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)profile,(Il2CppObject *)pSVar14,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                  }
                  goto label_044c3c1a;
                }
                il2cpp_runtime_helper_022b2c90();
label_044c3e06:
                il2cpp_runtime_helper_022b2c90();
              }
            }
            do {
              il2cpp_runtime_helper_022b2c90();
label_044c3e10:
              il2cpp_runtime_helper_022b2c90();
              do {
                auVar26 = il2cpp_runtime_helper_022fefe0();
                iVar22 = 0;
                if (auVar26._8_4_ != 1) {
                  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044c3ef6;
                  pSVar8 = node->klass;
                  uVar6._0_1_ = (pSVar8->_2).rank;
                  uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
                  if ((ulong)uVar6 == 0) goto label_044c3ecf;
                  pIVar9 = (pSVar8->_1).interfaceOffsets;
                  lVar24 = 0;
                  goto label_044c3ec0;
                }
                plVar18 = (long *)__cxa_begin_catch();
                lStackY_128 = *plVar18;
                bVar11 = __cxa_end_catch();
label_044c3d5a:
                if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  pSVar8 = node->klass;
                  uVar5._0_1_ = (pSVar8->_2).rank;
                  uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
                  if ((ulong)uVar5 != 0) {
                    pIVar9 = (pSVar8->_1).interfaceOffsets;
                    lVar24 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar24) == TypeInfo_IDisposable) {
                        ppIVar19 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar24)].
                                    methodPtr;
                        goto label_044c3dbd;
                      }
                      lVar24 = lVar24 + 0x10;
                    } while ((ulong)uVar5 << 4 != lVar24);
                  }
                  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(node,TypeInfo_IDisposable,0);
label_044c3dbd:
                  bVar11 = (**ppIVar19)(node,(MethodInfo *)ppIVar19[1]);
                }
              } while (lStackY_128 != 0);
              if ((iVar22 != 6) && (iVar22 != 0)) {
                return bVar11;
              }
              if ((System_Collections_Generic_List_object__o *)profile !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pSVar20 = System_Collections_Generic_List_object___ToArray
                                    ((System_Collections_Generic_List_object__o *)profile,MethodInfo_String_ToArray);
                return (bool_conflict)pSVar20;
              }
            } while( true );
          }
label_044c3b15:
          lVar24 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar23 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar23 + 0x135);
          }
          else {
            lVar23 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar23 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar23 = il2cpp_runtime_helper_023009c0();
            iVar22 = *(int *)(lVar23 + 0xe4);
          }
          else {
            iVar22 = *(int *)(lVar23 + 0xe4);
          }
          if (iVar22 == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar24 + 0x135);
          }
          else {
            lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar24 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar24 = il2cpp_runtime_helper_023009c0(lVar24);
          }
          return (bool_conflict)**(undefined8 **)(lVar24 + 0xb8);
        }
        cVar10 = (*(pSVar13->klass->vtable)._15_get_IsNull.methodPtr)
                           (pSVar13,(pSVar13->klass->vtable)._15_get_IsNull.method);
        if (cVar10 == '\0') {
          vtableDispatch = (pSVar13->klass->vtable)._3_ToString.methodPtr;
          bVar11 = (*vtableDispatch)
                             (pSVar13,(pSVar13->klass->vtable)._3_ToString.method,extraout_RDX_01,
                              vtableDispatch);
          return bVar11;
        }
      }
      return 0;
    }
    pMVar21 = (pSVar16->klass->vtable)._15_get_IsNull.method;
    cVar10 = (*(pSVar16->klass->vtable)._15_get_IsNull.methodPtr)(pSVar16);
    if (cVar10 == '\0') {
      pSVar14 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar16,pMVar21);
      bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        pSVar14 = (System_String_o *)0x0;
      }
      return (bool_conflict)pSVar14;
    }
  }
  return 0;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar6 << 4 != lVar24) {
label_044c3ec0:
    if (*(long *)((long)&pIVar9->interfaceType + lVar24) == TypeInfo_IDisposable) {
      ppIVar19 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar9->offset + lVar24)].methodPtr;
      goto label_044c3eed;
    }
  }
label_044c3ecf:
  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(node,TypeInfo_IDisposable,0);
label_044c3eed:
  (**ppIVar19)(node,(MethodInfo *)ppIVar19[1]);
label_044c3ef6:
  _Unwind_Resume(auVar26._0_8_);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$RawJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c3910

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppMethodPointer vtableDispatch;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Object_array *pSVar11;
  undefined8 extraout_RDX;
  int iVar12;
  MethodInfo *method_00;
  long lVar13;
  long *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined1 auVar14 [12];
  long lStack_40;
  
  if (g_data_057aeabb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabb = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = node;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeabc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057aeabc = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          cVar4 = (*(pSVar10->klass->vtable)._16_get_IsArray.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._16_get_IsArray.method);
          if (cVar4 == '\0') goto label_044c3b15;
          unaff_R14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor(unaff_R14,MethodInfo_List_1_System_String);
          plVar7 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                     (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method);
          if (plVar7 != (long *)0x0) {
            lVar9 = *plVar7;
            if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
              lVar13 = 0;
              do {
                if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IEnumerable_JSONNode) {
                  puVar8 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) * 0x10 + lVar9 + 0x138);
                  goto label_044c3bc5;
                }
                lVar13 = lVar13 + 0x10;
              } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
            }
            puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerable_JSONNode,0);
label_044c3bc5:
            unaff_R13 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            if (unaff_R13 == (long *)0x0) goto label_044c3e10;
            lStack_40 = 0;
label_044c3c1a:
            do {
              lVar9 = *unaff_R13;
              if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                lVar13 = 0;
                do {
                  if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                    puVar8 = (undefined8 *)
                             ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) * 0x10 + lVar9 + 0x138);
                    goto label_044c3c73;
                  }
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
              }
              puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044c3c73:
              pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
              if ((char)pSVar6 == '\0') {
                iVar12 = 6;
                goto label_044c3d5a;
              }
              lVar9 = *unaff_R13;
              if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                lVar13 = 0;
                do {
                  if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IEnumerator_JSONNode) {
                    puVar8 = (undefined8 *)
                             ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) * 0x10 + lVar9 + 0x138);
                    goto label_044c3ce3;
                  }
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
              }
              puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044c3ce3:
              method_00 = (MethodInfo *)puVar8[1];
              pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(unaff_R13);
              pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar10,method_00)
              ;
              bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
              lVar9 = MethodInfo_Void_Add;
            } while ((char)bVar5 != '\0');
            if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(unaff_R14->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar11 = (unaff_R14->fields)._items;
              if (pSVar11 == (System_Object_array *)0x0) goto label_044c3e06;
              uVar3 = (unaff_R14->fields)._size;
              if (uVar3 < (uint)pSVar11->max_length) {
                (unaff_R14->fields)._size = uVar3 + 1;
                pSVar11->m_Items[(int)uVar3] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar3,pSVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (unaff_R14,(Il2CppObject *)pSVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              goto label_044c3c1a;
            }
            il2cpp_runtime_helper_022b2c90();
label_044c3e06:
            il2cpp_runtime_helper_022b2c90();
          }
        }
        do {
          il2cpp_runtime_helper_022b2c90();
label_044c3e10:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar14 = il2cpp_runtime_helper_022fefe0();
            iVar12 = 0;
            if (auVar14._8_4_ != 1) {
              if (unaff_R13 == (long *)0x0) goto label_044c3ef6;
              lVar9 = *unaff_R13;
              if ((ulong)*(ushort *)(lVar9 + 0x12e) == 0) goto label_044c3ecf;
              lVar13 = 0;
              goto label_044c3ec0;
            }
            plVar7 = (long *)__cxa_begin_catch();
            lStack_40 = *plVar7;
            pSVar6 = (System_String_o *)__cxa_end_catch();
label_044c3d5a:
            if (unaff_R13 != (long *)0x0) {
              lVar9 = *unaff_R13;
              if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                lVar13 = 0;
                do {
                  if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
                    puVar8 = (undefined8 *)
                             (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
                    goto label_044c3dbd;
                  }
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
              }
              puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3dbd:
              pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
            }
          } while (lStack_40 != 0);
          if ((iVar12 != 6) && (iVar12 != 0)) {
            return pSVar6;
          }
          if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar11 = System_Collections_Generic_List_object___ToArray(unaff_R14,MethodInfo_String_ToArray);
            return (System_String_o *)pSVar11;
          }
        } while( true );
      }
label_044c3b15:
      lVar9 = MethodInfo_String_Empty_String;
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      else {
        lVar13 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        bVar2 = *(byte *)(lVar13 + 0x135);
      }
      if ((bVar2 & 1) == 0) {
        lVar13 = il2cpp_runtime_helper_023009c0();
        iVar12 = *(int *)(lVar13 + 0xe4);
      }
      else {
        iVar12 = *(int *)(lVar13 + 0xe4);
      }
      if (iVar12 == 0) {
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
      return (System_String_o *)**(undefined8 **)(lVar9 + 0xb8);
    }
    cVar4 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (cVar4 == '\0') {
      vtableDispatch = (node->klass->vtable)._3_ToString.methodPtr;
      pSVar6 = (System_String_o *)
               (*vtableDispatch)
                         (node,(node->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
      return pSVar6;
    }
  }
  return (System_String_o *)0x0;
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13) {
label_044c3ec0:
    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)(lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto label_044c3eed;
    }
  }
label_044c3ecf:
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3eed:
  (*(code *)*puVar8)(unaff_R13,puVar8[1]);
label_044c3ef6:
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$StringArray
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c39a0

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  System_String_array *pSVar10;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *value;
  int iVar11;
  MethodInfo *method_00;
  long lVar12;
  long *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined1 auVar13 [12];
  long local_38;
  
  if (g_data_057aeabc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aeabc = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      cVar5 = (*(node->klass->vtable)._16_get_IsArray.methodPtr)
                        (node,(node->klass->vtable)._16_get_IsArray.method);
      if (cVar5 == '\0') goto label_044c3b15;
      unaff_R14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(unaff_R14,MethodInfo_List_1_System_String);
      plVar7 = (long *)(*(node->klass->vtable)._27_get_Children.methodPtr)
                                 (node,(node->klass->vtable)._27_get_Children.method);
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
              puVar8 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) * 0x10 + lVar9 + 0x138);
              goto label_044c3bc5;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerable_JSONNode,0);
label_044c3bc5:
        unaff_R13 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (unaff_R13 == (long *)0x0) goto label_044c3e10;
        local_38 = 0;
label_044c3c1a:
        do {
          lVar9 = *unaff_R13;
          if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                puVar8 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) * 0x10 + lVar9 + 0x138);
                goto label_044c3c73;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044c3c73:
          pSVar10 = (System_String_array *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
          if ((char)pSVar10 == '\0') {
            iVar11 = 6;
            goto label_044c3d5a;
          }
          lVar9 = *unaff_R13;
          if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
                puVar8 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) * 0x10 + lVar9 + 0x138);
                goto label_044c3ce3;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044c3ce3:
          method_00 = (MethodInfo *)puVar8[1];
          node_00 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(unaff_R13);
          value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(node_00,method_00);
          bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
        } while ((char)bVar6 != '\0');
        if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(unaff_R14->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (unaff_R14->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_044c3e06;
          uVar3 = (unaff_R14->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (unaff_R14->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)value;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,value);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (unaff_R14,(Il2CppObject *)value,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          goto label_044c3c1a;
        }
        il2cpp_runtime_helper_022b2c90();
label_044c3e06:
        il2cpp_runtime_helper_022b2c90();
      }
    }
    do {
      il2cpp_runtime_helper_022b2c90();
label_044c3e10:
      il2cpp_runtime_helper_022b2c90();
      do {
        auVar13 = il2cpp_runtime_helper_022fefe0();
        iVar11 = 0;
        if (auVar13._8_4_ != 1) {
          if (unaff_R13 == (long *)0x0) goto label_044c3ef6;
          lVar9 = *unaff_R13;
          if ((ulong)*(ushort *)(lVar9 + 0x12e) == 0) goto label_044c3ecf;
          lVar12 = 0;
          goto label_044c3ec0;
        }
        plVar7 = (long *)__cxa_begin_catch();
        local_38 = *plVar7;
        pSVar10 = (System_String_array *)__cxa_end_catch();
label_044c3d5a:
        if (unaff_R13 != (long *)0x0) {
          lVar9 = *unaff_R13;
          if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
                puVar8 = (undefined8 *)
                         (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
                goto label_044c3dbd;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3dbd:
          pSVar10 = (System_String_array *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
        }
      } while (local_38 != 0);
      if ((iVar11 != 6) && (iVar11 != 0)) {
        return pSVar10;
      }
      if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar10 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray(unaff_R14,MethodInfo_String_ToArray);
        return pSVar10;
      }
    } while( true );
  }
label_044c3b15:
  lVar9 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0();
    iVar11 = *(int *)(lVar12 + 0xe4);
  }
  else {
    iVar11 = *(int *)(lVar12 + 0xe4);
  }
  if (iVar11 == 0) {
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
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12) {
label_044c3ec0:
    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)(lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto label_044c3eed;
    }
  }
label_044c3ecf:
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3eed:
  (*(code *)*puVar8)(unaff_R13,puVar8[1]);
label_044c3ef6:
  _Unwind_Resume(auVar13._0_8_);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$NullableTrimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c3870

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppMethodPointer vtableDispatch;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Object_array *pSVar11;
  undefined8 extraout_RDX;
  int iVar12;
  MethodInfo *pMVar13;
  SimpleJSONFixed_JSONNode_o *a;
  long lVar14;
  long *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined1 auVar15 [12];
  long lStack_58;
  
  if (g_data_057aeabd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = node;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeabb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057aeabb = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a = pSVar10;
      bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aeabc == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            g_data_057aeabc = '\x01';
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
              cVar4 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)
                                (a,(a->klass->vtable)._16_get_IsArray.method);
              if (cVar4 == '\0') goto label_044c3b15;
              unaff_R14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(unaff_R14,MethodInfo_List_1_System_String);
              plVar7 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                         (a,(a->klass->vtable)._27_get_Children.method);
              if (plVar7 != (long *)0x0) {
                lVar9 = *plVar7;
                if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                  lVar14 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
                      puVar8 = (undefined8 *)
                               ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138);
                      goto label_044c3bc5;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                }
                puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerable_JSONNode,0);
label_044c3bc5:
                unaff_R13 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                if (unaff_R13 == (long *)0x0) goto label_044c3e10;
                lStack_58 = 0;
label_044c3c1a:
                do {
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
                        puVar8 = (undefined8 *)
                                 ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138)
                        ;
                        goto label_044c3c73;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044c3c73:
                  pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
                  if ((char)pSVar6 == '\0') {
                    iVar12 = 6;
                    goto label_044c3d5a;
                  }
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
                        puVar8 = (undefined8 *)
                                 ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138)
                        ;
                        goto label_044c3ce3;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044c3ce3:
                  pMVar13 = (MethodInfo *)puVar8[1];
                  pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(unaff_R13);
                  pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                                     (pSVar10,pMVar13);
                  bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
                  lVar9 = MethodInfo_Void_Add;
                } while ((char)bVar5 != '\0');
                if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(unaff_R14->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar11 = (unaff_R14->fields)._items;
                  if (pSVar11 == (System_Object_array *)0x0) goto label_044c3e06;
                  uVar3 = (unaff_R14->fields)._size;
                  if (uVar3 < (uint)pSVar11->max_length) {
                    (unaff_R14->fields)._size = uVar3 + 1;
                    pSVar11->m_Items[(int)uVar3] = (Il2CppObject *)pSVar6;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar3,pSVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (unaff_R14,(Il2CppObject *)pSVar6,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  goto label_044c3c1a;
                }
                il2cpp_runtime_helper_022b2c90();
label_044c3e06:
                il2cpp_runtime_helper_022b2c90();
              }
            }
            do {
              il2cpp_runtime_helper_022b2c90();
label_044c3e10:
              il2cpp_runtime_helper_022b2c90();
              do {
                auVar15 = il2cpp_runtime_helper_022fefe0();
                iVar12 = 0;
                if (auVar15._8_4_ != 1) {
                  if (unaff_R13 == (long *)0x0) goto label_044c3ef6;
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) == 0) goto label_044c3ecf;
                  lVar14 = 0;
                  goto label_044c3ec0;
                }
                plVar7 = (long *)__cxa_begin_catch();
                lStack_58 = *plVar7;
                pSVar6 = (System_String_o *)__cxa_end_catch();
label_044c3d5a:
                if (unaff_R13 != (long *)0x0) {
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
                        puVar8 = (undefined8 *)
                                 (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + 0x138)
                        ;
                        goto label_044c3dbd;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3dbd:
                  pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
                }
              } while (lStack_58 != 0);
              if ((iVar12 != 6) && (iVar12 != 0)) {
                return pSVar6;
              }
              if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
                pSVar11 = System_Collections_Generic_List_object___ToArray(unaff_R14,MethodInfo_String_ToArray);
                return (System_String_o *)pSVar11;
              }
            } while( true );
          }
label_044c3b15:
          lVar9 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar14 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar14 + 0x135);
          }
          else {
            lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar14 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar14 = il2cpp_runtime_helper_023009c0();
            iVar12 = *(int *)(lVar14 + 0xe4);
          }
          else {
            iVar12 = *(int *)(lVar14 + 0xe4);
          }
          if (iVar12 == 0) {
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
          return (System_String_o *)**(undefined8 **)(lVar9 + 0xb8);
        }
        cVar4 = (*(pSVar10->klass->vtable)._15_get_IsNull.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._15_get_IsNull.method);
        if (cVar4 == '\0') {
          vtableDispatch = (pSVar10->klass->vtable)._3_ToString.methodPtr;
          pSVar6 = (System_String_o *)
                   (*vtableDispatch)
                             (pSVar10,(pSVar10->klass->vtable)._3_ToString.method,extraout_RDX,
                              vtableDispatch);
          return pSVar6;
        }
      }
      return (System_String_o *)0x0;
    }
    pMVar13 = (node->klass->vtable)._15_get_IsNull.method;
    cVar4 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)(node);
    if (cVar4 == '\0') {
      pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(node,pMVar13);
      bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar6 = (System_String_o *)0x0;
      }
      return pSVar6;
    }
  }
  return (System_String_o *)0x0;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14) {
label_044c3ec0:
    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)(lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_044c3eed;
    }
  }
label_044c3ecf:
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3eed:
  (*(code *)*puVar8)(unaff_R13,puVar8[1]);
label_044c3ef6:
  _Unwind_Resume(auVar15._0_8_);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c37a0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppMethodPointer vtableDispatch;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Object_array *pSVar11;
  undefined8 extraout_RDX;
  int iVar12;
  MethodInfo *pMVar13;
  SimpleJSONFixed_JSONNode_o *a;
  long lVar14;
  long *unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  undefined1 auVar15 [12];
  long lStack_60;
  
  if (g_data_057aeabe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabe = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = node;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_044c3804:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar4 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (cVar4 != '\0') goto label_044c3804;
    pSVar6 = (System_String_o *)(*(node->klass->vtable)._9_get_Value.methodPtr)();
    if ((pSVar6 != (System_String_o *)0x0) ||
       (pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar10 = node,
       pSVar6 != (System_String_o *)0x0)) {
      pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeabd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeabd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = pSVar10;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeabb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057aeabb = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = a;
      bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aeabc == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            g_data_057aeabc = '\x01';
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              cVar4 = (*(pSVar10->klass->vtable)._16_get_IsArray.methodPtr)
                                (pSVar10,(pSVar10->klass->vtable)._16_get_IsArray.method);
              if (cVar4 == '\0') goto label_044c3b15;
              unaff_R14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              System_Collections_Generic_List_object____ctor(unaff_R14,MethodInfo_List_1_System_String);
              plVar7 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                         (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method);
              if (plVar7 != (long *)0x0) {
                lVar9 = *plVar7;
                if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                  lVar14 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
                      puVar8 = (undefined8 *)
                               ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138);
                      goto label_044c3bc5;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                }
                puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerable_JSONNode,0);
label_044c3bc5:
                unaff_R13 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                if (unaff_R13 == (long *)0x0) goto label_044c3e10;
                lStack_60 = 0;
label_044c3c1a:
                do {
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
                        puVar8 = (undefined8 *)
                                 ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138)
                        ;
                        goto label_044c3c73;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044c3c73:
                  pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
                  if ((char)pSVar6 == '\0') {
                    iVar12 = 6;
                    goto label_044c3d5a;
                  }
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
                        puVar8 = (undefined8 *)
                                 ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + lVar9 + 0x138)
                        ;
                        goto label_044c3ce3;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044c3ce3:
                  pMVar13 = (MethodInfo *)puVar8[1];
                  pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(unaff_R13);
                  pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                                     (pSVar10,pMVar13);
                  bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
                  lVar9 = MethodInfo_Void_Add;
                } while ((char)bVar5 != '\0');
                if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(unaff_R14->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar11 = (unaff_R14->fields)._items;
                  if (pSVar11 == (System_Object_array *)0x0) goto label_044c3e06;
                  uVar3 = (unaff_R14->fields)._size;
                  if (uVar3 < (uint)pSVar11->max_length) {
                    (unaff_R14->fields)._size = uVar3 + 1;
                    pSVar11->m_Items[(int)uVar3] = (Il2CppObject *)pSVar6;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar3,pSVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (unaff_R14,(Il2CppObject *)pSVar6,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  goto label_044c3c1a;
                }
                il2cpp_runtime_helper_022b2c90();
label_044c3e06:
                il2cpp_runtime_helper_022b2c90();
              }
            }
            do {
              il2cpp_runtime_helper_022b2c90();
label_044c3e10:
              il2cpp_runtime_helper_022b2c90();
              do {
                auVar15 = il2cpp_runtime_helper_022fefe0();
                iVar12 = 0;
                if (auVar15._8_4_ != 1) {
                  if (unaff_R13 == (long *)0x0) goto label_044c3ef6;
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) == 0) goto label_044c3ecf;
                  lVar14 = 0;
                  goto label_044c3ec0;
                }
                plVar7 = (long *)__cxa_begin_catch();
                lStack_60 = *plVar7;
                pSVar6 = (System_String_o *)__cxa_end_catch();
label_044c3d5a:
                if (unaff_R13 != (long *)0x0) {
                  lVar9 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                    lVar14 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
                        puVar8 = (undefined8 *)
                                 (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + 0x138)
                        ;
                        goto label_044c3dbd;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14);
                  }
                  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3dbd:
                  pSVar6 = (System_String_o *)(*(code *)*puVar8)(unaff_R13,puVar8[1]);
                }
              } while (lStack_60 != 0);
              if ((iVar12 != 6) && (iVar12 != 0)) {
                return pSVar6;
              }
              if (unaff_R14 != (System_Collections_Generic_List_object__o *)0x0) {
                pSVar11 = System_Collections_Generic_List_object___ToArray(unaff_R14,MethodInfo_String_ToArray);
                return (System_String_o *)pSVar11;
              }
            } while( true );
          }
label_044c3b15:
          lVar9 = MethodInfo_String_Empty_String;
          if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
            lVar14 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar14 + 0x135);
          }
          else {
            lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
            bVar2 = *(byte *)(lVar14 + 0x135);
          }
          if ((bVar2 & 1) == 0) {
            lVar14 = il2cpp_runtime_helper_023009c0();
            iVar12 = *(int *)(lVar14 + 0xe4);
          }
          else {
            iVar12 = *(int *)(lVar14 + 0xe4);
          }
          if (iVar12 == 0) {
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
          return (System_String_o *)**(undefined8 **)(lVar9 + 0xb8);
        }
        cVar4 = (*(a->klass->vtable)._15_get_IsNull.methodPtr)(a,(a->klass->vtable)._15_get_IsNull.method);
        if (cVar4 == '\0') {
          vtableDispatch = (a->klass->vtable)._3_ToString.methodPtr;
          pSVar6 = (System_String_o *)
                   (*vtableDispatch)
                             (a,(a->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
          return pSVar6;
        }
      }
      return (System_String_o *)0x0;
    }
    pMVar13 = (pSVar10->klass->vtable)._15_get_IsNull.method;
    cVar4 = (*(pSVar10->klass->vtable)._15_get_IsNull.methodPtr)(pSVar10);
    if (cVar4 == '\0') {
      pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar10,pMVar13);
      bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar6 = (System_String_o *)0x0;
      }
      return pSVar6;
    }
  }
  return (System_String_o *)0x0;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar14) {
label_044c3ec0:
    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)(lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_044c3eed;
    }
  }
label_044c3ecf:
  puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044c3eed:
  (*(code *)*puVar8)(unaff_R13,puVar8[1]);
label_044c3ef6:
  _Unwind_Resume(auVar15._0_8_);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Fail
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail (ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, System_String_o* value, const MethodInfo* method);
// 0x44c3290

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
          System_String_o *value,MethodInfo *method)

{
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_helper_022b4080(profile,0);
  *error = value;
  il2cpp_runtime_helper_022b4080(error,value);
  return 0;
}


