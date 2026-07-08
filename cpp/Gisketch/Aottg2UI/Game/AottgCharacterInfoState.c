// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterInfoState.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Current
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current (const MethodInfo* method);
// 0x41c8240

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  
  if (DAT_05704e1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterInfoState);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e1e = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = (MethodInfo *)0x0;
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    method_00 = (MethodInfo *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)method_00,(Il2CppObject *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar3 != '\0') {
      return (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(method_00);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SetRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41cc1e0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (DAT_05704e1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterInfoState);
    DAT_05704e1f = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,method);
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = pSVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8),pSVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ClearRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote (const MethodInfo* method);
// 0x41cc7e0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote(MethodInfo *method)

{
  if (DAT_05704e20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterInfoState);
    DAT_05704e20 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8),0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyCurrentToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime (const MethodInfo* method);
// 0x41cc830

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(method);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyLocalToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime (const MethodInfo* method);
// 0x41ccb60

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704e21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704e21 = '\x01';
  }
  if (DAT_05704e20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterInfoState);
    DAT_05704e20 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8));
  method_01 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (method_01 != (MethodInfo *)0x0) {
    (**(code **)(method_01->methodPointer + 0x248))();
  }
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(method_01);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SaveLocal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41ccc00

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$WithNameAndGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild (System_String_o* name, System_String_o* guild, System_String_o* guildPresetId, System_Collections_Generic_IEnumerable_string__o* badges, bool nameEffectEnabled, System_String_o* nameEffectType, System_Collections_Generic_IEnumerable_string__o* nameEffectColors, bool guildEffectEnabled, System_String_o* guildEffectType, System_Collections_Generic_IEnumerable_string__o* guildEffectColors, System_String_o* nameFont, System_String_o* guildFont, const MethodInfo* method);
// 0x41ccc10

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild
          (System_String_o *name,System_String_o *guild,System_String_o *guildPresetId,
          System_Collections_Generic_IEnumerable_string__o *badges,bool_conflict nameEffectEnabled,
          System_String_o *nameEffectType,
          System_Collections_Generic_IEnumerable_string__o *nameEffectColors,
          bool_conflict guildEffectEnabled,System_String_o *guildEffectType,
          System_Collections_Generic_IEnumerable_string__o *guildEffectColors,
          System_String_o *nameFont,System_String_o *guildFont,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  SimpleJSONFixed_JSONObject_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar6;
  bool_conflict bVar7;
  undefined4 in_register_00000084;
  
  pMVar6 = (MethodInfo *)name;
  bVar7 = nameEffectEnabled;
  if (DAT_05704e22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"nameEffect");
    il2cpp_init_method_metadata(&"guildEffect");
    il2cpp_init_method_metadata(&"nameFont");
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"guildFont");
    il2cpp_init_method_metadata(&"badges");
    il2cpp_init_method_metadata(&"guildPresetId");
    il2cpp_init_method_metadata(&"name");
    pMVar6 = (MethodInfo *)&"version";
    il2cpp_init_method_metadata();
    DAT_05704e22 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar6);
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(1,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"version",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(name,0x1f,method_00);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"name",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(guild,0x1f,method_01);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guild",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(guildPresetId,(MethodInfo *)0x0);
    pMVar6 = "guildPresetId";
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildPresetId",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray(badges,pMVar6);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"badges",pSVar4,(__this->klass->vtable)._8_set_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar1,"nameEffect",(pSVar1->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar2,nameEffectEnabled & 0xff,nameEffectType,nameEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,bVar7));
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"nameEffect",pSVar5,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar1,"guildEffect",(pSVar1->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar1,guildEffectEnabled & 0xff,guildEffectType,guildEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,bVar7));
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildEffect",pSVar5,(__this->klass->vtable)._8_set_Item.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = PatreonEffects_NameFontCatalog__Normalize(nameFont,(MethodInfo *)0x0);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"nameFont",pSVar1,(__this->klass->vtable)._8_set_Item.method);
      pSVar3 = PatreonEffects_NameFontCatalog__Normalize(guildFont,(MethodInfo *)0x0);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
      pMVar6 = "guildFont";
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildFont",pSVar1,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                         ((SimpleJSONFixed_JSONNode_o *)__this,pMVar6);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Sanitize
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41cc230

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *node_00;
  SimpleJSONFixed_JSONArray_o *pSVar6;
  SimpleJSONFixed_JSONObject_o *pSVar7;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704e23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"nameEffect");
    il2cpp_init_method_metadata(&"guildEffect");
    il2cpp_init_method_metadata(&"nameFont");
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"guildFont");
    il2cpp_init_method_metadata(&"badges");
    il2cpp_init_method_metadata(&"guildPresetId");
    il2cpp_init_method_metadata(&"name");
    il2cpp_init_method_metadata(&"version");
    DAT_05704e23 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(1,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"version",pSVar3);
    if (DAT_05704e26 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
      il2cpp_init_method_metadata(&"GUEST");
      DAT_05704e26 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"GUEST";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x30);
      if (lVar1 == 0) goto LAB_041cc7d2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"name",(System_String_o *)*puVar4,pMVar8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar5,0x1f,method_00);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"name",pSVar3);
    if (DAT_05704e27 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
      DAT_05704e27 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = *(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 == 0) goto LAB_041cc7d2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"guild",(System_String_o *)*puVar4,pMVar8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar5,0x1f,method_01);
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"guild",pSVar3);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
                       (node,"guildPresetId",0x40,pMVar8);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
                       (pSVar5,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildPresetId",pSVar3,(__this->klass->vtable)._8_set_Item.method);
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "badges";
    if ((char)bVar2 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041cc7d2;
      pMVar9 = "badges";
      node_00 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"badges",(node->klass->vtable)._7_get_Item.method);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges(node_00,pMVar9);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                       ((SimpleJSONFixed_JSONNode_o *)pSVar6,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,pMVar8,pSVar6,(__this->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "nameEffect";
    if ((char)bVar2 == '\0') {
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(1,pMVar9);
    }
    else {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041cc7d2;
      pMVar9 = "nameEffect";
      pSVar7 = (SimpleJSONFixed_JSONObject_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"nameEffect",(node->klass->vtable)._7_get_Item.method);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                       ((SimpleJSONFixed_JSONNode_o *)pSVar7,pMVar9);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,pMVar8,pSVar7,(__this->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "guildEffect";
    if ((char)bVar2 == '\0') {
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(0,pMVar9);
    }
    else {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041cc7d2;
      pMVar9 = "guildEffect";
      pSVar7 = (SimpleJSONFixed_JSONObject_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"guildEffect",(node->klass->vtable)._7_get_Item.method);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                       ((SimpleJSONFixed_JSONNode_o *)pSVar7,pMVar9);
    pMVar9 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pMVar8,pSVar7);
    if (DAT_05704e28 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
      il2cpp_init_method_metadata(&"Normal");
      DAT_05704e28 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"Normal";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x70);
      if (lVar1 == 0) goto LAB_041cc7d2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"nameFont",(System_String_o *)*puVar4,pMVar9);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"nameFont",pSVar3);
    if (DAT_05704e29 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
      il2cpp_init_method_metadata(&"Normal");
      DAT_05704e29 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"Normal";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x78);
      if (lVar1 == 0) goto LAB_041cc7d2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"guildFont",(System_String_o *)*puVar4,pMVar8);
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildFont",pSVar3,(__this->klass->vtable)._8_set_Item.method);
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
LAB_041cc7d2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$DisplayGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x41ceb30

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704e24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"guildPresetId");
    DAT_05704e24 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
LAB_041cec1e:
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041ced2e;
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto LAB_041cec1e;
    plVar3 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                               (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (plVar3 == (long *)0x0) goto LAB_041ced2e;
    pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3);
  }
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                       (pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto LAB_041ced0a;
      plVar3 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (plVar3 != (long *)0x0) {
        vtable_dispatch = *(code **)(*plVar3 + 0x1c8);
        pSVar4 = (System_String_o *)
                 (*vtable_dispatch)
                           (plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtable_dispatch);
        return pSVar4;
      }
    }
