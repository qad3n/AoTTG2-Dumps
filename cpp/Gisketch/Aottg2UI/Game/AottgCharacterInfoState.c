// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterInfoState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Current
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current (const MethodInfo* method);
// 0x181df3120

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b5b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote;
    }
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SetRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181df4c30

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *value;
  
  if (Il2CppMethodInitialized_184344b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_184344b5c = '\x01';
  }
  value = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ClearRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote (const MethodInfo* method);
// 0x181df2da0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_184344b5d = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote =
       (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyCurrentToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime (const MethodInfo* method);
// 0x181df20d0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyLocalToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime (const MethodInfo* method);
// 0x181df2400

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_ProfileSettings_c *pSVar2;
  SimpleJSONFixed_JSONNode_o *node;
  
  if (Il2CppMethodInitialized_184344b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344b5e = '\x01';
  }
  if (Il2CppMethodInitialized_184344b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState);
    Il2CppMethodInitialized_184344b5d = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote =
       (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterInfoState->static_fields->_remote,(void *)0x0);
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    pSVar2 = pSVar1->klass;
    (*(pSVar2->vtable)._19_Load.methodPtr)(pSVar1,(pSVar2->vtable)._19_Load.method);
  }
  node = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SaveLocal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181df4c20

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$WithNameAndGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild (System_String_o* name, System_String_o* guild, System_String_o* guildPresetId, System_Collections_Generic_IEnumerable_string__o* badges, bool nameEffectEnabled, System_String_o* nameEffectType, System_Collections_Generic_IEnumerable_string__o* nameEffectColors, bool guildEffectEnabled, System_String_o* guildEffectType, System_Collections_Generic_IEnumerable_string__o* guildEffectColors, System_String_o* nameFont, System_String_o* guildFont, const MethodInfo* method);
// 0x181df5040

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
  System_Xml_Schema_XmlSchema_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344b5f == '\0') {
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
    Il2CppMethodInitialized_184344b5f = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(1,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"version",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(name,0x1f,(MethodInfo *)0x0);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"name",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(guild,0x1f,(MethodInfo *)0x0);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guild",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(guildPresetId,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildPresetId",pSVar2,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray(badges,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"badges",(SimpleJSONFixed_JSONNode_o *)pSVar4,
               (__this->klass->vtable)._8_set_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"nameEffect");
      pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         ((SimpleJSONFixed_JSONNode_o *)pSVar5,nameEffectEnabled,nameEffectType,
                          nameEffectColors,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"nameEffect",(SimpleJSONFixed_JSONNode_o *)pSVar6,
                 (__this->klass->vtable)._8_set_Item.method);
      pSVar5 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"guildEffect");
      pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         ((SimpleJSONFixed_JSONNode_o *)pSVar5,guildEffectEnabled,guildEffectType,
                          guildEffectColors,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildEffect",(SimpleJSONFixed_JSONNode_o *)pSVar6,
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
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"guildFont",pSVar1,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                         ((SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Sanitize
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181df4430
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df45ac: mov r8, qword ptr [rip + 0x23051cd]  ; "GUEST"
// asm:   0x181df4adc: mov r8, qword ptr [rip + 0x22a9185]  ; "Normal"
// asm:   0x181df4bb6: mov r8, qword ptr [rip + 0x22a90ab]  ; "Normal"

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONArray_o *pSVar9;
  SimpleJSONFixed_JSONObject_o *pSVar10;
  System_String_o **ppSVar11;
  
  if (Il2CppMethodInitialized_184344b60 == '\0') {
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
    Il2CppMethodInitialized_184344b60 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(1,(MethodInfo *)0x0);
  if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_181df4c19;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"version",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  if (Il2CppMethodInitialized_184344b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    Il2CppMethodInitialized_184344b63 = '\x01';
  }
  pSVar6 = "GUEST";
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Name;
    if (pSVar1 == (Settings_NameSetting_o *)0x0) goto label_181df4c19;
    pSVar6 = (pSVar1->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                     (node,"name",pSVar6,(MethodInfo *)0x0);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar6,0x1f,(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"name",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  if (Il2CppMethodInitialized_184344b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b64 = '\x01';
  }
  pSVar6 = "guild";
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    ppSVar11 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Guild;
    if (pSVar1 == (Settings_NameSetting_o *)0x0) goto label_181df4c19;
    ppSVar11 = &(pSVar1->fields)._value;
  }
  pSVar8 = *ppSVar11;
  if (Il2CppMethodInitialized_184344b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b68 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df4c19;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar6);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar6);
      if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df4c19;
      pSVar2 = pSVar7->klass;
      pSVar8 = (System_String_o *)
               (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar7,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar2);
      if (pSVar8 == (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar8,0x1f,(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"guild",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  pSVar6 = "guildPresetId";
  if (Il2CppMethodInitialized_184344b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b69 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
label_181df48cc:
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df4c19;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar6);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) goto label_181df48cc;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar6);
    if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df4c19;
    pSVar2 = pSVar7->klass;
    pSVar8 = (System_String_o *)
             (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar7,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar2);
    bVar4 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
    if (bVar4) goto label_181df48cc;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar6);
    if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df4c19;
    pSVar2 = pSVar7->klass;
    pSVar6 = (System_String_o *)
             (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar7,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar2);
    if ((pSVar6 == (System_String_o *)0x0) &&
       (pSVar6 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar6 == (System_String_o *)0x0))
    goto label_181df4c19;
    if (0x40 < (pSVar6->fields)._stringLength) {
      pSVar6 = System_String__Substring_1972740(pSVar6,0,0x40,(MethodInfo *)0x0);
    }
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild(pSVar6,(MethodInfo *)0x0)
  ;
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"guildPresetId",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "badges";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df4c19;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"badges");
  }
  else {
    pSVar7 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges
                     ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                     ((SimpleJSONFixed_JSONNode_o *)pSVar9,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar9,(__this->klass->vtable)._8_set_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "nameEffect";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df4c19;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"nameEffect");
  }
  else {
    pSVar7 = (System_Xml_Schema_XmlSchema_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(true,(MethodInfo *)0x0);
  }
  pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar10,(__this->klass->vtable)._8_set_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "guildEffect";
  if (bVar4) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df4c19;
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"guildEffect");
  }
  else {
    pSVar7 = (System_Xml_Schema_XmlSchema_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(false,(MethodInfo *)0x0);
  }
  pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,pSVar6,(SimpleJSONFixed_JSONNode_o *)pSVar10,(__this->klass->vtable)._8_set_Item.method);
  if (Il2CppMethodInitialized_184344b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b65 = '\x01';
  }
  pSVar6 = "Normal";
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).NameFont;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_181df4c19;
    pSVar6 = (pSVar3->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                     (node,"nameFont",pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar6 = PatreonEffects_NameFontCatalog__Normalize(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"nameFont",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  if (Il2CppMethodInitialized_184344b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b66 = '\x01';
  }
  pSVar6 = "Normal";
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).GuildFont;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) {
label_181df4c19:
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar3->fields)._value;
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                     (node,"guildFont",pSVar6,(MethodInfo *)0x0);
  pSVar6 = PatreonEffects_NameFontCatalog__Normalize(pSVar6,(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_set_Item.methodPtr)
            (__this,"guildFont",pSVar5,(__this->klass->vtable)._8_set_Item.method);
  return (SimpleJSONFixed_JSONNode_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$DisplayGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x181df31e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_184344b61 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df33da;
    pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_181df32d4;
    pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
    if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df33da;
    pSVar1 = pSVar3->klass;
    pSVar4 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
  }
  else {
label_181df32d4:
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar2 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar4,(MethodInfo *)0x0)
    ;
    return pSVar4;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar2) goto label_181df33aa;
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        return pSVar4;
      }
    }
