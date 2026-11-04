// Type: ApplicationManagers.AccountLoginResponse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountLoginResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountLoginResponse.ProfileData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_ProfileData_o* ApplicationManagers_AccountLoginResponse_ProfileData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18233d5f0

ApplicationManagers_AccountLoginResponse_ProfileData_o *
ApplicationManagers_AccountLoginResponse_ProfileData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  bool bVar3;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *__this;
  System_String_array *pSVar4;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *value;
  System_DateTimeOffset_o *pSVar8;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347875 == '\0') {
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
    Il2CppMethodInitialized_184347875 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_ProfileData);
  if (Il2CppMethodInitialized_18434787b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_18434787b = '\x01';
  }
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).Roles = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Roles,pSVar4);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).Permissions = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Permissions,pSVar4);
  pAVar5 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
  (__this->fields).OAuthLinks = pAVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OAuthLinks,pAVar5);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"accountId",(MethodInfo *)0x0);
    (__this->fields).AccountId = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AccountId,pSVar6);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"email",(MethodInfo *)0x0);
    (__this->fields).Email = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Email,pSVar6);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"displayName",(MethodInfo *)0x0);
    (__this->fields).DisplayName = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DisplayName,pSVar6);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"photonUserId",(MethodInfo *)0x0);
    (__this->fields).PhotonUserId = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonUserId,pSVar6);
    bVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"emailVerified",(MethodInfo *)0x0);
    (__this->fields).EmailVerified = bVar3;
    bVar3 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
                      (node,"hasPassword",(MethodInfo *)0x0);
    (__this->fields).HasPassword = bVar3;
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"roles",(MethodInfo *)0x0);
    (__this->fields).Roles = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Roles,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
                       (node,"permissions",(MethodInfo *)0x0);
    (__this->fields).Permissions = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Permissions,pSVar4);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"restrictionStatus",(MethodInfo *)0x0);
    (__this->fields).RestrictionStatus = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RestrictionStatus,pSVar6);
    pSVar7 = ApplicationManagers_AccountLoginResponse__GetChild(node,"restriction",(MethodInfo *)0x0);
    (__this->fields).Restriction = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Restriction,pSVar7);
    pSVar7 = ApplicationManagers_AccountLoginResponse__GetChild(node,"patreon",(MethodInfo *)0x0);
    value = ApplicationManagers_AccountLoginResponse_PatreonData__Parse(pSVar7,(MethodInfo *)0x0);
    (__this->fields).Patreon = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Patreon,value);
    pSVar7 = ApplicationManagers_AccountLoginResponse__GetChild(node,"oAuthLinks",(MethodInfo *)0x0);
    pAVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks(pSVar7,(MethodInfo *)0x0);
    (__this->fields).OAuthLinks = pAVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OAuthLinks,pAVar5);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"description",(MethodInfo *)0x0);
    (__this->fields).Description = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Description,pSVar6);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"avatarKey",(MethodInfo *)0x0);
    (__this->fields).AvatarKey = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AvatarKey,pSVar6);
    pSVar6 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
                       (node,"bannerKey",(MethodInfo *)0x0);
    (__this->fields).BannerKey = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).BannerKey,pSVar6);
    pSVar7 = ApplicationManagers_AccountLoginResponse__GetChild(node,"socials",(MethodInfo *)0x0);
    (__this->fields).Socials = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Socials,pSVar7);
    pSVar8 = ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
                       (&local_18,node,"createdAt",(MethodInfo *)0x0);
    iVar1 = (pSVar8->fields)._offsetMinutes;
    uVar2 = *(undefined6 *)&(pSVar8->fields).field_0xa;
    (__this->fields).CreatedAt.fields._dateTime.fields._dateData = (pSVar8->fields)._dateTime.fields._dateData
    ;
    (__this->fields).CreatedAt.fields._offsetMinutes = iVar1;
    *(undefined6 *)&(__this->fields).CreatedAt.fields.field_0xa = uVar2;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233da10

bool ApplicationManagers_AccountLoginResponse_ProfileData__ReadBool
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  
  if (Il2CppMethodInitialized_184347876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347876 = '\x01';
  }
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233db12;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233dabc;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233dabc:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    bVar1 = (*(code *)((Il2CppClass *)a->klass)->vtable[39].methodPtr)
                      (a,(MethodInfo *)((Il2CppClass *)a->klass)->vtable[39].method);
    return bVar1;
  }
