// Type: ApplicationManagers.AccountLoginResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountLoginResponse.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.AccountLoginResponse.ProfileData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_ProfileData_o* ApplicationManagers_AccountLoginResponse_ProfileData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4181d60

ApplicationManagers_AccountLoginResponse_ProfileData_o *
ApplicationManagers_AccountLoginResponse_ProfileData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  bool_conflict bVar3;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar7;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar8;
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
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  System_DateTimeOffset_o SVar11;
  
  if (DAT_05704b7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_ProfileData);
    il2cpp_init_method_metadata(&"patreon");
    il2cpp_init_method_metadata(&"oAuthLinks");
    il2cpp_init_method_metadata(&"email");
    il2cpp_init_method_metadata(&"displayName");
    il2cpp_init_method_metadata(&"emailVerified");
    il2cpp_init_method_metadata(&"accountId");
    il2cpp_init_method_metadata(&"createdAt");
    il2cpp_init_method_metadata(&"restriction");
    il2cpp_init_method_metadata(&"socials");
    il2cpp_init_method_metadata(&"photonUserId");
    il2cpp_init_method_metadata(&"avatarKey");
    il2cpp_init_method_metadata(&"hasPassword");
    il2cpp_init_method_metadata(&"permissions");
    il2cpp_init_method_metadata(&"description");
    il2cpp_init_method_metadata(&"roles");
    il2cpp_init_method_metadata(&"bannerKey");
    il2cpp_init_method_metadata(&"restrictionStatus");
    DAT_05704b7e = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_ProfileData_o *)
           il2cpp_runtime_glue(TypeInfo_ProfileData);
  ApplicationManagers_AccountLoginResponse_ProfileData___ctor(__this,method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"accountId",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
LAB_041822de:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).AccountId = pSVar4;
    il2cpp_runtime_glue(&__this->fields,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"email",method_01);
    (__this->fields).Email = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).Email,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"displayName",method_02);
    (__this->fields).DisplayName = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).DisplayName,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"photonUserId",method_03);
    (__this->fields).PhotonUserId = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).PhotonUserId,pSVar4);
    bVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"emailVerified",method_04);
    *(char *)&(__this->fields).EmailVerified = (char)bVar3;
    bVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"hasPassword",method_05);
    *(char *)((long)&(__this->fields).EmailVerified + 1) = (char)bVar3;
    pSVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"roles",method_06);
    (__this->fields).Roles = pSVar5;
    il2cpp_runtime_glue(&(__this->fields).Roles,pSVar5);
    pSVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"permissions",method_07);
    (__this->fields).Permissions = pSVar5;
    il2cpp_runtime_glue(&(__this->fields).Permissions,pSVar5);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"restrictionStatus",method_08);
    (__this->fields).RestrictionStatus = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).RestrictionStatus);
    uVar1 = "restriction";
    if (DAT_05704b7a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_05704b7a = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041822de;
      cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,uVar1,(node->klass->vtable)._28_HasKey.method);
      if (cVar2 == '\0') {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,uVar1,(node->klass->vtable)._7_get_Item.method);
      }
    }
    (__this->fields).Restriction = pSVar6;
    il2cpp_runtime_glue(&(__this->fields).Restriction);
    pMVar10 = "patreon";
    if (DAT_05704b7a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_05704b7a = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar9 = (MethodInfo *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041822de;
      pMVar9 = pMVar10;
      cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,pMVar10,(node->klass->vtable)._28_HasKey.method);
      if (cVar2 == '\0') {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,pMVar10,(node->klass->vtable)._7_get_Item.method);
        pMVar9 = pMVar10;
      }
    }
    pAVar7 = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(pSVar6,pMVar9);
    (__this->fields).Patreon = pAVar7;
    il2cpp_runtime_glue(&(__this->fields).Patreon);
    pMVar10 = "oAuthLinks";
    if (DAT_05704b7a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_05704b7a = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pMVar9 = (MethodInfo *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041822de;
      pMVar9 = pMVar10;
      cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,pMVar10,(node->klass->vtable)._28_HasKey.method);
      if (cVar2 == '\0') {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,pMVar10,(node->klass->vtable)._7_get_Item.method);
        pMVar9 = pMVar10;
      }
    }
    pAVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(pSVar6,pMVar9);
    (__this->fields).OAuthLinks = pAVar8;
    il2cpp_runtime_glue(&(__this->fields).OAuthLinks,pAVar8);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"description",method_09);
    (__this->fields).Description = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).Description,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"avatarKey",method_10);
    (__this->fields).AvatarKey = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).AvatarKey,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"bannerKey",method_11);
    (__this->fields).BannerKey = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).BannerKey);
    uVar1 = "socials";
    if (DAT_05704b7a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_05704b7a = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041822de;
      cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,uVar1,(node->klass->vtable)._28_HasKey.method);
      if (cVar2 == '\0') {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,uVar1,(node->klass->vtable)._7_get_Item.method);
      }
    }
    (__this->fields).Socials = pSVar6;
    il2cpp_runtime_glue(&(__this->fields).Socials,pSVar6);
    SVar11 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                       (node,"createdAt",method_12);
    (__this->fields).CreatedAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar11.fields._dateTime.fields._dateData.fields;
    (__this->fields).CreatedAt.fields._offsetMinutes = SVar11.fields._offsetMinutes;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4182b00

