// Type: ApplicationManagers.AccountLoginResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/AccountLoginResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountLoginResponse.ProfileData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_ProfileData_o* ApplicationManagers_AccountLoginResponse_ProfileData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df6820

ApplicationManagers_AccountLoginResponse_ProfileData_o *
ApplicationManagers_AccountLoginResponse_ProfileData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar5;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar6;
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
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  System_DateTimeOffset_o SVar9;
  
  if (Il2CppMethodInitialized_07548325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountLoginResponse_ProfileData)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"oAuthLinks");
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"emailVerified");
    il2cpp_codegen_initialize_runtime_metadata(&"accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"createdAt");
    il2cpp_codegen_initialize_runtime_metadata(&"restriction");
    il2cpp_codegen_initialize_runtime_metadata(&"socials");
    il2cpp_codegen_initialize_runtime_metadata(&"photonUserId");
    il2cpp_codegen_initialize_runtime_metadata(&"avatarKey");
    il2cpp_codegen_initialize_runtime_metadata(&"hasPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"permissions");
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    il2cpp_codegen_initialize_runtime_metadata(&"roles");
    il2cpp_codegen_initialize_runtime_metadata(&"bannerKey");
    il2cpp_codegen_initialize_runtime_metadata(&"restrictionStatus");
    Il2CppMethodInitialized_07548325 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor(__this,method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"accountId",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
label_05df6d9e:
      ThrowNullReferenceException();
    }
    (__this->fields).AccountId = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AccountId);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"email",method_01);
    (__this->fields).Email = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Email);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"displayName",method_02);
    (__this->fields).DisplayName = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DisplayName);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"photonUserId",method_03);
    (__this->fields).PhotonUserId = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonUserId);
    bVar1 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"emailVerified",method_04);
    (__this->fields).EmailVerified = bVar1;
    bVar1 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"hasPassword",method_05);
    (__this->fields).HasPassword = bVar1;
    pSVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"roles",method_06);
    (__this->fields).Roles = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Roles);
    pSVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"permissions",method_07);
    (__this->fields).Permissions = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Permissions);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"restrictionStatus",method_08);
    (__this->fields).RestrictionStatus = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RestrictionStatus);
    pSVar2 = "restriction";
    if (Il2CppMethodInitialized_07548321 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07548321 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6d9e;
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,pSVar2,(node->klass->vtable)._28_HasKey.method);
      if (bVar1) {
        pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,pSVar2,(node->klass->vtable)._7_get_Item.method);
      }
      else {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
    }
    (__this->fields).Restriction = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Restriction);
    pMVar8 = (MethodInfo *)"patreon";
    if (Il2CppMethodInitialized_07548321 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07548321 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar7 = (MethodInfo *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6d9e;
      pMVar7 = pMVar8;
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,(System_String_o *)pMVar8,(node->klass->vtable)._28_HasKey.method);
      if (bVar1) {
        pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,(System_String_o *)pMVar8,(node->klass->vtable)._7_get_Item.method);
        pMVar7 = pMVar8;
      }
      else {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
    }
    pAVar5 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(pSVar4,pMVar7);
    (__this->fields).Patreon = pAVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Patreon);
    pMVar8 = (MethodInfo *)"oAuthLinks";
    if (Il2CppMethodInitialized_07548321 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07548321 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar7 = (MethodInfo *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6d9e;
      pMVar7 = pMVar8;
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,(System_String_o *)pMVar8,(node->klass->vtable)._28_HasKey.method);
      if (bVar1) {
        pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,(System_String_o *)pMVar8,(node->klass->vtable)._7_get_Item.method);
        pMVar7 = pMVar8;
      }
      else {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
    }
    pAVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(pSVar4,pMVar7);
    (__this->fields).OAuthLinks = pAVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OAuthLinks);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"description",method_09);
    (__this->fields).Description = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Description);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"avatarKey",method_10);
    (__this->fields).AvatarKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AvatarKey);
    pSVar2 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"bannerKey",method_11);
    (__this->fields).BannerKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).BannerKey);
    pSVar2 = "socials";
    if (Il2CppMethodInitialized_07548321 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_07548321 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6d9e;
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,pSVar2,(node->klass->vtable)._28_HasKey.method);
      if (bVar1) {
        pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,pSVar2,(node->klass->vtable)._7_get_Item.method);
      }
      else {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
    }
    (__this->fields).Socials = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Socials);
    SVar9 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                      (node,"createdAt",method_12);
    (__this->fields).CreatedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar9.fields._dateTime.fields._dateData.fields;
    (__this->fields).CreatedAt.fields._offsetMinutes = SVar9.fields._offsetMinutes;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df7580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df76d4: jmp 0x5df761f

bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (Il2CppMethodInitialized_07548326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548326 = '\x01';
    if (Il2CppMethodInitialized_07548321 != '\0') goto label_05df75a8;
label_05df767e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548321 == '\0') goto label_05df767e;
label_05df75a8:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df76d9;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df7612;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df7612:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(a->klass->vtable)._39_get_AsBool.methodPtr)(a,(a->klass->vtable)._39_get_AsBool.method);
    return bVar2;
  }
label_05df76d9:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_ProfileData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df7420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df7574: jmp 0x5df74bf

System_String_o *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548327 = '\x01';
    if (Il2CppMethodInitialized_07548321 != '\0') goto label_05df7448;
label_05df751e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548321 == '\0') goto label_05df751e;
label_05df7448:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df7579;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df74b2;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df74b2:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar3;
  }
label_05df7579:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df76e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df78ea: jmp 0x5df789b
// asm:   0x5df78ff: jmp 0x5df77ff
// asm:   0x5df797c: mov r14, rsp
// asm:   0x5df797f: lea rbp, [rip + 0x149efd2]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5df7986: jmp 0x5df79b9

System_String_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar9;
  System_String_o *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07548328 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548328 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (Il2CppMethodInitialized_07548321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df7adf;
    bVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar6) {
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df77f2;
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df77f2:
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05df7859:
    pMVar5 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar8 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar8);
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    return *(System_String_array **)pIVar8->static_fields;
  }
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                  (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) goto label_05df7859;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      capacity = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this,capacity,
                 (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
      (*(a->klass->vtable)._32_GetEnumerator.methodPtr)
                (&local_78,a,(a->klass->vtable)._32_GetEnumerator.method);
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar6) {
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          do {
            SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (System_String_o *)0x0;
            if (bVar6) {
              if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df7adf;
              item = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar9 = (__this->fields)._items;
            if (pSVar9 == (System_String_array *)0x0) goto label_05df7adf;
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar9->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar9->m_Items[(int)uVar4] = item;
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          } while (bVar6);
label_05df7a64:
          pSVar9 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this,
                              (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
          ;
          return pSVar9;
        }
        SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((bVar6) && (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        }
      }
      else if (__this != (System_Collections_Generic_List_string__o *)0x0) goto label_05df7a64;
    }
  }
label_05df7adf:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df7fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df81d1: jmp 0x5df8069

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_Fields SVar3;
  System_DateTimeOffset_o local_38;
  
  if (Il2CppMethodInitialized_07548329 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548329 = '\x01';
    if (Il2CppMethodInitialized_07548321 != '\0') goto label_05df7ff2;
label_05df8189:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548321 == '\0') goto label_05df8189;
label_05df7ff2:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df81d6;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df805c;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df805c:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if (!bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05df81d6:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if (!bVar2) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar2 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if (bVar2) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar3 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(&local_38,(MethodInfo *)0x0);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar3;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ParseOAuthLinks
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_array* ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df7cb0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df7e37: jmp 0x5df7de8
// asm:   0x5df7eb1: mov r14, rsp
// asm:   0x5df7eb4: lea rbp, [rip + 0x149fd5d]  ; MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_Add
// asm:   0x5df7ebb: jmp 0x5df7ee8

ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  bool bVar5;
  int32_t capacity;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754832a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData);
    Il2CppMethodInitialized_0754832a = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