label_18233db12:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_ProfileData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233e030

System_String_o *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347877 = '\x01';
  }
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233e134;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233e0dc;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233e0dc:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    return pSVar2;
  }
label_18233e134:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233dd00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233df29: nop dword ptr [rax]
// asm:   0x18233dfa2: xor eax, eax

System_String_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *a;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  System_String_array *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184347878 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233e023;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar2) goto label_18233de18;
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233de18:
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_18233dff6:
    pSVar8 = (System_String_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
    return pSVar8;
  }
  if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    a = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[45].methodPtr)
                  (pSVar3,(MethodInfo *)((Il2CppClass *)pSVar3->klass)->vtable[45].method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) goto label_18233dff6;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_T__o *)__this,(int32_t)pSVar3,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
      puVar4 = (undefined8 *)(*(a->klass->vtable)._32_GetEnumerator.methodPtr)(local_68);
      local_d8._0_8_ = *puVar4;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
      local_d8.m_Object.fields._8_8_ = puVar4[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
      local_d8.m_Object.fields._32_8_ = puVar4[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
      local_d8.m_Array.fields._8_8_ = puVar4[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar1 = (pSVar5->fields).key;
          pSVar6 = (pSVar5->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar1;
          local_88.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233e023;
            (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
          }
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18233e023;
          il2cpp_runtime_helper_180012890(__this);
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
          if (!bVar2) {
            pUVar7 = System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_T__o *)__this,
                                (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                               );
            return (System_String_array *)pUVar7;
          }
        } while( true );
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar7 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar7;
      }
    }
  }
label_18233e023:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233db20

