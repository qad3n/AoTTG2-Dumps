// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterInfoState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Current
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current (const MethodInfo* method);
// 0x58d56d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d56fb: jmp 0x58d579f

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075454c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454c6 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    method_00 = (MethodInfo *)0x0;
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (bVar2) {
    method_00 = (MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote;
    if ((((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)method_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote;
    }
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(method_00);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SetRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x58d9990

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (Il2CppMethodInitialized_075454c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_075454c7 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,method);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ClearRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote (const MethodInfo* method);
// 0x58d9fa0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075454c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_075454c8 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote =
       (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyCurrentToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime (const MethodInfo* method);
// 0x58d9ff0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(method);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyLocalToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime (const MethodInfo* method);
// 0x58da330

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  Settings_ProfileSettings_o *method_01;
  
  if (Il2CppMethodInitialized_075454c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075454c9 = '\x01';
  }
  if (Il2CppMethodInitialized_075454c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_075454c8 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote =
       (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote);
  method_01 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (method_01 != (Settings_ProfileSettings_o *)0x0) {
    (*(method_01->klass->vtable)._19_Load.methodPtr)(method_01,(method_01->klass->vtable)._19_Load.method);
  }
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local((MethodInfo *)method_01);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SaveLocal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x58da3d0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,true,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$WithNameAndGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild (System_String_o* name, System_String_o* guild, System_String_o* guildPresetId, System_Collections_Generic_IEnumerable_string__o* badges, bool nameEffectEnabled, System_String_o* nameEffectType, System_Collections_Generic_IEnumerable_string__o* nameEffectColors, bool guildEffectEnabled, System_String_o* guildEffectType, System_Collections_Generic_IEnumerable_string__o* guildEffectColors, System_String_o* nameFont, System_String_o* guildFont, const MethodInfo* method);
// 0x58da3e0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild
          (System_String_o *name,System_String_o *guild,System_String_o *guildPresetId,
          System_Collections_Generic_IEnumerable_string__o *badges,bool nameEffectEnabled,
          System_String_o *nameEffectType,System_Collections_Generic_IEnumerable_string__o *nameEffectColors,
          bool guildEffectEnabled,System_String_o *guildEffectType,
          System_Collections_Generic_IEnumerable_string__o *guildEffectColors,System_String_o *nameFont,
          System_String_o *guildFont,MethodInfo *method)

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
  System_String_o **method_02;
  undefined3 in_register_00000081;
  undefined4 uVar7;
  undefined4 in_register_00000084;
  
  uVar7 = CONCAT31(in_register_00000081,nameEffectEnabled);
  method_02 = (System_String_o **)name;
  if (Il2CppMethodInitialized_075454ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    method_02 = &"version";
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    Il2CppMethodInitialized_075454ca = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)method_02);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(1,(MethodInfo *)0x0);
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
    pMVar6 = (MethodInfo *)"guildPresetId";
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildPresetId",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray(badges,pMVar6);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"badges",(SimpleJSONFixed_JSONNode_o *)pSVar4,
               (__this->klass->vtable)._8_set_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar1,"nameEffect",(pSVar1->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar2,nameEffectEnabled,nameEffectType,nameEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,uVar7));
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"nameEffect",(SimpleJSONFixed_JSONNode_o *)pSVar5,
                 (__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar1,"guildEffect",(pSVar1->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar1,guildEffectEnabled,guildEffectType,guildEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,uVar7));
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildEffect",(SimpleJSONFixed_JSONNode_o *)pSVar5,
                 (__this->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pSVar3 = PatreonEffects_NameFontCatalog__Normalize(nameFont,(MethodInfo *)0x0);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"nameFont",pSVar1,(__this->klass->vtable)._8_set_Item.method);
      pSVar3 = PatreonEffects_NameFontCatalog__Normalize(guildFont,(MethodInfo *)0x0);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)"guildFont";
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildFont",pSVar1,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                         ((SimpleJSONFixed_JSONNode_o *)__this,pMVar6);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Sanitize
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x58d99e0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *pSVar7;
  SimpleJSONFixed_JSONObject_o *pSVar8;
  System_String_o **ppSVar9;
  MethodInfo *pMVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075454cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    Il2CppMethodInitialized_075454cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(1,(MethodInfo *)0x0);
  if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
label_058d9f8e:
    ThrowNullReferenceException();
  }
  pMVar10 = (__this->klass->vtable)._8_set_Item.method;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"version",pSVar5,pMVar10);
  if (Il2CppMethodInitialized_075454ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    Il2CppMethodInitialized_075454ce = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar9 = &"GUEST";
  }
  else {
    pSVar2 = (pSVar1->fields).Name;
    if (pSVar2 == (Settings_NameSetting_o *)0x0) goto label_058d9f8e;
    ppSVar9 = &(pSVar2->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String(node,"name",*ppSVar9,pMVar10)
  ;
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar6,0x1f,method_00);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  pMVar10 = (__this->klass->vtable)._8_set_Item.method;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"name",pSVar5,pMVar10);
  if (Il2CppMethodInitialized_075454cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454cf = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar9 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = (pSVar1->fields).Guild;
    if (pSVar2 == (Settings_NameSetting_o *)0x0) goto label_058d9f8e;
    ppSVar9 = &(pSVar2->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty
                     (node,"guild",*ppSVar9,pMVar10);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar6,0x1f,method_01);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  pMVar10 = (__this->klass->vtable)._8_set_Item.method;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"guild",pSVar5,pMVar10);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
                     (node,"guildPresetId",0x40,pMVar10);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild(pSVar6,(MethodInfo *)0x0)
  ;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"guildPresetId",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  pMVar10 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "badges";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058d9f8e;
    pMVar10 = (MethodInfo *)"badges";
    pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"badges",(node->klass->vtable)._7_get_Item.method);
  }
  else {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges(pSVar5,pMVar10);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                     ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar7,(__this->klass->vtable)._8_set_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "nameEffect";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058d9f8e;
    pMVar10 = (MethodInfo *)"nameEffect";
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"nameEffect",(node->klass->vtable)._7_get_Item.method);
  }
  else {
    pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(true,pMVar10);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                     ((SimpleJSONFixed_JSONNode_o *)pSVar8,pMVar10);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar8,(__this->klass->vtable)._8_set_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "guildEffect";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058d9f8e;
    pMVar10 = (MethodInfo *)"guildEffect";
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"guildEffect",(node->klass->vtable)._7_get_Item.method);
  }
  else {
    pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(false,pMVar10);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                     ((SimpleJSONFixed_JSONNode_o *)pSVar8,pMVar10);
  pMVar10 = (__this->klass->vtable)._8_set_Item.method;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar8,pMVar10)
  ;
  if (Il2CppMethodInitialized_075454d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_075454d0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar9 = &"Normal";
  }
  else {
    pSVar3 = (pSVar1->fields).NameFont;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_058d9f8e;
    ppSVar9 = &(pSVar3->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String(node,"nameFont",*ppSVar9,pMVar10)
  ;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar6 = PatreonEffects_NameFontCatalog__Normalize(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  pMVar10 = (__this->klass->vtable)._8_set_Item.method;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"nameFont",pSVar5,pMVar10);
  if (Il2CppMethodInitialized_075454d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_075454d1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar9 = &"Normal";
  }
  else {
    pSVar3 = (pSVar1->fields).GuildFont;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_058d9f8e;
    ppSVar9 = &(pSVar3->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String(node,"guildFont",*ppSVar9,pMVar10)
  ;
  pSVar6 = PatreonEffects_NameFontCatalog__Normalize(pSVar6,(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"guildFont",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$DisplayGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x58dc2e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075454cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_075454cc = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dc4de;
    pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) goto label_058dc3ce;
    pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dc4de;
    pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
  }
  else {
label_058dc3ce:
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar3,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) goto label_058dc4ba;
      pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
label_058dc4de:
    ThrowNullReferenceException();
  }
label_058dc4ba:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Local
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local (const MethodInfo* method);
// 0x58d9880
// eh: try 0x58d9900..0x58d9912 -> pad 0x58d991b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x58d993f..0x58d9976 -> pad 0x58d9976 (+1 call sites) cleanup
// eh: try 0x58d9979..0x58d997e -> pad 0x58d9986 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d9919: jmp 0x58d991b
// asm:   0x58d991b: mov rbx, rax
// asm:   0x58d991e: cmp edx, 1
// asm:   0x58d9921: jne 0x58d997e
// asm:   0x58d9923: mov rdi, rbx
// asm:   0x58d9926: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d992b: mov rbx, rax
// asm:   0x58d992e: lea rax, [rip + 0x1c7cd93]
// asm:   0x58d9935: mov rdi, qword ptr [rax + 0x10]
// asm:   0x58d9939: mov rax, qword ptr [rbx]
// asm:   0x58d993c: mov rsi, qword ptr [rax]
// asm:   0x58d993f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x58d9944: test al, al
// asm:   0x58d9946: je 0x58d9955
// asm:   0x58d9948: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d994d: xor edi, edi
// asm:   0x58d994f: pop rbx
// asm:   0x58d9950: jmp 0x58d99e0  ; Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize()
// asm:   0x58d9955: mov edi, 8
// asm:   0x58d995a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x58d995f: mov rcx, qword ptr [rbx]
// asm:   0x58d9962: mov qword ptr [rax], rcx
// asm:   0x58d9965: lea rsi, [rip + 0x1553b94]
// asm:   0x58d996c: mov rdi, rax
// asm:   0x58d996f: xor edx, edx
// asm:   0x58d9971: call 0x6e255c0  ; __cxa_throw()
// asm:   0x58d9976: mov rbx, rax
// asm:   0x58d9979: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d997e: mov rdi, rbx
// asm:   0x58d9981: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d9986: mov rdi, rax
// asm:   0x58d9989: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *value;
  bool bVar3;
  System_String_o **ppSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_075454cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454cd = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = (pSVar1->fields).CharacterInfoJson;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar4 = &(pSVar2->fields)._value;
  }
  value = *ppSVar4;
  pMVar6 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                       ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar6);
    return pSVar5;
  }
  pMVar6 = (MethodInfo *)0x0;
  pSVar5 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(pSVar5,pMVar6);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName (const MethodInfo* method);