label_05df7da6:
    pMVar9 = MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData;
    if ((MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData->field7_0x38).methodMetadataHandle
        == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
      pIVar6 = *(Il2CppClass **)((long)(pMVar9->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar6->_2).bitflags1;
    }
    else {
      pIVar6 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData->field7_0x38).
                       methodMetadataHandle + 0x10);
      bVar2 = (pIVar6->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
      uVar3 = (pIVar6->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar6->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar6);
      pIVar6 = (pMVar9->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar6->_2).bitflags1;
    }
    else {
      pIVar6 = (pMVar9->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar6->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    return *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_array **)pIVar6->static_fields;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(node->klass->vtable)._45_get_AsArray.methodPtr)(node,(node->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar5 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar5) goto label_05df7da6;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      capacity = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this,capacity,
                 (MethodInfo_395C990 *)
                 MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ctor);
      (*(a->klass->vtable)._32_GetEnumerator.methodPtr)
                (&local_78,a,(a->klass->vtable)._32_GetEnumerator.method);
      bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar5) {
        if (__this == (System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *)0x0) {
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)SVar10.fields.value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
          ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar7,pMVar9);
          ThrowNullReferenceException();
        }
        do {
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)SVar10.fields.value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
          item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar7,pMVar9);
          pMVar9 = MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pAVar8 = (__this->fields)._items;
          if (pAVar8 == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)0x0)
          goto label_05df7f7d;
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pAVar8->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pAVar8->m_Items[(int)uVar4] = item;
            Il2CppCodeGenWriteBarrier(pAVar8->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
          }
          bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        } while (bVar5);
      }
      else if (__this == (System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *)0x0)
      goto label_05df7f7d;
      pAVar8 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)
                          MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ToArray
                         );
      return pAVar8;
    }
  }
label_05df7f7d:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_ProfileData___ctor (ApplicationManagers_AccountLoginResponse_ProfileData_o* __this, const MethodInfo* method);
// 0x5df71c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df7373: jmp 0x5df723e
// asm:   0x5df73c4: jmp 0x5df729c
// asm:   0x5df7415: jmp 0x5df7301

void ApplicationManagers_AccountLoginResponse_ProfileData___ctor
               (ApplicationManagers_AccountLoginResponse_ProfileData_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_0754832b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_0754832b = '\x01';
  }
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)pIVar4 + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields).Roles = *(System_String_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Roles);
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)pIVar4 + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields).Permissions = *(System_String_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Permissions);
  pMVar3 = MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData;
  if ((MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData->field7_0x38).methodMetadataHandle ==
      (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData->field7_0x38).
                     methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields).OAuthLinks =
       *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OAuthLinks);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_PatreonData_o* ApplicationManagers_AccountLoginResponse_PatreonData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df7af0