bool_conflict
ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (DAT_05704b7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7f = '\x01';
    if (DAT_05704b7a != '\0') goto LAB_04182b28;
LAB_04182bfe:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b7a == '\0') goto LAB_04182bfe;
LAB_04182b28:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04182b92:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04182c59;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04182b92;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(a->klass->vtable)._39_get_AsBool.methodPtr)
                      (a,(a->klass->vtable)._39_get_AsBool.method);
    return bVar3;
  }
LAB_04182c59:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_ProfileData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x41829a0

System_String_o *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar4;
  
  if (DAT_05704b80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b80 = '\x01';
    if (DAT_05704b7a != '\0') goto LAB_041829c8;
LAB_04182a9e:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b7a == '\0') goto LAB_04182a9e;
LAB_041829c8:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04182a32:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04182af9;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04182a32;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar4;
  }
LAB_04182af9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4182c60

/* WARNING: Type propagation algorithm not settling */

System_String_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
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
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long lVar9;
  long lVar10;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *pSVar11;
  Il2CppObject *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704b81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704b81 = '\x01';
  }
  if (DAT_05704b7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
LAB_04182d75:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041830a3;
    cVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar6 != '\0') {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04182d75;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
LAB_04182ddc:
    lVar9 = MethodInfo_String___Empty_String;
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0(lVar9);
    }
    return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)(pSVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto LAB_04182ddc;
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      capacity = (*(pSVar8->klass->vtable)._11_get_Count.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._11_get_Count.method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_03,capacity,MethodInfo_List_1_System_String);
      (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
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
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_04183025;
      }
      else {
        pIVar13 = local_78;
        pIVar14 = pIStack_70;
        pIVar15 = local_68;
        pcVar16 = pcStack_60;
        pIVar17 = local_58;
        pIVar18 = pIStack_50;
        ppIVar19 = local_48;
        _Var20 = _Stack_40;
        _Var21 = local_38;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_01.fields._0_8_ = pIVar13;
            __this_01.fields.m_Object.fields._8_8_ = pIVar15;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_01.fields.m_Object.fields._32_8_ = pIVar18;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_01.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var21.genericMethod;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
            bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                              (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (Il2CppObject *)0x0;
            if ((char)bVar7 != '\0') {
              if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041830a3;
              item = (Il2CppObject *)
                     (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
            }
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_03->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_041830a3;
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = item;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_03,item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
              ;
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_00.fields._0_8_ = pIVar13;
            __this_00.fields.m_Object.fields._8_8_ = pIVar15;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_00.fields.m_Object.fields._32_8_ = pIVar18;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_00.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var21.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar7 != '\0');
LAB_04183025:
          pSVar11 = (System_String_array *)
                    System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
          return pSVar11;
        }
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
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar7 != '\0') && (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        }
      }
    }
  }
LAB_041830a3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x41835d0

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  System_DateTimeOffset_Fields SVar4;
  System_DateTimeOffset_o __this;
  System_DateTimeOffset_o local_38;
  
  if (DAT_05704b82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b82 = '\x01';
    if (DAT_05704b7a != '\0') goto LAB_04183602;
LAB_04183799:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b7a == '\0') goto LAB_04183799;
LAB_04183602:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_0418366c:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041837e6;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_0418366c;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041837e6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,
                         (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX;
        }
        __this.fields._8_8_ = 0;
        __this.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar4 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(__this,method_00);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar4;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ParseOAuthLinks
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_array* ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4183270

