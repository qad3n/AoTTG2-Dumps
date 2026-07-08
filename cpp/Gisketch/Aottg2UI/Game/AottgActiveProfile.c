// Type: Gisketch.Aottg2UI.Game.AottgActiveProfile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgActiveProfile.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgActiveProfile$$get_UsesRemote
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote (const MethodInfo* method);
// 0x41c7ef0

bool_conflict Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_05704dfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704dfc = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$PlayerName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName (const MethodInfo* method);
// 0x41c7f50

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName(MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  
  if (DAT_05704dfd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"GUEST");
    DAT_05704dfd = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041c7f71;
LAB_041c8024:
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041c8024;
LAB_041c7f71:
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      goto LAB_041c8093;
    }
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    puVar5 = *(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x30);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar5 = (undefined8 *)(lVar1 + 0x18);
  }
  pSVar4 = (System_String_o *)*puVar5;
  bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return "GUEST";
  }
LAB_041c8093:
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName (const MethodInfo* method);
// 0x41c80d0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName(MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704dfe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"GUEST");
    method = (MethodInfo *)&"name";
    il2cpp_init_method_metadata();
    DAT_05704dfe = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041c8238:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (*(a->klass->vtable)._7_get_Item.methodPtr)
                     (a,"name",(a->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"name",(a->klass->vtable)._7_get_Item.method);
      if (plVar2 == (long *)0x0) goto LAB_041c8238;
      pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2);
      goto LAB_041c81e7;
    }
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_041c81e7:
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "GUEST";
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AccountName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName (const MethodInfo* method);
// 0x41c8320

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704dff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"Local profile");
    DAT_05704dff = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) {
        pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
        return pSVar4;
      }
      il2cpp_init_class();
      pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return "Local profile";
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AuthHandle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle (const MethodInfo* method);
// 0x41c8430

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704e00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"Local profile");
    DAT_05704e00 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) {
        pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
        return pSVar4;
      }
      il2cpp_init_class();
      pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return "Local profile";
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey (const MethodInfo* method);
// 0x41c8540

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  
  if (DAT_05704e01 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704e01 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041c8637;
LAB_041c8565:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041c8565;
LAB_041c8637:
    il2cpp_init_class();
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 != 0) {
        return *(System_String_o **)(lVar2 + 0x18);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    goto LAB_041c8678;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704e99 == '\0') goto LAB_041c8692;
LAB_041c8591:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704e99 != '\0') goto LAB_041c8591;
LAB_041c8692:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704e99 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704e99 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704e99 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
  }
LAB_041c8678:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey((MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey (const MethodInfo* method);
// 0x41c8720

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  
  if (DAT_05704e02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704e02 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041c8745;
LAB_041c8817:
    il2cpp_init_class();
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041c8817;
LAB_041c8745:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      return *(System_String_o **)(lVar2 + 0x18);
    }
    goto LAB_041c8858;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704e9a != '\0') goto LAB_041c8771;
LAB_041c8872:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704e9a = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704e9a == '\0') goto LAB_041c8872;
LAB_041c8771:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0)
  ;
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704e9a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704e9a = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
  }
LAB_041c8858:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey((MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite (const MethodInfo* method);
// 0x41c88f0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite (const MethodInfo* method);
// 0x41c8910

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$Bio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio (const MethodInfo* method);
// 0x41c8930

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *value;
  
  if (DAT_05704e03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"No bio yet.");
    DAT_05704e03 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041c8951;
LAB_041c89eb:
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_041c8960;
LAB_041c89ff:
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar2 == 0) {
      value = (System_String_o *)0x0;
      goto LAB_041c8a29;
    }
    lVar2 = *(long *)(lVar2 + 0x58);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar4 = (undefined8 *)(lVar2 + 0x18);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041c89eb;
LAB_041c8951:
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_041c89ff;
LAB_041c8960:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704e9b != '\0') goto LAB_041c897d;
LAB_041c8a58:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704e9b = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (DAT_05704e9b == '\0') goto LAB_041c8a58;
LAB_041c897d:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    puVar4 = (undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  value = (System_String_o *)*puVar4;
LAB_041c8a29:
  bVar3 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    value = "No bio yet.";
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SocialLinks
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks (const MethodInfo* method);
// 0x41c8aa0

System_String_array * Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  long lVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_array *pSVar6;
  System_String_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppType **ppIVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar11;
  undefined1 local_50 [16];
  Il2CppRGCTXData *local_40;
  _union_229680 _Stack_38;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_30;
  
  if (DAT_05704e04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_String__get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704e04 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    __this_03 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(method_00);
  }
  else {
    __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704c4e != '\0') goto LAB_041c8ba1;
LAB_041c8c00:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704c4e = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041c8bad;
LAB_041c8c1f:
      il2cpp_init_class();
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
    }
    else {
      if (DAT_05704c4e == '\0') goto LAB_041c8c00;
LAB_041c8ba1:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041c8c1f;
LAB_041c8bad:
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
    }
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041c8d51;
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,__this,
               MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
    ppIVar8 = (Il2CppType **)local_50._8_8_;
    pIVar9 = local_40;
    _Var10 = _Stack_38;
    pSVar11 = local_30;
    if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
      __this_01.fields._version = local_50._8_4_;
      __this_01.fields._index = local_50._12_4_;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
      __this_01.fields._current.fields.key = (Il2CppObject *)local_40;
      __this_01.fields._current.fields.value = _Stack_38.genericMethod;
      __this_01.fields._32_8_ = local_30;
      bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff88);
      if ((char)bVar5 != '\0') {
        il2cpp_glue_032bf890(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_System_String__get);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = ppIVar8, __this_00.fields._dictionary = pSVar7,
            __this_00.fields._current.fields.key = (Il2CppObject *)pIVar9,
            __this_00.fields._current.fields.value = _Var10.genericMethod,
            __this_00.fields._32_8_ = pSVar11,
            bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff88),
            local_50._0_8_ = pSVar7, local_50._8_8_ = ppIVar8, local_40 = pIVar9, _Stack_38 = _Var10
            , local_30 = pSVar11, (char)bVar5 != '\0') {
        il2cpp_glue_032bf890(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_System_String__get);
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_03->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = local_50._8_8_;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
    __this_02.fields._current.fields.key = (Il2CppObject *)local_40;
    __this_02.fields._current.fields.value = _Stack_38.genericMethod;
    __this_02.fields._32_8_ = local_30;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff88);
  }
  if (__this_03 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar6 = (System_String_array *)
             System_Collections_Generic_List<object>__ToArray
                       ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_String___ToArray);
    return pSVar6;
  }