ApplicationManagers_AccountLoginResponse_PatreonData_o *
ApplicationManagers_AccountLoginResponse_PatreonData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  System_DateTimeOffset_o SVar5;
  
  if (Il2CppMethodInitialized_0754832c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountLoginResponse_PatreonData)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    il2cpp_codegen_initialize_runtime_metadata(&"linked");
    il2cpp_codegen_initialize_runtime_metadata(&"28767500");
    il2cpp_codegen_initialize_runtime_metadata(&"entitledAmountCents");
    il2cpp_codegen_initialize_runtime_metadata(&"lastSyncedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    il2cpp_codegen_initialize_runtime_metadata(&"manualOverride");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    Il2CppMethodInitialized_0754832c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_PatreonData);
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor(__this,method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      (node,"linked",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).Linked = bVar1;
    pSVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
                       (node,"patronStatus",method_01);
    (__this->fields).PatronStatus = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).PatronStatus);
    pSVar4 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                       (node,"tierIds",method_02);
    (__this->fields).TierIds = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TierIds);
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this->fields).TierIds,"28767500",method_03);
    (__this->fields).HasTier2 = bVar1;
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this->fields).TierIds,"28767505",method_04);
    (__this->fields).HasTier3 = bVar1;
    iVar2 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                      (node,"entitledAmountCents",method_05);
    (__this->fields).EntitledAmountCents = iVar2;
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      (node,"manualOverride",method_06);
    (__this->fields).ManualOverride = bVar1;
    SVar5 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                      (node,"lastSyncedAt",method_07);
    (__this->fields).LastSyncedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar5.fields._dateTime.fields._dateData.fields;
    (__this->fields).LastSyncedAt.fields._offsetMinutes = SVar5.fields._offsetMinutes;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ToJsonNode
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x5df8ef0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode
          (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t n;
  undefined8 uVar2;
  undefined2 uVar3;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_String_array *pSVar6;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_o *pSVar7;
  ulong uVar8;
  System_DateTimeOffset_o left;
  
  if (Il2CppMethodInitialized_0754832d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"o");
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    il2cpp_codegen_initialize_runtime_metadata(&"linked");
    il2cpp_codegen_initialize_runtime_metadata(&"entitledAmountCents");
    il2cpp_codegen_initialize_runtime_metadata(&"lastSyncedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"manualOverride");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    Il2CppMethodInitialized_0754832d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  bVar4 = (__this->fields).Linked;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(bVar4,(MethodInfo *)0x0);
  if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
label_05df925e:
    ThrowNullReferenceException();
  }
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"linked",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  bVar4 = System_String__IsNullOrEmpty((__this->fields).PatronStatus,(MethodInfo *)0x0);
  if (!bVar4) {
    pSVar7 = (__this->fields).PatronStatus;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"patronStatus",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).TierIds;
  if (pSVar6 != (System_String_array *)0x0) {
    if (__this_01 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      uVar8 = 0;
      do {
        uVar1 = (uint)pSVar6->max_length;
        if ((long)(int)uVar1 <= (long)uVar8) goto label_05df90f8;
        if (uVar1 <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = pSVar6->m_Items[uVar8];
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._21_Add.methodPtr)
                  (__this_01,pSVar5,(__this_01->klass->vtable)._21_Add.method);
        uVar8 = uVar8 + 1;
        pSVar6 = (__this->fields).TierIds;
      } while (pSVar6 != (System_String_array *)0x0);
      goto label_05df925e;
    }
    if (0 < (int)pSVar6->max_length) {
      pSVar7 = pSVar6->m_Items[0];
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
label_05df90f8:
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"tierIds",(SimpleJSONFixed_JSONNode_o *)__this_01,
             (__this_00->klass->vtable)._8_set_Item.method);
  n = (__this->fields).EntitledAmountCents;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(n,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"entitledAmountCents",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5764070((__this->fields).ManualOverride,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"manualOverride",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  uVar2 = (__this->fields).LastSyncedAt.fields._dateTime;
  uVar3 = (__this->fields).LastSyncedAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar3;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar2;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  left.fields._10_6_ = 0;
  bVar4 = System_DateTimeOffset__op_Inequality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    pSVar7 = System_DateTimeOffset__ToString_549c560
                       (&(__this->fields).LastSyncedAt,"o",
                        (System_IFormatProvider_o *)formatProvider,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"lastSyncedAt",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df83f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df8544: jmp 0x5df848f

bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (Il2CppMethodInitialized_0754832e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_0754832e = '\x01';
    if (Il2CppMethodInitialized_07548333 != '\0') goto label_05df8418;
label_05df84ee:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548333 == '\0') goto label_05df84ee;
label_05df8418:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df8549;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df8482;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df8482:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(a->klass->vtable)._39_get_AsBool.methodPtr)(a,(a->klass->vtable)._39_get_AsBool.method);
    return bVar2;
  }
label_05df8549:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadInt
// il2cpp: int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df8b70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df8cc4: jmp 0x5df8c0f

int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                  (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (Il2CppMethodInitialized_0754832f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_0754832f = '\x01';
    if (Il2CppMethodInitialized_07548333 != '\0') goto label_05df8b98;
label_05df8c6e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548333 == '\0') goto label_05df8c6e;
label_05df8b98:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df8cc9;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df8c02;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df8c02:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return 0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar3 = (*(a->klass->vtable)._35_get_AsInt.methodPtr)(a,(a->klass->vtable)._35_get_AsInt.method);
    return iVar3;
  }
label_05df8cc9:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_PatreonData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df8550
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df86a4: jmp 0x5df85ef

System_String_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548330 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548330 = '\x01';
    if (Il2CppMethodInitialized_07548333 != '\0') goto label_05df8578;
label_05df864e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548333 == '\0') goto label_05df864e;
label_05df8578:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df86a9;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df85e2;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df85e2:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar3;
  }
label_05df86a9:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df86b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df88ba: jmp 0x5df886b
// asm:   0x5df88cf: jmp 0x5df87cf
// asm:   0x5df894c: mov r14, rsp
// asm:   0x5df894f: lea rbp, [rip + 0x149e002]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5df8956: jmp 0x5df8989

System_String_array *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar9;
  System_String_o *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07548331 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548331 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (Il2CppMethodInitialized_07548333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df8aaf;
    bVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar6) {
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df87c2;
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df87c2:
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05df8829:
    pMVar5 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar8 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar8);
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    return *(System_String_array **)pIVar8->static_fields;
  }
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                  (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) goto label_05df8829;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      capacity = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this,capacity,
                 (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
      (*(a->klass->vtable)._32_GetEnumerator.methodPtr)
                (&local_78,a,(a->klass->vtable)._32_GetEnumerator.method);
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar6) {
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          do {
            SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (System_String_o *)0x0;
            if (bVar6) {
              if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df8aaf;
              item = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar9 = (__this->fields)._items;
            if (pSVar9 == (System_String_array *)0x0) goto label_05df8aaf;
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar9->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar9->m_Items[(int)uVar4] = item;
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          } while (bVar6);
label_05df8a34:
          pSVar9 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this,
                              (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
          ;
          return pSVar9;
        }
        SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((bVar6) && (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        }
      }
      else if (__this != (System_Collections_Generic_List_string__o *)0x0) goto label_05df8a34;
    }
  }
