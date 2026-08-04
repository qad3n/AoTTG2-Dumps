// Type: ApplicationManagers.PublicProfiles.AottgPublicProfile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfile.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfile$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* accountId, System_String_o* displayName, System_String_o* characterName, System_String_o* characterInfoJson, System_String_array* roles, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_DateTimeOffset_o createdAt, const MethodInfo* method);
// 0x44c2d40

void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *accountId,
               System_String_o *displayName,System_String_o *characterName,System_String_o *characterInfoJson,
               System_String_array *roles,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_DateTimeOffset_o createdAt,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (g_data_057aeab6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057aeab6 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._AccountId_k__BackingField = accountId;
  il2cpp_runtime_helper_022b4080(&__this->fields,accountId);
  (__this->fields)._DisplayName_k__BackingField = displayName;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._DisplayName_k__BackingField,displayName);
  (__this->fields)._CharacterName_k__BackingField = characterName;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CharacterName_k__BackingField);
  (__this->fields)._CharacterInfoJson_k__BackingField = characterInfoJson;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CharacterInfoJson_k__BackingField);
  lVar2 = MethodInfo_String_Empty_String;
  if (roles != (System_String_array *)0x0) goto label_044c2e3f;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) goto label_044c2ec2;
label_044c2e0a:
    if (*(int *)(lVar3 + 0xe4) != 0) goto label_044c2e17;
label_044c2ed7:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar2 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) != 0) goto label_044c2e0a;
label_044c2ec2:
    lVar3 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar3 + 0xe4) == 0) goto label_044c2ed7;
label_044c2e17:
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar2 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar2 = il2cpp_runtime_helper_023009c0(lVar2);
  }
  roles = (System_String_array *)**(undefined8 **)(lVar2 + 0xb8);
label_044c2e3f:
  (__this->fields)._Roles_k__BackingField = roles;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Roles_k__BackingField,roles);
  (__this->fields)._Description_k__BackingField = description;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Description_k__BackingField,description);
  (__this->fields)._AvatarKey_k__BackingField = avatarKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._AvatarKey_k__BackingField,avatarKey);
  (__this->fields)._BannerKey_k__BackingField = bannerKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._BannerKey_k__BackingField,bannerKey);
  (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData =
       (uint64_t)createdAt.fields._dateTime.fields._dateData;
  (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = createdAt.fields._offsetMinutes;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2f00

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AccountId
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2f10

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_DisplayName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2f20

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._DisplayName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_DisplayName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2f30

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._DisplayName_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._DisplayName_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2f40

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._CharacterName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2f50

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._CharacterName_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CharacterName_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterInfoJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2f60

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._CharacterInfoJson_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterInfoJson
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2f70

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._CharacterInfoJson_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CharacterInfoJson_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2f80

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Roles_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Roles
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_array* value, const MethodInfo* method);
// 0x44c2f90

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._Roles_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Roles_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Description
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2fa0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Description
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2fb0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Description_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AvatarKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2fc0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._AvatarKey_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AvatarKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2fd0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AvatarKey_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._AvatarKey_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_BannerKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c2fe0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,MethodInfo *method)

{
  return (__this->fields)._BannerKey_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_BannerKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c2ff0

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._BannerKey_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._BannerKey_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CreatedAt
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CreatedAt (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x44c3000

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
// 0x44c3010

void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CreatedAt
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_DateTimeOffset_o value,
               MethodInfo *method)

{
  (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData =
       (uint64_t)value.fields._dateTime.fields._dateData.fields;
  (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = value.fields._offsetMinutes;
  return;
}