label_181df33da:
    ThrowNullReferenceException();
  }
label_181df33aa:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Local
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local (const MethodInfo* method);
// 0x181df4070
// eh: try 0x181df40e5..0x181df40fa -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *value;
  bool bVar2;
  System_String_o **ppSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b62 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).CharacterInfoJson;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar3 = &(pSVar1->fields)._value;
  }
  value = *ppSVar3;
  bVar2 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar4 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                     ((SimpleJSONFixed_JSONNode_o *)0x0,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName (const MethodInfo* method);
// 0x181df3ff0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName(MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    Il2CppMethodInitialized_184344b63 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Name;
    if (pSVar1 != (Settings_NameSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return "GUEST";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild (const MethodInfo* method);
// 0x181df3ef0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild(MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b64 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Guild;
    if (pSVar1 != (Settings_NameSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalNameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont (const MethodInfo* method);
// 0x181df3f70

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b65 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).NameFont;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont (const MethodInfo* method);
// 0x181df3e70

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b66 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).GuildFont;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$String
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181df4db0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b67 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return fallback;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return fallback;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
      bVar2 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
      if (bVar2) {
        return fallback;
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        return pSVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$StringAllowEmpty
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181df4c90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df4d95: mov rax, rdi

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b68 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df4da8:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df4da8;
      pSVar1 = pSVar3->klass;
      fallback = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
      if (fallback == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$OptionalString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t max, const MethodInfo* method);
// 0x181df4120

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t max,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b69 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_181df4283:
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) goto label_181df4283;
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
      bVar2 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
      if (bVar2) goto label_181df4283;
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        if ((pSVar4 != (System_String_o *)0x0) ||
           (pSVar4 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
           pSVar4 != (System_String_o *)0x0)) {
          if ((pSVar4->fields)._stringLength <= max) {
            return pSVar4;
          }
          pSVar4 = System_String__Substring_1972740(pSVar4,0,max,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Badges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181df2a90
// eh: try 0x181df2ba0..0x181df2d91 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df2b99: nop dword ptr [rax]
// asm:   0x181df2d30: jmp 0x181df2d5d
// asm:   0x181df2d32: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181df2d37: cmp qword ptr [r8], 0
// asm:   0x181df2d3b: je 0x181df2d4e
// asm:   0x181df2d3d: xor ecx, ecx
// asm:   0x181df2d3f: mov r8, qword ptr [r8]
// asm:   0x181df2d42: mov rdx, qword ptr [rip + 0x22a65b7]  ; TypeInfo_System_IDisposable
// asm:   0x181df2d49: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181df2d4e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181df2d53: test rcx, rcx
// asm:   0x181df2d56: jne 0x181df2d91
// asm:   0x181df2d58: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x181df2d91: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  ushort uVar11;
  
  if (Il2CppMethodInitialized_184344b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pIVar6 = (Il2CppObject *)
                 (*(node->klass->vtable)._27_get_Children.methodPtr)
                           (node,(node->klass->vtable)._27_get_Children.method), pIVar6 == (Il2CppObject *)0x0
       )) {
      ThrowNullReferenceException();
    }
    pIVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar6);
    while( true ) {
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
      if ((char)pvVar7 == '\0') break;
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar6->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar11 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar8 = pIVar2->vtable + pIVar3[uVar11].offset;
            goto label_181df2c26;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar1);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181df2c26:
      pIVar9 = (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (System_String_o *)(*pIVar9->klass->vtable[9].methodPtr)(pIVar9);
      if ((__this_00 == (System_String_o *)0x0) &&
         (__this_00 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
         __this_00 == (System_String_o *)0x0)) {
        ThrowNullReferenceException();
      }
      if (0x40 < (__this_00->fields)._stringLength) {
        __this_00 = System_String__Substring_1972740(__this_00,0,0x40,(MethodInfo *)0x0);
      }
      bVar4 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
      if (!bVar4) {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar5 = (*(__this->klass->vtable)._11_get_Count.methodPtr)
                          (__this,(__this->klass->vtable)._11_get_Count.method);
        if (iVar5 < 0x40) {
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar10,(__this->klass->vtable)._21_Add.method);
        }
      }
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$BadgesArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray (System_Collections_Generic_IEnumerable_string__o* items, const MethodInfo* method);
// 0x181df27f0
// eh: try 0x181df28c0..0x181df2a88 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df2a32: jmp 0x181df2a5f
// asm:   0x181df2a34: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181df2a39: cmp qword ptr [r8], 0
// asm:   0x181df2a3d: je 0x181df2a50
// asm:   0x181df2a3f: xor ecx, ecx
// asm:   0x181df2a41: mov r8, qword ptr [r8]
// asm:   0x181df2a44: mov rdx, qword ptr [rip + 0x22a68b5]  ; TypeInfo_System_IDisposable
// asm:   0x181df2a4b: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181df2a50: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181df2a55: test rcx, rcx
// asm:   0x181df2a58: jne 0x181df2a88
// asm:   0x181df2a5a: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x181df2a88: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray
          (System_Collections_Generic_IEnumerable_string__o *items,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *obj;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  ushort uVar9;
  
  if (Il2CppMethodInitialized_184344b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b6b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    obj = InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,
                     (Il2CppObject *)items);
    while( true ) {
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
      if ((char)pvVar6 == '\0') break;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar9 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
            pVVar7 = pIVar2->vtable + pIVar3[uVar9].offset;
            goto label_181df2946;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_181df2946:
      __this_00 = (*pVVar7->methodPtr)(obj,pVVar7->method);
      if ((__this_00 == (System_String_o *)0x0) &&
         (__this_00 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
         __this_00 == (System_String_o *)0x0)) {
        ThrowNullReferenceException();
      }
      if (0x40 < (__this_00->fields)._stringLength) {
        __this_00 = System_String__Substring_1972740(__this_00,0,0x40,(MethodInfo *)0x0);
      }
      bVar4 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
      if (!bVar4) {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar5 = (*(__this->klass->vtable)._11_get_Count.methodPtr)
                          (__this,(__this->klass->vtable)._11_get_Count.method);
        if (iVar5 < 0x40) {
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar8,(__this->klass->vtable)._21_Add.method);
        }
      }
    }
    if (obj != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Effect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181df3690

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  int32_t index;
  
  if (Il2CppMethodInitialized_184344b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_184344b6c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = "enabled";
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df3975;
    pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"enabled");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df3975;
    cVar2 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[39].methodPtr)(pSVar5);
  }
  else {
    cVar2 = '\0';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(cVar2 != '\0',(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,pSVar4,pSVar3,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"type","None",(MethodInfo *)0x0);
    if ((pSVar4 != (System_String_o *)0x0) ||
       (pSVar4 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar4 != (System_String_o *)0x0))
    {
      if (0x20 < (pSVar4->fields)._stringLength) {
        pSVar4 = System_String__Substring_1972740(pSVar4,0,0x20,(MethodInfo *)0x0);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,"type",pSVar3,(__this->klass->vtable)._8_set_Item.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
      SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      index = 0;
      do {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (node == (SimpleJSONFixed_JSONNode_o *)0x0) break;
          pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"colors");
        }
        else {
          pSVar5 = (System_Xml_Schema_XmlSchema_o *)0x0;
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           ((SimpleJSONFixed_JSONNode_o *)pSVar5,index,"#FFFFFFFF",(MethodInfo *)0x0
                           );
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
        if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
        index = index + 1;
        if (3 < index) {
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"colors",(SimpleJSONFixed_JSONNode_o *)__this_00,
                     (__this->klass->vtable)._8_set_Item.method);
          return __this;
        }
      } while( true );
    }
  }
label_181df3975:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$EffectWith
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith (SimpleJSONFixed_JSONNode_o* current, bool enabled, System_String_o* type, System_Collections_Generic_IEnumerable_string__o* colors, const MethodInfo* method);
// 0x181df33e0

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
          (SimpleJSONFixed_JSONNode_o *current,bool enabled,System_String_o *type,
          System_Collections_Generic_IEnumerable_string__o *colors,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONObject_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  uint index;
  ulonglong uVar7;
  Il2CppClass *value;
  
  if (Il2CppMethodInitialized_184344b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_184344b6d = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(current,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(enabled,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,"enabled",pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
    bVar1 = System_String__IsNullOrWhiteSpace(type,(MethodInfo *)0x0);
    pSVar5 = "type";
    if (bVar1) {
      type = "None";
    }
    if ((type != (System_String_o *)0x0) ||
       (type = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), type != (System_String_o *)0x0)) {
      if (0x20 < (type->fields)._stringLength) {
        type = System_String__Substring_1972740(type,0,0x20,(MethodInfo *)0x0);
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(type,(MethodInfo *)0x0);
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,pSVar5,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
      pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"colors",(pSVar2->klass->vtable)._7_get_Item.method);
      if (Il2CppMethodInitialized_184344b6e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
        il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
        Il2CppMethodInitialized_184344b6e = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
      SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)colors,TypeInfo_string_array);
      uVar7 = 0;
      while( true ) {
        index = (uint)uVar7;
        if ((pIVar4 == (Il2CppObject *)0x0) || ((int)*(uint *)&pIVar4[1].monitor <= (int)index)) {
          value = (Il2CppClass *)0x0;
        }
        else {
          if (*(uint *)&pIVar4[1].monitor <= index) {
            ThrowIndexOutOfRangeException();
          }
          value = (&pIVar4[2].klass)[uVar7];
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar3,index,"#FFFFFFFF",(MethodInfo *)0x0);
        pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
                           ((System_String_o *)value,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) break;
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar6,(__this->klass->vtable)._21_Add.method);
        uVar7 = (ulonglong)(index + 1);
        if (3 < (int)(index + 1)) {
          (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar2,"colors",(SimpleJSONFixed_JSONNode_o *)__this,
                     (pSVar2->klass->vtable)._8_set_Item.method);
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray (System_Collections_Generic_IEnumerable_string__o* colors, SimpleJSONFixed_JSONNode_o* fallback, const MethodInfo* method);
// 0x181df2df0

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray
          (System_Collections_Generic_IEnumerable_string__o *colors,SimpleJSONFixed_JSONNode_o *fallback,
          MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  uint index;
  ulonglong uVar4;
  Il2CppClass *value;
  
  if (Il2CppMethodInitialized_184344b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_184344b6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)colors,TypeInfo_string_array);
  uVar4 = 0;
  while( true ) {
    index = (uint)uVar4;
    if ((pIVar1 == (Il2CppObject *)0x0) || ((int)*(uint *)&pIVar1[1].monitor <= (int)index)) {
      value = (Il2CppClass *)0x0;
    }
    else {
      if (*(uint *)&pIVar1[1].monitor <= index) {
        ThrowIndexOutOfRangeException();
      }
      value = (&pIVar1[2].klass)[uVar4];
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,index,"#FFFFFFFF",(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
                       ((System_String_o *)value,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) break;
    (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar3,(__this->klass->vtable)._21_Add.method);
    uVar4 = (ulonglong)(index + 1);
    if (3 < (int)(index + 1)) {
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime (SimpleJSONFixed_JSONNode_o* node, bool saveLocal, const MethodInfo* method);
// 0x181df24b0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime
               (SimpleJSONFixed_JSONNode_o *node,bool saveLocal,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  SimpleJSONFixed_JSONNode_o *info;
  System_String_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_184344b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_184344b6f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 != (Settings_ProfileSettings_o *)0x0) {
    info = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,(MethodInfo *)0x0);
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (pSVar1->fields).CharacterInfoJson;
      pSVar5 = (*(info->klass->vtable)._3_ToString.methodPtr)(info,(info->klass->vtable)._3_ToString.method);
      if (pSVar2 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar5,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = (pSVar1->fields).Name;
        pSVar6 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"name");
        if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          pSVar4 = pSVar6->klass;
          pIVar7 = (Il2CppObject *)
                   (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar6,(UnityEngine_GameObject_o *)
                                     (pSVar4->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar4);
          if (pSVar3 != (Settings_NameSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar3,pIVar7,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar3 = (pSVar1->fields).Guild;
            pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(info,(MethodInfo *)0x0);
            if (pSVar3 != (Settings_NameSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar5,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              pSVar2 = (pSVar1->fields).GuildRoleSprite;
              if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar2,
                           (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pSVar2 = (pSVar1->fields).NameFont;
                pSVar6 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                                   (info,(MethodInfo *)"nameFont");
                if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                  pSVar4 = pSVar6->klass;
                  pIVar7 = (Il2CppObject *)
                           (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                                     (pSVar6,(UnityEngine_GameObject_o *)
                                             (pSVar4->vtable)._9_SetUnhandledAttributes.method,
                                      (MethodInfo *)pSVar4);
                  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar2,pIVar7,
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    pSVar2 = (pSVar1->fields).GuildFont;
                    pSVar6 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                                       (info,(MethodInfo *)"guildFont");
                    if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                      pSVar4 = pSVar6->klass;
                      pIVar7 = (Il2CppObject *)
                               (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                                         (pSVar6,(UnityEngine_GameObject_o *)
                                                 (pSVar4->vtable)._9_SetUnhandledAttributes.method,
                                          (MethodInfo *)pSVar4);
                      if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                        Settings_TypedSetting_object___set_Value
                                  ((Settings_TypedSetting_T__o *)pSVar2,pIVar7,
                                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                        pSVar6 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                                           (info,(MethodInfo *)"nameEffect");
                        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                                  ((SimpleJSONFixed_JSONNode_o *)pSVar6,(pSVar1->fields).NameEffectEnabled,
                                   (pSVar1->fields).NameEffect,(pSVar1->fields).NameEffectColorA,
                                   (pSVar1->fields).NameEffectColorB,(pSVar1->fields).NameEffectColorC,
                                   (pSVar1->fields).NameEffectColorD,(MethodInfo *)0x0);
                        pSVar6 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                                           (info,(MethodInfo *)"guildEffect");
                        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                                  ((SimpleJSONFixed_JSONNode_o *)pSVar6,(pSVar1->fields).GuildEffectEnabled,
                                   (pSVar1->fields).GuildEffect,(pSVar1->fields).GuildEffectColorA,
                                   (pSVar1->fields).GuildEffectColorB,(pSVar1->fields).GuildEffectColorC,
                                   (pSVar1->fields).GuildEffectColorD,(MethodInfo *)0x0);
                        if (!saveLocal) {
                          return;
                        }
                        (*(pSVar1->klass->vtable)._18_Save.methodPtr)
                                  (pSVar1,(pSVar1->klass->vtable)._18_Save.method);
                        return;
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect (SimpleJSONFixed_JSONNode_o* effect, Settings_BoolSetting_o* enabled, Settings_StringSetting_o* type, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, const MethodInfo* method);
// 0x181df20f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df22ba: mov rax, qword ptr [rip + 0x22ab707]  ; "None"

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
               (SimpleJSONFixed_JSONNode_o *effect,Settings_BoolSetting_o *enabled,
               Settings_StringSetting_o *type,Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  char cVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *value;
  Utility_Color255_o *pUVar5;
  
  if (Il2CppMethodInitialized_184344b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_184344b70 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar4 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"enabled"),
       pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181df23f7;
    cVar3 = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[39].methodPtr)
                      (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[39].method);
  }
  else {
    cVar3 = '\0';
  }
  if (enabled != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)enabled,cVar3 != '\0',
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    value = "None";
    if (bVar2) {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df23f7;
      pSVar4 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"type");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      value = "None";
      if (bVar2) {
        pSVar4 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"type");
        if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df23f7;
        pSVar1 = pSVar4->klass;
        value = (System_String_o *)
                (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar4,(UnityEngine_GameObject_o *)
                                  (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
      }
    }
    if (type != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)type,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df23f7;
        pSVar4 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"colors");
      }
      else {
        pSVar4 = (System_Xml_Schema_XmlSchema_o *)0x0;
      }
      if (colorA != (Settings_ColorSetting_o *)0x0) {
        pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                           ((SimpleJSONFixed_JSONNode_o *)pSVar4,0,(colorA->fields)._value,(MethodInfo *)0x0);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)pUVar5,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        if (colorB != (Settings_ColorSetting_o *)0x0) {
          pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                             ((SimpleJSONFixed_JSONNode_o *)pSVar4,1,(colorB->fields)._value,(MethodInfo *)0x0
                             );
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)pUVar5,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
          if (colorC != (Settings_ColorSetting_o *)0x0) {
            pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                               ((SimpleJSONFixed_JSONNode_o *)pSVar4,2,(colorC->fields)._value,
                                (MethodInfo *)0x0);
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)colorC,(Il2CppObject *)pUVar5,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
            if (colorD != (Settings_ColorSetting_o *)0x0) {
              pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                                 ((SimpleJSONFixed_JSONNode_o *)pSVar4,3,(colorD->fields)._value,
                                  (MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)colorD,(Il2CppObject *)pUVar5,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
              return;
            }
          }
        }
      }
    }
  }
label_181df23f7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LegacyEffect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect (bool name, const MethodInfo* method);
// 0x181df3980

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
  UnityEngine_Color_o *pUVar6;
  System_String_o *pSVar7;
  Settings_ColorSetting_o *pSVar8;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344b71 == '\0') {
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
    Il2CppMethodInitialized_184344b71 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return (SimpleJSONFixed_JSONObject_o *)0x0;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar7 = "enabled";
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
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(b,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar7,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar7 = "type";
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
                  (__this,pSVar7,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        if (name) {
          pSVar8 = (pSVar1->fields).NameEffectColorA;
        }
        else {
          pSVar8 = (pSVar1->fields).GuildEffectColorA;
        }
        if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
          pUVar2 = (pSVar8->fields)._value;
          if (Il2CppMethodInitialized_184344b75 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"#");
            Il2CppMethodInitialized_184344b75 = '\x01';
          }
          if (pUVar2 != (Utility_Color255_o *)0x0) {
            pUVar6 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,pUVar2,(MethodInfo *)0x0);
            local_18.r = (pUVar6->fields).r;
            local_18.g = (pUVar6->fields).g;
            local_18.b = (pUVar6->fields).b;
            local_18.a = (pUVar6->fields).a;
            pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                               ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_1969e50("#",pSVar7,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
            if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
              (*(__this_00->klass->vtable)._21_Add.methodPtr)
                        (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
              if (name) {
                pSVar8 = (pSVar1->fields).NameEffectColorB;
              }
              else {
                pSVar8 = (pSVar1->fields).GuildEffectColorB;
              }
              if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
                pUVar2 = (pSVar8->fields)._value;
                if (Il2CppMethodInitialized_184344b75 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"#");
                  Il2CppMethodInitialized_184344b75 = '\x01';
                }
                if (pUVar2 != (Utility_Color255_o *)0x0) {
                  pUVar6 = Utility_Color255__ToColor
                                     ((UnityEngine_Color_o *)&local_18,pUVar2,(MethodInfo *)0x0);
                  local_18.r = (pUVar6->fields).r;
                  local_18.g = (pUVar6->fields).g;
                  local_18.b = (pUVar6->fields).b;
                  local_18.a = (pUVar6->fields).a;
                  pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                                     ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat_1969e50("#",pSVar7,(MethodInfo *)0x0);
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                  (*(__this_00->klass->vtable)._21_Add.methodPtr)
                            (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
                  if (name) {
                    pSVar8 = (pSVar1->fields).NameEffectColorC;
                  }
                  else {
                    pSVar8 = (pSVar1->fields).GuildEffectColorC;
                  }
                  if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
                    pUVar2 = (pSVar8->fields)._value;
                    if (Il2CppMethodInitialized_184344b75 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"#");
                      Il2CppMethodInitialized_184344b75 = '\x01';
                    }
                    if (pUVar2 != (Utility_Color255_o *)0x0) {
                      pUVar6 = Utility_Color255__ToColor
                                         ((UnityEngine_Color_o *)&local_18,pUVar2,(MethodInfo *)0x0);
                      local_18.r = (pUVar6->fields).r;
                      local_18.g = (pUVar6->fields).g;
                      local_18.b = (pUVar6->fields).b;
                      local_18.a = (pUVar6->fields).a;
                      pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                                         ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
                      pSVar7 = System_String__Concat_1969e50("#",pSVar7,(MethodInfo *)0x0);
                      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                      }
                      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                      (*(__this_00->klass->vtable)._21_Add.methodPtr)
                                (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
                      if (name) {
                        pSVar8 = (pSVar1->fields).NameEffectColorD;
                      }
                      else {
                        pSVar8 = (pSVar1->fields).GuildEffectColorD;
                      }
                      if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
                        pUVar2 = (pSVar8->fields)._value;
                        if (Il2CppMethodInitialized_184344b75 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&"#");
                          Il2CppMethodInitialized_184344b75 = '\x01';
                        }
                        if (pUVar2 != (Utility_Color255_o *)0x0) {
                          pUVar6 = Utility_Color255__ToColor
                                             ((UnityEngine_Color_o *)&local_18,pUVar2,(MethodInfo *)0x0);
                          local_18.r = (pUVar6->fields).r;
                          local_18.g = (pUVar6->fields).g;
                          local_18.b = (pUVar6->fields).b;
                          local_18.a = (pUVar6->fields).a;
                          pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                                             ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
                          pSVar7 = System_String__Concat_1969e50
                                             ("#",pSVar7,(MethodInfo *)0x0);
                          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                          }
                          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
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
// 0x181df3010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df30ee: mov rax, rdi

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,System_String_o *fallback,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b72 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = fallback;
  if (bVar2) {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df310e:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(colors->klass->vtable)._5_get_Item.methodPtr)(colors,(MethodInfo *)(ulonglong)(uint)index);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = (*(colors->klass->vtable)._5_get_Item.methodPtr)(colors,(MethodInfo *)(ulonglong)(uint)index);
      if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df310e;
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue(pSVar4,fallback,(MethodInfo *)0x0)
  ;
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorStringValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue (System_String_o* value, System_String_o* fallback, const MethodInfo* method);
// 0x181df2f80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
          (System_String_o *value,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184344b73 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if (bVar1) {
    local_18.r = local_28.r;
    local_18.g = local_28.g;
    local_18.b = local_28.b;
    local_18.a = local_28.a;
    pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                       ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("#",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ParseColor
// il2cpp: Utility_Color255_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor (SimpleJSONFixed_JSONNode_o* colors, int32_t index, Utility_Color255_o* fallback, const MethodInfo* method);
// 0x181df42b0

Utility_Color255_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,Utility_Color255_o *fallback,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *htmlString;
  Utility_Color255_o *__this;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344b74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b74 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df4425:
      ThrowNullReferenceException();
    }
    pSVar7 = (*(colors->klass->vtable)._5_get_Item.methodPtr)(colors,(MethodInfo *)(ulonglong)(uint)index);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar7 = (*(colors->klass->vtable)._5_get_Item.methodPtr)(colors,(MethodInfo *)(ulonglong)(uint)index);
      if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df4425;
      pSVar1 = pSVar7->klass;
      htmlString = (System_String_o *)
                   (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar7,(UnityEngine_GameObject_o *)
                                     (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
      goto label_181df43b7;
    }
  }
  htmlString = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_181df43b7:
  bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                    (htmlString,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  uVar4 = local_38._8_8_;
  uVar2 = local_38._0_8_;
  if (bVar6) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    uVar5 = local_38._8_8_;
    uVar3 = local_38._0_8_;
    local_38.r = (float)uVar2;
    local_38.g = SUB84(uVar2,4);
    local_28[0].r = local_38.r;
    local_28[0].g = local_38.g;
    local_38.b = (float)uVar4;
    local_38.a = SUB84(uVar4,4);
    local_28[0].b = local_38.b;
    local_28[0].a = local_38.a;
    local_38._0_8_ = uVar3;
    local_38._8_8_ = uVar5;
    Utility_Color255___ctor_23327a0(__this,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    return __this;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex (Utility_Color255_o* color, const MethodInfo* method);
// 0x181df2f10

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex(Utility_Color255_o *color,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184344b75 = '\x01';
  }
  if (color != (Utility_Color255_o *)0x0) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,color,(MethodInfo *)0x0);
    local_18.r = (pUVar1->fields).r;
    local_18.g = (pUVar1->fields).g;
    local_18.b = (pUVar1->fields).b;
    local_18.a = (pUVar1->fields).a;
    pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                       ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("#",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x181df4ff0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim(System_String_o *value,int32_t max,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), value == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (max < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring_1972740(value,0,max,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$TrimColoredText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x181df4f00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df4f7f: nop 

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText
          (System_String_o *value,int32_t max,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_184344b76 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(value,(MethodInfo *)0x0);
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).Text, pSVar2 != (System_String_o *)0x0)) {
    if ((pSVar2->fields)._stringLength <= max) {
      pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (pSVar2,(System_Collections_Generic_IList_string__o *)(pGVar1->fields).Colors,
                          (MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar2 = System_String__Substring_1972740(pSVar2,0,max,(MethodInfo *)0x0);
    (pGVar1->fields).Text = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).Text,pSVar2);
    while ((__this = (pGVar1->fields).Colors, __this != (System_Collections_Generic_List_string__o *)0x0 &&
           (pSVar2 = (pGVar1->fields).Text, pSVar2 != (System_String_o *)0x0))) {
      if ((__this->fields)._size <= (pSVar2->fields)._stringLength) {
        pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                           ((pGVar1->fields).Text,(System_Collections_Generic_IList_string__o *)__this,
                            (MethodInfo *)0x0);
        return pSVar2;
      }
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,(__this->fields)._size + -1,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    }
  }
  ThrowNullReferenceException();
}