/* WARNING: Type propagation algorithm not settling */

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
  bool_conflict bVar6;
  int32_t capacity;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  long lVar8;
  long lVar9;
  System_Collections_Generic_List_object__o *__this_03;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar10;
  MethodInfo *pMVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704b83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AccountLoginResponse_OAuthLinkData___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_ApplicationManagers_AccountLoginResponse);
    il2cpp_init_method_metadata(&TypeInfo_List_OAuthLinkData);
    DAT_05704b83 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
LAB_04183369:
    lVar8 = MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou;
    if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou);
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar9 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar9 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar8 + 0x135);
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar8 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar8 = il2cpp_glue_022c28b0(lVar8);
    }
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
           **(undefined8 **)(lVar8 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)(*(node->klass->vtable)._45_get_AsArray.methodPtr)(node);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto LAB_04183369;
    if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      capacity = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_OAuthLinkData);
      System_Collections_Generic_List<object>___ctor(__this_03,capacity,MethodInfo_List_1_ApplicationManagers_AccountLoginResponse);
      (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
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
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar6 == '\0') {
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04183581;
      }
      else {
        pIVar13 = local_78;
        pIVar14 = pIStack_70;
        pIVar15 = local_68;
        pcVar16 = pcStack_60;
        pIVar17 = local_58;
        pIVar18 = pIStack_50;
        ppIVar19 = local_48;
        _Var20 = _Stack_40;
        _Var21 = local_38;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
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
          SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          pMVar11 = (MethodInfo *)SVar12.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
          ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar7,pMVar11);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
          __this_01.fields._0_8_ = pIVar13;
          __this_01.fields.m_Object.fields._8_8_ = pIVar15;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
          __this_01.fields.m_Object.fields._32_8_ = pIVar18;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
          __this_01.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
          __this_01.fields.m_Array.fields._current = _Var21.genericMethod;
          SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
          pMVar11 = (MethodInfo *)SVar12.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
          item = ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse(pSVar7,pMVar11);
          lVar8 = MethodInfo_Void_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_03->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto LAB_04183581;
          uVar4 = (__this_03->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_03->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_03,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
          __this_00.fields._0_8_ = pIVar13;
          __this_00.fields.m_Object.fields._8_8_ = pIVar15;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
          __this_00.fields.m_Object.fields._32_8_ = pIVar18;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
          __this_00.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
          __this_00.fields.m_Array.fields._current = _Var21.genericMethod;
          bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar6 != '\0');
      }
      pAVar10 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
                System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_AccountLoginResponse_OAuthLinkData___ToArray);
      return pAVar10;
    }
  }