System_DateTimeOffset_o *
ApplicationManagers_AccountLoginResponse_ProfileData__ReadDateTimeOffset
          (System_DateTimeOffset_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *node,
          System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_o *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_DateTimeOffset_o local_28;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347879 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233dced;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233dbf4;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233dbf4:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18233dced:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar1 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar2 = System_DateTimeOffset__ToUniversalTime(&local_18,&local_28,(MethodInfo *)0x0);
        uVar3 = (undefined4)(pSVar2->fields)._dateTime.fields._dateData;
        uVar4 = *(undefined4 *)((longlong)&(pSVar2->fields)._dateTime.fields._dateData + 4);
        uVar5 = *(undefined4 *)&(pSVar2->fields)._offsetMinutes;
        uVar6 = *(undefined4 *)&(pSVar2->fields).field_0xc;
        goto label_18233dcd7;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
label_18233dcd7:
  *(undefined4 *)&(__return_storage_ptr__->fields)._dateTime.fields._dateData = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields)._dateTime.fields._dateData + 4) = uVar4;
  *(undefined4 *)&(__return_storage_ptr__->fields)._offsetMinutes = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uVar6;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$ParseOAuthLinks
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_array* ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18233d1f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233d397: nop word ptr [rax + rax]
// asm:   0x18233d58a: jmp 0x18233d591

ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *
ApplicationManagers_AccountLoginResponse_ProfileData__ParseOAuthLinks
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int16_t iVar3;
  undefined6 uVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  SimpleJSONFixed_JSONArray_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *__this;
  undefined8 *puVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *item;
  System_String_o *pSVar11;
  System_DateTimeOffset_o *pSVar12;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar13;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar14;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_DateTimeOffset_o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_18434787a == '\0') {
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
    Il2CppMethodInitialized_18434787a = '\x01';
  }
  local_e8.type = 0;
  local_e8._4_4_ = 0;
  local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_e8.m_Object.fields._version = 0;
  local_e8.m_Object.fields._index = 0;
  local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._getEnumeratorRetType = 0;
  local_e8.m_Object.fields._36_4_ = 0;
  local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.m_Array.fields._index = 0;
  local_e8.m_Array.fields._version = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pAVar14 = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
              System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                        ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData
                        );
    return pAVar14;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_18233d5ea:
    ThrowNullReferenceException();
  }
  a = (*(node->klass->vtable)._45_get_AsArray.methodPtr)(node,(node->klass->vtable)._45_get_AsArray.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar13 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
               *)System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                           ((MethodInfo_660C30 *)
                            MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
  }
  else {
    if (a == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_18233d5ea;
    pSVar7 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this,(int32_t)pSVar7,
               (MethodInfo_92A4F0 *)
               MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ctor);
    puVar8 = (undefined8 *)(*(a->klass->vtable)._32_GetEnumerator.methodPtr)(local_68);
    local_e8._0_8_ = *puVar8;
    local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar8[1];
    local_e8.m_Object.fields._8_8_ = puVar8[2];
    local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar8[3];
    local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar8[4];
    local_e8.m_Object.fields._32_8_ = puVar8[5];
    local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar8[6];
    local_e8.m_Array.fields._8_8_ = puVar8[7];
    local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar8[8];
    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
    if (bVar6) {
      do {
        pSVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,(MethodInfo *)0x0);
        pSVar11 = (pSVar9->fields).key;
        pSVar10 = (pSVar9->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_98.fields.key = pSVar11;
        local_98.fields.value = pSVar10;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_98,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184347885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
          il2cpp_codegen_initialize_runtime_metadata(&"provider");
          il2cpp_codegen_initialize_runtime_metadata(&"linkedAt");
          il2cpp_codegen_initialize_runtime_metadata(&"providerUserId");
          il2cpp_codegen_initialize_runtime_metadata(&"providerEmail");
          Il2CppMethodInitialized_184347885 = '\x01';
        }
        item = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar6) {
          pSVar11 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                              (pSVar10,"provider",(MethodInfo *)0x0);
          if (item == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) goto label_18233d5ea;
          (item->fields).Provider = pSVar11;
          Il2CppCodeGenWriteBarrier(&(item->fields).Provider,pSVar11);
          pSVar11 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                              (pSVar10,"providerUserId",(MethodInfo *)0x0);
          (item->fields).ProviderUserId = pSVar11;
          Il2CppCodeGenWriteBarrier(&(item->fields).ProviderUserId,pSVar11);
          pSVar11 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                              (pSVar10,"providerEmail",(MethodInfo *)0x0);
          (item->fields).ProviderEmail = pSVar11;
          Il2CppCodeGenWriteBarrier(&(item->fields).ProviderEmail,pSVar11);
          pSVar12 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                              (&local_78,pSVar10,"linkedAt",(MethodInfo *)0x0);
          iVar3 = (pSVar12->fields)._offsetMinutes;
          uVar4 = *(undefined6 *)&(pSVar12->fields).field_0xa;
          (item->fields).LinkedAt.fields._dateTime.fields._dateData =
               (pSVar12->fields)._dateTime.fields._dateData;
          (item->fields).LinkedAt.fields._offsetMinutes = iVar3;
          *(undefined6 *)&(item->fields).LinkedAt.fields.field_0xa = uVar4;
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_Add;
        if (__this == (System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *)0x0)
        goto label_18233d5ea;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pAVar14 = (__this->fields)._items;
        if (pAVar14 == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)0x0)
        goto label_18233d5ea;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pAVar14->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pAVar14->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pAVar14->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pAVar14->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
      } while (bVar6);
    }
    else if (__this == (System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData__o *)0x0)
    goto label_18233d5ea;
    pUVar13 = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_ToArray
                        );
  }
  return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)pUVar13;
}


// ApplicationManagers.AccountLoginResponse.ProfileData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_ProfileData___ctor (ApplicationManagers_AccountLoginResponse_ProfileData_o* __this, const MethodInfo* method);
// 0x18233e140

void ApplicationManagers_AccountLoginResponse_ProfileData___ctor
               (ApplicationManagers_AccountLoginResponse_ProfileData_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *value;
  
  if (Il2CppMethodInitialized_18434787b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_18434787b = '\x01';
  }
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).Roles = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Roles,pSVar1);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).Permissions = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Permissions,pSVar1);
  value = (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)
          System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                    ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
  (__this->fields).OAuthLinks = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OAuthLinks,value);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_PatreonData_o* ApplicationManagers_AccountLoginResponse_PatreonData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18233abc0