label_05df8aaf:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df8cd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df8ee1: jmp 0x5df8d79

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_Fields SVar3;
  System_DateTimeOffset_o local_38;
  
  if (Il2CppMethodInitialized_07548332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548332 = '\x01';
    if (Il2CppMethodInitialized_07548333 != '\0') goto label_05df8d02;
label_05df8e99:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548333 == '\0') goto label_05df8e99;
label_05df8d02:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df8ee6;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df8d6c;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df8d6c:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if (!bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05df8ee6:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if (!bVar2) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar2 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if (bVar2) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar3 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(&local_38,(MethodInfo *)0x0);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar3;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df9290

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548333 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$HasTier
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x5df8ac0

bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
               (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  
  if ((tierIds != (System_String_array *)0x0) && (tierIds->max_length != 0)) {
    bVar2 = System_String__IsNullOrEmpty(targetTier,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    if (0 < (int)tierIds->max_length) {
      uVar3 = tierIds->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar3 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4 = tierIds->m_Items[uVar5];
        bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if (!bVar2) {
          if (pSVar4 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
          bVar2 = System_String__Equals_52ffe30(pSVar4,targetTier,4,(MethodInfo *)0x0);
          if (bVar2) {
            return true;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)tierIds->max_length;
        uVar3 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return false;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_PatreonData___ctor (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x5df8320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df83ed: jmp 0x5df8385

void ApplicationManagers_AccountLoginResponse_PatreonData___ctor
               (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_07548334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_07548334 = '\x01';
  }
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields).TierIds = *(System_String_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierIds);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df81e0

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_DateTimeOffset_o SVar3;
  
  if (Il2CppMethodInitialized_07548335 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&"provider");
    il2cpp_codegen_initialize_runtime_metadata(&"linkedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"providerUserId");
    il2cpp_codegen_initialize_runtime_metadata(&"providerEmail");
    Il2CppMethodInitialized_07548335 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"provider",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).Provider = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Provider);
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerUserId",method_01);
    (__this->fields).ProviderUserId = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ProviderUserId);
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerEmail",method_02);
    (__this->fields).ProviderEmail = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ProviderEmail);
    SVar3 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                      (node,"linkedAt",method_03);
    (__this->fields).LinkedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar3.fields._dateTime.fields._dateData.fields;
    (__this->fields).LinkedAt.fields._offsetMinutes = SVar3.fields._offsetMinutes;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df9340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df9436: jmp 0x5df93de

System_String_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548336 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548336 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df9438;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df93d1;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df93d1:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar3;
  }
label_05df9438:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df9440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df95f8: jmp 0x5df9504

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_Fields SVar3;
  System_DateTimeOffset_o local_38;
  
  if (Il2CppMethodInitialized_07548337 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548337 = '\x01';
  }
  local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_38.fields._offsetMinutes = 0;
  local_38.fields._10_6_ = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df95fd;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df94f7;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df94f7:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if (!bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05df95fd:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if (!bVar2) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar2 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if (bVar2) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar3 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(&local_38,(MethodInfo *)0x0);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar3;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* __this, const MethodInfo* method);
// 0x5df9330

void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor
               (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountLoginResponse__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df6200

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountLoginResponse__Parse(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_AccountLoginResponse_o *__this;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar4;
  System_DateTimeOffset_o SVar5;
  
  if (Il2CppMethodInitialized_07548320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountLoginResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"accessTokenExpiresAt");
    il2cpp_codegen_initialize_runtime_metadata(&"photonToken");
    il2cpp_codegen_initialize_runtime_metadata(&"profile");
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"accessToken");
    il2cpp_codegen_initialize_runtime_metadata(&"photonTokenExpiresAt");
    Il2CppMethodInitialized_07548320 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = ApplicationManagers_AccountLoginResponse__ReadString(node,"accessToken",method_00);
  if (__this == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
label_05df63e6:
    ThrowNullReferenceException();
  }
  (__this->fields).AccessToken = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccessToken);
  pSVar2 = ApplicationManagers_AccountLoginResponse__ReadString(node,"refreshToken",method_01);
  (__this->fields).RefreshToken = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RefreshToken);
  pSVar2 = ApplicationManagers_AccountLoginResponse__ReadString(node,"photonToken",method_02);
  (__this->fields).PhotonToken = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonToken);
  SVar5 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset(node,"accessTokenExpiresAt",method_03);
  (__this->fields).AccessTokenExpiresAt.fields._dateTime.fields._dateData =
       (uint64_t)SVar5.fields._dateTime.fields._dateData.fields;
  (__this->fields).AccessTokenExpiresAt.fields._offsetMinutes = SVar5.fields._offsetMinutes;
  SVar5 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
                    (node,"photonTokenExpiresAt",SVar5.fields._8_8_);
  (__this->fields).PhotonTokenExpiresAt.fields._dateTime.fields._dateData =
       (uint64_t)SVar5.fields._dateTime.fields._dateData.fields;
  (__this->fields).PhotonTokenExpiresAt.fields._offsetMinutes = SVar5.fields._offsetMinutes;
  pMVar4 = (MethodInfo *)"profile";
  if (Il2CppMethodInitialized_07548321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_04 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df63e6;
    method_04 = pMVar4;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,(System_String_o *)pMVar4,(node->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      node_00 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,(System_String_o *)pMVar4,(node->klass->vtable)._7_get_Item.method);
      method_04 = pMVar4;
    }
    else {
      node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    }
  }
  pAVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(node_00,method_04);
  (__this->fields).Profile = pAVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Profile);
  return __this;
}