LAB_04183581:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_ProfileData___ctor (ApplicationManagers_AccountLoginResponse_ProfileData_o* __this, const MethodInfo* method);
// 0x4182740

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_AccountLoginResponse_ProfileData___ctor
               (ApplicationManagers_AccountLoginResponse_ProfileData_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05704b84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou);
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    DAT_05704b84 = '\x01';
  }
  lVar3 = MethodInfo_String___Empty_String;
  if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  (__this->fields).Roles = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Roles);
  lVar3 = MethodInfo_String___Empty_String;
  if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  (__this->fields).Permissions = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Permissions);
  lVar3 = MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou;
  if (*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_AccountLoginResponse_OAuthLinkData___Empty_Accou + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  (__this->fields).OAuthLinks =
       (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
       **(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).OAuthLinks);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_PatreonData_o* ApplicationManagers_AccountLoginResponse_PatreonData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41830b0

ApplicationManagers_AccountLoginResponse_PatreonData_o *
ApplicationManagers_AccountLoginResponse_PatreonData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
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
  
  if (DAT_05704b85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_PatreonData);
    il2cpp_init_method_metadata(&"tierIds");
    il2cpp_init_method_metadata(&"linked");
    il2cpp_init_method_metadata(&"28767500");
    il2cpp_init_method_metadata(&"entitledAmountCents");
    il2cpp_init_method_metadata(&"lastSyncedAt");
    il2cpp_init_method_metadata(&"28767505");
    il2cpp_init_method_metadata(&"manualOverride");
    il2cpp_init_method_metadata(&"patronStatus");
    DAT_05704b85 = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_PatreonData_o *)
           il2cpp_runtime_glue(TypeInfo_PatreonData);
  ApplicationManagers_AccountLoginResponse_PatreonData___ctor(__this,method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      (node,"linked",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(char *)&(__this->fields).Linked = (char)bVar1;
    pSVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
                       (node,"patronStatus",method_01);
    (__this->fields).PatronStatus = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).PatronStatus,pSVar3);
    pSVar4 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                       (node,"tierIds",method_02);
    (__this->fields).TierIds = pSVar4;
    il2cpp_runtime_glue(&(__this->fields).TierIds,pSVar4);
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this->fields).TierIds,"28767500",method_03);
    *(char *)&(__this->fields).HasTier2 = (char)bVar1;
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                      ((__this->fields).TierIds,"28767505",method_04);
    *(char *)((long)&(__this->fields).HasTier2 + 1) = (char)bVar1;
    iVar2 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                      (node,"entitledAmountCents",method_05);
    (__this->fields).EntitledAmountCents = iVar2;
    bVar1 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                      (node,"manualOverride",method_06);
    *(char *)&(__this->fields).ManualOverride = (char)bVar1;
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
// 0x4184560

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode
          (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t n;
  undefined8 uVar2;
  undefined2 uVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_String_array *pSVar6;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar7;
  ulong uVar8;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (DAT_05704b86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"o");
    il2cpp_init_method_metadata(&"tierIds");
    il2cpp_init_method_metadata(&"linked");
    il2cpp_init_method_metadata(&"entitledAmountCents");
    il2cpp_init_method_metadata(&"lastSyncedAt");
    il2cpp_init_method_metadata(&"manualOverride");
    il2cpp_init_method_metadata(&"patronStatus");
    DAT_05704b86 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  bVar4 = (__this->fields).Linked;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((uint)(byte)bVar4,(MethodInfo *)0x0);
  if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
LAB_041848df:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"linked",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  bVar4 = System_String__IsNullOrEmpty((__this->fields).PatronStatus,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pSVar7 = (__this->fields).PatronStatus;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"patronStatus",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  }
  __this_01 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).TierIds;
  if (pSVar6 != (System_String_array *)0x0) {
    if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      if (0 < (int)pSVar6->max_length) {
        pSVar7 = pSVar6->m_Items[0];
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      uVar8 = 0;
      uVar1 = (uint)pSVar6->max_length;
      if (0 < (int)uVar1) {
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar7 = pSVar6->m_Items[uVar8];
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._21_Add.methodPtr)
                    (__this_01,pSVar5,(__this_01->klass->vtable)._21_Add.method);
          uVar8 = uVar8 + 1;
          pSVar6 = (__this->fields).TierIds;
          if (pSVar6 == (System_String_array *)0x0) goto LAB_041848df;
          uVar1 = (uint)pSVar6->max_length;
        } while ((long)uVar8 < (long)(int)uVar1);
      }
    }
  }
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"tierIds",__this_01,(__this_00->klass->vtable)._8_set_Item.method);
  n = (__this->fields).EntitledAmountCents;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
            (__this_00,"entitledAmountCents",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit
                     ((uint)(byte)(__this->fields).ManualOverride,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._8_set_Item.methodPtr)(__this_00,"manualOverride",pSVar5);
  uVar2 = (__this->fields).LastSyncedAt.fields._dateTime;
  uVar3 = (__this->fields).LastSyncedAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar3;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar2;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  left.fields._10_6_ = 0;
  bVar4 = System_DateTimeOffset__op_Inequality
                    (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02.fields._8_8_ = "o";
    __this_02.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(__this->fields).LastSyncedAt;
    pSVar7 = System_DateTimeOffset__ToString
                       (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,
                        method_00);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"lastSyncedAt",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4183a00

bool_conflict
ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (DAT_05704b87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b87 = '\x01';
    if (DAT_05704b8c != '\0') goto LAB_04183a28;
LAB_04183afe:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b8c == '\0') goto LAB_04183afe;
LAB_04183a28:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04183a92:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04183b59;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04183a92;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(a->klass->vtable)._39_get_AsBool.methodPtr)
                      (a,(a->klass->vtable)._39_get_AsBool.method);
    return bVar3;
  }
LAB_04183b59:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadInt
// il2cpp: int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x41841e0