// 0x58dadd0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    Il2CppMethodInitialized_075454ce = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return "GUEST";
  }
  pSVar2 = (pSVar1->fields).Name;
  if (pSVar2 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild (const MethodInfo* method);
// 0x58daf80

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454cf = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar2 = (pSVar1->fields).Guild;
  if (pSVar2 == (Settings_NameSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalNameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont (const MethodInfo* method);
// 0x58dc1e0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_075454d0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return "Normal";
  }
  pSVar2 = (pSVar1->fields).NameFont;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont (const MethodInfo* method);
// 0x58dc260

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_075454d1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return "Normal";
  }
  pSVar2 = (pSVar1->fields).GuildFont;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$String
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x58dae50

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075454d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454d2 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return fallback;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return fallback;
    }
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
        return fallback;
      }
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$StringAllowEmpty
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x58db000

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454d3 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058db0fa:
      ThrowNullReferenceException();
    }
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058db0fa;
      fallback = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      if (fallback == (System_String_o *)0x0) {
        fallback = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$OptionalString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t max, const MethodInfo* method);
// 0x58db100

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t max,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075454d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454d4 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_058db1e0:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto label_058db1e0;
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if (bVar1) goto label_058db1e0;
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if ((pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         ((pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method),
          pSVar3 != (System_String_o *)0x0 ||
          (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 != (System_String_o *)0x0))))
      {
        if (max < (pSVar3->fields)._stringLength) {
          pSVar3 = System_String__Substring_53042f0(pSVar3,0,max,(MethodInfo *)0x0);
          return pSVar3;
        }
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Badges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x58db280
// eh: try 0x58db44f..0x58db666 -> pad 0x58db68b (+12 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58db6a3..0x58db6a8 -> pad 0x58db6ad cleanup
// eh: try 0x58db6b0..0x58db6ba -> pad 0x58db6c2 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58db3eb: lea r13, [rip + 0x199e006]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58db3f2: lea rbp, [rip + 0x1995bd7]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58db3f9: lea r14, [rip + 0x1c7b2c8]
// asm:   0x58db400: jmp 0x58db41d
// asm:   0x58db410: mov rbx, qword ptr [rsp]
// asm:   0x58db414: test rbx, rbx
// asm:   0x58db417: je 0x58db64d
// asm:   0x58db43d: nop dword ptr [rax]
// asm:   0x58db66b: mov rdi, rbp
// asm:   0x58db66e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58db673: jmp 0x58db68b
// asm:   0x58db675: jmp 0x58db68b
// asm:   0x58db677: jmp 0x58db68b
// asm:   0x58db679: jmp 0x58db68b
// asm:   0x58db67b: jmp 0x58db68b
// asm:   0x58db67d: jmp 0x58db68b
// asm:   0x58db67f: jmp 0x58db68b
// asm:   0x58db681: jmp 0x58db68b
// asm:   0x58db683: jmp 0x58db68b
// asm:   0x58db685: jmp 0x58db68b
// asm:   0x58db687: jmp 0x58db68b
// asm:   0x58db689: jmp 0x58db68b
// asm:   0x58db68b: mov r14, rax
// asm:   0x58db68e: cmp edx, 1
// asm:   0x58db691: jne 0x58db6b0
// asm:   0x58db693: mov rdi, r14
// asm:   0x58db696: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58db69b: mov rbp, qword ptr [rax]
// asm:   0x58db69e: mov qword ptr [rsp + 8], rbp
// asm:   0x58db6a3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58db6a8: jmp 0x58db5c4
// asm:   0x58db6ad: mov r14, rax
// asm:   0x58db6b0: lea rdi, [rsp + 8]
// asm:   0x58db6b5: call 0x2fd0610  ; il2cpp_runtime_helper_02fd0610()
// asm:   0x58db6ba: mov rdi, r14
// asm:   0x58db6bd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58db6c2: mov rdi, rax
// asm:   0x58db6c5: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  char cVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075454d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454d5 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return __this;
  }
  if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pIVar6 = (Il2CppObject *)
               (*(node->klass->vtable)._27_get_Children.methodPtr)
                         (node,(node->klass->vtable)._27_get_Children.method), pIVar6 == (Il2CppObject *)0x0))
  {
    ThrowNullReferenceException();
  }
  pIVar1 = pIVar6->klass;
  uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar2->interfaceType + lVar10) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
        goto label_058db3c1;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058db3c1:
  pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    local_48 = pIVar6;
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = pIVar6->klass;
    uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar10) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_058db473;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058db473:
    cVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    pIVar6 = local_48;
    if (cVar4 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar1 = local_48->klass;
      uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar9 == 0) goto label_058db60f;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar2->interfaceType + lVar10) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_058db4f3;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_058db4f3:
    pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_String_o *)(*pIVar6->klass->vtable[9].methodPtr)(pIVar6);
    if ((__this_00 == (System_String_o *)0x0) &&
       (__this_00 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), __this_00 == (System_String_o *)0x0))
    {
      ThrowNullReferenceException();
    }
    if (0x40 < (__this_00->fields)._stringLength) {
      __this_00 = System_String__Substring_53042f0(__this_00,0,0x40,(MethodInfo *)0x0);
    }
    bVar3 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
    pIVar6 = local_48;
    if (!bVar3) {
      if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar5 = (*(__this->klass->vtable)._11_get_Count.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_Count.method);
      pIVar6 = local_48;
      if (iVar5 < 0x40) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar8,(__this->klass->vtable)._21_Add.method);
        pIVar6 = local_48;
      }
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
      goto label_058db62d;
    }
  }