LAB_041ced2e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041ced0a:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Local
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local (const MethodInfo* method);
// 0x41cc0c0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(MethodInfo *method)

{
  long lVar1;
  System_String_o *value;
  bool_conflict bVar2;
  undefined8 *puVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (DAT_05704e25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704e25 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    puVar3 = *(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar3 = (undefined8 *)(lVar1 + 0x18);
  }
  value = (System_String_o *)*puVar3;
  pMVar5 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                       ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar5);
    return pSVar4;
  }
  pMVar5 = (MethodInfo *)0x0;
  pSVar4 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(pSVar4,pMVar5);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName (const MethodInfo* method);
// 0x41cd6c0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704e26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"GUEST");
    DAT_05704e26 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return "GUEST";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild (const MethodInfo* method);
// 0x41cd870

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704e27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704e27 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x38);
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalNameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont (const MethodInfo* method);
// 0x41cea30

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704e28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704e28 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont (const MethodInfo* method);
// 0x41ceab0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704e29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704e29 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x78);
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$String
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x41cd740

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,
          MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704e2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e2a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return fallback;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(node->klass->vtable)._7_get_Item.methodPtr)
                  (node,key,(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return fallback;
    }
    plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2);
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return fallback;
      }
      plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,key,(node->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        vtable_dispatch = *(code **)(*plVar2 + 0x1c8);
        pSVar3 = (System_String_o *)
                 (*vtable_dispatch)
                           (plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtable_dispatch);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$OptionalString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t max, const MethodInfo* method);