int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                  (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (DAT_05704b88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b88 = '\x01';
    if (DAT_05704b8c != '\0') goto LAB_04184208;
LAB_041842de:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b8c == '\0') goto LAB_041842de;
LAB_04184208:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04184272:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184339;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04184272;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar4 = (*(a->klass->vtable)._35_get_AsInt.methodPtr)(a,(a->klass->vtable)._35_get_AsInt.method)
    ;
    return iVar4;
  }
LAB_04184339:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_PatreonData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4183b60

System_String_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar4;
  
  if (DAT_05704b89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b89 = '\x01';
    if (DAT_05704b8c != '\0') goto LAB_04183b88;
LAB_04183c5e:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b8c == '\0') goto LAB_04183c5e;
LAB_04183b88:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04183bf2:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04183cb9;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04183bf2;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar4;
  }
LAB_04183cb9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4183cc0

/* WARNING: Type propagation algorithm not settling */

System_String_array *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
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
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long lVar9;
  long lVar10;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *pSVar11;
  Il2CppObject *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704b8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704b8a = '\x01';
  }
  if (DAT_05704b8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
LAB_04183dd5:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184103;
    cVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar6 != '\0') {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04183dd5;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
LAB_04183e3c:
    lVar9 = MethodInfo_String___Empty_String;
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0(lVar9);
    }
    return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)(pSVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto LAB_04183e3c;
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      capacity = (*(pSVar8->klass->vtable)._11_get_Count.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._11_get_Count.method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_03,capacity,MethodInfo_List_1_System_String);
      (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
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
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_04184085;
      }
      else {
        pIVar13 = local_78;
        pIVar14 = pIStack_70;
        pIVar15 = local_68;
        pcVar16 = pcStack_60;
        pIVar17 = local_58;
        pIVar18 = pIStack_50;
        ppIVar19 = local_48;
        _Var20 = _Stack_40;
        _Var21 = local_38;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_01.fields._0_8_ = pIVar13;
            __this_01.fields.m_Object.fields._8_8_ = pIVar15;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_01.fields.m_Object.fields._32_8_ = pIVar18;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_01.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var21.genericMethod;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
            bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                              (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (Il2CppObject *)0x0;
            if ((char)bVar7 != '\0') {
              if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184103;
              item = (Il2CppObject *)
                     (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
            }
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_03->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_04184103;
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = item;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_03,item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
              ;
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_00.fields._0_8_ = pIVar13;
            __this_00.fields.m_Object.fields._8_8_ = pIVar15;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_00.fields.m_Object.fields._32_8_ = pIVar18;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_00.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var21.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar7 != '\0');
LAB_04184085:
          pSVar11 = (System_String_array *)
                    System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
          return pSVar11;
        }
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
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar7 != '\0') && (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        }
      }
    }
  }
LAB_04184103:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4184340

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  System_DateTimeOffset_Fields SVar4;
  System_DateTimeOffset_o __this;
  System_DateTimeOffset_o local_38;
  
  if (DAT_05704b8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8b = '\x01';
    if (DAT_05704b8c != '\0') goto LAB_04184372;
LAB_04184509:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b8c == '\0') goto LAB_04184509;
LAB_04184372:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_041843dc:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184556;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_041843dc;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_04184556:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,
                         (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX;
        }
        __this.fields._8_8_ = 0;
        __this.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar4 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(__this,method_00);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar4;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4184910

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (DAT_05704b8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8c = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      vtable_dispatch = (node->klass->vtable)._7_get_Item.methodPtr;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*vtable_dispatch)
                         (node,key,(node->klass->vtable)._7_get_Item.method,vtable_dispatch);
      return pSVar3;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$HasTier
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x4184110