ApplicationManagers_AccountLoginResponse_PatreonData_o *
ApplicationManagers_AccountLoginResponse_PatreonData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  bool bVar3;
  int32_t iVar4;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this;
  System_String_array *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *pSVar7;
  System_DateTimeOffset_o *pSVar8;
  bool bVar9;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_18434787c == '\0') {
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
    Il2CppMethodInitialized_18434787c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_PatreonData);
  if (Il2CppMethodInitialized_184347884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_184347884 = '\x01';
  }
  pSVar5 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).TierIds = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierIds,pSVar5);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return __this;
  }
  bVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                    (node,"linked",(MethodInfo *)0x0);
  bVar9 = Il2CppMethodInitialized_184347880 == '\0';
  (__this->fields).Linked = bVar3;
  pSVar7 = "patronStatus";
  if (bVar9) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347880 = '\x01';
  }
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233af71;
    bVar3 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)pSVar7);
    if (!bVar3) goto label_18233ad8d;
    pSVar6 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar7);
  }
  else {
label_18233ad8d:
    pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18233af71;
    pSVar7 = (*(pSVar6->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar6,(pSVar6->klass->vtable)._9_SetUnhandledAttributes.method);
  }
  else {
    pSVar7 = (System_String_o *)0x0;
  }
  (__this->fields).PatronStatus = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PatronStatus,pSVar7);
  pSVar5 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
                     (node,"tierIds",(MethodInfo *)0x0);
  (__this->fields).TierIds = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierIds,pSVar5);
  bVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                    ((__this->fields).TierIds,"28767500",(MethodInfo *)0x0);
  (__this->fields).HasTier2 = bVar3;
  bVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
                    ((__this->fields).TierIds,"28767505",(MethodInfo *)0x0);
  bVar9 = Il2CppMethodInitialized_18434787f == '\0';
  (__this->fields).HasTier3 = bVar3;
  pSVar7 = "entitledAmountCents";
  if (bVar9) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434787f = '\x01';
  }
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233af71;
    bVar3 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)pSVar7);
    if (!bVar3) goto label_18233aed6;
    pSVar6 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar7);
  }
  else {
label_18233aed6:
    pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18233af71:
      ThrowNullReferenceException();
    }
    iVar4 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                      (pSVar6,(MethodInfo *)((Il2CppClass *)pSVar6->klass)->vtable[35].method);
  }
  else {
    iVar4 = 0;
  }
  (__this->fields).EntitledAmountCents = iVar4;
  bVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
                    (node,"manualOverride",(MethodInfo *)0x0);
  (__this->fields).ManualOverride = bVar3;
  pSVar8 = ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
                     (&local_18,node,"lastSyncedAt",(MethodInfo *)0x0);
  iVar1 = (pSVar8->fields)._offsetMinutes;
  uVar2 = *(undefined6 *)&(pSVar8->fields).field_0xa;
  (__this->fields).LastSyncedAt.fields._dateTime.fields._dateData =
       (pSVar8->fields)._dateTime.fields._dateData;
  (__this->fields).LastSyncedAt.fields._offsetMinutes = iVar1;
  *(undefined6 *)&(__this->fields).LastSyncedAt.fields.field_0xa = uVar2;
  return __this;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ToJsonNode
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x18233b7c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233b9d3: jmp 0x18233b960

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode
          (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  int32_t n;
  bool bVar1;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_String_array *pSVar3;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_o *pSVar4;
  uint uVar5;
  System_DateTimeOffset_o local_48;
  System_DateTimeOffset_o local_38 [3];
  
  if (Il2CppMethodInitialized_18434787d == '\0') {
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
    Il2CppMethodInitialized_18434787d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  bVar1 = (__this->fields).Linked;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(bVar1,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"linked",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    bVar1 = System_String__IsNullOrEmpty((__this->fields).PatronStatus,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar4 = (__this->fields).PatronStatus;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"patronStatus",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
    if ((__this->fields).TierIds == (System_String_array *)0x0) {
label_18233b9d5:
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"tierIds",(SimpleJSONFixed_JSONNode_o *)__this_01,
                 (__this_00->klass->vtable)._8_set_Item.method);
      n = (__this->fields).EntitledAmountCents;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(n,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"entitledAmountCents",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0
                         ((__this->fields).ManualOverride,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"manualOverride",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
      local_38[0].fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(__this->fields).LastSyncedAt.fields._dateTime.fields._dateData;
      local_38[0].fields._offsetMinutes = (__this->fields).LastSyncedAt.fields._offsetMinutes;
      local_38[0].fields._10_6_ = *(undefined6 *)&(__this->fields).LastSyncedAt.fields.field_0xa;
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      local_48.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
      local_48.fields._offsetMinutes = 0;
      local_48.fields._10_6_ = 0;
      bVar1 = System_DateTimeOffset__op_Inequality(local_38,&local_48,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar4 = System_DateTimeOffset__ToString_1b0d700
                           (&(__this->fields).LastSyncedAt,"o",
                            (System_IFormatProvider_o *)formatProvider,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,"lastSyncedAt",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
      }
      return (SimpleJSONFixed_JSONNode_o *)__this_00;
    }
    pSVar3 = (__this->fields).TierIds;
    uVar5 = 0;
    do {
      if ((int)pSVar3->max_length <= (int)uVar5) goto label_18233b9d5;
      pSVar3 = (__this->fields).TierIds;
      if (pSVar3 == (System_String_array *)0x0) break;
      if ((uint)pSVar3->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = pSVar3->m_Items[(int)uVar5];
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
      if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                (__this_01,pSVar2,(__this_01->klass->vtable)._21_Add.method);
      pSVar3 = (__this->fields).TierIds;
      uVar5 = uVar5 + 1;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadBool
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233af80

bool ApplicationManagers_AccountLoginResponse_PatreonData__ReadBool
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  
  if (Il2CppMethodInitialized_18434787e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434787e = '\x01';
  }
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b082;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233b02c;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233b02c:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    bVar1 = (*(code *)((Il2CppClass *)a->klass)->vtable[39].methodPtr)
                      (a,(MethodInfo *)((Il2CppClass *)a->klass)->vtable[39].method);
    return bVar1;
  }
label_18233b082:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadInt
// il2cpp: int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233b270

int32_t ApplicationManagers_AccountLoginResponse_PatreonData__ReadInt
                  (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_Schema_XmlSchema_o *a;
  
  if (Il2CppMethodInitialized_18434787f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434787f = '\x01';
  }
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b374;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233b31c;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233b31c:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    iVar2 = (*(code *)((Il2CppClass *)a->klass)->vtable[35].methodPtr)
                      (a,(MethodInfo *)((Il2CppClass *)a->klass)->vtable[35].method);
    return iVar2;
  }
label_18233b374:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_PatreonData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233b6b0

System_String_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347880 = '\x01';
  }
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b7b4;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233b75c;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233b75c:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    return pSVar2;
  }
label_18233b7b4:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233b380
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233b5a9: nop dword ptr [rax]
// asm:   0x18233b622: xor eax, eax

System_String_array *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *a;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  System_String_array *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184347881 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b6a3;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar2) goto label_18233b498;
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233b498:
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_18233b676:
    pSVar8 = (System_String_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
    return pSVar8;
  }
  if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    a = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[45].methodPtr)
                  (pSVar3,(MethodInfo *)((Il2CppClass *)pSVar3->klass)->vtable[45].method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) goto label_18233b676;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_T__o *)__this,(int32_t)pSVar3,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
      puVar4 = (undefined8 *)(*(a->klass->vtable)._32_GetEnumerator.methodPtr)(local_68);
      local_d8._0_8_ = *puVar4;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
      local_d8.m_Object.fields._8_8_ = puVar4[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
      local_d8.m_Object.fields._32_8_ = puVar4[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
      local_d8.m_Array.fields._8_8_ = puVar4[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar1 = (pSVar5->fields).key;
          pSVar6 = (pSVar5->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar1;
          local_88.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b6a3;
            (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
          }
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18233b6a3;
          il2cpp_runtime_helper_180012890(__this);
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
          if (!bVar2) {
            pUVar7 = System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_T__o *)__this,
                                (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                               );
            return (System_String_array *)pUVar7;
          }
        } while( true );
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar7 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar7;
      }
    }
  }
label_18233b6a3:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233b090

System_DateTimeOffset_o *
ApplicationManagers_AccountLoginResponse_PatreonData__ReadDateTimeOffset
          (System_DateTimeOffset_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *node,
          System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_o *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_DateTimeOffset_o local_28;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347882 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233b25d;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233b164;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233b164:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18233b25d:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar1 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar2 = System_DateTimeOffset__ToUniversalTime(&local_18,&local_28,(MethodInfo *)0x0);
        uVar3 = (undefined4)(pSVar2->fields)._dateTime.fields._dateData;
        uVar4 = *(undefined4 *)((longlong)&(pSVar2->fields)._dateTime.fields._dateData + 4);
        uVar5 = *(undefined4 *)&(pSVar2->fields)._offsetMinutes;
        uVar6 = *(undefined4 *)&(pSVar2->fields).field_0xc;
        goto label_18233b247;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
label_18233b247:
  *(undefined4 *)&(__return_storage_ptr__->fields)._dateTime.fields._dateData = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields)._dateTime.fields._dateData + 4) = uVar4;
  *(undefined4 *)&(__return_storage_ptr__->fields)._offsetMinutes = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uVar6;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse_PatreonData__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233aa70

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse_PatreonData__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347883 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      return (SimpleJSONFixed_JSONNode_o *)pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$HasTier
// il2cpp: bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x18233ab20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233ab4d: nop dword ptr [rax]