// 0x41cd8f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t max,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704e2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e2b = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
LAB_041cd9d0:
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(node->klass->vtable)._7_get_Item.methodPtr)
                  (node,key,(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto LAB_041cd9d0;
    plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2);
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') goto LAB_041cd9d0;
      plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,key,(node->klass->vtable)._7_get_Item.method);
      if ((plVar2 != (long *)0x0) &&
         ((pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2),
          pSVar3 != (System_String_o *)0x0 ||
          (pSVar3 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
          pSVar3 != (System_String_o *)0x0)))) {
        if ((pSVar3->fields)._stringLength <= max) {
          return pSVar3;
        }
        pSVar3 = System_String__Substring(pSVar3,0,max,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Badges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41cda70

/* WARNING: Removing unreachable block (ram,0x041cdf6e) */

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long lVar9;
  
  if (DAT_05704e2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e2c = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return __this;
  }
  if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (plVar5 = (long *)(*(node->klass->vtable)._27_get_Children.methodPtr)
                                 (node,(node->klass->vtable)._27_get_Children.method),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar1 = *plVar5;
  if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
    lVar9 = 0;
    do {
      if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
        puVar6 = (undefined8 *)
                 ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
        goto LAB_041cdba1;
      }
      lVar9 = lVar9 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
  }
  puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerable_JSONNode,0);
LAB_041cdba1:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar1 = *plVar5;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
          puVar6 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
          goto LAB_041cdc43;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator,0);
LAB_041cdc43:
    cVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (cVar2 == '\0') {
      if (plVar5 == (long *)0x0) {
        return __this;
      }
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) == 0) goto LAB_041cde9f;
      lVar9 = 0;
      break;
    }
    lVar1 = *plVar5;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
          puVar6 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
          goto LAB_041cdcb3;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator_JSONNode,0);
LAB_041cdcb3:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
    if ((__this_00 == (System_String_o *)0x0) &&
       (__this_00 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       __this_00 == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0x40 < (__this_00->fields)._stringLength) {
      __this_00 = System_String__Substring(__this_00,0,0x40,(MethodInfo *)0x0);
    }
    bVar3 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
      if (iVar4 < 0x40) {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,pSVar8,(__this->klass->vtable)._21_Add.method);
      }
    }
  } while( true );
  while (lVar9 = lVar9 + 0x10, (ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9) {
    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
      puVar6 = (undefined8 *)
               (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
      goto LAB_041cdebd;
    }
  }
LAB_041cde9f:
  puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IDisposable,0);
LAB_041cdebd:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$BadgesArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray (System_Collections_Generic_IEnumerable_string__o* items, const MethodInfo* method);
// 0x41cd080

/* WARNING: Removing unreachable block (ram,0x041cd4ee) */

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray
          (System_Collections_Generic_IEnumerable_string__o *items,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  int iVar6;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long lVar11;
  long lVar12;
  
  if (DAT_05704e2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e2d = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (items == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    return __this;
  }
  pSVar2 = items->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable_string) {
        pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
        goto LAB_041cd171;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(items,TypeInfo_IEnumerable_string,0);
LAB_041cd171:
  plVar8 = (long *)(*pVVar7->methodPtr)(items,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar11 = *plVar8;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_041cd213;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_041cd213:
    cVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (cVar4 == '\0') {
      if (plVar8 == (long *)0x0) {
        return __this;
      }
      lVar11 = *plVar8;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_041cd41f;
      lVar12 = 0;
      break;
    }
    lVar11 = *plVar8;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_string) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_041cd283;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_string,0);
LAB_041cd283:
    __this_00 = (System_String_o *)(*(code *)*puVar9)(plVar8);
    if ((__this_00 == (System_String_o *)0x0) &&
       (__this_00 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       __this_00 == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0x40 < (__this_00->fields)._stringLength) {
      __this_00 = System_String__Substring(__this_00,0,0x40,(MethodInfo *)0x0);
    }
    bVar5 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar6 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
      if (iVar6 < 0x40) {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,pSVar10,(__this->klass->vtable)._21_Add.method);
      }
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_041cd43d;
    }
  }