LAB_041c8d51:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalSocialLinks
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks (const MethodInfo* method);
// 0x41c8e20

/* WARNING: Removing unreachable block (ram,0x041c935a) */

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_String_array *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  long *plVar10;
  System_String_o *pSVar11;
  long lVar12;
  
  if (DAT_05704e05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704e05 = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    puVar7 = *(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x50);
    if (lVar3 == 0) goto LAB_041c9306;
    puVar7 = (undefined8 *)(lVar3 + 0x18);
  }
  pSVar11 = (System_String_o *)*puVar7;
  bVar6 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)(pSVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                                 (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar3 = *plVar9;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
            goto LAB_041c9021;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerable_JSONNode,0);
LAB_041c9021:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar3 = *plVar9;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_041c90d3;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041c90d3:
        cVar5 = (*(code *)*puVar7)();
        if (cVar5 == '\0') {
          if (plVar9 == (long *)0x0) break;
          lVar3 = *plVar9;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto LAB_041c922f;
          lVar12 = 0;
          goto LAB_041c9220;
        }
        lVar3 = *plVar9;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_041c9143;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_JSONNode,0);
LAB_041c9143:
        plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
        bVar6 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar11 = (System_String_o *)
                    (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
          lVar3 = MethodInfo_Void_Add;
          if (__this == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar11;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_041c926c;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12) {
LAB_041c9220:
    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar7 = (undefined8 *)
               (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_041c924d;
    }
  }
LAB_041c922f:
  puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041c924d:
  (*(code *)*puVar7)(plVar9);
LAB_041c926c:
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar3 == 0) {
    puVar7 = *(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x48);
    if (lVar3 == 0) goto LAB_041c9306;
    puVar7 = (undefined8 *)(lVar3 + 0x18);
  }
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
LAB_041c9306:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((__this->fields)._size == 0) {
    pSVar11 = (System_String_o *)*puVar7;
    bVar6 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
    lVar3 = MethodInfo_Void_Add;
    if ((char)bVar6 == '\0') {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this->fields)._items;
      if (pSVar4 == (System_String_array *)0x0) goto LAB_041c9306;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pSVar11;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar11);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SerializeSocialLinks
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks (System_Collections_Generic_IEnumerable_string__o* links, const MethodInfo* method);
// 0x41c94c0

/* WARNING: Removing unreachable block (ram,0x041c98e3) */

System_String_o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks
          (System_Collections_Generic_IEnumerable_string__o *links,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long lVar11;
  long lVar12;
  
  if (DAT_05704e06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e06 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (links != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar2 = links->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable_string) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto LAB_041c95b1;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(links,TypeInfo_IEnumerable_string,0);
LAB_041c95b1:
    plVar7 = (long *)(*pVVar6->methodPtr)(links,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138)
            ;
            goto LAB_041c9653;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_041c9653:
      cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (cVar4 == '\0') {
        if (plVar7 == (long *)0x0) break;
        lVar11 = *plVar7;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_041c97ff;
        lVar12 = 0;
        goto LAB_041c97f0;
      }
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_string) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138)
            ;
            goto LAB_041c96c3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator_string,0);
LAB_041c96c3:
      pSVar9 = (System_String_o *)(*(code *)*puVar8)(plVar7);
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (pSVar9 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,pSVar10,(__this->klass->vtable)._21_Add.method);
      }
    } while( true );
  }
  goto LAB_041c982f;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
LAB_041c97f0:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_041c981d;
    }
  }
LAB_041c97ff:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_041c981d:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_041c982f:
  if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar9 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar9;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