bool ApplicationManagers_AccountLoginResponse_PatreonData__HasTier
               (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  uint uVar3;
  
  if ((tierIds != (System_String_array *)0x0) && (tierIds->max_length != 0)) {
    bVar1 = System_String__IsNullOrEmpty(targetTier,(MethodInfo *)0x0);
    if (!bVar1) {
      for (uVar3 = 0; (int)uVar3 < (int)tierIds->max_length; uVar3 = uVar3 + 1) {
        if ((uint)tierIds->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = tierIds->m_Items[(int)uVar3];
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          if (pSVar2 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
          bVar1 = System_String__Equals_196c550(pSVar2,targetTier,4,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.AccountLoginResponse.PatreonData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_PatreonData___ctor (ApplicationManagers_AccountLoginResponse_PatreonData_o* __this, const MethodInfo* method);
// 0x18233bb70

void ApplicationManagers_AccountLoginResponse_PatreonData___ctor
               (ApplicationManagers_AccountLoginResponse_PatreonData_o *__this,MethodInfo *method)

{
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184347884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_184347884 = '\x01';
  }
  value = (System_String_array *)
          System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                    ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  (__this->fields).TierIds = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierIds,value);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18233a570

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__Parse
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  bool bVar3;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *__this;
  System_String_o *pSVar4;
  System_DateTimeOffset_o *pSVar5;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
    il2cpp_codegen_initialize_runtime_metadata(&"provider");
    il2cpp_codegen_initialize_runtime_metadata(&"linkedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"providerUserId");
    il2cpp_codegen_initialize_runtime_metadata(&"providerEmail");
    Il2CppMethodInitialized_184347885 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse_OAuthLinkData);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"provider",(MethodInfo *)0x0);
    if (__this == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).Provider = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Provider,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerUserId",(MethodInfo *)0x0);
    (__this->fields).ProviderUserId = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ProviderUserId,pSVar4);
    pSVar4 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
                       (node,"providerEmail",(MethodInfo *)0x0);
    (__this->fields).ProviderEmail = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ProviderEmail,pSVar4);
    pSVar5 = ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
                       (&local_18,node,"linkedAt",(MethodInfo *)0x0);
    iVar1 = (pSVar5->fields)._offsetMinutes;
    uVar2 = *(undefined6 *)&(pSVar5->fields).field_0xa;
    (__this->fields).LinkedAt.fields._dateTime.fields._dateData = (pSVar5->fields)._dateTime.fields._dateData;
    (__this->fields).LinkedAt.fields._offsetMinutes = iVar1;
    *(undefined6 *)&(__this->fields).LinkedAt.fields.field_0xa = uVar2;
  }
  return __this;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233a880

System_String_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347886 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233a968;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233a910;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233a910:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    return pSVar2;
  }
label_18233a968:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x18233a6c0

System_DateTimeOffset_o *
ApplicationManagers_AccountLoginResponse_OAuthLinkData__ReadDateTimeOffset
          (System_DateTimeOffset_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *node,
          System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_o *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_DateTimeOffset_o local_28;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347887 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18233a871;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_18233a778;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_18233a778:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18233a871:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar1 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar2 = System_DateTimeOffset__ToUniversalTime(&local_18,&local_28,(MethodInfo *)0x0);
        uVar3 = (undefined4)(pSVar2->fields)._dateTime.fields._dateData;
        uVar4 = *(undefined4 *)((longlong)&(pSVar2->fields)._dateTime.fields._dateData + 4);
        uVar5 = *(undefined4 *)&(pSVar2->fields)._offsetMinutes;
        uVar6 = *(undefined4 *)&(pSVar2->fields).field_0xc;
        goto label_18233a85b;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
label_18233a85b:
  *(undefined4 *)&(__return_storage_ptr__->fields)._dateTime.fields._dateData = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields)._dateTime.fields._dateData + 4) = uVar4;
  *(undefined4 *)&(__return_storage_ptr__->fields)._offsetMinutes = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uVar6;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountLoginResponse.OAuthLinkData$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountLoginResponse_OAuthLinkData___ctor(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountLoginResponse$$Parse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountLoginResponse__Parse (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182320840

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountLoginResponse__Parse(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  ApplicationManagers_AccountLoginResponse_o *__this;
  System_String_o *pSVar3;
  System_DateTimeOffset_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *node_00;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *value;
  bool bVar5;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountLoginResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"accessTokenExpiresAt");
    il2cpp_codegen_initialize_runtime_metadata(&"photonToken");
    il2cpp_codegen_initialize_runtime_metadata(&"profile");
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"accessToken");
    il2cpp_codegen_initialize_runtime_metadata(&"photonTokenExpiresAt");
    Il2CppMethodInitialized_184347870 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_AccountLoginResponse);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"accessToken",(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
label_182320a29:
    ThrowNullReferenceException();
  }
  (__this->fields).AccessToken = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccessToken,pSVar3);
  pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"refreshToken",(MethodInfo *)0x0);
  (__this->fields).RefreshToken = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RefreshToken,pSVar3);
  pSVar3 = ApplicationManagers_AccountLoginResponse__ReadString(node,"photonToken",(MethodInfo *)0x0);
  (__this->fields).PhotonToken = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonToken,pSVar3);
  pSVar4 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
                     (&local_18,node,"accessTokenExpiresAt",(MethodInfo *)0x0);
  iVar1 = (pSVar4->fields)._offsetMinutes;
  uVar2 = *(undefined6 *)&(pSVar4->fields).field_0xa;
  (__this->fields).AccessTokenExpiresAt.fields._dateTime.fields._dateData =
       (pSVar4->fields)._dateTime.fields._dateData;
  (__this->fields).AccessTokenExpiresAt.fields._offsetMinutes = iVar1;
  *(undefined6 *)&(__this->fields).AccessTokenExpiresAt.fields.field_0xa = uVar2;
  pSVar4 = ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
                     (&local_18,node,"photonTokenExpiresAt",(MethodInfo *)0x0);
  bVar5 = Il2CppMethodInitialized_184347871 == '\0';
  iVar1 = (pSVar4->fields)._offsetMinutes;
  uVar2 = *(undefined6 *)&(pSVar4->fields).field_0xa;
  (__this->fields).PhotonTokenExpiresAt.fields._dateTime.fields._dateData =
       (pSVar4->fields)._dateTime.fields._dateData;
  (__this->fields).PhotonTokenExpiresAt.fields._offsetMinutes = iVar1;
  pSVar3 = "profile";
  *(undefined6 *)&(__this->fields).PhotonTokenExpiresAt.fields.field_0xa = uVar2;
  if (bVar5) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182320a29;
    bVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)pSVar3);
    if (bVar5) {
      node_00 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar3);
      goto label_1823209fc;
    }
  }
  node_00 = (System_Xml_Schema_XmlSchema_o *)0x0;