label_058db60f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058db62d:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$BadgesArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray (System_Collections_Generic_IEnumerable_string__o* items, const MethodInfo* method);
// 0x58da850
// eh: try 0x58da9cf..0x58dabc1 -> pad 0x58dabdd (+10 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58dabf5..0x58dabfa -> pad 0x58dabff cleanup
// eh: try 0x58dac02..0x58dac0c -> pad 0x58dac14 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58da90c: nop dword ptr [rax]
// asm:   0x58da96b: lea r12, [rip + 0x199ea86]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58da972: lea r13, [rip + 0x1996717]  ; TypeInfo_System_Collections_Generic_IEnumerator_string
// asm:   0x58da979: lea rbp, [rip + 0x1c7bd48]
// asm:   0x58da980: lea r14, [rip + 0x199f6f9]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x58da987: jmp 0x58da99d
// asm:   0x58da990: mov rbx, qword ptr [rsp]
// asm:   0x58da994: test rbx, rbx
// asm:   0x58da997: je 0x58dabad
// asm:   0x58da9bd: nop dword ptr [rax]
// asm:   0x58dabc1: mov rdi, rbp
// asm:   0x58dabc4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58dabc9: jmp 0x58dabdd
// asm:   0x58dabcb: jmp 0x58dabdd
// asm:   0x58dabcd: jmp 0x58dabdd
// asm:   0x58dabcf: jmp 0x58dabdd
// asm:   0x58dabd1: jmp 0x58dabdd
// asm:   0x58dabd3: jmp 0x58dabdd
// asm:   0x58dabd5: jmp 0x58dabdd
// asm:   0x58dabd7: jmp 0x58dabdd
// asm:   0x58dabd9: jmp 0x58dabdd
// asm:   0x58dabdb: jmp 0x58dabdd
// asm:   0x58dabdd: mov r14, rax
// asm:   0x58dabe0: cmp edx, 1
// asm:   0x58dabe3: jne 0x58dac02
// asm:   0x58dabe5: mov rdi, r14
// asm:   0x58dabe8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58dabed: mov rbp, qword ptr [rax]
// asm:   0x58dabf0: mov qword ptr [rsp + 8], rbp
// asm:   0x58dabf5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58dabfa: jmp 0x58dab27
// asm:   0x58dabff: mov r14, rax
// asm:   0x58dac02: lea rdi, [rsp + 8]
// asm:   0x58dac07: call 0x2fd06a0  ; il2cpp_runtime_helper_02fd06a0()
// asm:   0x58dac0c: mov rdi, r14
// asm:   0x58dac0f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58dac14: mov rdi, rax
// asm:   0x58dac17: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray
          (System_Collections_Generic_IEnumerable_string__o *items,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  bool bVar5;
  int32_t iVar6;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075454d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454d6 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (items == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    return __this;
  }
  pSVar1 = items->klass;
  uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar10 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar7 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058da941;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar10 * 0x10 != lVar11);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)items,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_058da941:
  pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)items,pVVar7->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    local_48 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar8->klass;
    uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar11) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_058da9f3;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058da9f3:
    cVar4 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_48;
    if (cVar4 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar3 = local_48->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar10 == 0) goto label_058dab6f;
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_48->klass;
    uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_058daa73;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_058daa73:
    __this_00 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    if ((__this_00 == (System_String_o *)0x0) &&
       (__this_00 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), __this_00 == (System_String_o *)0x0))
    {
      ThrowNullReferenceException();
    }
    if (0x40 < (__this_00->fields)._stringLength) {
      __this_00 = System_String__Substring_53042f0(__this_00,0,0x40,(MethodInfo *)0x0);
    }
    bVar5 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
    pIVar8 = local_48;
    if (!bVar5) {
      if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar6 = (*(__this->klass->vtable)._11_get_Count.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_Count.method);
      pIVar8 = local_48;
      if (iVar6 < 0x40) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar9,(__this->klass->vtable)._21_Add.method);
        pIVar8 = local_48;
      }
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
      goto label_058dab8d;
    }
  }