// ApplicationManagers.AccountLoginResponse$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df6780

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      return pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df6400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df6554: jmp 0x5df649f

System_String_o *
ApplicationManagers_AccountLoginResponse__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548322 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548322 = '\x01';
    if (Il2CppMethodInitialized_07548321 != '\0') goto label_05df6428;
label_05df64fe:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548321 == '\0') goto label_05df64fe;
label_05df6428:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6559;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df6492;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df6492:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar3;
  }
label_05df6559:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df6560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df6771: jmp 0x5df6609

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_Fields SVar3;
  System_DateTimeOffset_o local_38;
  
  if (Il2CppMethodInitialized_07548323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548323 = '\x01';
    if (Il2CppMethodInitialized_07548321 != '\0') goto label_05df6592;
label_05df6729:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548321 == '\0') goto label_05df6729;
label_05df6592:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df6776;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df65fc;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df65fc:
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if (!bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05df6776:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if (!bVar2) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar2 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,(MethodInfo *)0x0);
      SVar3 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if (bVar2) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar3 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(&local_38,(MethodInfo *)0x0);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar3;
}


// ApplicationManagers.AccountLoginResponse$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5df6db0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df6fba: jmp 0x5df6f6b
// asm:   0x5df6fcf: jmp 0x5df6ecf
// asm:   0x5df704c: mov r14, rsp
// asm:   0x5df704f: lea rbp, [rip + 0x149f902]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5df7056: jmp 0x5df7089