label_1823209fc:
  value = ApplicationManagers_AccountLoginResponse_ProfileData__Parse
                    ((SimpleJSONFixed_JSONNode_o *)node_00,(MethodInfo *)0x0);
  (__this->fields).Profile = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Profile,value);
  return __this;
}


// ApplicationManagers.AccountLoginResponse$$GetChild
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountLoginResponse__GetChild (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x182320790

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountLoginResponse__GetChild
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      return (SimpleJSONFixed_JSONNode_o *)pSVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountLoginResponse$$ReadString
// il2cpp: System_String_o* ApplicationManagers_AccountLoginResponse__ReadString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x182320f40

System_String_o *
ApplicationManagers_AccountLoginResponse__ReadString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347872 = '\x01';
  }
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182321044;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_182320fec;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_182320fec:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
  if (a != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    return pSVar2;
  }
label_182321044:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse$$ReadDateTimeOffset
// il2cpp: System_DateTimeOffset_o ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x182320a30

System_DateTimeOffset_o *
ApplicationManagers_AccountLoginResponse__ReadDateTimeOffset
          (System_DateTimeOffset_o *__return_storage_ptr__,SimpleJSONFixed_JSONNode_o *node,
          System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *value;
  System_Globalization_CultureInfo_o *formatProvider;
  System_DateTimeOffset_o *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_DateTimeOffset_o local_28;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347873 = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182320bfd;
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) goto label_182320b04;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_182320b04:
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_182320bfd:
      ThrowNullReferenceException();
    }
    value = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      bVar1 = System_DateTimeOffset__TryParse
                        (value,(System_IFormatProvider_o *)formatProvider,0x80,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar2 = System_DateTimeOffset__ToUniversalTime(&local_18,&local_28,(MethodInfo *)0x0);
        uVar3 = (undefined4)(pSVar2->fields)._dateTime.fields._dateData;
        uVar4 = *(undefined4 *)((longlong)&(pSVar2->fields)._dateTime.fields._dateData + 4);
        uVar5 = *(undefined4 *)&(pSVar2->fields)._offsetMinutes;
        uVar6 = *(undefined4 *)&(pSVar2->fields).field_0xc;
        goto label_182320be7;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
label_182320be7:
  *(undefined4 *)&(__return_storage_ptr__->fields)._dateTime.fields._dateData = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields)._dateTime.fields._dateData + 4) = uVar4;
  *(undefined4 *)&(__return_storage_ptr__->fields)._offsetMinutes = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uVar6;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountLoginResponse$$ReadStringArray
