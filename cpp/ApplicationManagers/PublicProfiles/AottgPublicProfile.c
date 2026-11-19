// Type: ApplicationManagers.PublicProfiles.AottgPublicProfile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfile.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfile$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* accountId, System_String_o* displayName, System_String_o* characterName, System_String_o* characterInfoJson, System_String_array* roles, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_DateTimeOffset_o createdAt, const MethodInfo* method);
// 0x5e1fb40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1fcee: jmp 0x5e1fc30

void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *accountId,
               System_String_o *displayName,System_String_o *characterName,System_String_o *characterInfoJson,
               System_String_array *roles,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_DateTimeOffset_o createdAt,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *pMVar2;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_075484a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_075484a5 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._AccountId_k__BackingField = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField);
  (__this->fields)._DisplayName_k__BackingField = displayName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._DisplayName_k__BackingField);
  (__this->fields)._CharacterName_k__BackingField = characterName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterName_k__BackingField);
  (__this->fields)._CharacterInfoJson_k__BackingField = characterInfoJson;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterInfoJson_k__BackingField);
  pMVar2 = MethodInfo_System_Array_Empty_string;
  if (roles != (System_String_array *)0x0) goto label_05e1fc3f;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar3 = *(Il2CppClass **)((long)(pMVar2->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar3->_2).bitflags1 & 1) == 0) goto label_05e1fcbf;
label_05e1fc0a:
    if ((pIVar3->_2).cctor_finished_or_no_cctor != 0) goto label_05e1fc17;
label_05e1fcd4:
    il2cpp_codegen_runtime_class_init(pIVar3);
    pIVar3 = (pMVar2->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar3->_2).bitflags1;
  }
  else {
    pIVar3 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar3->_2).bitflags1 & 1) != 0) goto label_05e1fc0a;
label_05e1fcbf:
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) goto label_05e1fcd4;
label_05e1fc17:
    pIVar3 = (pMVar2->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar3->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  roles = *(System_String_array **)pIVar3->static_fields;
label_05e1fc3f:
  (__this->fields)._Roles_k__BackingField = roles;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Roles_k__BackingField);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  (__this->fields)._AvatarKey_k__BackingField = avatarKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AvatarKey_k__BackingField);
  (__this->fields)._BannerKey_k__BackingField = bannerKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._BannerKey_k__BackingField);
  (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData =
       (uint64_t)createdAt.fields._dateTime.fields._dateData;
  (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = createdAt.fields._offsetMinutes;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fd00

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AccountId
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fd10

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_DisplayName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fd20

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._DisplayName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_DisplayName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fd30

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._DisplayName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._DisplayName_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fd40

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._CharacterName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fd50

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._CharacterName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterName_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterInfoJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fd60

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._CharacterInfoJson_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterInfoJson
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fd70

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._CharacterInfoJson_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterInfoJson_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fd80

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Roles_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Roles
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_array* value, const MethodInfo* method);
// 0x5e1fd90

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._Roles_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Roles_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Description
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fda0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Description
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fdb0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AvatarKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fdc0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._AvatarKey_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AvatarKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fdd0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AvatarKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AvatarKey_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_BannerKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fde0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._BannerKey_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_BannerKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fdf0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._BannerKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._BannerKey_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CreatedAt
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CreatedAt (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x5e1fe00

System_DateTimeOffset_o
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CreatedAt
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined2 uVar2;
  System_DateTimeOffset_o SVar3;
  
  uVar1 = (__this->fields)._CreatedAt_k__BackingField.fields._dateTime;
  uVar2 = (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes;
  SVar3.fields._offsetMinutes = uVar2;
  SVar3.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar1;
  SVar3.fields._10_6_ = 0;
  return (System_DateTimeOffset_o)SVar3.fields;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CreatedAt
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CreatedAt (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_DateTimeOffset_o value, const MethodInfo* method);
// 0x5e1fe10

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CreatedAt
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_DateTimeOffset_o value,
               MethodInfo *method)

{
  (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData =
       (uint64_t)value.fields._dateTime.fields._dateData.fields;
  (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = value.fields._offsetMinutes;
  return;
}