label_058dab6f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058dab8d:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Effect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x58dbba0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58dbf7e: mov rdx, qword ptr [rbp]
// asm:   0x58dbf82: mov rdi, rbx
// asm:   0x58dbf85: jmp 0x58dc0f1

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  bool b;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *__this_00;
  MethodInfo *pMVar5;
  SimpleJSONFixed_JSONArray_c *pSVar6;
  
  if (Il2CppMethodInitialized_075454d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075454d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  b = false;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = "enabled";
  if (bVar2) {
    if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"enabled",(node->klass->vtable)._7_get_Item.method),
       pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058dc183;
    b = (*(pSVar3->klass->vtable)._39_get_AsBool.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._39_get_AsBool.method);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(b,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pMVar5 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pSVar4,pSVar3,pMVar5);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"type","None",pMVar5);
    if ((pSVar4 != (System_String_o *)0x0) ||
       (pSVar4 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar4 != (System_String_o *)0x0)) {
      if (0x20 < (pSVar4->fields)._stringLength) {
        pSVar4 = System_String__Substring_53042f0(pSVar4,0,0x20,(MethodInfo *)0x0);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
      pMVar5 = (__this->klass->vtable)._8_set_Item.method;
      (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"type",pSVar3,pMVar5);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
      SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
      if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dc183;
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,0,"#FFFFFFFF",pMVar5);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,0,"#FFFFFFFF",pMVar5);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        pSVar6 = __this_00->klass;
        (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,1,"#FFFFFFFF",(MethodInfo *)pSVar6);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        pSVar6 = __this_00->klass;
        (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,2,"#FFFFFFFF",(MethodInfo *)pSVar6);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        pSVar6 = __this_00->klass;
        (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"colors",(node->klass->vtable)._7_get_Item.method);
        }