System_String_array *
ApplicationManagers_AccountLoginResponse__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar9;
  System_String_o *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_07548324 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548324 = '\x01';
  }
  SStack_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.m_Array.fields._index = 0;
  SStack_78.m_Array.fields._version = 0;
  SStack_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_78.m_Object.fields._getEnumeratorRetType = 0;
  SStack_78.m_Object.fields._36_4_ = 0;
  SStack_78.m_Object.fields._version = 0;
  SStack_78.m_Object.fields._index = 0;
  SStack_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_78.type = 0;
  SStack_78._4_4_ = 0;
  SStack_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (Il2CppMethodInitialized_07548321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548321 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df71af;
    bVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (bVar6) {
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto label_05df6ec2;
    }
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05df6ec2:
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05df6f29:
    pMVar5 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar8 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar8->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar8);
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar8->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    return *(System_String_array **)pIVar8->static_fields;
  }
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                  (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) goto label_05df6f29;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      capacity = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this,capacity,
                 (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
      (*(a->klass->vtable)._32_GetEnumerator.methodPtr)
                (&SStack_78,a,(a->klass->vtable)._32_GetEnumerator.method);
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
      if (bVar6) {
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          do {
            SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
            bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (System_String_o *)0x0;
            if (bVar6) {
              if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df71af;
              item = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar9 = (__this->fields)._items;
            if (pSVar9 == (System_String_array *)0x0) goto label_05df71af;
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar9->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar9->m_Items[(int)uVar4] = item;
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
          } while (bVar6);
label_05df7134:
          pSVar9 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this,
                              (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
          ;
          return pSVar9;
        }
        SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((bVar6) && (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        }
      }
      else if (__this != (System_Collections_Generic_List_string__o *)0x0) goto label_05df7134;
    }
  }
label_05df71af:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse___ctor (ApplicationManagers_AccountLoginResponse_o* __this, const MethodInfo* method);
// 0x5df63f0

void ApplicationManagers_AccountLoginResponse___ctor
               (ApplicationManagers_AccountLoginResponse_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