bool_conflict
ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
          (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  uint uVar1;
  System_String_o *value;
  bool_conflict bVar2;
  System_String_o *a;
  ulong uVar3;
  
  if ((tierIds != (System_String_array *)0x0) && (tierIds->max_length != 0)) {
    bVar2 = System_String__IsNullOrEmpty(targetTier,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return 0;
    }
    if (0 < (int)tierIds->max_length) {
      uVar3 = 0;
      if ((tierIds->max_length & 0xffffffff) != 0) {
        do {
          value = tierIds->m_Items[uVar3];
          bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            a = System_String__Trim(value,(MethodInfo *)0x0);
            bVar2 = System_String__Equals(a,targetTier,4,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (bool_conflict)CONCAT71((int7)((ulong)value >> 8),1);
            }
          }
          uVar3 = uVar3 + 1;
          uVar1 = (uint)tierIds->max_length;
          if ((long)(int)uVar1 <= (long)uVar3) {
            return 0;
          }
        } while (uVar3 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_PatreonData___ctor (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x4183930

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_AccountLoginResponse_PatreonData___ctor
               (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05704b8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    DAT_05704b8d = '\x01';
  }
  lVar3 = MethodInfo_String___Empty_String;
  if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  (__this->fields).TierIds = (System_String_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).TierIds);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41837f0

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_DateTimeOffset_o SVar3;
  
  if (DAT_05704b8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_OAuthLinkData);
    il2cpp_init_method_metadata(&"provider");
    il2cpp_init_method_metadata(&"linkedAt");
    il2cpp_init_method_metadata(&"providerUserId");
    il2cpp_init_method_metadata(&"providerEmail");
    DAT_05704b8e = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)
           il2cpp_runtime_glue(TypeInfo_OAuthLinkData);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"provider",method_00);
    if (__this == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).Provider = pSVar2;
    il2cpp_runtime_glue(&__this->fields,pSVar2);
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerUserId",method_01);
    (__this->fields).ProviderUserId = pSVar2;
    il2cpp_runtime_glue(&(__this->fields).ProviderUserId,pSVar2);
    pSVar2 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerEmail",method_02);
    (__this->fields).ProviderEmail = pSVar2;
    il2cpp_runtime_glue(&(__this->fields).ProviderEmail,pSVar2);
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
// 0x41849c0

System_String_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar4;
  
  if (DAT_05704b8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b8f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04184a51:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184ab8;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04184a51;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar4;
  }
LAB_04184ab8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4184ac0

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  System_DateTimeOffset_Fields SVar4;
  System_DateTimeOffset_o __this;
  System_DateTimeOffset_o local_38;
  
  if (DAT_05704b90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b90 = '\x01';
  }
  local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_38.fields._offsetMinutes = 0;
  local_38.fields._10_6_ = 0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04184b77:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04184c7d;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04184b77;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_04184c7d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,
                         (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX;
        }
        __this.fields._8_8_ = 0;
        __this.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar4 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(__this,method_00);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar4;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* __this, const MethodInfo* method);
// 0x41849b0

void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor
               (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountLoginResponse__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4181740

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountLoginResponse__Parse(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  ApplicationManagers_AccountLoginResponse_o *__this;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar5;
  System_DateTimeOffset_o SVar6;
  
  if (DAT_05704b79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountLoginResponse);
    il2cpp_init_method_metadata(&"accessTokenExpiresAt");
    il2cpp_init_method_metadata(&"photonToken");
    il2cpp_init_method_metadata(&"profile");
    il2cpp_init_method_metadata(&"refreshToken");
    il2cpp_init_method_metadata(&"accessToken");
    il2cpp_init_method_metadata(&"photonTokenExpiresAt");
    DAT_05704b79 = '\x01';
  }
  __this = (ApplicationManagers_AccountLoginResponse_o *)il2cpp_runtime_glue(TypeInfo_AccountLoginResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"accessToken",method_00);
  if (__this != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    (__this->fields).AccessToken = pSVar3;
    il2cpp_runtime_glue(&__this->fields,pSVar3);
    pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"refreshToken",method_01);
    (__this->fields).RefreshToken = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).RefreshToken,pSVar3);
    pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"photonToken",method_02);
    (__this->fields).PhotonToken = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).PhotonToken,pSVar3);
    SVar6 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
                      (node,"accessTokenExpiresAt",method_03);
    (__this->fields).AccessTokenExpiresAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar6.fields._dateTime.fields._dateData.fields;
    (__this->fields).AccessTokenExpiresAt.fields._offsetMinutes = SVar6.fields._offsetMinutes;
    SVar6 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
                      (node,"photonTokenExpiresAt",SVar6.fields._8_8_);
    (__this->fields).PhotonTokenExpiresAt.fields._dateTime.fields._dateData =
         (uint64_t)SVar6.fields._dateTime.fields._dateData.fields;
    (__this->fields).PhotonTokenExpiresAt.fields._offsetMinutes = SVar6.fields._offsetMinutes;
    pMVar5 = "profile";
    if (DAT_05704b7a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      DAT_05704b7a = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    method_04 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04181926;
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
    il2cpp_runtime_glue(&(__this->fields).Profile,pAVar4);
    return __this;
  }