LAB_041cd41f:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_041cd43d:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Effect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41ce460

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONObject_o *__this;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *__this_00;
  MethodInfo *pMVar7;
  SimpleJSONFixed_JSONArray_c *pSVar8;
  
  if (DAT_05704e2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"colors");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704e2e = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar1 = "enabled";
  if ((char)bVar3 != '\0') {
    if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (plVar4 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                   (node,"enabled",(node->klass->vtable)._7_get_Item.method),
       plVar4 == (long *)0x0)) goto LAB_041cea26;
    bVar2 = (**(code **)(*plVar4 + 0x3a8))(plVar4);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((uint)bVar2,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pMVar7 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,uVar1,pSVar5);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"type","None",pMVar7);
    if ((pSVar6 != (System_String_o *)0x0) ||
       (pSVar6 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       pSVar6 != (System_String_o *)0x0)) {
      if (0x20 < (pSVar6->fields)._stringLength) {
        pSVar6 = System_String__Substring(pSVar6,0,0x20,(MethodInfo *)0x0);
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      pMVar7 = (__this->klass->vtable)._8_set_Item.method;
      (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"type",pSVar5);
      __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             ((SimpleJSONFixed_JSONNode_o *)0x0,0,"#FFFFFFFF",pMVar7);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
          if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
            pSVar8 = __this_00->klass;
            (*(pSVar8->vtable)._21_Add.methodPtr)(__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                 ((SimpleJSONFixed_JSONNode_o *)0x0,1,"#FFFFFFFF",
                                  (MethodInfo *)pSVar8);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
              pSVar8 = __this_00->klass;
              (*(pSVar8->vtable)._21_Add.methodPtr)
                        (__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                   ((SimpleJSONFixed_JSONNode_o *)0x0,2,"#FFFFFFFF",
                                    (MethodInfo *)pSVar8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                pSVar8 = __this_00->klass;
                (*(pSVar8->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                                  ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
                  goto LAB_041ce9b5;
                }
              }
            }
          }
        }
      }
      else {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                   (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
        pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar5,0,"#FFFFFFFF",pMVar7);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
          pSVar8 = __this_00->klass;
          (*(pSVar8->vtable)._21_Add.methodPtr)(__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
          bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                            (node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                     (*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"colors",(node->klass->vtable)._7_get_Item.method);
          }
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
          pSVar8 = __this_00->klass;
          (*(pSVar8->vtable)._21_Add.methodPtr)(__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
          bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                            (node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                     (*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"colors",(node->klass->vtable)._7_get_Item.method);
          }
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
          pSVar8 = __this_00->klass;
          (*(pSVar8->vtable)._21_Add.methodPtr)(__this_00,pSVar5,(pSVar8->vtable)._21_Add.method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
          bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                            (node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                     (*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"colors",(node->klass->vtable)._7_get_Item.method);
          }
LAB_041ce9b5:
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,pSVar5,(__this_00->klass->vtable)._21_Add.method);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"colors",__this_00,(__this->klass->vtable)._8_set_Item.method);
          return __this;
        }
      }
    }
  }