label_058dc0f1:
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,3,"#FFFFFFFF",(MethodInfo *)pSVar6);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"colors",(SimpleJSONFixed_JSONNode_o *)__this_00,
                   (__this->klass->vtable)._8_set_Item.method);
        return __this;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           ((SimpleJSONFixed_JSONNode_o *)0x0,0,"#FFFFFFFF",pMVar5);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        pSVar6 = __this_00->klass;
        (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             ((SimpleJSONFixed_JSONNode_o *)0x0,1,"#FFFFFFFF",(MethodInfo *)pSVar6);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
          pSVar6 = __this_00->klass;
          (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                               ((SimpleJSONFixed_JSONNode_o *)0x0,2,"#FFFFFFFF",(MethodInfo *)pSVar6
                               );
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
            pSVar6 = __this_00->klass;
            (*(pSVar6->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar6->vtable)._21_Add.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if (!bVar2) {
              pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
              goto label_058dc0f1;
            }
          }
        }
      }
    }
  }
label_058dc183:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$EffectWith
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith (SimpleJSONFixed_JSONNode_o* current, bool enabled, System_String_o* type, System_Collections_Generic_IEnumerable_string__o* colors, const MethodInfo* method);
// 0x58dac20

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
          (SimpleJSONFixed_JSONNode_o *current,bool enabled,System_String_o *type,
          System_Collections_Generic_IEnumerable_string__o *colors,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *pSVar5;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  undefined1 auVar6 [16];
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,enabled);
  if (Il2CppMethodInitialized_075454d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075454d8 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(current,method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(enabled,(MethodInfo *)0x0);
  if (pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
              (pSVar3,"enabled",pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
    bVar2 = System_String__IsNullOrWhiteSpace(type,(MethodInfo *)0x0);
    pSVar1 = "type";
    if (bVar2) {
      type = "None";
    }
    if ((type != (System_String_o *)0x0) ||
       (type = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), type != (System_String_o *)0x0)) {
      if (0x20 < (type->fields)._stringLength) {
        type = System_String__Substring_53042f0(type,0,0x20,(MethodInfo *)0x0);
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(type,(MethodInfo *)0x0);
      (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                (pSVar3,pSVar1,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
      auVar6 = (undefined1  [16])
               (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"colors",(pSVar3->klass->vtable)._7_get_Item.method);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray(colors,auVar6._0_8_,auVar6._8_8_);
      (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                (pSVar3,"colors",(SimpleJSONFixed_JSONNode_o *)pSVar5,
                 (pSVar3->klass->vtable)._8_set_Item.method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray (System_Collections_Generic_IEnumerable_string__o* colors, SimpleJSONFixed_JSONNode_o* fallback, const MethodInfo* method);
// 0x58dc680

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray
          (System_Collections_Generic_IEnumerable_string__o *colors,SimpleJSONFixed_JSONNode_o *fallback,
          MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_40;
  
  if (Il2CppMethodInitialized_075454d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_075454d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  pIVar8 = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)colors,TypeInfo_string_array);
  if (pIVar3 != (Il2CppObject *)0x0) {
    if ((int)pIVar3[1].monitor < 1) {
      pIVar8 = (Il2CppClass *)0x0;
    }
    else {
      if (((ulong)pIVar3[1].monitor & 0xffffffff) == 0) goto label_058dca6c;
      pIVar8 = pIVar3[2].klass;
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                     (fallback,0,"#FFFFFFFF",in_RCX);
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pIVar8,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_40.r = local_58.r;
    local_40.g = local_58.g;
    local_40.b = local_58.b;
    local_40.a = local_58.a;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320("#",pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = __this->klass;
  (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
  if ((pIVar3 == (Il2CppObject *)0x0) || ((int)pIVar3[1].monitor < 2)) {
    pSVar4 = (System_String_o *)0x0;
  }
  else {
    if (((ulong)pIVar3[1].monitor & 0xfffffffe) == 0) goto label_058dca6c;
    pSVar4 = pIVar3[2].monitor;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                     (fallback,1,"#FFFFFFFF",(MethodInfo *)pSVar7);
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar4,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_40.r = local_58.r;
    local_40.g = local_58.g;
    local_40.b = local_58.b;
    local_40.a = local_58.a;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_52f0320("#",pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pIVar8 = (Il2CppClass *)0x0;
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  pSVar7 = __this->klass;
  (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
  if (pIVar3 != (Il2CppObject *)0x0) {
    uVar2 = (uint)pIVar3[1].monitor;
    if ((int)uVar2 < 3) {
      pIVar8 = (Il2CppClass *)0x0;
    }
    else {
      if (uVar2 < 3) goto label_058dca6c;
      pIVar8 = pIVar3[3].klass;
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                     (fallback,2,"#FFFFFFFF",(MethodInfo *)pSVar7);
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pIVar8,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_40.r = local_58.r;
    local_40.g = local_58.g;
    local_40.b = local_58.b;
    local_40.a = local_58.a;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320("#",pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar6 = (System_String_o *)0x0;
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  pSVar7 = __this->klass;
  (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
  if (pIVar3 != (Il2CppObject *)0x0) {
    if ((int)pIVar3[1].monitor < 4) {
      pSVar6 = (System_String_o *)0x0;
    }
    else {
      if (((ulong)pIVar3[1].monitor & 0xfffffffc) == 0) {
label_058dca6c:
        ThrowIndexOutOfRangeException();
      }
      pSVar6 = pIVar3[3].monitor;
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                     (fallback,3,"#FFFFFFFF",(MethodInfo *)pSVar7);
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar6,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_40.r = local_58.r;
    local_40.g = local_58.g;
    local_40.b = local_58.b;
    local_40.a = local_58.a;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320("#",pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime (SimpleJSONFixed_JSONNode_o* node, bool saveLocal, const MethodInfo* method);
// 0x58da010

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime
               (SimpleJSONFixed_JSONNode_o *node,bool saveLocal,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  MethodInfo *pMVar7;
  undefined7 in_register_00000031;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  pMVar7 = (MethodInfo *)CONCAT71(in_register_00000031,saveLocal);
  if (Il2CppMethodInitialized_075454da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_075454da = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,pMVar7);
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (pSVar1->fields).CharacterInfoJson;
    pSVar5 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar5,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar3 = (pSVar1->fields).Name;
      pSVar6 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,"name",(pSVar4->klass->vtable)._7_get_Item.method);
      if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pMVar7 = (MethodInfo *)
                   (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method),
         pSVar3 != (Settings_NameSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pMVar7,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = (pSVar1->fields).Guild;
        pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(pSVar4,pMVar7);
        if (pSVar3 != (Settings_NameSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar5,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar2 = (pSVar1->fields).GuildRoleSprite;
          if (pSVar2 != (Settings_StringSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,
                       (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar2 = (pSVar1->fields).NameFont;
            pSVar6 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,"nameFont",(pSVar4->klass->vtable)._7_get_Item.method);
            if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (pSVar5 = (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method),
               pSVar2 != (Settings_StringSetting_o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar5,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              pSVar2 = (pSVar1->fields).GuildFont;
              pSVar6 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"guildFont",(pSVar4->klass->vtable)._7_get_Item.method);
              if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                 (pSVar5 = (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                                     (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method),
                 pSVar2 != (Settings_StringSetting_o *)0x0)) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar5,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pSVar6 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar4,"nameEffect",(pSVar4->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (pSVar6,(pSVar1->fields).NameEffectEnabled,(pSVar1->fields).NameEffect,
                           (pSVar1->fields).NameEffectColorA,(pSVar1->fields).NameEffectColorB,
                           (pSVar1->fields).NameEffectColorC,(pSVar1->fields).NameEffectColorD,
                           in_stack_ffffffffffffffc0);
                pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar4,"guildEffect",(pSVar4->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (pSVar4,(pSVar1->fields).GuildEffectEnabled,(pSVar1->fields).GuildEffect,
                           (pSVar1->fields).GuildEffectColorA,(pSVar1->fields).GuildEffectColorB,
                           (pSVar1->fields).GuildEffectColorC,(pSVar1->fields).GuildEffectColorD,
                           in_stack_ffffffffffffffc0);
                if (saveLocal) {
                  (*(pSVar1->klass->vtable)._18_Save.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._18_Save.method);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect (SimpleJSONFixed_JSONNode_o* effect, Settings_BoolSetting_o* enabled, Settings_StringSetting_o* type, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, const MethodInfo* method);
// 0x58dcb00

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
               (SimpleJSONFixed_JSONNode_o *effect,Settings_BoolSetting_o *enabled,
               Settings_StringSetting_o *type,Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,MethodInfo *method)

{
  bool bVar1;
  undefined1 value;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *value_00;
  Utility_Color255_o *pUVar3;
  SimpleJSONFixed_JSONNode_c *method_00;
  
  method_00 = (SimpleJSONFixed_JSONNode_c *)colorA;
  if (Il2CppMethodInitialized_075454db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075454db = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  value = false;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dce1a;
    pSVar2 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                       (effect,"enabled",(effect->klass->vtable)._7_get_Item.method);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dce1a;
    method_00 = pSVar2->klass;
    value = (*(method_00->vtable)._39_get_AsBool.methodPtr)(pSVar2,(method_00->vtable)._39_get_AsBool.method);
  }
  if (enabled == (Settings_BoolSetting_o *)0x0) goto label_058dce1a;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)enabled,(bool)value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dce1a;
    pSVar2 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                       (effect,"type",(effect->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) goto label_058dccf1;
    pSVar2 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                       (effect,"type",(effect->klass->vtable)._7_get_Item.method);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dce1a;
    method_00 = pSVar2->klass;
    value_00 = (*(method_00->vtable)._9_get_Value.methodPtr)(pSVar2,(method_00->vtable)._9_get_Value.method);
  }
  else {
label_058dccf1:
    value_00 = "None";
  }
  if (type != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)type,(Il2CppObject *)value_00,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dce1a;
      pSVar2 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                         (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
    }
    if (colorA != (Settings_ColorSetting_o *)0x0) {
      pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                         (pSVar2,0,(colorA->fields)._value,(MethodInfo *)method_00);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)pUVar3,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
      if (colorB != (Settings_ColorSetting_o *)0x0) {
        pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                           (pSVar2,1,(colorB->fields)._value,(MethodInfo *)method_00);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)pUVar3,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        if (colorC != (Settings_ColorSetting_o *)0x0) {
          pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                             (pSVar2,2,(colorC->fields)._value,(MethodInfo *)method_00);
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)colorC,(Il2CppObject *)pUVar3,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
          if (colorD != (Settings_ColorSetting_o *)0x0) {
            pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                               (pSVar2,3,(colorD->fields)._value,(MethodInfo *)method_00);
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)colorD,(Il2CppObject *)pUVar3,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
            return;
          }
        }
      }
    }
  }
label_058dce1a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LegacyEffect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect (bool name, const MethodInfo* method);
// 0x58db6d0

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(bool name,MethodInfo *method)

{
  bool b;
  Settings_ProfileSettings_o *pSVar1;
  System_String_o *s;
  Utility_Color255_o *pUVar2;
  SimpleJSONFixed_JSONObject_o *__this;
  Settings_BoolSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_String_o *pSVar6;
  Settings_ColorSetting_o *pSVar7;
  UnityEngine_Color_o local_40;
  
  if (Il2CppMethodInitialized_075454dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075454dc = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return (SimpleJSONFixed_JSONObject_o *)0x0;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar6 = "enabled";
  if (name) {
    pSVar3 = (pSVar1->fields).NameEffectEnabled;
  }
  else {
    pSVar3 = (pSVar1->fields).GuildEffectEnabled;
  }
  if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
    b = (pSVar3->fields)._value;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(b,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar6,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar6 = "type";
      if (name) {
        pSVar5 = (pSVar1->fields).NameEffect;
      }
      else {
        pSVar5 = (pSVar1->fields).GuildEffect;
      }
      if (pSVar5 != (Settings_StringSetting_o *)0x0) {
        s = (pSVar5->fields)._value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,pSVar6,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        if (name) {
          pSVar7 = (pSVar1->fields).NameEffectColorA;
        }
        else {
          pSVar7 = (pSVar1->fields).GuildEffectColorA;
        }
        if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
          pUVar2 = (pSVar7->fields)._value;
          if (Il2CppMethodInitialized_075454e0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"#");
            Il2CppMethodInitialized_075454e0 = '\x01';
          }
          if (pUVar2 != (Utility_Color255_o *)0x0) {
            local_40 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
            pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_40,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat_52f0320("#",pSVar6,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
            if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
              (*(__this_00->klass->vtable)._21_Add.methodPtr)
                        (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
              if (name) {
                pSVar7 = (pSVar1->fields).NameEffectColorB;
              }
              else {
                pSVar7 = (pSVar1->fields).GuildEffectColorB;
              }
              if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
                pUVar2 = (pSVar7->fields)._value;
                if (Il2CppMethodInitialized_075454e0 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"#");
                  Il2CppMethodInitialized_075454e0 = '\x01';
                }
                if (pUVar2 != (Utility_Color255_o *)0x0) {
                  local_40 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
                  pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_40,(MethodInfo *)0x0);
                  pSVar6 = System_String__Concat_52f0320("#",pSVar6,(MethodInfo *)0x0);
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                  (*(__this_00->klass->vtable)._21_Add.methodPtr)
                            (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
                  if (name) {
                    pSVar7 = (pSVar1->fields).NameEffectColorC;
                  }
                  else {
                    pSVar7 = (pSVar1->fields).GuildEffectColorC;
                  }
                  if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
                    pUVar2 = (pSVar7->fields)._value;
                    if (Il2CppMethodInitialized_075454e0 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"#");
                      Il2CppMethodInitialized_075454e0 = '\x01';
                    }
                    if (pUVar2 != (Utility_Color255_o *)0x0) {
                      local_40 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
                      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_40,(MethodInfo *)0x0)
                      ;
                      pSVar6 = System_String__Concat_52f0320("#",pSVar6,(MethodInfo *)0x0);
                      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                      }
                      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                      (*(__this_00->klass->vtable)._21_Add.methodPtr)
                                (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
                      if (name) {
                        pSVar7 = (pSVar1->fields).NameEffectColorD;
                      }
                      else {
                        pSVar7 = (pSVar1->fields).GuildEffectColorD;
                      }
                      if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
                        pUVar2 = (pSVar7->fields)._value;
                        if (Il2CppMethodInitialized_075454e0 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&"#");
                          Il2CppMethodInitialized_075454e0 = '\x01';
                        }
                        if (pUVar2 != (Utility_Color255_o *)0x0) {
                          local_40 = Utility_Color255__ToColor(pUVar2,(MethodInfo *)0x0);
                          pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                                             (&local_40,(MethodInfo *)0x0);
                          pSVar6 = System_String__Concat_52f0320
                                             ("#",pSVar6,(MethodInfo *)0x0);
                          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                          }
                          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                                    (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
                          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                                    (__this,"colors",(SimpleJSONFixed_JSONNode_o *)__this_00,
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString (SimpleJSONFixed_JSONNode_o* colors, int32_t index, System_String_o* fallback, const MethodInfo* method);
// 0x58dc530

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_075454dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454dd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar3 = fallback;
  if (bVar1) {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058dc67b:
      ThrowNullReferenceException();
    }
    pSVar2 = (*(colors->klass->vtable)._5_get_Item.methodPtr)
                       (colors,index,(colors->klass->vtable)._5_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (*(colors->klass->vtable)._5_get_Item.methodPtr)
                         (colors,index,(colors->klass->vtable)._5_get_Item.method);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dc67b;
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    }
  }
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
  if (bVar1) {
    local_38.r = local_48.r;
    local_38.g = local_48.g;
    local_38.b = local_48.b;
    local_38.a = local_48.a;
    pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
    fallback = System_String__Concat_52f0320("#",pSVar3,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorStringValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue (System_String_o* value, System_String_o* fallback, const MethodInfo* method);
// 0x58dca80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
          (System_String_o *value,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str1;
  UnityEngine_Color_Fields UStack_38;
  UnityEngine_Color_Fields UStack_20;
  
  if (Il2CppMethodInitialized_075454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454de = '\x01';
  }
  UStack_38.r = 0.0;
  UStack_38.g = 0.0;
  UStack_38.b = 0.0;
  UStack_38.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&UStack_38,(MethodInfo *)0x0);
  if (bVar1) {
    UStack_20.r = UStack_38.r;
    UStack_20.g = UStack_38.g;
    UStack_20.b = UStack_38.b;
    UStack_20.a = UStack_38.a;
    str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                     ((UnityEngine_Color_o *)&UStack_20,(MethodInfo *)0x0);
    fallback = System_String__Concat_52f0320("#",str1,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ParseColor
// il2cpp: Utility_Color255_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor (SimpleJSONFixed_JSONNode_o* colors, int32_t index, Utility_Color255_o* fallback, const MethodInfo* method);
// 0x58dce20

Utility_Color255_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,Utility_Color255_o *fallback,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *htmlString;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_075454df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454df = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058dcf7b:
      ThrowNullReferenceException();
    }
    pSVar2 = (*(colors->klass->vtable)._5_get_Item.methodPtr)
                       (colors,index,(colors->klass->vtable)._5_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (*(colors->klass->vtable)._5_get_Item.methodPtr)
                         (colors,index,(colors->klass->vtable)._5_get_Item.method);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dcf7b;
      htmlString = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      goto label_058dcf22;
    }
  }
  htmlString = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_058dcf22:
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (htmlString,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    fallback = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    color.fields.b = local_48;
    color.fields.a = fStack_44;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    Utility_Color255___ctor_5ce7790(fallback,color,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex (Utility_Color255_o* color, const MethodInfo* method);
// 0x58dcf80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex(Utility_Color255_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o UStack_18;
  
  if (Il2CppMethodInitialized_075454e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454e0 = '\x01';
  }
  if (color == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  UStack_18 = Utility_Color255__ToColor(color,(MethodInfo *)0x0);
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x58dc4f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim(System_String_o *value,int32_t max,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (max < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring_53042f0(value,0,max,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$TrimColoredText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x58da780
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58da7fb: lea rbp, [rip + 0x19bc1c6]  ; MethodInfo_System_Collections_Generic_List_string_RemoveAt
// asm:   0x58da802: nop word ptr cs:[rax + rax]
// asm:   0x58da842: mov rsi, rax

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText
          (System_String_o *value,int32_t max,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_075454e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_075454e1 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(value,(MethodInfo *)0x0);
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).Text, pSVar3 != (System_String_o *)0x0)) {
    if ((pSVar3->fields)._stringLength <= max) {
      __this = (pGVar2->fields).Colors;
label_058da845:
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (pSVar3,(System_Collections_Generic_IList_string__o *)__this,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = System_String__Substring_53042f0(pSVar3,0,max,(MethodInfo *)0x0);
    (pGVar2->fields).Text = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).Text);
    __this = (pGVar2->fields).Colors;
    while ((__this != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar3 = (pGVar2->fields).Text, pSVar3 != (System_String_o *)0x0))) {
      iVar1 = (__this->fields)._size;
      if (iVar1 <= (pSVar3->fields)._stringLength) goto label_058da845;
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,iVar1 + -1,
                 (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      __this = (pGVar2->fields).Colors;
    }
  }
  ThrowNullReferenceException();
}


