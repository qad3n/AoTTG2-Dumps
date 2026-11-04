// Type: ApplicationManagers.PublicProfiles.AottgPublicProfile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfile.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfile$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* accountId, System_String_o* displayName, System_String_o* characterName, System_String_o* characterInfoJson, System_String_array* roles, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_DateTimeOffset_o createdAt, const MethodInfo* method);
// 0x182367f20

void ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this,System_String_o *accountId,
               System_String_o *displayName,System_String_o *characterName,System_String_o *characterInfoJson,
               System_String_array *roles,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_DateTimeOffset_o *createdAt,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  
  if (Il2CppMethodInitialized_1843479f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    Il2CppMethodInitialized_1843479f6 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._AccountId_k__BackingField = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,accountId);
  (__this->fields)._DisplayName_k__BackingField = displayName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._DisplayName_k__BackingField,displayName);
  (__this->fields)._CharacterName_k__BackingField = characterName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterName_k__BackingField,characterName);
  (__this->fields)._CharacterInfoJson_k__BackingField = characterInfoJson;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterInfoJson_k__BackingField,characterInfoJson);
  if (roles == (System_String_array *)0x0) {
    roles = (System_String_array *)
            System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                      ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  }
  (__this->fields)._Roles_k__BackingField = roles;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Roles_k__BackingField,roles);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,description);
  (__this->fields)._AvatarKey_k__BackingField = avatarKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AvatarKey_k__BackingField,avatarKey);
  (__this->fields)._BannerKey_k__BackingField = bannerKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._BannerKey_k__BackingField,bannerKey);
  iVar1 = (createdAt->fields)._offsetMinutes;
  uVar2 = *(undefined6 *)&(createdAt->fields).field_0xa;
  (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData =
       (createdAt->fields)._dateTime.fields._dateData;
  (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = iVar1;
  *(undefined6 *)&(__this->fields)._CreatedAt_k__BackingField.fields.field_0xa = uVar2;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AccountId(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AccountId
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AccountId(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_DisplayName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_DisplayName(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._DisplayName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_DisplayName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_DisplayName(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._DisplayName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._DisplayName_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterName
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterName(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._CharacterName_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterName
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180ace2f0

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterName(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._CharacterName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterName_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CharacterInfoJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CharacterInfoJson(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._CharacterInfoJson_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CharacterInfoJson
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180584ca0

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CharacterInfoJson(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._CharacterInfoJson_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterInfoJson_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_array*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Roles(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Roles_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Roles
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_array* value, const MethodInfo* method);
// 0x18058aa00

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Roles(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_array* value, MethodInfo* method)

{
  (__this->fields)._Roles_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Roles_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_Description
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x180c8eec0

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_Description(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_Description
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1818be8a0

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_Description(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_AvatarKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x1805853c0

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_AvatarKey(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_AvatarKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180e8f700

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_AvatarKey(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)
   &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position = value;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position,value)
  ;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_BannerKey
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x180c7fb50

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_BannerKey(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_BannerKey
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180f1db10

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_BannerKey(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Current_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Current_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$get_CreatedAt
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CreatedAt (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, const MethodInfo* method);
// 0x180d73860

System_DateTimeOffset_o
ApplicationManagers_PublicProfiles_AottgPublicProfile__get_CreatedAt(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, MethodInfo* method)

{
  double dVar1;
  undefined7 uVar2;
  
  uVar2 = *(undefined7 *)&(__this->fields)._CreatedAt_k__BackingField.fields.field_0x1;
  dVar1 = (__this->fields)._CreatedAt_k__BackingField.fields.value;
  (__return_storage_ptr__->fields).hasValue = (__this->fields)._CreatedAt_k__BackingField.fields.hasValue;
  *(undefined7 *)&(__return_storage_ptr__->fields).field_0x1 = uVar2;
  (__return_storage_ptr__->fields).value = dVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfile$$set_CreatedAt
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CreatedAt (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_DateTimeOffset_o value, const MethodInfo* method);
// 0x181c61370

void
ApplicationManagers_PublicProfiles_AottgPublicProfile__set_CreatedAt(ApplicationManagers_PublicProfiles_AottgPublicProfile_o* __this, System_DateTimeOffset_o value, MethodInfo* method)

{
  double dVar1;
  undefined7 uVar2;
  
  uVar2 = *(undefined7 *)&(value->fields).field_0x1;
  dVar1 = (value->fields).value;
  (__this->fields)._CreatedAt_k__BackingField.fields.hasValue = (value->fields).hasValue;
  *(undefined7 *)&(__this->fields)._CreatedAt_k__BackingField.fields.field_0x1 = uVar2;
  (__this->fields)._CreatedAt_k__BackingField.fields.value = dVar1;
  return;
}