// il2cpp: System_String_array* ApplicationManagers_AccountLoginResponse__ReadStringArray (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x182320c10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182320e39: nop dword ptr [rax]
// asm:   0x182320eb2: xor eax, eax

System_String_array *
ApplicationManagers_AccountLoginResponse__ReadStringArray
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *a;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  System_String_array *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184347874 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if (Il2CppMethodInitialized_184347871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347871 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182320f33;
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar2) goto label_182320d28;
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
  }
  else {
label_182320d28:
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_182320f06:
    pSVar8 = (System_String_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
    return pSVar8;
  }
  if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    a = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[45].methodPtr)
                  (pSVar3,(MethodInfo *)((Il2CppClass *)pSVar3->klass)->vtable[45].method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) goto label_182320f06;
    if (a != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_T__o *)__this,(int32_t)pSVar3,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
      puVar4 = (undefined8 *)(*(a->klass->vtable)._32_GetEnumerator.methodPtr)(local_68);
      local_d8._0_8_ = *puVar4;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
      local_d8.m_Object.fields._8_8_ = puVar4[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
      local_d8.m_Object.fields._32_8_ = puVar4[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
      local_d8.m_Array.fields._8_8_ = puVar4[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar1 = (pSVar5->fields).key;
          pSVar6 = (pSVar5->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar1;
          local_88.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182320f33;
            (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
          }
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_182320f33;
          il2cpp_runtime_helper_180012890(__this);
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
          if (!bVar2) {
            pUVar7 = System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_T__o *)__this,
                                (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                               );
            return (System_String_array *)pUVar7;
          }
        } while( true );
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar7 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar7;
      }
    }
  }
label_182320f33:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountLoginResponse$$.ctor
// il2cpp: void ApplicationManagers_AccountLoginResponse___ctor (ApplicationManagers_AccountLoginResponse_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountLoginResponse___ctor(ApplicationManagers_AccountLoginResponse_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