LAB_04181926:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4181cc0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (DAT_05704b7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      vtable_dispatch = (node->klass->vtable)._7_get_Item.methodPtr;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*vtable_dispatch)
                         (node,key,(node->klass->vtable)._7_get_Item.method,vtable_dispatch);
      return pSVar3;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4181940

System_String_o *
ApplicationManagers_AccountLoginResponse__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar4;
  
  if (DAT_05704b7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7b = '\x01';
    if (DAT_05704b7a != '\0') goto LAB_04181968;
LAB_04181a3e:
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b7a == '\0') goto LAB_04181a3e;
LAB_04181968:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_041819d2:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04181a99;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_041819d2;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)0x0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
    return pSVar4;
  }
LAB_04181a99:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x4181aa0

System_DateTimeOffset_o
ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  System_DateTimeOffset_Fields SVar4;
  System_DateTimeOffset_o __this;
  System_DateTimeOffset_o local_38;
  
  if (DAT_05704b7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7c = '\x01';
    if (DAT_05704b7a != '\0') goto LAB_04181ad2;
LAB_04181c69:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (DAT_05704b7a == '\0') goto LAB_04181c69;
LAB_04181ad2:
    local_38.fields._offsetMinutes = 0;
    local_38.fields._10_6_ = 0;
    local_38.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_04181b3c:
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04181cb6;
    cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04181b3c;
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_04181cb6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_38,
                         (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      SVar4 = (System_DateTimeOffset_Fields)ZEXT816(0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX;
        }
        __this.fields._8_8_ = 0;
        __this.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&local_38;
        SVar4 = (System_DateTimeOffset_Fields)
                System_DateTimeOffset__ToUniversalTime(__this,method_00);
      }
    }
  }
  return (System_DateTimeOffset_o)SVar4;
}


// ApplicationManagers.AccountLoginResponse$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x41822f0

/* WARNING: Type propagation algorithm not settling */

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
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long lVar9;
  long lVar10;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *pSVar11;
  Il2CppObject *item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_05704b7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704b7d = '\x01';
  }
  if (DAT_05704b7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704b7a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
LAB_04182405:
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04182733;
    cVar6 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar6 != '\0') {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      goto LAB_04182405;
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
LAB_0418246c:
    lVar9 = MethodInfo_String___Empty_String;
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0(lVar9);
    }
    return (System_String_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)(pSVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto LAB_0418246c;
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      capacity = (*(pSVar8->klass->vtable)._11_get_Count.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._11_get_Count.method);
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_03,capacity,MethodInfo_List_1_System_String);
      (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                (&pIStack_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
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
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_041826b5;
      }
      else {
        pIVar13 = pIStack_78;
        pIVar14 = pIStack_70;
        pIVar15 = pIStack_68;
        pcVar16 = pcStack_60;
        pIVar17 = pIStack_58;
        pIVar18 = pIStack_50;
        ppIVar19 = ppIStack_48;
        _Var20 = _Stack_40;
        _Var21 = _Stack_38;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_01.fields._0_8_ = pIVar13;
            __this_01.fields.m_Object.fields._8_8_ = pIVar15;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_01.fields.m_Object.fields._32_8_ = pIVar18;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_01.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var21.genericMethod;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
            bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                              (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            item = (Il2CppObject *)0x0;
            if ((char)bVar7 != '\0') {
              if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04182733;
              item = (Il2CppObject *)
                     (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
            }
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_03->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_04182733;
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = item;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_03,item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
              ;
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
            __this_00.fields._0_8_ = pIVar13;
            __this_00.fields.m_Object.fields._8_8_ = pIVar15;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
            __this_00.fields.m_Object.fields._32_8_ = pIVar18;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19
            ;
            __this_00.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var21.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar7 != '\0');
LAB_041826b5:
          pSVar11 = (System_String_array *)
                    System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
          return pSVar11;
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
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (((char)bVar7 != '\0') && (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        }
      }
    }
  }
LAB_04182733:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountLoginResponse$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse___ctor (ApplicationManagers_AccountLoginResponse_o* __this, const MethodInfo* method);
// 0x4181930

void ApplicationManagers_AccountLoginResponse___ctor
               (ApplicationManagers_AccountLoginResponse_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