LAB_041cea26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$EffectWith
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith (SimpleJSONFixed_JSONNode_o* current, bool enabled, System_String_o* type, System_Collections_Generic_IEnumerable_string__o* colors, const MethodInfo* method);
// 0x41cd510

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
          (SimpleJSONFixed_JSONNode_o *current,bool_conflict enabled,System_String_o *type,
          System_Collections_Generic_IEnumerable_string__o *colors,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *pSVar5;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined1 auVar6 [16];
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (DAT_05704e2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"colors");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704e2f = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(current,method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(enabled & 0xff,(MethodInfo *)0x0);
  if (pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
              (pSVar3,"enabled",pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
    bVar2 = System_String__IsNullOrWhiteSpace(type,(MethodInfo *)0x0);
    uVar1 = "type";
    if ((char)bVar2 != '\0') {
      type = "None";
    }
    if ((type != (System_String_o *)0x0) ||
       (type = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), type != (System_String_o *)0x0))
    {
      if (0x20 < (type->fields)._stringLength) {
        type = System_String__Substring(type,0,0x20,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(type,(MethodInfo *)0x0);
      (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                (pSVar3,uVar1,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
      auVar6 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"colors",(pSVar3->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray
                         (colors,auVar6._0_8_,auVar6._8_8_);
      (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                (pSVar3,"colors",pSVar5,(pSVar3->klass->vtable)._8_set_Item.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray (System_Collections_Generic_IEnumerable_string__o* colors, SimpleJSONFixed_JSONNode_o* fallback, const MethodInfo* method);
// 0x41ceed0

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray
          (System_Collections_Generic_IEnumerable_string__o *colors,
          SimpleJSONFixed_JSONNode_o *fallback,MethodInfo *method)

{
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONArray_o *__this;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar6;
  System_String_o *htmlString;
  UnityEngine_Color_Fields local_48;
  
  if (DAT_05704e30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    DAT_05704e30 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  lVar2 = il2cpp_runtime_glue(colors);
  if (lVar2 == 0) {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,0,"#FFFFFFFF",in_RCX);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color.fields.b = local_48.b;
      color.fields.a = local_48.a;
      color.fields.r = local_48.r;
      color.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto LAB_041cf528;
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,1,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = local_48.b;
      color_00.fields.a = local_48.a;
      color_00.fields.r = local_48.r;
      color_00.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,2,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = local_48.b;
      color_01.fields.a = local_48.a;
      color_01.fields.r = local_48.r;
      color_01.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,3,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = local_48.b;
      color_02.fields.a = local_48.a;
      color_02.fields.r = local_48.r;
      color_02.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  else {
    if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) == 0) goto LAB_041cf523;
      pSVar4 = *(System_String_o **)(lVar2 + 0x20);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,0,"#FFFFFFFF",in_RCX);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata(&"#");
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = local_48.b;
      color_03.fields.a = local_48.a;
      color_03.fields.r = local_48.r;
      color_03.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
LAB_041cf528:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar2 + 0x18) < 2) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_041cf523;
      pSVar4 = *(System_String_o **)(lVar2 + 0x28);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,1,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata(&"#");
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = local_48.b;
      color_04.fields.a = local_48.a;
      color_04.fields.r = local_48.r;
      color_04.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = (System_String_o *)0x0;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar2 + 0x18)) {
      if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) < 3) goto LAB_041cf523;
      pSVar4 = *(System_String_o **)(lVar2 + 0x30);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,2,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata(&"#");
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = local_48.b;
      color_05.fields.a = local_48.a;
      color_05.fields.r = local_48.r;
      color_05.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    htmlString = (System_String_o *)0x0;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    pSVar6 = __this->klass;
    (*(pSVar6->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar6->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar2 + 0x18)) {
      if ((*(ulong *)(lVar2 + 0x18) & 0xfffffffc) == 0) {
LAB_041cf523:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      htmlString = *(System_String_o **)(lVar2 + 0x38);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,3,"#FFFFFFFF",(MethodInfo *)pSVar6);
    if (DAT_05704e35 == '\0') {
      il2cpp_init_method_metadata(&"#");
      DAT_05704e35 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (htmlString,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = local_48.b;
      color_06.fields.a = local_48.a;
      color_06.fields.r = local_48.r;
      color_06.fields.g = local_48.g;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method)
  ;
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime (SimpleJSONFixed_JSONNode_o* node, bool saveLocal, const MethodInfo* method);
// 0x41cc840

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime
               (SimpleJSONFixed_JSONNode_o *node,bool_conflict saveLocal,MethodInfo *method)

{
  long *plVar1;
  Settings_TypedSetting_T__o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  Il2CppObject *pIVar4;
  long *plVar5;
  MethodInfo *pMVar6;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *effect;
  undefined4 in_register_00000034;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  pMVar6 = (MethodInfo *)CONCAT44(in_register_00000034,saveLocal);
  if (DAT_05704e31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"nameEffect");
    il2cpp_init_method_metadata(&"guildEffect");
    il2cpp_init_method_metadata(&"nameFont");
    il2cpp_init_method_metadata(&"guildFont");
    il2cpp_init_method_metadata(&"name");
    DAT_05704e31 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,pMVar6);
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xc];
    pIVar4 = (Il2CppObject *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting<object>__set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
      pSVar2 = (Settings_TypedSetting_T__o *)plVar1[6];
      plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"name",(pSVar3->klass->vtable)._7_get_Item.method);
      if ((plVar5 != (long *)0x0) &&
         (pMVar6 = (MethodInfo *)
                   (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0)),
         pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
        Settings_TypedSetting<object>__set_Value(pSVar2,(Il2CppObject *)pMVar6,MethodInfo_Void_set_Value);
        pSVar2 = (Settings_TypedSetting_T__o *)plVar1[7];
        value = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(pSVar3,pMVar6);
        if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting<object>__set_Value(pSVar2,(Il2CppObject *)value,MethodInfo_Void_set_Value);
          if ((Settings_TypedSetting_T__o *)plVar1[8] != (Settings_TypedSetting_T__o *)0x0) {
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)plVar1[8],
                       (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
            pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xe];
            plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar3,"nameFont",
                                        (pSVar3->klass->vtable)._7_get_Item.method);
            if ((plVar5 != (long *)0x0) &&
               (pIVar4 = (Il2CppObject *)
                         (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0)),
               pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
              Settings_TypedSetting<object>__set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
              pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xf];
              plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar3,"guildFont",
                                          (pSVar3->klass->vtable)._7_get_Item.method);
              if ((plVar5 != (long *)0x0) &&
                 (pIVar4 = (Il2CppObject *)
                           (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0)),
                 pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
                Settings_TypedSetting<object>__set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
                effect = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar3,"nameEffect",(pSVar3->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (effect,(Settings_BoolSetting_o *)plVar1[0x10],
                           (Settings_StringSetting_o *)plVar1[0x11],
                           (Settings_ColorSetting_o *)plVar1[0x12],
                           (Settings_ColorSetting_o *)plVar1[0x13],
                           (Settings_ColorSetting_o *)plVar1[0x14],
                           (Settings_ColorSetting_o *)plVar1[0x15],in_stack_ffffffffffffffc0);
                pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar3,"guildEffect",(pSVar3->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (pSVar3,(Settings_BoolSetting_o *)plVar1[0x16],
                           (Settings_StringSetting_o *)plVar1[0x17],
                           (Settings_ColorSetting_o *)plVar1[0x18],
                           (Settings_ColorSetting_o *)plVar1[0x19],
                           (Settings_ColorSetting_o *)plVar1[0x1a],
                           (Settings_ColorSetting_o *)plVar1[0x1b],in_stack_ffffffffffffffc0);
                if ((char)saveLocal == '\0') {
                  return;
                }
                (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect (SimpleJSONFixed_JSONNode_o* effect, Settings_BoolSetting_o* enabled, Settings_StringSetting_o* type, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, const MethodInfo* method);
// 0x41cf5b0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
               (SimpleJSONFixed_JSONNode_o *effect,Settings_BoolSetting_o *enabled,
               Settings_StringSetting_o *type,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,
               Settings_ColorSetting_o *colorD,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  long *plVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  Il2CppObject *value;
  Utility_Color255_o *pUVar5;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)colorA;
  if (DAT_05704e32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"colors");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704e32 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = 0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (plVar3 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                   (effect,"enabled",(effect->klass->vtable)._7_get_Item.method),
       plVar3 == (long *)0x0)) goto LAB_041cf8d2;
    method_00 = (MethodInfo *)*plVar3;
    uVar2 = (*(code *)method_00[10].field7_0x38)(plVar3,method_00[10].field8_0x40.genericMethod);
  }
  if (enabled != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)enabled,uVar2 & 0xff,MethodInfo_Void_set_Value);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    value = "None";
    if ((char)bVar1 != '\0') {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041cf8d2;
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(effect->klass->vtable)._7_get_Item.methodPtr)
                         (effect,"type",(effect->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      value = "None";
      if ((char)bVar1 != '\0') {
        plVar3 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                   (effect,"type",(effect->klass->vtable)._7_get_Item.method);
        if (plVar3 == (long *)0x0) goto LAB_041cf8d2;
        method_00 = (MethodInfo *)*plVar3;
        value = (Il2CppObject *)
                (*(code *)((Settings_ColorSetting_Fields *)&method_00[5].invoker_method)->
                          DefaultValue)(plVar3,(Utility_Color255_o *)method_00[5].name);
      }
    }
    if (type != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)type,value,MethodInfo_Void_set_Value);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041cf8d2;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(effect->klass->vtable)._7_get_Item.methodPtr)
                           (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
      }
      if (colorA != (Settings_ColorSetting_o *)0x0) {
        pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                           (pSVar4,0,(colorA->fields)._value,method_00);
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
        if (colorB != (Settings_ColorSetting_o *)0x0) {
          pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                             (pSVar4,1,(colorB->fields)._value,method_00);
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
          if (colorC != (Settings_ColorSetting_o *)0x0) {
            pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                               (pSVar4,2,(colorC->fields)._value,method_00);
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)colorC,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
            if (colorD != (Settings_ColorSetting_o *)0x0) {
              pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                                 (pSVar4,3,(colorD->fields)._value,method_00);
              Settings_TypedSetting<object>__set_Value
                        ((Settings_TypedSetting_T__o *)colorD,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
              return;
            }
          }
        }
      }
    }
  }
LAB_041cf8d2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LegacyEffect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect (bool name, const MethodInfo* method);
// 0x41cdf90

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(bool_conflict name,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Utility_Color255_o *pUVar4;
  undefined8 uVar5;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_String_o *pSVar7;
  char cVar8;
  UnityEngine_Color_o UVar9;
  
  if (DAT_05704e33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"colors");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704e33 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar2 == 0) {
    return (SimpleJSONFixed_JSONObject_o *)0x0;
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  uVar5 = "enabled";
  cVar8 = (char)name;
  if (cVar8 == '\0') {
    lVar3 = *(long *)(lVar2 + 0xb0);
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x80);
  }
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x11);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit((uint)bVar1,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,uVar5,pSVar6,(__this->klass->vtable)._8_set_Item.method);
      uVar5 = "type";
      if (cVar8 == '\0') {
        lVar3 = *(long *)(lVar2 + 0xb8);
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x88);
      }
      if (lVar3 != 0) {
        pSVar7 = *(System_String_o **)(lVar3 + 0x18);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,uVar5,pSVar6,(__this->klass->vtable)._8_set_Item.method);
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        if (cVar8 == '\0') {
          lVar3 = *(long *)(lVar2 + 0xc0);
        }
        else {
          lVar3 = *(long *)(lVar2 + 0x90);
        }
        if (lVar3 != 0) {
          pUVar4 = *(Utility_Color255_o **)(lVar3 + 0x18);
          if (DAT_05704e37 == '\0') {
            il2cpp_init_method_metadata(&"#");
            DAT_05704e37 = '\x01';
          }
          if (pUVar4 != (Utility_Color255_o *)0x0) {
            UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
            pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar9,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat("#",pSVar7,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
            if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
              (*(__this_00->klass->vtable)._21_Add.methodPtr)
                        (__this_00,pSVar6,(__this_00->klass->vtable)._21_Add.method);
              if (cVar8 == '\0') {
                lVar3 = *(long *)(lVar2 + 200);
              }
              else {
                lVar3 = *(long *)(lVar2 + 0x98);
              }
              if (lVar3 != 0) {
                pUVar4 = *(Utility_Color255_o **)(lVar3 + 0x18);
                if (DAT_05704e37 == '\0') {
                  il2cpp_init_method_metadata(&"#");
                  DAT_05704e37 = '\x01';
                }
                if (pUVar4 != (Utility_Color255_o *)0x0) {
                  UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                  pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar9,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat("#",pSVar7,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                  (*(__this_00->klass->vtable)._21_Add.methodPtr)
                            (__this_00,pSVar6,(__this_00->klass->vtable)._21_Add.method);
                  if (cVar8 == '\0') {
                    lVar3 = *(long *)(lVar2 + 0xd0);
                  }
                  else {
                    lVar3 = *(long *)(lVar2 + 0xa0);
                  }
                  if (lVar3 != 0) {
                    pUVar4 = *(Utility_Color255_o **)(lVar3 + 0x18);
                    if (DAT_05704e37 == '\0') {
                      il2cpp_init_method_metadata(&"#");
                      DAT_05704e37 = '\x01';
                    }
                    if (pUVar4 != (Utility_Color255_o *)0x0) {
                      UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                      pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar9,(MethodInfo *)0x0);
                      pSVar7 = System_String__Concat("#",pSVar7,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                      (*(__this_00->klass->vtable)._21_Add.methodPtr)
                                (__this_00,pSVar6,(__this_00->klass->vtable)._21_Add.method);
                      if (cVar8 == '\0') {
                        lVar2 = *(long *)(lVar2 + 0xd8);
                      }
                      else {
                        lVar2 = *(long *)(lVar2 + 0xa8);
                      }
                      if (lVar2 != 0) {
                        pUVar4 = *(Utility_Color255_o **)(lVar2 + 0x18);
                        if (DAT_05704e37 == '\0') {
                          il2cpp_init_method_metadata(&"#");
                          DAT_05704e37 = '\x01';
                        }
                        if (pUVar4 != (Utility_Color255_o *)0x0) {
                          UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                          pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                                             (UVar9,(MethodInfo *)0x0);
                          pSVar7 = System_String__Concat("#",pSVar7,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                                    (__this_00,pSVar6,(__this_00->klass->vtable)._21_Add.method);
                          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                                    (__this,"colors",__this_00,
                                     (__this->klass->vtable)._8_set_Item.method);
                          return __this;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString (SimpleJSONFixed_JSONNode_o* colors, int32_t index, System_String_o* fallback, const MethodInfo* method);
// 0x41ced80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,System_String_o *fallback,
          MethodInfo *method)

{
  UnityEngine_Color_o color;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_Fields local_38;
  
  if (DAT_05704e34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e34 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar3 = fallback;
  if ((char)bVar1 != '\0') {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041ceec8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(colors->klass->vtable)._5_get_Item.methodPtr)
                  (colors,(ulong)(uint)index,(colors->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      plVar2 = (long *)(*(colors->klass->vtable)._5_get_Item.methodPtr)
                                 (colors,(ulong)(uint)index,
                                  (colors->klass->vtable)._5_get_Item.method);
      if (plVar2 == (long *)0x0) goto LAB_041ceec8;
      pSVar3 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    }
  }
  if (DAT_05704e35 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e35 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = local_38.b;
    color.fields.a = local_38.a;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fallback = System_String__Concat("#",pSVar3,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorStringValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue (System_String_o* value, System_String_o* fallback, const MethodInfo* method);
// 0x41cf530

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
          (System_String_o *value,System_String_o *fallback,MethodInfo *method)

{
  UnityEngine_Color_o color;
  bool_conflict bVar1;
  System_String_o *str1;
  UnityEngine_Color_Fields UStack_28;
  
  if (DAT_05704e35 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e35 = '\x01';
  }
  UStack_28.r = 0.0;
  UStack_28.g = 0.0;
  UStack_28.b = 0.0;
  UStack_28.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&UStack_28,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_28.b;
    color.fields.a = UStack_28.a;
    color.fields.r = UStack_28.r;
    color.fields.g = UStack_28.g;
    str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fallback = System_String__Concat("#",str1,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ParseColor
// il2cpp: Utility_Color255_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor (SimpleJSONFixed_JSONNode_o* colors, int32_t index, Utility_Color255_o* fallback, const MethodInfo* method);
// 0x41cf8e0

Utility_Color255_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,Utility_Color255_o *fallback,
          MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *htmlString;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (DAT_05704e36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704e36 = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041cfa3b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(colors->klass->vtable)._5_get_Item.methodPtr)
                  (colors,(ulong)(uint)index,(colors->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      plVar2 = (long *)(*(colors->klass->vtable)._5_get_Item.methodPtr)
                                 (colors,(ulong)(uint)index,
                                  (colors->klass->vtable)._5_get_Item.method);
      if (plVar2 == (long *)0x0) goto LAB_041cfa3b;
      htmlString = (System_String_o *)
                   (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      goto LAB_041cf9e2;
    }
  }
  htmlString = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_041cf9e2:
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (htmlString,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    fallback = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    color.fields.b = local_48;
    color.fields.a = fStack_44;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    Utility_Color255___ctor(fallback,color,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex (Utility_Color255_o* color, const MethodInfo* method);
// 0x41cfa40

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex
          (Utility_Color255_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o color_00;
  
  if (DAT_05704e37 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e37 = '\x01';
  }
  if (color != (Utility_Color255_o *)0x0) {
    color_00 = Utility_Color255__ToColor(color,(MethodInfo *)0x0);
    pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat("#",pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x41ced40

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim
          (System_String_o *value,int32_t max,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), value == (System_String_o *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (max < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring(value,0,max,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$TrimColoredText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x41ccfb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText
          (System_String_o *value,int32_t max,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *__this;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined4 in_register_00000034;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)CONCAT44(in_register_00000034,max);
  if (DAT_05704e38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704e38 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(value,pMVar4);
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).Text, pSVar3 != (System_String_o *)0x0)) {
    if ((pSVar3->fields)._stringLength <= max) {
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (pSVar3,(System_Collections_Generic_IList_string__o *)
                                 (pGVar2->fields).Colors,method_00);
      return pSVar3;
    }
    pSVar3 = System_String__Substring(pSVar3,0,max,(MethodInfo *)0x0);
    (pGVar2->fields).Text = pSVar3;
    il2cpp_runtime_glue(&pGVar2->fields,pSVar3);
    __this = (pGVar2->fields).Colors;
    pMVar4 = extraout_RDX;
    while ((__this != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar3 = (pGVar2->fields).Text, pSVar3 != (System_String_o *)0x0))) {
      iVar1 = (__this->fields)._size;
      if (iVar1 <= (pSVar3->fields)._stringLength) {
        pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                           (pSVar3,(System_Collections_Generic_IList_string__o *)__this,pMVar4);
        return pSVar3;
      }
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,iVar1 + -1,MethodInfo_Void_RemoveAt);
      __this = (pGVar2->fields).Colors;
      pMVar4 = extraout_RDX_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


