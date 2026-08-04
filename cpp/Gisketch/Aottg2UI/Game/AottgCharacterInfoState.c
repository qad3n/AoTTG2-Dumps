// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterInfoState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Current
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current (const MethodInfo* method);
// 0x44f90c0

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  
  if (g_data_057aecf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aecf3 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)method_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8);
    }
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(method_00);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SetRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44fd6c0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (g_data_057aecf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    g_data_057aecf4 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,method);
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = pSVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8),pSVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ClearRemote
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote (const MethodInfo* method);
// 0x44fdcc0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ClearRemote(MethodInfo *method)

{
  if (g_data_057aecf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    g_data_057aecf5 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8),0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyCurrentToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime (const MethodInfo* method);
// 0x44fdd10

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
// 0x44fe040

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057aecf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057aecf6 = '\x01';
  }
  if (g_data_057aecf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    g_data_057aecf5 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8));
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
// 0x44fe0e0

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(node,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$WithNameAndGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild (System_String_o* name, System_String_o* guild, System_String_o* guildPresetId, System_Collections_Generic_IEnumerable_string__o* badges, bool nameEffectEnabled, System_String_o* nameEffectType, System_Collections_Generic_IEnumerable_string__o* nameEffectColors, bool guildEffectEnabled, System_String_o* guildEffectType, System_Collections_Generic_IEnumerable_string__o* guildEffectColors, System_String_o* nameFont, System_String_o* guildFont, const MethodInfo* method);
// 0x44fe0f0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild
          (System_String_o *name,System_String_o *guild,System_String_o *guildPresetId,
          System_Collections_Generic_IEnumerable_string__o *badges,bool_conflict nameEffectEnabled,
          System_String_o *nameEffectType,System_Collections_Generic_IEnumerable_string__o *nameEffectColors,
          bool_conflict guildEffectEnabled,System_String_o *guildEffectType,
          System_Collections_Generic_IEnumerable_string__o *guildEffectColors,System_String_o *nameFont,
          System_String_o *guildFont,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *pSVar6;
  SimpleJSONFixed_JSONObject_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar10;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_string__o *serialized;
  System_Collections_Generic_List_string__o *__this;
  bool_conflict bVar12;
  undefined4 in_register_00000084;
  
  pMVar11 = (MethodInfo *)name;
  bVar12 = nameEffectEnabled;
  if (g_data_057aecf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"badges");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    il2cpp_runtime_helper_023445d0(&"name");
    pMVar11 = (MethodInfo *)&"version";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecf7 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar11);
  pSVar3 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  serialized = (System_Collections_Generic_List_string__o *)0x1;
  pMVar11 = (MethodInfo *)0x0;
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(1,(MethodInfo *)0x0);
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
              (pSVar3,"version",pSVar4,
               (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).method
              );
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(name,0x1f,method_00);
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
              (pSVar3,"name",pSVar4,
               (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).method
              );
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(guild,0x1f,method_01);
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
              (pSVar3,"guild",pSVar4,
               (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).method
              );
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(guildPresetId,(MethodInfo *)0x0);
    pMVar11 = "guildPresetId";
    (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
              (pSVar3,"guildPresetId",pSVar4,
               (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).method
              );
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray(badges,pMVar11);
    pMVar11 = "badges";
    serialized = pSVar3;
    (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
              (pSVar3,"badges",pSVar6);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"nameEffect",(pSVar2->klass->vtable)._7_get_Item.method);
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar4,nameEffectEnabled & 0xff,nameEffectType,nameEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,bVar12));
      (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
                (pSVar3,"nameEffect",pSVar7,
                 (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).
                 method);
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"guildEffect",(pSVar2->klass->vtable)._7_get_Item.method);
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
                         (pSVar2,guildEffectEnabled & 0xff,guildEffectType,guildEffectColors,
                          (MethodInfo *)CONCAT44(in_register_00000084,bVar12));
      (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
                (pSVar3,"guildEffect",pSVar7,
                 (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).
                 method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = PatreonEffects_NameFontCatalog__Normalize(nameFont,(MethodInfo *)0x0);
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
                (pSVar3,"nameFont",pSVar2,
                 (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).
                 method);
      pSVar5 = PatreonEffects_NameFontCatalog__Normalize(guildFont,(MethodInfo *)0x0);
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      pMVar11 = "guildFont";
      (*(((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).methodPtr)
                (pSVar3,"guildFont",pSVar2,
                 (((System_Collections_Generic_List_object__VTable *)&pSVar3->klass->vtable)->_8_unknown).
                 method);
      pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                         ((SimpleJSONFixed_JSONNode_o *)pSVar3,pMVar11);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar11;
  if (g_data_057aed0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aed0e = '\x01';
  }
  pGVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((System_String_o *)serialized,pMVar9);
  if ((pGVar8 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (serialized = (System_Collections_Generic_List_string__o *)(pGVar8->fields).Text,
     guild = (System_String_o *)pGVar8, serialized != (System_Collections_Generic_List_string__o *)0x0)) {
    pMVar9 = extraout_RDX;
    if (*(int *)&(serialized->fields)._items <= (int)pMVar11) goto label_044fe53d;
    pGVar10 = &pGVar8->fields;
    pSVar5 = System_String__Substring_3af8da0((System_String_o *)serialized,0,(int)pMVar11,(MethodInfo *)0x0);
    (pGVar8->fields).Text = pSVar5;
    serialized = (System_Collections_Generic_List_string__o *)pGVar10;
    il2cpp_runtime_helper_022b4080(pGVar10,pSVar5);
    pSVar3 = (pGVar8->fields).Colors;
    pMVar11 = extraout_RDX_00;
    while (__this = pSVar3, __this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = pGVar10->Text;
      serialized = (System_Collections_Generic_List_string__o *)0x0;
      if (pSVar5 == (System_String_o *)0x0) break;
      iVar1 = (__this->fields)._size;
      if (iVar1 <= (pSVar5->fields)._stringLength) {
        pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                           (pSVar5,(System_Collections_Generic_IList_string__o *)__this,pMVar11);
        return (SimpleJSONFixed_JSONNode_o *)pSVar5;
      }
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,iVar1 + -1,MethodInfo_Void_RemoveAt);
      pMVar11 = extraout_RDX_01;
      serialized = __this;
      pSVar3 = (pGVar8->fields).Colors;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX_02;
label_044fe53d:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     ((System_String_o *)serialized,
                      (System_Collections_Generic_IList_string__o *)
                      (((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)guild)->fields).
                      Colors,pMVar9);
  return (SimpleJSONFixed_JSONNode_o *)pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Sanitize
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44fd710

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

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
  
  if (g_data_057aecf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"badges");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    il2cpp_runtime_helper_023445d0(&"name");
    il2cpp_runtime_helper_023445d0(&"version");
    g_data_057aecf8 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(1,(MethodInfo *)0x0);
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"version",pSVar3);
    if (g_data_057aecfb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"GUEST");
      g_data_057aecfb = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"GUEST";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x30);
      if (lVar1 == 0) goto label_044fdcb2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"name",(System_String_o *)*puVar4,pMVar8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar5,0x1f,method_00);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"name",pSVar3);
    if (g_data_057aecfc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057aecfc = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 == 0) goto label_044fdcb2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty
                       (node,"guild",(System_String_o *)*puVar4,pMVar8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText(pSVar5,0x1f,method_01);
    node_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"guild",pSVar3);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString(node,"guildPresetId",0x40,pMVar8);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
                       (pSVar5,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"guildPresetId",pSVar3,(__this->klass->vtable)._8_set_Item.method);
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "badges";
    if ((char)bVar2 != '\0') {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044fdcb2;
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
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "nameEffect";
    if ((char)bVar2 == '\0') {
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(1,pMVar9);
    }
    else {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044fdcb2;
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
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar8 = "guildEffect";
    if ((char)bVar2 == '\0') {
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(0,pMVar9);
    }
    else {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044fdcb2;
      pMVar9 = "guildEffect";
      pSVar7 = (SimpleJSONFixed_JSONObject_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"guildEffect",(node->klass->vtable)._7_get_Item.method);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect
                       ((SimpleJSONFixed_JSONNode_o *)pSVar7,pMVar9);
    pMVar9 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pMVar8,pSVar7);
    if (g_data_057aecfd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"Normal");
      g_data_057aecfd = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"Normal";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x70);
      if (lVar1 == 0) goto label_044fdcb2;
      puVar4 = (undefined8 *)(lVar1 + 0x18);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                       (node,"nameFont",(System_String_o *)*puVar4,pMVar9);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    pMVar8 = (__this->klass->vtable)._8_set_Item.method;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"nameFont",pSVar3);
    if (g_data_057aecfe == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"Normal");
      g_data_057aecfe = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (lVar1 == 0) {
      puVar4 = &"Normal";
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x78);
      if (lVar1 == 0) goto label_044fdcb2;
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
label_044fdcb2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    g_data_057aecf5 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  pSVar3 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8),0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$DisplayGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x4500110

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  code *vtableDispatch;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  Il2CppMethodPointer pIVar2;
  long *plVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  long lVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *s;
  System_String_o *pSVar8;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar9;
  System_String_o *extraout_RDX;
  System_String_o *unaff_RBX;
  ulong uVar10;
  SimpleJSONFixed_JSONArray_o *pSVar11;
  void *in_R8;
  ulong *unaff_R12;
  undefined1 auVar12 [16];
  UnityEngine_Color_Fields UStack_d8;
  SimpleJSONFixed_JSONArray_o *pSStack_c0;
  SimpleJSONFixed_JSONNode_o *pSStack_b8;
  UnityEngine_Color_Fields UStack_b0;
  System_String_o *pSStack_98;
  long *plStack_90;
  UnityEngine_Color_Fields UStack_68;
  System_String_o *pSStack_58;
  ulong *puStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  long *plStack_40;
  
  if (g_data_057aecf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aecf9 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  pSVar11 = (SimpleJSONFixed_JSONArray_o *)info;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_045001fe:
    unaff_RBX = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500216:
    bVar1 = System_String__IsNullOrWhiteSpace(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                         (unaff_RBX,(MethodInfo *)0x0);
      return pSVar4;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    pSVar11 = (SimpleJSONFixed_JSONArray_o *)info;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_045002ea:
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      unaff_R12 = &"guild";
      unaff_RBX = (System_String_o *)
                  (*(info->klass->vtable)._7_get_Item.methodPtr)
                            (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto label_045002ea;
      uVar10 = "guild";
      pSVar11 = (SimpleJSONFixed_JSONArray_o *)info;
      plVar3 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"guild",(info->klass->vtable)._7_get_Item.method);
      if (plVar3 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar3 + 0x1c8);
        pSVar4 = (System_String_o *)
                 (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtableDispatch);
        return pSVar4;
      }
    }
  }
  else if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    unaff_R12 = &"guildPresetId";
    unaff_RBX = (System_String_o *)
                (*(info->klass->vtable)._7_get_Item.methodPtr)
                          (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_045001fe;
    uVar10 = "guildPresetId";
    pSVar11 = (SimpleJSONFixed_JSONArray_o *)info;
    auVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                        (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
    pIVar2 = auVar12._0_8_;
    if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_0450030e;
    in_RCX = *(MethodInfo **)pIVar2;
    unaff_RBX = (System_String_o *)
                (*in_RCX[5].invoker_method)
                          (pIVar2,(MethodInfo *)in_RCX[5].name,auVar12._8_8_,&in_RCX->methodPointer,in_R8);
    goto label_04500216;
  }
label_0450030e:
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar11 != (SimpleJSONFixed_JSONArray_o *)0x0) ||
     (pSVar11 = (SimpleJSONFixed_JSONArray_o *)**(long **)(g_data_057b9c00 + 0xb8),
     pSVar11 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
    if (*(int *)&(pSVar11->fields).m_List <= (int32_t)uVar10) {
      return (System_String_o *)pSVar11;
    }
    pSVar4 = System_String__Substring_3af8da0((System_String_o *)pSVar11,0,(int32_t)uVar10,(MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_40 = &TypeInfo_JSONNode;
  pSStack_58 = unaff_RBX;
  puStack_50 = unaff_R12;
  pSStack_48 = info;
  if (g_data_057aed0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  s = pSVar11;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = extraout_RDX;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if (pSVar11 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar11->klass->vtable)._5_get_Item.methodPtr)
                       (pSVar11,uVar10 & 0xffffffff,(pSVar11->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_68.r = 0.0;
      UStack_68.g = 0.0;
      UStack_68.b = 0.0;
      UStack_68.a = 0.0;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar4,(UnityEngine_Color_o *)&UStack_68,(MethodInfo *)0x0);
      pSVar4 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        color_08.fields.b = UStack_68.b;
        color_08.fields.a = UStack_68.a;
        color_08.fields.r = UStack_68.r;
        color_08.fields.g = UStack_68.g;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)(uVar10 & 0xffffffff);
    plVar3 = (long *)(*(pSVar11->klass->vtable)._5_get_Item.methodPtr)
                               (pSVar11,pSVar5,(pSVar11->klass->vtable)._5_get_Item.method);
    s = pSVar11;
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      goto label_0450043b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_JSONNode;
  pSStack_98 = extraout_RDX;
  if (g_data_057aed06 == '\0') {
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar4 = TypeInfo_string;
  pSVar11 = s;
  lVar6 = il2cpp_runtime_helper_023051f0();
  if (lVar6 == 0) {
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_b0.b;
      color_00.fields.a = UStack_b0.a;
      color_00.fields.r = UStack_b0.r;
      color_00.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    pSVar11 = s;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_b0.b;
      color_01.fields.a = UStack_b0.a;
      color_01.fields.r = UStack_b0.r;
      color_01.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_b0.b;
      color_02.fields.a = UStack_b0.a;
      color_02.fields.r = UStack_b0.r;
      color_02.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_b0.b;
      color_03.fields.a = UStack_b0.a;
      color_03.fields.r = UStack_b0.r;
      color_03.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
    pSVar4 = (System_String_o *)0x0;
label_045007e1:
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_b0.b;
      color_04.fields.a = UStack_b0.a;
      color_04.fields.r = UStack_b0.r;
      color_04.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    pSVar11 = s;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    pSVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar6 + 0x18) < 2) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar4 = *(System_String_o **)(lVar6 + 0x28);
    }
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_b0.b;
      color_05.fields.a = UStack_b0.a;
      color_05.fields.r = UStack_b0.r;
      color_05.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    pSVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar8 = *(System_String_o **)(lVar6 + 0x30);
    }
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar8,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_b0.b;
      color_06.fields.a = UStack_b0.a;
      color_06.fields.r = UStack_b0.r;
      color_06.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (SimpleJSONFixed_JSONArray_o *)0x0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = __this->klass;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    pSVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(SimpleJSONFixed_JSONArray_o **)(lVar6 + 0x38);
    }
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b0.r = 0.0;
    UStack_b0.g = 0.0;
    UStack_b0.b = 0.0;
    UStack_b0.a = 0.0;
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_b0.b;
      color_07.fields.a = UStack_b0.a;
      color_07.fields.r = UStack_b0.r;
      color_07.fields.g = UStack_b0.g;
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
    return (System_String_o *)__this;
  }
  if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) != 0) {
    pSVar4 = *(System_String_o **)(lVar6 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar8 = pSVar4;
label_04500b08:
  pSStack_b8 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c0 = s;
  pSStack_b8 = pSVar5;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_d8.r = 0.0;
  UStack_d8.g = 0.0;
  UStack_d8.b = 0.0;
  UStack_d8.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pSVar11,(UnityEngine_Color_o *)&UStack_d8,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_d8.b;
    color.fields.a = UStack_d8.a;
    color.fields.r = UStack_d8.r;
    color.fields.g = UStack_d8.g;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Local
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local (const MethodInfo* method);
// 0x44fd5a0

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(MethodInfo *method)

{
  long lVar1;
  System_String_o *value;
  char cVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  undefined8 *puVar6;
  MethodInfo *pMVar7;
  undefined1 auVar8 [12];
  
  if (g_data_057aecfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecfa = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    puVar4 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) {
      auVar8 = il2cpp_runtime_helper_022b2c90();
      if (auVar8._8_4_ != 1) {
        _Unwind_Resume(auVar8._0_8_);
      }
      puVar4 = (undefined8 *)__cxa_begin_catch(auVar8._0_8_);
      pMVar7 = *(MethodInfo **)*puVar4;
      cVar2 = il2cpp_runtime_helper_0233e000();
      if (cVar2 != '\0') {
        __cxa_end_catch();
        pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                           ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar7);
        return pSVar5;
      }
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar4;
      __cxa_throw(puVar6,&PTR_PTR_05215060,0);
    }
    puVar4 = (undefined8 *)(lVar1 + 0x18);
  }
  value = (System_String_o *)*puVar4;
  pMVar7 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                       ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar7);
    return pSVar5;
  }
  pMVar7 = (MethodInfo *)0x0;
  pSVar5 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(pSVar5,pMVar7);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName (const MethodInfo* method);
// 0x44feba0

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalName(MethodInfo *method)

{
  long lVar1;
  code *vtableDispatch;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  long *plVar8;
  MethodInfo *pMVar9;
  SimpleJSONFixed_JSONArray_o *__this;
  undefined8 *puVar10;
  undefined8 uVar11;
  int length;
  System_String_o *extraout_RDX;
  System_String_o *extraout_RDX_00;
  undefined8 in_RSI;
  undefined8 uVar12;
  System_String_o **ppSVar13;
  MethodInfo *pMVar14;
  MethodInfo *a;
  long lVar15;
  undefined1 auVar16 [12];
  long lStack_c0;
  
  if (g_data_057aecfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    ppSVar13 = &"GUEST";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfb = '\x01';
    method = (MethodInfo *)ppSVar13;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return "GUEST";
  }
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    return *(System_String_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aecff = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = 0;
  pMVar14 = method;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX;
  }
  if (method != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(method->methodPointer + 0x1a8))
                       (method,in_RSI,*(undefined8 *)(method->methodPointer + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX;
    }
    uVar11 = in_RSI;
    pMVar14 = method;
    plVar6 = (long *)(**(code **)(method->methodPointer + 0x1a8))
                               (method,in_RSI,*(undefined8 *)(method->methodPointer + 0x1b0));
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return extraout_RDX;
      }
      plVar6 = (long *)(**(code **)(method->methodPointer + 0x1a8))
                                 (method,in_RSI,*(undefined8 *)(method->methodPointer + 0x1b0));
      uVar11 = in_RSI;
      pMVar14 = method;
      if (plVar6 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar6 + 0x1c8);
        pSVar7 = (System_String_o *)
                 (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x1d0),vtableDispatch);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pMVar14 = (MethodInfo *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfc = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    return *(System_String_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed00 = '\x01';
  }
  plVar6 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar12 = 0;
  a = pMVar14;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX_00;
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(pMVar14->methodPointer + 0x1a8))
                       (pMVar14,uVar11,*(undefined8 *)(pMVar14->methodPointer + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX_00;
    }
    plVar8 = (long *)(**(code **)(pMVar14->methodPointer + 0x1a8))
                               (pMVar14,uVar11,*(undefined8 *)(pMVar14->methodPointer + 0x1b0));
    uVar12 = uVar11;
    a = pMVar14;
    if (plVar8 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = a;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (a != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(a->methodPointer + 0x1a8))(a,uVar12,*(undefined8 *)(a->methodPointer + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    pMVar14 = a;
    plVar8 = (long *)(**(code **)(a->methodPointer + 0x1a8))
                               (a,uVar12,*(undefined8 *)(a->methodPointer + 0x1b0));
    if (plVar8 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pMVar9 = (MethodInfo *)
               (**(code **)(a->methodPointer + 0x1a8))(a,uVar12,*(undefined8 *)(a->methodPointer + 0x1b0));
      pMVar14 = a;
      if ((pMVar9 != (MethodInfo *)0x0) &&
         ((pSVar7 = (System_String_o *)(**(code **)(pMVar9->methodPointer + 0x1c8))(),
          pSVar7 != (System_String_o *)0x0 ||
          (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pMVar14 = pMVar9,
          pSVar7 != (System_String_o *)0x0)))) {
        if ((pSVar7->fields)._stringLength <= length) {
          return pSVar7;
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,length,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)__this;
  }
  if ((pMVar14 != (MethodInfo *)0x0) &&
     (plVar8 = (long *)(**(code **)(pMVar14->methodPointer + 0x2e8))
                                 (pMVar14,*(undefined8 *)(pMVar14->methodPointer + 0x2f0)),
     plVar8 != (long *)0x0)) {
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerable_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff181;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    plVar6 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
    if (plVar6 == (long *)0x0) goto label_044ff379;
    lStack_c0 = 0;
label_044ff1c0:
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff223;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerator_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff293;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar8 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
    if (plVar8 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))();
      if ((pSVar7 == (System_String_o *)0x0) &&
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar7->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar11 = auVar16._0_8_;
  if (auVar16._8_4_ != 1) {
    lStack_c0 = 0;
    if (plVar6 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar8 = (long *)__cxa_begin_catch();
  lStack_c0 = *plVar8;
  __cxa_end_catch();
label_044ff435:
  if (plVar6 != (long *)0x0) {
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_044ff49d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  if (lStack_c0 == 0) {
    return (System_String_o *)__this;
  }
  do {
    uVar11 = il2cpp_runtime_helper_022fefe0();
    if (plVar6 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
    }
label_044ff536:
    if (lStack_c0 == 0) {
      _Unwind_Resume(uVar11);
    }
    il2cpp_runtime_helper_022fefe0(lStack_c0);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild (const MethodInfo* method);
// 0x44fed50

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuild(MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  MethodInfo *pMVar8;
  SimpleJSONFixed_JSONArray_o *__this;
  undefined8 *puVar9;
  undefined8 uVar10;
  int length;
  System_String_o *extraout_RDX;
  undefined8 in_RSI;
  MethodInfo *a;
  MethodInfo *a_00;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [12];
  long lStack_90;
  
  if (g_data_057aecfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfc = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    return *(System_String_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed00 = '\x01';
  }
  plVar12 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  a = method;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX;
  }
  if (method != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(method->methodPointer + 0x1a8))
                       (method,in_RSI,*(undefined8 *)(method->methodPointer + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX;
    }
    plVar6 = (long *)(**(code **)(method->methodPointer + 0x1a8))
                               (method,in_RSI,*(undefined8 *)(method->methodPointer + 0x1b0));
    uVar10 = in_RSI;
    a = method;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a_00 = a;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (a != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(a->methodPointer + 0x1a8))(a,uVar10,*(undefined8 *)(a->methodPointer + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    a_00 = a;
    plVar6 = (long *)(**(code **)(a->methodPointer + 0x1a8))
                               (a,uVar10,*(undefined8 *)(a->methodPointer + 0x1b0));
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pMVar8 = (MethodInfo *)
               (**(code **)(a->methodPointer + 0x1a8))(a,uVar10,*(undefined8 *)(a->methodPointer + 0x1b0));
      a_00 = a;
      if ((pMVar8 != (MethodInfo *)0x0) &&
         ((pSVar7 = (System_String_o *)(**(code **)(pMVar8->methodPointer + 0x1c8))(),
          pSVar7 != (System_String_o *)0x0 ||
          (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), a_00 = pMVar8,
          pSVar7 != (System_String_o *)0x0)))) {
        if ((pSVar7->fields)._stringLength <= length) {
          return pSVar7;
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,length,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)__this;
  }
  if ((a_00 != (MethodInfo *)0x0) &&
     (plVar6 = (long *)(**(code **)(a_00->methodPointer + 0x2e8))
                                 (a_00,*(undefined8 *)(a_00->methodPointer + 0x2f0)), plVar6 != (long *)0x0))
  {
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff181;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    plVar12 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
    if (plVar12 == (long *)0x0) goto label_044ff379;
    lStack_90 = 0;
label_044ff1c0:
    lVar1 = *plVar12;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff223;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *plVar12;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff293;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar6 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))();
      if ((pSVar7 == (System_String_o *)0x0) &&
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar7->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uVar10 = auVar13._0_8_;
  if (auVar13._8_4_ != 1) {
    lStack_90 = 0;
    if (plVar12 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar6 = (long *)__cxa_begin_catch();
  lStack_90 = *plVar6;
  __cxa_end_catch();
label_044ff435:
  if (plVar12 != (long *)0x0) {
    lVar1 = *plVar12;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar9 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138)
          ;
          goto label_044ff49d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  if (lStack_90 == 0) {
    return (System_String_o *)__this;
  }
  do {
    uVar10 = il2cpp_runtime_helper_022fefe0();
    if (plVar12 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *plVar12;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
            puVar9 = (undefined8 *)
                     (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar9)(plVar12,puVar9[1]);
    }
label_044ff536:
    if (lStack_90 == 0) {
      _Unwind_Resume(uVar10);
    }
    il2cpp_runtime_helper_022fefe0(lStack_90);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalNameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont (const MethodInfo* method);
// 0x4500010

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalNameFont(MethodInfo *method)

{
  code *vtableDispatch;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  Il2CppMethodPointer pIVar2;
  long *plVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *__this;
  long lVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  MethodInfo *s;
  System_String_o *pSVar8;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar9;
  System_String_o *extraout_RDX;
  System_String_o *unaff_RBX;
  ulong uVar10;
  System_String_o **a;
  MethodInfo *pMVar11;
  void *in_R8;
  ulong *unaff_R12;
  undefined1 auVar12 [16];
  UnityEngine_Color_Fields UStack_e8;
  MethodInfo *pMStack_d0;
  SimpleJSONFixed_JSONNode_o *pSStack_c8;
  UnityEngine_Color_Fields UStack_c0;
  System_String_o *pSStack_a8;
  long *plStack_a0;
  UnityEngine_Color_Fields UStack_78;
  System_String_o *pSStack_68;
  ulong *puStack_60;
  MethodInfo *pMStack_58;
  long *plStack_50;
  
  a = (System_String_o **)method;
  if (g_data_057aecfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a = &"Normal";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfd = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar6 == 0) {
    return "Normal";
  }
  lVar6 = *(long *)(lVar6 + 0x70);
  if (lVar6 != 0) {
    return *(System_String_o **)(lVar6 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a = &"Normal";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfe = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar6 == 0) {
    return "Normal";
  }
  lVar6 = *(long *)(lVar6 + 0x78);
  if (lVar6 != 0) {
    return *(System_String_o **)(lVar6 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aecf9 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  pMVar11 = (MethodInfo *)a;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_045001fe:
    unaff_RBX = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500216:
    bVar1 = System_String__IsNullOrWhiteSpace(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                         (unaff_RBX,(MethodInfo *)0x0);
      return pSVar4;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    pMVar11 = (MethodInfo *)a;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_045002ea:
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if ((MethodInfo *)a != (MethodInfo *)0x0) {
      unaff_R12 = &"guild";
      unaff_RBX = (System_String_o *)
                  (*(((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable)._7_get_Item.
                    methodPtr)(a,"guild",
                               (((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable).
                               _7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto label_045002ea;
      uVar10 = "guild";
      pMVar11 = (MethodInfo *)a;
      plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable).
                         _7_get_Item.methodPtr)
                                 (a,"guild",
                                  (((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable).
                                  _7_get_Item.method);
      if (plVar3 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar3 + 0x1c8);
        pSVar4 = (System_String_o *)
                 (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtableDispatch);
        return pSVar4;
      }
    }
  }
  else if ((MethodInfo *)a != (MethodInfo *)0x0) {
    unaff_R12 = &"guildPresetId";
    unaff_RBX = (System_String_o *)
                (*(((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable)._7_get_Item.
                  methodPtr)(a,"guildPresetId",
                             (((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable).
                             _7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_045001fe;
    uVar10 = "guildPresetId";
    pMVar11 = (MethodInfo *)a;
    auVar12 = (*(((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable)._7_get_Item.
                methodPtr)(a,"guildPresetId",
                           (((SimpleJSONFixed_JSONArray_c *)((MethodInfo *)a)->methodPointer)->vtable).
                           _7_get_Item.method);
    pIVar2 = auVar12._0_8_;
    if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_0450030e;
    in_RCX = *(MethodInfo **)pIVar2;
    unaff_RBX = (System_String_o *)
                (*in_RCX[5].invoker_method)
                          (pIVar2,(MethodInfo *)in_RCX[5].name,auVar12._8_8_,&in_RCX->methodPointer,in_R8);
    goto label_04500216;
  }
label_0450030e:
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar11 != (MethodInfo *)0x0) ||
     (pMVar11 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8), pMVar11 != (MethodInfo *)0x0)) {
    if (*(int *)&((SimpleJSONFixed_JSONArray_Fields *)&pMVar11->invoker_method)->m_List <= (int32_t)uVar10) {
      return (System_String_o *)pMVar11;
    }
    pSVar4 = System_String__Substring_3af8da0((System_String_o *)pMVar11,0,(int32_t)uVar10,(MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_JSONNode;
  pSStack_68 = unaff_RBX;
  puStack_60 = unaff_R12;
  pMStack_58 = (MethodInfo *)a;
  if (g_data_057aed0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  s = pMVar11;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = extraout_RDX;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if (pMVar11 != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(((SimpleJSONFixed_JSONArray_c *)pMVar11->methodPointer)->vtable)._5_get_Item.methodPtr)
                       (pMVar11,uVar10 & 0xffffffff,
                        (((SimpleJSONFixed_JSONArray_c *)pMVar11->methodPointer)->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_78.r = 0.0;
      UStack_78.g = 0.0;
      UStack_78.b = 0.0;
      UStack_78.a = 0.0;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar4,(UnityEngine_Color_o *)&UStack_78,(MethodInfo *)0x0);
      pSVar4 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        color_08.fields.b = UStack_78.b;
        color_08.fields.a = UStack_78.a;
        color_08.fields.r = UStack_78.r;
        color_08.fields.g = UStack_78.g;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)(uVar10 & 0xffffffff);
    plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar11->methodPointer)->vtable)._5_get_Item.methodPtr
                     )(pMVar11,pSVar5,
                       (((SimpleJSONFixed_JSONArray_c *)pMVar11->methodPointer)->vtable)._5_get_Item.method);
    s = pMVar11;
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      goto label_0450043b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_a0 = &TypeInfo_JSONNode;
  pSStack_a8 = extraout_RDX;
  if (g_data_057aed06 == '\0') {
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this,(MethodInfo *)0x0);
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar4 = TypeInfo_string;
  pMVar11 = s;
  lVar6 = il2cpp_runtime_helper_023051f0();
  if (lVar6 == 0) {
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_c0.b;
      color_00.fields.a = UStack_c0.a;
      color_00.fields.r = UStack_c0.r;
      color_00.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    pMVar11 = s;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (MethodInfo *)0x0) goto label_04500b08;
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_c0.b;
      color_01.fields.a = UStack_c0.a;
      color_01.fields.r = UStack_c0.r;
      color_01.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_c0.b;
      color_02.fields.a = UStack_c0.a;
      color_02.fields.r = UStack_c0.r;
      color_02.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_c0.b;
      color_03.fields.a = UStack_c0.a;
      color_03.fields.r = UStack_c0.r;
      color_03.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
    pSVar4 = (System_String_o *)0x0;
label_045007e1:
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_c0.b;
      color_04.fields.a = UStack_c0.a;
      color_04.fields.r = UStack_c0.r;
      color_04.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    pMVar11 = s;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (MethodInfo *)0x0) goto label_04500b08;
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    pMVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar6 + 0x18) < 2) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar4 = *(System_String_o **)(lVar6 + 0x28);
    }
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_c0.b;
      color_05.fields.a = UStack_c0.a;
      color_05.fields.r = UStack_c0.r;
      color_05.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    pMVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar8 = *(System_String_o **)(lVar6 + 0x30);
    }
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar8,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_c0.b;
      color_06.fields.a = UStack_c0.a;
      color_06.fields.r = UStack_c0.r;
      color_06.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (MethodInfo *)0x0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    pMVar11 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(MethodInfo **)(lVar6 + 0x38);
    }
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_c0.r = 0.0;
    UStack_c0.g = 0.0;
    UStack_c0.b = 0.0;
    UStack_c0.a = 0.0;
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_c0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_c0.b;
      color_07.fields.a = UStack_c0.a;
      color_07.fields.r = UStack_c0.r;
      color_07.fields.g = UStack_c0.g;
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(((SimpleJSONFixed_JSONArray_c *)__this->methodPointer)->vtable)._21_Add.methodPtr)
              (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)__this->methodPointer)->vtable)._21_Add.method);
    return (System_String_o *)__this;
  }
  if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) != 0) {
    pSVar4 = *(System_String_o **)(lVar6 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar8 = pSVar4;
label_04500b08:
  pSStack_c8 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = s;
  pSStack_c8 = pSVar5;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_e8.r = 0.0;
  UStack_e8.g = 0.0;
  UStack_e8.b = 0.0;
  UStack_e8.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pMVar11,(UnityEngine_Color_o *)&UStack_e8,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_e8.b;
    color.fields.a = UStack_e8.a;
    color.fields.r = UStack_e8.r;
    color.fields.g = UStack_e8.g;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont (const MethodInfo* method);
// 0x4500090

System_String_o * Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LocalGuildFont(MethodInfo *method)

{
  code *vtableDispatch;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  Il2CppMethodPointer pIVar2;
  long *plVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *__this;
  long lVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  MethodInfo *s;
  System_String_o *pSVar8;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar9;
  System_String_o *extraout_RDX;
  System_String_o *unaff_RBX;
  ulong uVar10;
  System_String_o **ppSVar11;
  MethodInfo *pMVar12;
  void *in_R8;
  ulong *unaff_R12;
  undefined1 auVar13 [16];
  UnityEngine_Color_Fields UStack_e0;
  MethodInfo *pMStack_c8;
  SimpleJSONFixed_JSONNode_o *pSStack_c0;
  UnityEngine_Color_Fields UStack_b8;
  System_String_o *pSStack_a0;
  long *plStack_98;
  UnityEngine_Color_Fields UStack_70;
  System_String_o *pSStack_60;
  ulong *puStack_58;
  MethodInfo *pMStack_50;
  long *plStack_48;
  
  if (g_data_057aecfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    ppSVar11 = &"Normal";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfe = '\x01';
    method = (MethodInfo *)ppSVar11;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar6 == 0) {
    return "Normal";
  }
  lVar6 = *(long *)(lVar6 + 0x78);
  if (lVar6 != 0) {
    return *(System_String_o **)(lVar6 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aecf9 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  pMVar12 = method;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_045001fe:
    unaff_RBX = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500216:
    bVar1 = System_String__IsNullOrWhiteSpace(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                         (unaff_RBX,(MethodInfo *)0x0);
      return pSVar4;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    pMVar12 = method;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_045002ea:
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (method != (MethodInfo *)0x0) {
      unaff_R12 = &"guild";
      unaff_RBX = (System_String_o *)
                  (*(((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.methodPtr)
                            (method,"guild",
                             (((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.
                             method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto label_045002ea;
      uVar10 = "guild";
      pMVar12 = method;
      plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.
                         methodPtr)(method,"guild",
                                    (((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable).
                                    _7_get_Item.method);
      if (plVar3 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar3 + 0x1c8);
        pSVar4 = (System_String_o *)
                 (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtableDispatch);
        return pSVar4;
      }
    }
  }
  else if (method != (MethodInfo *)0x0) {
    unaff_R12 = &"guildPresetId";
    unaff_RBX = (System_String_o *)
                (*(((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.methodPtr)
                          (method,"guildPresetId",
                           (((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.method
                          );
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_045001fe;
    uVar10 = "guildPresetId";
    pMVar12 = method;
    auVar13 = (*(((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.methodPtr)
                        (method,"guildPresetId",
                         (((SimpleJSONFixed_JSONArray_c *)method->methodPointer)->vtable)._7_get_Item.method);
    pIVar2 = auVar13._0_8_;
    if (pIVar2 == (Il2CppMethodPointer)0x0) goto label_0450030e;
    in_RCX = *(MethodInfo **)pIVar2;
    unaff_RBX = (System_String_o *)
                (*in_RCX[5].invoker_method)
                          (pIVar2,(MethodInfo *)in_RCX[5].name,auVar13._8_8_,&in_RCX->methodPointer,in_R8);
    goto label_04500216;
  }
label_0450030e:
  il2cpp_runtime_helper_022b2c90();
  if ((pMVar12 != (MethodInfo *)0x0) ||
     (pMVar12 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8), pMVar12 != (MethodInfo *)0x0)) {
    if (*(int *)&((SimpleJSONFixed_JSONArray_Fields *)&pMVar12->invoker_method)->m_List <= (int32_t)uVar10) {
      return (System_String_o *)pMVar12;
    }
    pSVar4 = System_String__Substring_3af8da0((System_String_o *)pMVar12,0,(int32_t)uVar10,(MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_48 = &TypeInfo_JSONNode;
  pSStack_60 = unaff_RBX;
  puStack_58 = unaff_R12;
  pMStack_50 = method;
  if (g_data_057aed0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  s = pMVar12;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pMVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = extraout_RDX;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if (pMVar12 != (MethodInfo *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(((SimpleJSONFixed_JSONArray_c *)pMVar12->methodPointer)->vtable)._5_get_Item.methodPtr)
                       (pMVar12,uVar10 & 0xffffffff,
                        (((SimpleJSONFixed_JSONArray_c *)pMVar12->methodPointer)->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_70.r = 0.0;
      UStack_70.g = 0.0;
      UStack_70.b = 0.0;
      UStack_70.a = 0.0;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar4,(UnityEngine_Color_o *)&UStack_70,(MethodInfo *)0x0);
      pSVar4 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        color_08.fields.b = UStack_70.b;
        color_08.fields.a = UStack_70.a;
        color_08.fields.r = UStack_70.r;
        color_08.fields.g = UStack_70.g;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)(uVar10 & 0xffffffff);
    plVar3 = (long *)(*(((SimpleJSONFixed_JSONArray_c *)pMVar12->methodPointer)->vtable)._5_get_Item.methodPtr
                     )(pMVar12,pSVar5,
                       (((SimpleJSONFixed_JSONArray_c *)pMVar12->methodPointer)->vtable)._5_get_Item.method);
    s = pMVar12;
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      goto label_0450043b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_98 = &TypeInfo_JSONNode;
  pSStack_a0 = extraout_RDX;
  if (g_data_057aed06 == '\0') {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this,(MethodInfo *)0x0);
  pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar4 = TypeInfo_string;
  pMVar12 = s;
  lVar6 = il2cpp_runtime_helper_023051f0();
  if (lVar6 == 0) {
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_b8.b;
      color_00.fields.a = UStack_b8.a;
      color_00.fields.r = UStack_b8.r;
      color_00.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    pMVar12 = s;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (MethodInfo *)0x0) goto label_04500b08;
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_b8.b;
      color_01.fields.a = UStack_b8.a;
      color_01.fields.r = UStack_b8.r;
      color_01.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_b8.b;
      color_02.fields.a = UStack_b8.a;
      color_02.fields.r = UStack_b8.r;
      color_02.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar7,(pSVar9->vtable)._21_Add.method);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_b8.b;
      color_03.fields.a = UStack_b8.a;
      color_03.fields.r = UStack_b8.r;
      color_03.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
    pSVar4 = (System_String_o *)0x0;
label_045007e1:
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar5,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_b8.b;
      color_04.fields.a = UStack_b8.a;
      color_04.fields.r = UStack_b8.r;
      color_04.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    pMVar12 = s;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (MethodInfo *)0x0) goto label_04500b08;
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    pMVar12 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar6 + 0x18) < 2) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar4 = *(System_String_o **)(lVar6 + 0x28);
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (MethodInfo *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_b8.b;
      color_05.fields.a = UStack_b8.a;
      color_05.fields.r = UStack_b8.r;
      color_05.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (MethodInfo *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)0x0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    pMVar12 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar8 = *(System_String_o **)(lVar6 + 0x30);
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar8,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_b8.b;
      color_06.fields.a = UStack_b8.a;
      color_06.fields.r = UStack_b8.r;
      color_06.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (MethodInfo *)0x0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar9 = (SimpleJSONFixed_JSONArray_c *)__this->methodPointer;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    pMVar12 = __this;
    (*(pSVar9->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar9->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar6 + 0x18)) {
      if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(MethodInfo **)(lVar6 + 0x38);
    }
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar9);
    if (g_data_057aed0b == '\0') {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_b8.b;
      color_07.fields.a = UStack_b8.a;
      color_07.fields.r = UStack_b8.r;
      color_07.fields.g = UStack_b8.g;
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(((SimpleJSONFixed_JSONArray_c *)__this->methodPointer)->vtable)._21_Add.methodPtr)
              (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)__this->methodPointer)->vtable)._21_Add.method);
    return (System_String_o *)__this;
  }
  if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) != 0) {
    pSVar4 = *(System_String_o **)(lVar6 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar8 = pSVar4;
label_04500b08:
  pSStack_c0 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pMStack_c8 = s;
  pSStack_c0 = pSVar5;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_e0.r = 0.0;
  UStack_e0.g = 0.0;
  UStack_e0.b = 0.0;
  UStack_e0.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pMVar12,(UnityEngine_Color_o *)&UStack_e0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_e0.b;
    color.fields.a = UStack_e0.a;
    color.fields.r = UStack_e0.r;
    color.fields.g = UStack_e0.g;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$String
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x44fec20

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  code *vtableDispatch;
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONArray_o *__this;
  undefined8 *puVar11;
  undefined8 uVar12;
  int length;
  System_String_o *extraout_RDX;
  System_String_o *pSVar13;
  long lVar14;
  undefined1 auVar15 [12];
  long lStack_b8;
  
  if (g_data_057aecff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aecff = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  pSVar5 = node;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return fallback;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return fallback;
    }
    pSVar7 = key;
    pSVar5 = node;
    plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return fallback;
      }
      plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,key,(node->klass->vtable)._7_get_Item.method);
      pSVar7 = key;
      pSVar5 = node;
      if (plVar6 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar6 + 0x1c8);
        pSVar7 = (System_String_o *)
                 (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x1d0),vtableDispatch);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfc = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    return *(System_String_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed00 = '\x01';
  }
  plVar6 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_String_o *)0x0;
  pSVar8 = pSVar5;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX;
  }
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,pSVar7,(pSVar5->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX;
    }
    plVar9 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,pSVar7,(pSVar5->klass->vtable)._7_get_Item.method);
    pSVar13 = pSVar7;
    pSVar8 = pSVar5;
    if (plVar9 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = pSVar8;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,pSVar13,(pSVar8->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    pSVar5 = pSVar8;
    plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,pSVar13,(pSVar8->klass->vtable)._7_get_Item.method);
    if (plVar9 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar8,pSVar13,(pSVar8->klass->vtable)._7_get_Item.method);
      pSVar5 = pSVar8;
      if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         ((pSVar7 = (System_String_o *)(*(pSVar10->klass->vtable)._9_get_Value.methodPtr)(),
          pSVar7 != (System_String_o *)0x0 ||
          (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar5 = pSVar10,
          pSVar7 != (System_String_o *)0x0)))) {
        if ((pSVar7->fields)._stringLength <= length) {
          return pSVar7;
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,length,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)__this;
  }
  if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar9 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
     plVar9 != (long *)0x0)) {
    lVar1 = *plVar9;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 + 0x138);
          goto label_044ff181;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    plVar6 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
    if (plVar6 == (long *)0x0) goto label_044ff379;
    lStack_b8 = 0;
label_044ff1c0:
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 + 0x138);
          goto label_044ff223;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar11)(plVar6,puVar11[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 + 0x138);
          goto label_044ff293;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar9 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
    if (plVar9 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))();
      if ((pSVar7 == (System_String_o *)0x0) &&
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar7->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar15._0_8_;
  if (auVar15._8_4_ != 1) {
    lStack_b8 = 0;
    if (plVar6 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar9 = (long *)__cxa_begin_catch();
  lStack_b8 = *plVar9;
  __cxa_end_catch();
label_044ff435:
  if (plVar6 != (long *)0x0) {
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_044ff49d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar11)(plVar6,puVar11[1]);
  }
  if (lStack_b8 == 0) {
    return (System_String_o *)__this;
  }
  do {
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (plVar6 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar11 = (undefined8 *)
                      (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar11)(plVar6,puVar11[1]);
    }
label_044ff536:
    if (lStack_b8 == 0) {
      _Unwind_Resume(uVar12);
    }
    il2cpp_runtime_helper_022fefe0(lStack_b8);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$StringAllowEmpty
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x44fedd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__StringAllowEmpty
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONArray_o *__this;
  undefined8 *puVar10;
  undefined8 uVar11;
  int length;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [12];
  long lStack_88;
  
  if (g_data_057aed00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed00 = '\x01';
  }
  plVar13 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  pSVar5 = node;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return fallback;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return fallback;
    }
    plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    pSVar7 = key;
    pSVar5 = node;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = pSVar5;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,pSVar7,(pSVar5->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    pSVar8 = pSVar5;
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,pSVar7,(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 != (long *)0x0) {
      value = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar3 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,pSVar7,(pSVar5->klass->vtable)._7_get_Item.method);
      pSVar8 = pSVar5;
      if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         ((pSVar7 = (System_String_o *)(*(pSVar9->klass->vtable)._9_get_Value.methodPtr)(),
          pSVar7 != (System_String_o *)0x0 ||
          (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar8 = pSVar9,
          pSVar7 != (System_String_o *)0x0)))) {
        if ((pSVar7->fields)._stringLength <= length) {
          return pSVar7;
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,length,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)__this;
  }
  if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar6 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                                 (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method),
     plVar6 != (long *)0x0)) {
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar12) * 0x10 + lVar1 + 0x138);
          goto label_044ff181;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    plVar13 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
    if (plVar13 == (long *)0x0) goto label_044ff379;
    lStack_88 = 0;
label_044ff1c0:
    lVar1 = *plVar13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar12) * 0x10 + lVar1 + 0x138);
          goto label_044ff223;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar10)(plVar13,puVar10[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *plVar13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar12) * 0x10 + lVar1 + 0x138);
          goto label_044ff293;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar6 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))();
      if ((pSVar7 == (System_String_o *)0x0) &&
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar7->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar14 = il2cpp_runtime_helper_022b2c90();
  uVar11 = auVar14._0_8_;
  if (auVar14._8_4_ != 1) {
    lStack_88 = 0;
    if (plVar13 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar6 = (long *)__cxa_begin_catch();
  lStack_88 = *plVar6;
  __cxa_end_catch();
label_044ff435:
  if (plVar13 != (long *)0x0) {
    lVar1 = *plVar13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
          goto label_044ff49d;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  if (lStack_88 == 0) {
    return (System_String_o *)__this;
  }
  do {
    uVar11 = il2cpp_runtime_helper_022fefe0();
    if (plVar13 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *plVar13;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
label_044ff536:
    if (lStack_88 == 0) {
      _Unwind_Resume(uVar11);
    }
    il2cpp_runtime_helper_022fefe0(lStack_88);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$OptionalString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t max, const MethodInfo* method);
// 0x44feed0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__OptionalString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t max,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONArray_o *__this;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_R13;
  undefined1 auVar12 [12];
  long lStack_60;
  
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = node;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    pSVar5 = node;
    plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      pSVar5 = node;
      if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         ((pSVar7 = (System_String_o *)(*(pSVar8->klass->vtable)._9_get_Value.methodPtr)(),
          pSVar7 != (System_String_o *)0x0 ||
          (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar5 = pSVar8,
          pSVar7 != (System_String_o *)0x0)))) {
        if ((pSVar7->fields)._stringLength <= max) {
          return pSVar7;
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,max,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)__this;
  }
  if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
     plVar6 != (long *)0x0)) {
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff181;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    unaff_R13 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
    if (unaff_R13 == (long *)0x0) goto label_044ff379;
    lStack_60 = 0;
label_044ff1c0:
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff223;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar9)(unaff_R13,puVar9[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
          puVar9 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138)
          ;
          goto label_044ff293;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar6 = (long *)(*(code *)*puVar9)(unaff_R13,puVar9[1]);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))();
      if ((pSVar7 == (System_String_o *)0x0) &&
         (pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar7 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar7->fields)._stringLength) {
        pSVar7 = System_String__Substring_3af8da0(pSVar7,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uVar10 = auVar12._0_8_;
  if (auVar12._8_4_ != 1) {
    lStack_60 = 0;
    if (unaff_R13 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar6 = (long *)__cxa_begin_catch();
  lStack_60 = *plVar6;
  __cxa_end_catch();
label_044ff435:
  if (unaff_R13 != (long *)0x0) {
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar9 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138)
          ;
          goto label_044ff49d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar9)(unaff_R13,puVar9[1]);
  }
  if (lStack_60 == 0) {
    return (System_String_o *)__this;
  }
  do {
    uVar10 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R13 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
            puVar9 = (undefined8 *)
                     (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar9)(unaff_R13,puVar9[1]);
    }
label_044ff536:
    if (lStack_60 == 0) {
      _Unwind_Resume(uVar10);
    }
    il2cpp_runtime_helper_022fefe0(lStack_60);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Badges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44ff050

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Badges(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  long *plVar5;
  undefined8 *puVar6;
  System_String_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_R13;
  undefined1 auVar10 [12];
  long local_38;
  
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return __this;
  }
  if ((node != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar5 = (long *)(*(node->klass->vtable)._27_get_Children.methodPtr)
                                 (node,(node->klass->vtable)._27_get_Children.method), plVar5 != (long *)0x0))
  {
    lVar1 = *plVar5;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
          puVar6 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
          goto label_044ff181;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    unaff_R13 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (unaff_R13 == (long *)0x0) goto label_044ff379;
    local_38 = 0;
label_044ff1c0:
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
          puVar6 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
          goto label_044ff223;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar6)(unaff_R13,puVar6[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
          puVar6 = (undefined8 *)((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
          goto label_044ff293;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar5 = (long *)(*(code *)*puVar6)(unaff_R13,puVar6[1]);
    if (plVar5 != (long *)0x0) {
      __this_00 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))();
      if ((__this_00 == (System_String_o *)0x0) &&
         (__this_00 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), __this_00 == (System_String_o *)0x0
         )) goto label_044ff36f;
      if (0x40 < (__this_00->fields)._stringLength) {
        __this_00 = System_String__Substring_3af8da0(__this_00,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_044ff36a;
        iVar4 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar7,(__this->klass->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar10._0_8_;
  if (auVar10._8_4_ != 1) {
    local_38 = 0;
    if (unaff_R13 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar5 = (long *)__cxa_begin_catch();
  local_38 = *plVar5;
  __cxa_end_catch();
label_044ff435:
  if (unaff_R13 != (long *)0x0) {
    lVar1 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
          puVar6 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
          goto label_044ff49d;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar6)(unaff_R13,puVar6[1]);
  }
  if (local_38 == 0) {
    return __this;
  }
  do {
    uVar8 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R13 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
            puVar6 = (undefined8 *)
                     (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar6)(unaff_R13,puVar6[1]);
    }
label_044ff536:
    if (local_38 == 0) {
      _Unwind_Resume(uVar8);
    }
    il2cpp_runtime_helper_022fefe0(local_38);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$BadgesArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__BadgesArray (System_Collections_Generic_IEnumerable_string__o* items, const MethodInfo* method);
// 0x44fe560

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [12];
  long local_38;
  
  if (g_data_057aed03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed03 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar2 = items->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_IEnumerable_string) {
          pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_044fe651;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar13);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(items,TypeInfo_IEnumerable_string,0);
label_044fe651:
    plVar8 = (long *)(*pVVar7->methodPtr)(items,pVVar7->method);
    if (plVar8 != (long *)0x0) {
      local_38 = 0;
label_044fe690:
      do {
        lVar13 = *plVar8;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
              goto label_044fe6f3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator,0);
label_044fe6f3:
        cVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (cVar4 == '\0') goto label_044fe8bc;
        lVar13 = *plVar8;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator_string) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
              goto label_044fe763;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator_string,0);
label_044fe763:
        __this_00 = (System_String_o *)(*(code *)*puVar9)();
        if ((__this_00 == (System_String_o *)0x0) &&
           (__this_00 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8),
           __this_00 == (System_String_o *)0x0)) goto label_044fe81d;
        if (0x40 < (__this_00->fields)._stringLength) {
          __this_00 = System_String__Substring_3af8da0(__this_00,0,0x40,(MethodInfo *)0x0);
        }
        bVar5 = System_String__IsNullOrWhiteSpace(__this_00,(MethodInfo *)0x0);
      } while ((char)bVar5 != '\0');
      if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
        iVar6 = (*(__this->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar6 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(__this_00,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar10,(__this->klass->vtable)._21_Add.method);
        }
        goto label_044fe690;
      }
      il2cpp_runtime_helper_022b2c90();
label_044fe81d:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar15 = il2cpp_runtime_helper_022b2c90();
    uVar12 = auVar15._0_8_;
    if (auVar15._8_4_ != 1) {
      local_38 = 0;
      if (plVar8 == (long *)0x0) goto label_044fe9b6;
      goto label_044fe94c;
    }
    plVar11 = (long *)__cxa_begin_catch();
    local_38 = *plVar11;
    __cxa_end_catch();
label_044fe8bc:
    if (plVar8 != (long *)0x0) {
      lVar13 = *plVar8;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar9 = (undefined8 *)
                     (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_044fe91d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_044fe91d:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
    if (local_38 != 0) {
      do {
        uVar12 = il2cpp_runtime_helper_022fefe0();
        if (plVar8 != (long *)0x0) {
label_044fe94c:
          lVar13 = *plVar8;
          if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
                puVar9 = (undefined8 *)
                         (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
                goto label_044fe9ad;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
          }
          puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_044fe9ad:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
label_044fe9b6:
        if (local_38 == 0) {
          _Unwind_Resume(uVar12);
        }
        il2cpp_runtime_helper_022fefe0(local_38);
      } while( true );
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Effect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44ffa40

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  code *vtableDispatch;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  uint uVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppMethodPointer pIVar7;
  SimpleJSONFixed_JSONObject_o *pSVar8;
  SimpleJSONFixed_JSONObject_o *__this_00;
  long lVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONObject_o *s;
  System_String_o *s_00;
  SimpleJSONFixed_JSONObject_o *pSVar11;
  SimpleJSONFixed_JSONArray_o **method_00;
  SimpleJSONFixed_JSONArray_c *pSVar12;
  SimpleJSONFixed_JSONObject_c *pSVar13;
  SimpleJSONFixed_JSONObject_o *extraout_RDX;
  System_String_o **s_01;
  System_String_o **unaff_RBP;
  ulong uVar14;
  SimpleJSONFixed_JSONObject_o **a;
  void *in_R8;
  ulong uVar15;
  undefined1 auVar16 [16];
  UnityEngine_Color_Fields UStack_120;
  SimpleJSONFixed_JSONObject_o *pSStack_108;
  SimpleJSONFixed_JSONNode_o *pSStack_100;
  UnityEngine_Color_Fields UStack_f8;
  SimpleJSONFixed_JSONObject_o *pSStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  SimpleJSONFixed_JSONObject_o *pSStack_c0;
  SimpleJSONFixed_JSONObject_o *pSStack_b8;
  UnityEngine_Color_Fields UStack_b0;
  SimpleJSONFixed_JSONObject_o *pSStack_a0;
  SimpleJSONFixed_JSONNode_o *pSStack_98;
  SimpleJSONFixed_JSONObject_o *pSStack_90;
  long *plStack_88;
  SimpleJSONFixed_JSONObject_c *pSStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  SimpleJSONFixed_JSONObject_o *pSStack_68;
  SimpleJSONFixed_JSONNode_o *pSStack_60;
  SimpleJSONFixed_JSONObject_o *pSStack_58;
  SimpleJSONFixed_JSONArray_o *pSStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (g_data_057aed04 == '\0') {
    uStack_40 = 0x44ffa63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    uStack_40 = 0x44ffa6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    uStack_40 = 0x44ffa7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    uStack_40 = 0x44ffa87;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    uStack_40 = 0x44ffa93;
    il2cpp_runtime_helper_023445d0(&"None");
    uStack_40 = 0x44ffa9f;
    il2cpp_runtime_helper_023445d0(&"colors");
    uStack_40 = 0x44ffaab;
    il2cpp_runtime_helper_023445d0(&"type");
    uStack_40 = 0x44ffab7;
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed04 = '\x01';
  }
  uStack_40 = 0x44ffacd;
  pSVar3 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  uStack_40 = 0x44ffada;
  SimpleJSONFixed_JSONObject___ctor(pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    uStack_40 = 0x44ffaf3;
    il2cpp_runtime_helper_02337ed0();
  }
  s_01 = (System_String_o **)0x0;
  uStack_40 = 0x44ffb01;
  a = (SimpleJSONFixed_JSONObject_o **)node;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  __this = "enabled";
  method_00 = &"enabled";
  if ((char)bVar1 == '\0') {
label_044ffb4d:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_40 = 0x44ffb5f;
      il2cpp_runtime_helper_02337ed0();
    }
    a = (SimpleJSONFixed_JSONObject_o **)((ulong)s_01 & 0xff);
    uStack_40 = 0x44ffb69;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((bool_conflict)a,(MethodInfo *)0x0);
    if (pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      unaff_RBP = (System_String_o **)pSVar3->klass;
      method_00 = (SimpleJSONFixed_JSONArray_o **)
                  (((SimpleJSONFixed_JSONObject_c *)unaff_RBP)->vtable)._8_set_Item.method;
      uStack_40 = 0x44ffb8b;
      (*(((SimpleJSONFixed_JSONObject_c *)unaff_RBP)->vtable)._8_set_Item.methodPtr)(pSVar3,__this,pSVar5);
      s_01 = &"type";
      uStack_40 = 0x44ffba7;
      a = (SimpleJSONFixed_JSONObject_o **)node;
      pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                         (node,"type","None",(MethodInfo *)method_00);
      if ((pSVar6 != (System_String_o *)0x0) ||
         (pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar6 != (System_String_o *)0x0)) {
        if (0x20 < (pSVar6->fields)._stringLength) {
          uStack_40 = 0x44ffbe4;
          pSVar6 = System_String__Substring_3af8da0(pSVar6,0,0x20,(MethodInfo *)0x0);
        }
        uStack_40 = 0x44ffbee;
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        unaff_RBP = (System_String_o **)pSVar3->klass;
        method_00 = (SimpleJSONFixed_JSONArray_o **)
                    (((SimpleJSONFixed_JSONObject_c *)unaff_RBP)->vtable)._8_set_Item.method;
        uStack_40 = 0x44ffc07;
        (*(((SimpleJSONFixed_JSONObject_c *)unaff_RBP)->vtable)._8_set_Item.methodPtr)
                  (pSVar3,"type",pSVar5);
        uStack_40 = 0x44ffc16;
        __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        uStack_40 = 0x44ffc23;
        SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
        if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_40 = 0x44ffe35;
            il2cpp_runtime_helper_02337ed0();
          }
          a = (SimpleJSONFixed_JSONObject_o **)0x0;
          uStack_40 = 0x44ffe40;
          bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            unaff_RBP = &"#FFFFFFFF";
            uStack_40 = 0x44ffe5c;
            s_01 = (System_String_o **)
                   Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             ((SimpleJSONFixed_JSONNode_o *)0x0,0,"#FFFFFFFF",(MethodInfo *)method_00);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffe71;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_40 = 0x44ffe7b;
            a = (SimpleJSONFixed_JSONObject_o **)s_01;
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_01,(MethodInfo *)0x0);
            if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
              method_00 = (SimpleJSONFixed_JSONArray_o **)__this->klass;
              uStack_40 = 0x44ffe9a;
              (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.methodPtr)
                        (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                uStack_40 = 0x44ffeac;
                il2cpp_runtime_helper_02337ed0();
              }
              a = (SimpleJSONFixed_JSONObject_o **)0x0;
              uStack_40 = 0x44ffeb7;
              bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                uStack_40 = 0x44ffecf;
                s_01 = (System_String_o **)
                       Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                 ((SimpleJSONFixed_JSONNode_o *)0x0,1,"#FFFFFFFF",(MethodInfo *)method_00);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  uStack_40 = 0x44ffee4;
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_40 = 0x44ffeee;
                pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_01,(MethodInfo *)0x0);
                method_00 = (SimpleJSONFixed_JSONArray_o **)__this->klass;
                uStack_40 = 0x44fff04;
                (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.methodPtr)
                          (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.method);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  uStack_40 = 0x44fff16;
                  il2cpp_runtime_helper_02337ed0();
                }
                a = (SimpleJSONFixed_JSONObject_o **)0x0;
                uStack_40 = 0x44fff21;
                bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                                  ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  uStack_40 = 0x44fff39;
                  s_01 = (System_String_o **)
                         Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                   ((SimpleJSONFixed_JSONNode_o *)0x0,2,"#FFFFFFFF",(MethodInfo *)method_00);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    uStack_40 = 0x44fff4e;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uStack_40 = 0x44fff58;
                  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_01,(MethodInfo *)0x0);
                  method_00 = (SimpleJSONFixed_JSONArray_o **)__this->klass;
                  uStack_40 = 0x44fff6e;
                  (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.methodPtr)
                            (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.method
                            );
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    uStack_40 = 0x44fff80;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  a = (SimpleJSONFixed_JSONObject_o **)0x0;
                  uStack_40 = 0x44fff8b;
                  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                                    ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
                    pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
                    goto label_044fff95;
                  }
                }
              }
            }
          }
        }
        else {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_40 = 0x44ffc3f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
          uStack_40 = 0x44ffc4d;
          bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            uStack_40 = 0x44ffc6f;
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                     (*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"colors",(node->klass->vtable)._7_get_Item.method);
          }
          unaff_RBP = &"#FFFFFFFF";
          uStack_40 = 0x44ffc87;
          s_01 = (System_String_o **)
                 Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar5,0,"#FFFFFFFF",(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_40 = 0x44ffc9c;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_40 = 0x44ffca6;
          a = (SimpleJSONFixed_JSONObject_o **)s_01;
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_01,(MethodInfo *)0x0);
          if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
            pSVar12 = __this->klass;
            uStack_40 = 0x44ffcc5;
            (*(pSVar12->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar12->vtable)._21_Add.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffcd7;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_40 = 0x44ffce5;
            bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              uStack_40 = 0x44ffd07;
              pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                       (*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"colors",(node->klass->vtable)._7_get_Item.method);
            }
            uStack_40 = 0x44ffd1b;
            pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                               (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar12);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffd30;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_40 = 0x44ffd3a;
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
            pSVar12 = __this->klass;
            uStack_40 = 0x44ffd50;
            (*(pSVar12->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar12->vtable)._21_Add.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffd62;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_40 = 0x44ffd70;
            bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              uStack_40 = 0x44ffd92;
              pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                       (*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"colors",(node->klass->vtable)._7_get_Item.method);
            }
            uStack_40 = 0x44ffda6;
            pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                               (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar12);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffdbb;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_40 = 0x44ffdc5;
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
            method_00 = (SimpleJSONFixed_JSONArray_o **)__this->klass;
            uStack_40 = 0x44ffddb;
            (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.methodPtr)
                      (__this,pSVar5,(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._21_Add.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44ffded;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_40 = 0x44ffdfb;
            bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              uStack_40 = 0x44ffe1d;
              pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                       (*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"colors",(node->klass->vtable)._7_get_Item.method);
            }
label_044fff95:
            uStack_40 = 0x44fff9f;
            pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                               (pSVar5,3,"#FFFFFFFF",(MethodInfo *)method_00);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_40 = 0x44fffb4;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_40 = 0x44fffbe;
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
            uStack_40 = 0x44fffd4;
            (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method)
            ;
            uStack_40 = 0x44ffff4;
            (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                      (pSVar3,"colors",__this,(pSVar3->klass->vtable)._8_set_Item.method);
            return pSVar3;
          }
        }
      }
    }
  }
  else if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    uStack_40 = 0x44ffb2f;
    a = (SimpleJSONFixed_JSONObject_o **)node;
    plVar4 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"enabled",(node->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      method_00 = (SimpleJSONFixed_JSONArray_o **)*plVar4;
      uStack_40 = 0x44ffb4b;
      uVar2 = (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._39_get_AsBool.methodPtr)(plVar4);
      s_01 = (System_String_o **)(ulong)uVar2;
      goto label_044ffb4d;
    }
  }
  uStack_40 = 0x450000b;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfd == '\0') {
    uStack_48 = 0x4500026;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    uStack_48 = 0x4500032;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a = &"Normal";
    uStack_48 = 0x450003e;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfd = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar9 == 0) {
    return "Normal";
  }
  lVar9 = *(long *)(lVar9 + 0x70);
  if (lVar9 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar9 + 0x18);
  }
  uStack_48 = 0x4500082;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfe == '\0') {
    pSStack_50 = (SimpleJSONFixed_JSONArray_o *)0x45000a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_50 = (SimpleJSONFixed_JSONArray_o *)0x45000b2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a = &"Normal";
    pSStack_50 = (SimpleJSONFixed_JSONArray_o *)0x45000be;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfe = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar9 == 0) {
    return "Normal";
  }
  lVar9 = *(long *)(lVar9 + 0x78);
  if (lVar9 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar9 + 0x18);
  }
  pSStack_50 = (SimpleJSONFixed_JSONArray_o *)0x4500102;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = (SimpleJSONFixed_JSONObject_o *)s_01;
  pSStack_60 = node;
  pSStack_58 = pSVar3;
  pSStack_50 = __this;
  if (g_data_057aecf9 == '\0') {
    uStack_78 = 0x4500130;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    uStack_78 = 0x450013c;
    il2cpp_runtime_helper_023445d0(&"guild");
    uStack_78 = 0x4500148;
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aecf9 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    uStack_78 = 0x4500167;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar14 = 0;
  uStack_78 = 0x4500173;
  pSVar3 = (SimpleJSONFixed_JSONObject_o *)a;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_045001fe:
    s_01 = (System_String_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500216:
    uStack_78 = 0x4500220;
    bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)s_01,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar3 = (SimpleJSONFixed_JSONObject_o *)
               Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                         ((System_String_o *)s_01,(MethodInfo *)0x0);
      return pSVar3;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_78 = 0x4500239;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    uStack_78 = 0x4500245;
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)a;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_045002ea:
      return (SimpleJSONFixed_JSONObject_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if ((SimpleJSONFixed_JSONObject_o *)a != (SimpleJSONFixed_JSONObject_o *)0x0) {
      uStack_78 = 0x4500274;
      s_01 = (System_String_o **)
             (*(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.methodPtr)
                       (a,"guild",(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.method
                       );
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        uStack_78 = 0x4500288;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_78 = 0x4500294;
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)s_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto label_045002ea;
      uStack_78 = 0x45002af;
      uVar14 = "guild";
      pSVar3 = (SimpleJSONFixed_JSONObject_o *)a;
      plVar4 = (long *)(*(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"guild",
                                  (((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.method);
      node = (SimpleJSONFixed_JSONNode_o *)&"guild";
      if (plVar4 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar4 + 0x1c8);
        pSVar3 = (SimpleJSONFixed_JSONObject_o *)
                 (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1d0),vtableDispatch);
        return pSVar3;
      }
    }
  }
  else if ((SimpleJSONFixed_JSONObject_o *)a != (SimpleJSONFixed_JSONObject_o *)0x0) {
    uStack_78 = 0x45001a2;
    s_01 = (System_String_o **)
           (*(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.methodPtr)
                     (a,"guildPresetId",(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_78 = 0x45001b6;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_78 = 0x45001c2;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)s_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    node = (SimpleJSONFixed_JSONNode_o *)&"guildPresetId";
    if ((char)bVar1 == '\0') goto label_045001fe;
    uStack_78 = 0x45001dd;
    uVar14 = "guildPresetId";
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)a;
    auVar16 = (*(((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.methodPtr)
                        (a,"guildPresetId",
                         (((SimpleJSONFixed_JSONObject_o *)a)->klass->vtable)._7_get_Item.method);
    pIVar7 = auVar16._0_8_;
    if (pIVar7 == (Il2CppMethodPointer)0x0) goto label_0450030e;
    method_00 = *(SimpleJSONFixed_JSONArray_o ***)pIVar7;
    uStack_78 = 0x45001f9;
    s_01 = (System_String_o **)
           (*(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._9_get_Value.methodPtr)
                     (pIVar7,(((SimpleJSONFixed_JSONArray_c *)method_00)->vtable)._9_get_Value.method,
                      auVar16._8_8_,method_00,in_R8);
    goto label_04500216;
  }
label_0450030e:
  uStack_78 = 0x4500313;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) ||
     (pSVar3 = (SimpleJSONFixed_JSONObject_o *)**(long **)(g_data_057b9c00 + 0xb8),
     pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0)) {
    if (*(int *)&(pSVar3->fields).m_Dict <= (int32_t)uVar14) {
      return pSVar3;
    }
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)
             System_String__Substring_3af8da0((System_String_o *)pSVar3,0,(int32_t)uVar14,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSStack_80 = (SimpleJSONFixed_JSONObject_c *)0x450035e;
  il2cpp_runtime_helper_022b2c90();
  plStack_88 = &TypeInfo_JSONNode;
  uVar15 = uVar14 & 0xffffffff;
  pSStack_a0 = (SimpleJSONFixed_JSONObject_o *)s_01;
  pSStack_98 = node;
  pSStack_90 = (SimpleJSONFixed_JSONObject_o *)a;
  pSStack_80 = (SimpleJSONFixed_JSONObject_c *)unaff_RBP;
  if (g_data_057aed0a == '\0') {
    pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x450038a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45003aa;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45003b6;
  s = pSVar3;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar8 = extraout_RDX;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if (pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45003dd;
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar3->klass->vtable)._5_get_Item.methodPtr)
                       (pSVar3,uVar15,(pSVar3->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45003f2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45003fe;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x4500450;
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_b0.r = 0.0;
      UStack_b0.g = 0.0;
      UStack_b0.b = 0.0;
      UStack_b0.a = 0.0;
      pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x450046b;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        ((System_String_o *)pSVar8,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
      pSVar3 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        color_08.fields.b = UStack_b0.b;
        color_08.fields.a = UStack_b0.a;
        color_08.fields.r = UStack_b0.r;
        color_08.fields.g = UStack_b0.g;
        pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x4500481;
        pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x4500495;
        pSVar3 = (SimpleJSONFixed_JSONObject_o *)
                 System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)(uVar14 & 0xffffffff);
    pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x450041c;
    s = pSVar3;
    plVar4 = (long *)(*(pSVar3->klass->vtable)._5_get_Item.methodPtr)
                               (pSVar3,pSVar5,(pSVar3->klass->vtable)._5_get_Item.method);
    if (plVar4 != (long *)0x0) {
      pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x4500438;
      pSVar8 = (SimpleJSONFixed_JSONObject_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      goto label_0450043b;
    }
  }
  pSStack_b8 = (SimpleJSONFixed_JSONObject_o *)0x45004ad;
  il2cpp_runtime_helper_022b2c90();
  plStack_d0 = &TypeInfo_JSONNode;
  plStack_d8 = &TypeInfo_JSONNode;
  pSStack_e0 = extraout_RDX;
  uStack_c8 = uVar15;
  pSStack_c0 = extraout_RDX;
  pSStack_b8 = pSVar3;
  if (g_data_057aed06 == '\0') {
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,(MethodInfo *)0x0);
  pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar3 = TypeInfo_string;
  pSVar8 = s;
  lVar9 = il2cpp_runtime_helper_023051f0();
  if (lVar9 == 0) {
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (SimpleJSONFixed_JSONObject_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,0,"#FFFFFFFF",(MethodInfo *)method_00);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_f8.b;
      color_00.fields.a = UStack_f8.a;
      color_00.fields.r = UStack_f8.r;
      color_00.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (SimpleJSONFixed_JSONObject_o *)System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0)
      ;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (SimpleJSONFixed_JSONObject_o *)0x0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    pSVar8 = s;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_04500b08;
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar10,(pSVar13->vtable)._21_Add.method);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_f8.b;
      color_01.fields.a = UStack_f8.a;
      color_01.fields.r = UStack_f8.r;
      color_01.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar10,(pSVar13->vtable)._21_Add.method);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_f8.b;
      color_02.fields.a = UStack_f8.a;
      color_02.fields.r = UStack_f8.r;
      color_02.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar10,(pSVar13->vtable)._21_Add.method);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_f8.b;
      color_03.fields.a = UStack_f8.a;
      color_03.fields.r = UStack_f8.r;
      color_03.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
    pSVar6 = (System_String_o *)0x0;
label_045007e1:
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (SimpleJSONFixed_JSONObject_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,0,"#FFFFFFFF",(MethodInfo *)method_00);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar6,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_f8.b;
      color_04.fields.a = UStack_f8.a;
      color_04.fields.r = UStack_f8.r;
      color_04.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (SimpleJSONFixed_JSONObject_o *)System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0)
      ;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (SimpleJSONFixed_JSONObject_o *)0x0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    pSVar8 = s;
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_04500b08;
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    pSVar8 = __this_00;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar13->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar9 + 0x18) < 2) {
      pSVar6 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar6 = *(System_String_o **)(lVar9 + 0x28);
    }
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (SimpleJSONFixed_JSONObject_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar5,1,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar6,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_f8.b;
      color_05.fields.a = UStack_f8.a;
      color_05.fields.r = UStack_f8.r;
      color_05.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (SimpleJSONFixed_JSONObject_o *)System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0)
      ;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_String_o *)0x0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    pSVar8 = __this_00;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar13->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar9 + 0x18)) {
      if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar6 = *(System_String_o **)(lVar9 + 0x30);
    }
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    s_00 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                     (pSVar5,2,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar6,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_f8.b;
      color_06.fields.a = UStack_f8.a;
      color_06.fields.r = UStack_f8.r;
      color_06.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      s_00 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (SimpleJSONFixed_JSONObject_o *)0x0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar3 = (SimpleJSONFixed_JSONObject_o *)SimpleJSONFixed_JSONNode__op_Implicit(s_00,(MethodInfo *)0x0);
    pSVar13 = __this_00->klass;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    pSVar8 = __this_00;
    (*(pSVar13->vtable)._21_Add.methodPtr)(__this_00,pSVar3,(pSVar13->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar9 + 0x18)) {
      if ((*(ulong *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(SimpleJSONFixed_JSONObject_o **)(lVar9 + 0x38);
    }
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar5,3,"#FFFFFFFF",(MethodInfo *)pSVar13);
    if (g_data_057aed0b == '\0') {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_f8.r = 0.0;
    UStack_f8.g = 0.0;
    UStack_f8.b = 0.0;
    UStack_f8.a = 0.0;
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_f8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_f8.b;
      color_07.fields.a = UStack_f8.a;
      color_07.fields.r = UStack_f8.r;
      color_07.fields.g = UStack_f8.g;
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
    pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar5,(__this_00->klass->vtable)._21_Add.method);
    return __this_00;
  }
  if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) != 0) {
    pSVar6 = *(System_String_o **)(lVar9 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = pSVar3;
label_04500b08:
  pSStack_100 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_108 = s;
  pSStack_100 = pSVar5;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_120.r = 0.0;
  UStack_120.g = 0.0;
  UStack_120.b = 0.0;
  UStack_120.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pSVar8,(UnityEngine_Color_o *)&UStack_120,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_120.b;
    color.fields.a = UStack_120.a;
    color.fields.r = UStack_120.r;
    color.fields.g = UStack_120.g;
    pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar11 = (SimpleJSONFixed_JSONObject_o *)
              System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
  }
  return pSVar11;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$EffectWith
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith (SimpleJSONFixed_JSONNode_o* current, bool enabled, System_String_o* type, System_Collections_Generic_IEnumerable_string__o* colors, const MethodInfo* method);
// 0x44fe9f0

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__EffectWith
          (SimpleJSONFixed_JSONNode_o *current,bool_conflict enabled,System_String_o *type,
          System_Collections_Generic_IEnumerable_string__o *colors,MethodInfo *method)

{
  long lVar1;
  code *vtableDispatch;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONObject_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *pSVar7;
  long *plVar8;
  System_String_o *pSVar9;
  long *plVar10;
  System_String_o *pSVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int length;
  SimpleJSONFixed_JSONObject_o *extraout_RDX;
  SimpleJSONFixed_JSONObject_o *extraout_RDX_00;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined8 uVar14;
  SimpleJSONFixed_JSONObject_o **a;
  System_String_o *a_00;
  long lVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  long lStack_f8;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (g_data_057aed05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"colors");
    il2cpp_runtime_helper_023445d0(&"type");
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed05 = '\x01';
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Effect(current,method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (SimpleJSONFixed_JSONObject_o **)((ulong)(uint)enabled & 0xff);
  uVar13 = 0;
  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((bool_conflict)a,(MethodInfo *)0x0);
  if (pSVar5 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar5->klass->vtable)._8_set_Item.methodPtr)
              (pSVar5,"enabled",pSVar6,(pSVar5->klass->vtable)._8_set_Item.method);
    uVar13 = 0;
    a = (SimpleJSONFixed_JSONObject_o **)type;
    bVar3 = System_String__IsNullOrWhiteSpace(type,(MethodInfo *)0x0);
    uVar14 = "type";
    if ((char)bVar3 != '\0') {
      type = "None";
    }
    if ((type != (System_String_o *)0x0) ||
       (type = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), type != (System_String_o *)0x0)) {
      if (0x20 < (type->fields)._stringLength) {
        type = System_String__Substring_3af8da0(type,0,0x20,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(type,(MethodInfo *)0x0);
      (*(pSVar5->klass->vtable)._8_set_Item.methodPtr)
                (pSVar5,uVar14,pSVar6,(pSVar5->klass->vtable)._8_set_Item.method);
      auVar17 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar5,"colors",(pSVar5->klass->vtable)._7_get_Item.method);
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray(colors,auVar17._0_8_,auVar17._8_8_);
      (*(pSVar5->klass->vtable)._8_set_Item.methodPtr)
                (pSVar5,"colors",pSVar7,(pSVar5->klass->vtable)._8_set_Item.method);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a = &"GUEST";
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfb = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return "GUEST";
  }
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aecff = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar14 = 0;
  pSVar9 = (System_String_o *)a;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX;
  }
  if ((System_String_o *)a != (System_String_o *)0x0) {
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)
             (*(((System_String_o *)a)->klass->vtable)._7_CompareTo.methodPtr)
                       (a,uVar13,(((System_String_o *)a)->klass->vtable)._7_CompareTo.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX;
    }
    uVar14 = uVar13;
    pSVar9 = (System_String_o *)a;
    plVar8 = (long *)(*(((System_String_o *)a)->klass->vtable)._7_CompareTo.methodPtr)
                               (a,uVar13,(((System_String_o *)a)->klass->vtable)._7_CompareTo.method);
    if (plVar8 != (long *)0x0) {
      pSVar9 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return extraout_RDX;
      }
      plVar8 = (long *)(*(((System_String_o *)a)->klass->vtable)._7_CompareTo.methodPtr)
                                 (a,uVar13,(((System_String_o *)a)->klass->vtable)._7_CompareTo.method);
      uVar14 = uVar13;
      pSVar9 = (System_String_o *)a;
      if (plVar8 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar8 + 0x1c8);
        pSVar5 = (SimpleJSONFixed_JSONObject_o *)
                 (*vtableDispatch)(plVar8,*(undefined8 *)(*plVar8 + 0x1d0),vtableDispatch);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar9 = (System_String_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfc = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar1 == 0) {
    return (SimpleJSONFixed_JSONObject_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed00 = '\x01';
  }
  plVar8 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  a_00 = pSVar9;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return extraout_RDX_00;
  }
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                       (pSVar9,uVar14,(pSVar9->klass->vtable)._7_CompareTo.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return extraout_RDX_00;
    }
    plVar10 = (long *)(*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                                (pSVar9,uVar14,(pSVar9->klass->vtable)._7_CompareTo.method);
    uVar13 = uVar14;
    a_00 = pSVar9;
    if (plVar10 != (long *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONObject_o *)
               (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      if (pSVar5 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        return pSVar5;
      }
      return (SimpleJSONFixed_JSONObject_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed01 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = a_00;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_044fefb0:
    return (SimpleJSONFixed_JSONObject_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (a_00 != (System_String_o *)0x0) {
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)
             (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                       (a_00,uVar13,(a_00->klass->vtable)._7_CompareTo.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044fefb0;
    pSVar9 = a_00;
    plVar10 = (long *)(*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                                (a_00,uVar13,(a_00->klass->vtable)._7_CompareTo.method);
    if (plVar10 != (long *)0x0) {
      pSVar9 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto label_044fefb0;
      pSVar11 = (System_String_o *)
                (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                          (a_00,uVar13,(a_00->klass->vtable)._7_CompareTo.method);
      pSVar9 = a_00;
      if ((pSVar11 != (System_String_o *)0x0) &&
         ((pSVar5 = (SimpleJSONFixed_JSONObject_o *)(*(pSVar11->klass->vtable)._9_GetTypeCode.methodPtr)(),
          pSVar5 != (SimpleJSONFixed_JSONObject_o *)0x0 ||
          (pSVar5 = (SimpleJSONFixed_JSONObject_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar9 = pSVar11,
          pSVar5 != (SimpleJSONFixed_JSONObject_o *)0x0)))) {
        if (*(int *)&(pSVar5->fields).m_Dict <= length) {
          return pSVar5;
        }
        pSVar5 = (SimpleJSONFixed_JSONObject_o *)
                 System_String__Substring_3af8da0((System_String_o *)pSVar5,0,length,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed02 = '\x01';
  }
  pSVar5 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return pSVar5;
  }
  if ((pSVar9 != (System_String_o *)0x0) &&
     (plVar10 = (long *)(*pSVar9->klass[1]._1.image)(pSVar9,pSVar9->klass[1]._1.gc_desc),
     plVar10 != (long *)0x0)) {
    lVar1 = *plVar10;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerable_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff181;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerable_JSONNode,0);
label_044ff181:
    plVar8 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
    if (plVar8 == (long *)0x0) goto label_044ff379;
    lStack_f8 = 0;
label_044ff1c0:
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff223;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator,0);
label_044ff223:
    cVar2 = (*(code *)*puVar12)(plVar8,puVar12[1]);
    if (cVar2 == '\0') goto label_044ff435;
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IEnumerator_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + lVar1 + 0x138);
          goto label_044ff293;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator_JSONNode,0);
label_044ff293:
    plVar10 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    if (plVar10 != (long *)0x0) {
      pSVar9 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))();
      if ((pSVar9 == (System_String_o *)0x0) &&
         (pSVar9 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar9 == (System_String_o *)0x0))
      goto label_044ff36f;
      if (0x40 < (pSVar9->fields)._stringLength) {
        pSVar9 = System_String__Substring_3af8da0(pSVar9,0,0x40,(MethodInfo *)0x0);
      }
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pSVar5 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044ff36a;
        iVar4 = (*(((SimpleJSONFixed_JSONArray_c *)pSVar5->klass)->vtable)._11_get_Count.methodPtr)();
        if (iVar4 < 0x40) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
          (*(((SimpleJSONFixed_JSONArray_c *)pSVar5->klass)->vtable)._21_Add.methodPtr)
                    (pSVar5,pSVar6,(((SimpleJSONFixed_JSONArray_c *)pSVar5->klass)->vtable)._21_Add.method);
        }
      }
      goto label_044ff1c0;
    }
    il2cpp_runtime_helper_022b2c90();
label_044ff36a:
    il2cpp_runtime_helper_022b2c90();
label_044ff36f:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_044ff379:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar13 = auVar16._0_8_;
  if (auVar16._8_4_ != 1) {
    lStack_f8 = 0;
    if (plVar8 == (long *)0x0) goto label_044ff536;
    goto label_044ff4cc;
  }
  plVar10 = (long *)__cxa_begin_catch();
  lStack_f8 = *plVar10;
  __cxa_end_catch();
label_044ff435:
  if (plVar8 != (long *)0x0) {
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_044ff49d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_044ff49d:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  if (lStack_f8 == 0) {
    return pSVar5;
  }
  do {
    uVar13 = il2cpp_runtime_helper_022fefe0();
    if (plVar8 != (long *)0x0) {
label_044ff4cc:
      lVar1 = *plVar8;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar12 = (undefined8 *)
                      (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_044ff52d;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar15);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_044ff52d:
      (*(code *)*puVar12)(plVar8,puVar12[1]);
    }
label_044ff536:
    if (lStack_f8 == 0) {
      _Unwind_Resume(uVar13);
    }
    il2cpp_runtime_helper_022fefe0(lStack_f8);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorArray
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray (System_Collections_Generic_IEnumerable_string__o* colors, SimpleJSONFixed_JSONNode_o* fallback, const MethodInfo* method);
// 0x45004b0

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorArray
          (System_Collections_Generic_IEnumerable_string__o *colors,SimpleJSONFixed_JSONNode_o *fallback,
          MethodInfo *method)

{
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONArray_o *__this;
  long lVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONArray_o *pSVar6;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar7;
  SimpleJSONFixed_JSONArray_o *htmlString;
  UnityEngine_Color_Fields local_70;
  SimpleJSONFixed_JSONArray_o *pSStack_58;
  SimpleJSONFixed_JSONNode_o *pSStack_50;
  UnityEngine_Color_Fields local_48;
  
  if (g_data_057aed06 == '\0') {
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar4 = TypeInfo_string;
  htmlString = (SimpleJSONFixed_JSONArray_o *)colors;
  lVar2 = il2cpp_runtime_helper_023051f0();
  if (lVar2 == 0) {
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    colors = (System_Collections_Generic_IEnumerable_string__o *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(fallback,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = local_48.b;
      color_00.fields.a = local_48.a;
      color_00.fields.r = local_48.r;
      color_00.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      colors = (System_Collections_Generic_IEnumerable_string__o *)
               System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (SimpleJSONFixed_JSONArray_o *)0x0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    htmlString = (SimpleJSONFixed_JSONArray_o *)colors;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)colors,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,1,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = local_48.b;
      color_01.fields.a = local_48.a;
      color_01.fields.r = local_48.r;
      color_01.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,2,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = local_48.b;
      color_02.fields.a = local_48.a;
      color_02.fields.r = local_48.r;
      color_02.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar5,(pSVar7->vtable)._21_Add.method);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,3,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = local_48.b;
      color_03.fields.a = local_48.a;
      color_03.fields.r = local_48.r;
      color_03.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
    pSVar3 = (System_String_o *)0x0;
label_045007e1:
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    colors = (System_Collections_Generic_IEnumerable_string__o *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(fallback,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar3,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = local_48.b;
      color_04.fields.a = local_48.a;
      color_04.fields.r = local_48.r;
      color_04.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      colors = (System_Collections_Generic_IEnumerable_string__o *)
               System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (SimpleJSONFixed_JSONArray_o *)0x0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    htmlString = (SimpleJSONFixed_JSONArray_o *)colors;
    pSVar4 = (SimpleJSONFixed_JSONArray_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)colors,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    htmlString = __this;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar7->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar2 + 0x18) < 2) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar3 = *(System_String_o **)(lVar2 + 0x28);
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    colors = (System_Collections_Generic_IEnumerable_string__o *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,1,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar3,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = local_48.b;
      color_05.fields.a = local_48.a;
      color_05.fields.r = local_48.r;
      color_05.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      colors = (System_Collections_Generic_IEnumerable_string__o *)
               System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_String_o *)0x0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar4 = (SimpleJSONFixed_JSONArray_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)colors,(MethodInfo *)0x0);
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    htmlString = __this;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar7->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar2 + 0x18)) {
      if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar3 = *(System_String_o **)(lVar2 + 0x30);
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    s = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (fallback,2,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar3,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = local_48.b;
      color_06.fields.a = local_48.a;
      color_06.fields.r = local_48.r;
      color_06.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      s = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    colors = (System_Collections_Generic_IEnumerable_string__o *)0x0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar4 = (SimpleJSONFixed_JSONArray_o *)SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    pSVar7 = __this->klass;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    htmlString = __this;
    (*(pSVar7->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar7->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar2 + 0x18)) {
      if ((*(ulong *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      colors = *(System_Collections_Generic_IEnumerable_string__o **)(lVar2 + 0x38);
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (fallback,3,"#FFFFFFFF",(MethodInfo *)pSVar7);
    if (g_data_057aed0b == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)colors,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = local_48.b;
      color_07.fields.a = local_48.a;
      color_07.fields.r = local_48.r;
      color_07.fields.g = local_48.g;
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
    return __this;
  }
  if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) != 0) {
    pSVar3 = *(System_String_o **)(lVar2 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar6 = pSVar4;
label_04500b08:
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = (SimpleJSONFixed_JSONArray_o *)colors;
  pSStack_50 = fallback;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  local_70.r = 0.0;
  local_70.g = 0.0;
  local_70.b = 0.0;
  local_70.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)htmlString,(UnityEngine_Color_o *)&local_70,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = local_70.b;
    color.fields.a = local_70.a;
    color.fields.r = local_70.r;
    color.fields.g = local_70.g;
    pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar6 = (SimpleJSONFixed_JSONArray_o *)
             System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
  }
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyToRuntime
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime (SimpleJSONFixed_JSONNode_o* node, bool saveLocal, const MethodInfo* method);
// 0x44fdd20

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
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  pMVar6 = (MethodInfo *)CONCAT44(in_register_00000034,saveLocal);
  if (g_data_057aed07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aed07 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,pMVar6);
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xc];
    pIVar4 = (Il2CppObject *)(*(pSVar3->klass->vtable)._3_ToString.methodPtr)(pSVar3);
    if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
      pSVar2 = (Settings_TypedSetting_T__o *)plVar1[6];
      plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"name",(pSVar3->klass->vtable)._7_get_Item.method);
      if ((plVar5 != (long *)0x0) &&
         (pMVar6 = (MethodInfo *)(**(code **)(*plVar5 + 0x1c8))(plVar5),
         pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
        Settings_TypedSetting_object___set_Value(pSVar2,(Il2CppObject *)pMVar6,MethodInfo_Void_set_Value);
        pSVar2 = (Settings_TypedSetting_T__o *)plVar1[7];
        value = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(pSVar3,pMVar6);
        if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting_object___set_Value(pSVar2,(Il2CppObject *)value,MethodInfo_Void_set_Value);
          if ((Settings_TypedSetting_T__o *)plVar1[8] != (Settings_TypedSetting_T__o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)plVar1[8],
                       (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),MethodInfo_Void_set_Value);
            pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xe];
            plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar3,"nameFont",(pSVar3->klass->vtable)._7_get_Item.method);
            if ((plVar5 != (long *)0x0) &&
               (pIVar4 = (Il2CppObject *)(**(code **)(*plVar5 + 0x1c8))(plVar5),
               pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
              Settings_TypedSetting_object___set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
              pSVar2 = (Settings_TypedSetting_T__o *)plVar1[0xf];
              plVar5 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar3,"guildFont",(pSVar3->klass->vtable)._7_get_Item.method);
              if ((plVar5 != (long *)0x0) &&
                 (pIVar4 = (Il2CppObject *)(**(code **)(*plVar5 + 0x1c8))(plVar5),
                 pSVar2 != (Settings_TypedSetting_T__o *)0x0)) {
                Settings_TypedSetting_object___set_Value(pSVar2,pIVar4,MethodInfo_Void_set_Value);
                effect = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar3,"nameEffect",(pSVar3->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (effect,(Settings_BoolSetting_o *)plVar1[0x10],
                           (Settings_StringSetting_o *)plVar1[0x11],(Settings_ColorSetting_o *)plVar1[0x12],
                           (Settings_ColorSetting_o *)plVar1[0x13],(Settings_ColorSetting_o *)plVar1[0x14],
                           (Settings_ColorSetting_o *)plVar1[0x15],in_stack_ffffffffffffffc0);
                pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar3,"guildEffect",(pSVar3->klass->vtable)._7_get_Item.method);
                Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
                          (pSVar3,(Settings_BoolSetting_o *)plVar1[0x16],
                           (Settings_StringSetting_o *)plVar1[0x17],(Settings_ColorSetting_o *)plVar1[0x18],
                           (Settings_ColorSetting_o *)plVar1[0x19],(Settings_ColorSetting_o *)plVar1[0x1a],
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057aecf6 = '\x01';
  }
  if (g_data_057aecf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterInfoState);
    g_data_057aecf5 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCharacterInfoState + 0xb8) = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterInfoState + 0xb8));
  pMVar6 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (pMVar6 != (MethodInfo *)0x0) {
    (**(code **)(pMVar6->methodPointer + 0x248))();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Local(pMVar6);
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyToRuntime(pSVar3,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect (SimpleJSONFixed_JSONNode_o* effect, Settings_BoolSetting_o* enabled, Settings_StringSetting_o* type, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, const MethodInfo* method);
// 0x4500b90

void Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyEffect
               (SimpleJSONFixed_JSONNode_o *effect,Settings_BoolSetting_o *enabled,
               Settings_StringSetting_o *type,Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_object__o *__this;
  long lVar2;
  uint16_t value;
  ushort value_00;
  bool_conflict bVar3;
  uint uVar4;
  int iVar5;
  System_Object_array *pSVar6;
  System_Object_array *pSVar7;
  MethodInfo *pMVar8;
  Settings_ColorSetting_o *colors;
  MethodInfo *value_01;
  long *plVar9;
  System_String_o *pSVar10;
  Utility_Color255_o *pUVar11;
  Il2CppObject *__this_00;
  System_Text_StringBuilder_o *pSVar12;
  Il2CppClass *pIVar13;
  System_Object_array *__this_01;
  System_Object_array *pSVar14;
  System_Object_array *pSVar15;
  System_Object_array *pSVar16;
  Il2CppClass *pIVar17;
  undefined1 extraout_DL;
  undefined8 extraout_RDX;
  System_String_o **text;
  long lVar18;
  undefined1 uVar19;
  int index;
  ulong uVar20;
  int32_t index_00;
  undefined4 uVar21;
  UnityEngine_Color_o UVar22;
  System_Object_array *pSStack_f0;
  Il2CppObject *pIStack_e8;
  Il2CppObject *pIStack_e0;
  System_Object_array *pSStack_d8;
  long *plStack_d0;
  Settings_ColorSetting_o *pSStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  System_Object_array *pSStack_b0;
  Settings_ColorSetting_o *pSStack_a8;
  UnityEngine_Color_Fields UStack_a0;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  UnityEngine_Color_Fields UStack_80;
  Settings_ColorSetting_o *pSStack_70;
  Settings_StringSetting_o *pSStack_68;
  Settings_BoolSetting_o *pSStack_60;
  Settings_ColorSetting_o *pSStack_58;
  System_Object_array *pSStack_50;
  System_Object_array *local_40;
  Settings_ColorSetting_o *local_38;
  
  uVar21 = SUB84(colorB,0);
  local_38 = colorD;
  pIVar13 = (Il2CppClass *)colorA;
  local_40 = (System_Object_array *)colorC;
  if (g_data_057aed08 == '\0') {
    pSStack_50 = (System_Object_array *)0x4500bd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_50 = (System_Object_array *)0x4500bdd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pSStack_50 = (System_Object_array *)0x4500be9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_50 = (System_Object_array *)0x4500bf5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_50 = (System_Object_array *)0x4500c01;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_50 = (System_Object_array *)0x4500c0d;
    il2cpp_runtime_helper_023445d0(&"None");
    pSStack_50 = (System_Object_array *)0x4500c19;
    il2cpp_runtime_helper_023445d0(&"colors");
    pSStack_50 = (System_Object_array *)0x4500c25;
    il2cpp_runtime_helper_023445d0(&"type");
    pSStack_50 = (System_Object_array *)0x4500c31;
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed08 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_50 = (System_Object_array *)0x4500c50;
    il2cpp_runtime_helper_02337ed0();
  }
  colors = (Settings_ColorSetting_o *)0x0;
  value_01 = (MethodInfo *)0x0;
  pSStack_50 = (System_Object_array *)0x4500c5f;
  pSVar7 = (System_Object_array *)effect;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04500ca8:
    if (enabled != (Settings_BoolSetting_o *)0x0) {
      pSStack_50 = (System_Object_array *)0x4500cc7;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)enabled,(uint)colors & 0xff,MethodInfo_Void_set_Value);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_50 = (System_Object_array *)0x4500cdf;
        il2cpp_runtime_helper_02337ed0();
      }
      value_01 = (MethodInfo *)0x0;
      pSStack_50 = (System_Object_array *)0x4500ceb;
      pSVar7 = (System_Object_array *)effect;
      bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pMVar8 = "None";
      if ((char)bVar3 != '\0') {
        if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04500eb2;
        pSStack_50 = (System_Object_array *)0x4500d1c;
        pSVar7 = (System_Object_array *)
                 (*(effect->klass->vtable)._7_get_Item.methodPtr)
                           (effect,"type",(effect->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_50 = (System_Object_array *)0x4500d37;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (System_Object_array *)0x4500d43;
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        enabled = (Settings_BoolSetting_o *)&"type";
        colors = colorB;
        pMVar8 = "None";
        if ((char)bVar3 != '\0') {
          pSStack_50 = (System_Object_array *)0x4500d60;
          value_01 = "type";
          pSVar7 = (System_Object_array *)effect;
          pSVar6 = (System_Object_array *)
                   (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,"type",(effect->klass->vtable)._7_get_Item.method);
          if (pSVar6 == (System_Object_array *)0x0) goto label_04500eb2;
          pIVar13 = (pSVar6->obj).klass;
          pSStack_50 = (System_Object_array *)0x4500d7c;
          pMVar8 = (MethodInfo *)(*pIVar13->vtable[9].methodPtr)(pSVar6,pIVar13->vtable[9].method);
          pSVar7 = pSVar6;
        }
      }
      value_01 = pMVar8;
      if (type != (Settings_StringSetting_o *)0x0) {
        pSStack_50 = (System_Object_array *)0x4500dae;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)type,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_50 = (System_Object_array *)0x4500dc6;
          il2cpp_runtime_helper_02337ed0();
        }
        colors = (Settings_ColorSetting_o *)0x0;
        value_01 = (MethodInfo *)0x0;
        pSStack_50 = (System_Object_array *)0x4500dd5;
        pSVar7 = (System_Object_array *)effect;
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          colors = (Settings_ColorSetting_o *)0x0;
          if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04500eb2;
          pSStack_50 = (System_Object_array *)0x4500dff;
          value_01 = "colors";
          pSVar7 = (System_Object_array *)effect;
          colors = (Settings_ColorSetting_o *)
                   (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
        }
        if (colorA != (Settings_ColorSetting_o *)0x0) {
          pSStack_50 = (System_Object_array *)0x4500e19;
          value_01 = (MethodInfo *)
                     Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                               ((SimpleJSONFixed_JSONNode_o *)colors,0,(colorA->fields)._value,
                                (MethodInfo *)pIVar13);
          pSStack_50 = (System_Object_array *)0x4500e2e;
          pSVar7 = (System_Object_array *)colorA;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
          enabled = (Settings_BoolSetting_o *)&MethodInfo_Void_set_Value;
          if (colorB != (Settings_ColorSetting_o *)0x0) {
            pSStack_50 = (System_Object_array *)0x4500e44;
            value_01 = (MethodInfo *)
                       Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                                 ((SimpleJSONFixed_JSONNode_o *)colors,1,(colorB->fields)._value,
                                  (MethodInfo *)pIVar13);
            pSStack_50 = (System_Object_array *)0x4500e52;
            pSVar7 = (System_Object_array *)colorB;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
            effect = (SimpleJSONFixed_JSONNode_o *)local_38;
            colorB = (Settings_ColorSetting_o *)local_40;
            if (local_40 != (System_Object_array *)0x0) {
              pSStack_50 = (System_Object_array *)0x4500e72;
              value_01 = (MethodInfo *)
                         Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                                   ((SimpleJSONFixed_JSONNode_o *)colors,2,
                                    (Utility_Color255_o *)local_40->max_length,(MethodInfo *)pIVar13);
              pSStack_50 = (System_Object_array *)0x4500e80;
              pSVar7 = (System_Object_array *)colorB;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
              if ((Settings_ColorSetting_o *)effect != (Settings_ColorSetting_o *)0x0) {
                pSStack_50 = (System_Object_array *)0x4500e96;
                pUVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
                                    ((SimpleJSONFixed_JSONNode_o *)colors,3,
                                     (((Settings_ColorSetting_o *)effect)->fields)._value,
                                     (MethodInfo *)pIVar13);
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)effect,(Il2CppObject *)pUVar11,MethodInfo_Void_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
  else if (effect != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_50 = (System_Object_array *)0x4500c89;
    value_01 = "enabled";
    pSVar7 = (System_Object_array *)effect;
    pSVar6 = (System_Object_array *)
             (*(effect->klass->vtable)._7_get_Item.methodPtr)
                       (effect,"enabled",(effect->klass->vtable)._7_get_Item.method);
    if (pSVar6 != (System_Object_array *)0x0) {
      pIVar13 = (pSVar6->obj).klass;
      value_01 = pIVar13->vtable[0x27].method;
      pSStack_50 = (System_Object_array *)0x4500ca5;
      uVar4 = (*pIVar13->vtable[0x27].methodPtr)();
      colors = (Settings_ColorSetting_o *)(ulong)uVar4;
      pSVar7 = pSVar6;
      goto label_04500ca8;
    }
  }
label_04500eb2:
  pSStack_50 = (System_Object_array *)0x4500eb7;
  il2cpp_runtime_helper_022b2c90();
  uVar20 = (ulong)value_01 & 0xffffffff;
  pSStack_70 = (Settings_ColorSetting_o *)effect;
  pSStack_68 = type;
  pSStack_60 = enabled;
  pSStack_58 = colors;
  pSStack_50 = (System_Object_array *)colorB;
  if (g_data_057aed0c == '\0') {
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500eea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500ef6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0c = '\x01';
  }
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500f1d;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_a8 = (Settings_ColorSetting_o *)0x4500f29;
  pSVar6 = pSVar7;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (pSVar7 == (System_Object_array *)0x0) {
label_0450101b:
      pSStack_a8 = (Settings_ColorSetting_o *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex;
      il2cpp_runtime_helper_022b2c90();
      text = (System_String_o **)pSVar6;
      pSStack_a8 = (Settings_ColorSetting_o *)effect;
      if (g_data_057aed0d == '\0') {
        text = &"#";
        pSStack_b0 = (System_Object_array *)0x4501039;
        il2cpp_runtime_helper_023445d0();
        g_data_057aed0d = '\x01';
      }
      if (pSVar6 != (System_Object_array *)0x0) {
        pSStack_b0 = (System_Object_array *)0x450104f;
        UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pSVar6,(MethodInfo *)0x0);
        pSStack_b0 = (System_Object_array *)0x4501056;
        pSVar10 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar22,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("#",pSVar10,(MethodInfo *)0x0);
        return;
      }
      pSStack_b0 = (System_Object_array *)Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse;
      il2cpp_runtime_helper_022b2c90();
      plStack_d0 = &TypeInfo_JSONNode;
      pSStack_d8 = pSVar6;
      pSStack_c8 = colorA;
      uStack_c0 = uVar20;
      uStack_b8 = extraout_RDX;
      pSStack_b0 = pSVar7;
      if (g_data_057aed62 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&"FFFFFF");
        g_data_057aed62 = '\x01';
      }
      pSStack_f0 = (System_Object_array *)0x0;
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
      if (g_data_057aed6f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057aed6f = '\x01';
      }
      pSVar7 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
      __this_00[1].monitor = pSVar7;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      pIVar17 = pIVar13;
      if (__this_00 != (Il2CppObject *)0x0) {
        pIStack_e8 = __this_00 + 1;
        __this_00[1].klass = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080();
        pSVar12 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
        System_Text_StringBuilder___ctor(pSVar12,(MethodInfo *)0x0);
        pIVar17 = pIVar13;
        pSVar7 = "FFFFFF";
        if (((System_Object_array *)text != (System_Object_array *)0x0) ||
           (text = (System_String_o **)**(long **)(g_data_057b9c00 + 0xb8),
           (System_Object_array *)text != (System_Object_array *)0x0)) {
          pIStack_e0 = __this_00;
          if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
            if (0 < *(int *)&((System_Object_array *)text)->bounds) {
              pSVar7 = (System_Object_array *)0x0;
              do {
                bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                  ((System_String_o *)text,(int)pSVar7,(System_String_o **)&pSStack_f0,
                                   (MethodInfo *)pIVar13);
                if ((char)bVar3 == '\0') goto label_0450130f;
                uVar4 = (int)pSVar7 + 8;
                pSVar7 = (System_Object_array *)(ulong)uVar4;
              } while ((int)uVar4 < *(int *)&((System_Object_array *)text)->bounds);
            }
          }
          else if (0 < *(int *)&((System_Object_array *)text)->bounds) {
            index_00 = 0;
            do {
              while( true ) {
                while (bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                         ((System_String_o *)text,index_00,(System_String_o **)&pSStack_f0,
                                          (MethodInfo *)pIVar17), (char)bVar3 != '\0') {
                  index_00 = index_00 + 8;
                  pIVar13 = pIVar17;
                  pSVar7 = pSStack_f0;
                  if (*(int *)&((System_Object_array *)text)->bounds <= index_00) goto label_045012c9;
                }
                value = System_String__get_Chars((System_String_o *)text,index_00,(MethodInfo *)0x0);
                System_Text_StringBuilder__Append_3b048f0(pSVar12,value,(MethodInfo *)0x0);
                pIVar13 = MethodInfo_Void_Add;
                __this = __this_00[1].monitor;
                if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_0450130a;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this->fields)._items;
                pIVar17 = pIVar13;
                if (pSVar6 == (System_Object_array *)0x0) goto label_0450130a;
                uVar4 = (__this->fields)._size;
                if ((uint)pSVar6->max_length <= uVar4) break;
                pIVar13 = (Il2CppClass *)(ulong)(uVar4 + 1);
                (__this->fields)._size = uVar4 + 1;
                pSVar6->m_Items[(int)uVar4] = &pSVar7->obj;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4,pSVar7);
                index_00 = index_00 + 1;
                pIVar17 = pIVar13;
                if (*(int *)&((System_Object_array *)text)->bounds <= index_00) goto label_045012c9;
              }
              System_Collections_Generic_List_object___AddWithResize
                        (__this,&pSVar7->obj,
                         *(MethodInfo_362C220 **)(*(long *)((long)(pIVar13->_1).byval_arg.data + 0xc0) + 0x70)
                        );
              index_00 = index_00 + 1;
              pIVar17 = pIVar13;
            } while (index_00 < *(int *)&((System_Object_array *)text)->bounds);
          }
label_045012c9:
          pIVar17 = pIVar13;
          if (pSVar12 != (System_Text_StringBuilder_o *)0x0) {
            pIVar13 = (Il2CppClass *)
                      (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
            pIStack_e0[1].klass = pIVar13;
            il2cpp_runtime_helper_022b4080(pIStack_e8,pIVar13);
            return;
          }
        }
      }
label_0450130a:
      il2cpp_runtime_helper_022b2c90();
      pIVar13 = pIVar17;
label_0450130f:
      plVar9 = (long *)((ulong)pSVar7 & 0xffffffff);
      System_String__get_Chars((System_String_o *)text,(int32_t)pSVar7,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aed64 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&"FFFFFF");
        g_data_057aed64 = '\x01';
      }
      if ((System_Object_array *)text == (System_Object_array *)0x0) {
        text = (System_String_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      __this_01 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
      pSVar7 = (System_Object_array *)0x0;
      pSVar6 = __this_01;
      System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_01,(MethodInfo *)0x0);
      uVar19 = (undefined1)uVar21;
      if ((System_Object_array *)text != (System_Object_array *)0x0) {
        if (0 < *(int *)&((System_Object_array *)text)->bounds) {
          pSVar14 = (System_Object_array *)0x0;
          pSVar15 = "FFFFFF";
          do {
            pSVar7 = pSVar14;
            index = (int)pSVar7;
            pSVar14 = "FFFFFF";
            if (plVar9 != (long *)0x0) {
              lVar2 = *plVar9;
              if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                lVar18 = 0;
                do {
                  if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar18) == TypeInfo_ICollection_string) {
                    pIVar13 = (Il2CppClass *)
                              ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar18) * 0x10 + lVar2 + 0x138);
                    goto label_04501481;
                  }
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar18);
              }
              pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_ICollection_string,0);
label_04501481:
              iVar5 = (*(pIVar13->_1).image)(plVar9,(pIVar13->_1).gc_desc);
              pSVar14 = "FFFFFF";
              if (index < iVar5) {
                lVar2 = *plVar9;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar18 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar18) == TypeInfo_IList_string) {
                      pIVar13 = (Il2CppClass *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar18) * 0x10 + lVar2 + 0x138);
                      goto label_045014ff;
                    }
                    lVar18 = lVar18 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar18);
                }
                pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IList_string,0);
label_045014ff:
                pSVar6 = pSVar7;
                pSVar10 = (System_String_o *)(*(pIVar13->_1).image)(plVar9,pSVar7,(pIVar13->_1).gc_desc);
                pSVar14 = (System_Object_array *)
                          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    (pSVar10,(MethodInfo *)pSVar6);
              }
            }
            pSVar16 = pSVar15;
            pSVar6 = pSVar14;
            bVar3 = System_String__op_Inequality
                              ((System_String_o *)pSVar14,(System_String_o *)pSVar15,(MethodInfo *)0x0);
            uVar19 = (undefined1)uVar21;
            if ((char)bVar3 == '\0') {
              pSVar6 = (System_Object_array *)text;
              value_00 = System_String__get_Chars((System_String_o *)text,index,(MethodInfo *)0x0);
              uVar19 = (undefined1)uVar21;
              if (__this_01 == (System_Object_array *)0x0) goto label_045015bf;
            }
            else {
              pSVar7 = pSVar16;
              if (__this_01 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar7 = (System_Object_array *)&g_data_0000005b;
              pSVar6 = __this_01;
              pSVar15 = (System_Object_array *)
                        System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)__this_01,0x5b,(MethodInfo *)0x0);
              uVar19 = (undefined1)uVar21;
              if (pSVar14 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar7 = (System_Object_array *)0x0;
              pSVar6 = pSVar14;
              pSVar16 = (System_Object_array *)
                        System_String__ToLowerInvariant((System_String_o *)pSVar14,(MethodInfo *)0x0);
              uVar19 = (undefined1)uVar21;
              if (pSVar15 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar12 = System_Text_StringBuilder__Append_3b03f90
                                  ((System_Text_StringBuilder_o *)pSVar15,(System_String_o *)pSVar16,
                                   (MethodInfo *)0x0);
              uVar19 = (undefined1)uVar21;
              pSVar7 = pSVar16;
              pSVar6 = pSVar15;
              if (pSVar12 == (System_Text_StringBuilder_o *)0x0) goto label_045015bf;
              System_Text_StringBuilder__Append_3b048f0(pSVar12,0x5d,(MethodInfo *)0x0);
              value_00 = System_String__get_Chars((System_String_o *)text,index,(MethodInfo *)0x0);
              pSVar15 = pSVar14;
            }
            pSVar7 = (System_Object_array *)(ulong)value_00;
            pSVar6 = __this_01;
            System_Text_StringBuilder__Append_3b048f0
                      ((System_Text_StringBuilder_o *)__this_01,value_00,(MethodInfo *)0x0);
            uVar19 = (undefined1)uVar21;
            pSVar14 = (System_Object_array *)(ulong)(index + 1U);
          } while ((int)(index + 1U) < *(int *)&((System_Object_array *)text)->bounds);
        }
        if (__this_01 != (System_Object_array *)0x0) {
          pIVar13 = (__this_01->obj).klass;
          (*pIVar13->vtable[3].methodPtr)(__this_01,pIVar13->vtable[3].method);
          return;
        }
      }
label_045015bf:
      uVar21 = il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar6,(MethodInfo *)0x0);
      pSVar6->bounds = (Il2CppArrayBounds *)pSVar7;
      il2cpp_runtime_helper_022b4080(&pSVar6->bounds,pSVar7);
      *(undefined4 *)&pSVar6->max_length = uVar21;
      *(undefined1 *)((long)&pSVar6->max_length + 4) = extraout_DL;
      pSVar6->m_Items[0] = (Il2CppObject *)pIVar13;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items,pIVar13);
      *(undefined1 *)(pSVar6->m_Items + 1) = uVar19;
      return;
    }
    pIVar17 = (pSVar7->obj).klass;
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500f4d;
    effect = (SimpleJSONFixed_JSONNode_o *)
             (*pIVar17->vtable[5].methodPtr)(pSVar7,uVar20,pIVar17->vtable[5].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_a8 = (Settings_ColorSetting_o *)0x4500f62;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500f6e;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar17 = (pSVar7->obj).klass;
      pSStack_a8 = (Settings_ColorSetting_o *)0x4500f89;
      pSVar6 = pSVar7;
      plVar9 = (long *)(*pIVar17->vtable[5].methodPtr)
                                 (pSVar7,(ulong)value_01 & 0xffffffff,pIVar17->vtable[5].method);
      if (plVar9 == (long *)0x0) goto label_0450101b;
      pSStack_a8 = (Settings_ColorSetting_o *)0x4500fa5;
      pSVar10 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      goto label_04500fc2;
    }
  }
  pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500fc2:
  pSStack_a8 = (Settings_ColorSetting_o *)0x4500fcc;
  bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar10,(UnityEngine_Color_o *)&UStack_a0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    UStack_80.r = UStack_a0.r;
    UStack_80.g = UStack_a0.g;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    fStack_90 = UStack_a0.b;
    fStack_8c = UStack_a0.a;
    uStack_88 = 0;
    pSStack_a8 = (Settings_ColorSetting_o *)0x4500ff4;
    pUVar11 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    pSStack_a8 = (Settings_ColorSetting_o *)0x450100b;
    UVar22.fields.b = fStack_90;
    UVar22.fields.a = fStack_8c;
    UVar22.fields.r = UStack_80.r;
    UVar22.fields.g = UStack_80.g;
    Utility_Color255___ctor_4388bb0(pUVar11,UVar22,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LegacyEffect
// il2cpp: SimpleJSONFixed_JSONObject_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect (bool name, const MethodInfo* method);
// 0x44ff570

SimpleJSONFixed_JSONObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__LegacyEffect(bool_conflict name,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Utility_Color255_o *pUVar3;
  void *pvVar4;
  code *vtableDispatch;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  bool_conflict bVar5;
  uint uVar6;
  SimpleJSONFixed_JSONObject_c *pSVar7;
  SimpleJSONFixed_JSONObject_o *pSVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONObject_c *__this;
  long lVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  SimpleJSONFixed_JSONObject_c *pSVar14;
  System_String_o *s;
  SimpleJSONFixed_JSONObject_o *pSVar15;
  SimpleJSONFixed_JSONObject_c **method_00;
  MethodInfo *pMVar16;
  SimpleJSONFixed_JSONObject_o *extraout_RDX;
  SimpleJSONFixed_JSONObject_c *unaff_RBX;
  SimpleJSONFixed_JSONObject_c **s_00;
  System_String_o **__this_00;
  ulong uVar17;
  System_String_o **a;
  SimpleJSONFixed_JSONObject_o **a_00;
  System_String_o **unaff_R12;
  char cVar18;
  ulong uVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_Fields UStack_158;
  SimpleJSONFixed_JSONObject_c *pSStack_140;
  SimpleJSONFixed_JSONNode_o *pSStack_138;
  UnityEngine_Color_Fields UStack_130;
  SimpleJSONFixed_JSONObject_o *pSStack_118;
  long *plStack_110;
  long *plStack_108;
  ulong uStack_100;
  SimpleJSONFixed_JSONObject_o *pSStack_f8;
  SimpleJSONFixed_JSONObject_c *pSStack_f0;
  UnityEngine_Color_Fields UStack_e8;
  SimpleJSONFixed_JSONObject_c *pSStack_d8;
  SimpleJSONFixed_JSONObject_c *pSStack_d0;
  SimpleJSONFixed_JSONObject_c *pSStack_c8;
  long *plStack_c0;
  SimpleJSONFixed_JSONObject_c *pSStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  SimpleJSONFixed_JSONObject_c *pSStack_a0;
  SimpleJSONFixed_JSONObject_c *pSStack_98;
  SimpleJSONFixed_JSONObject_o *pSStack_90;
  SimpleJSONFixed_JSONObject_c *pSStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  SimpleJSONFixed_JSONObject_c *pSStack_68;
  System_String_o **ppSStack_60;
  long lStack_58;
  ulong uStack_50;
  SimpleJSONFixed_JSONObject_c *pSStack_48;
  SimpleJSONFixed_JSONObject_c *pSStack_40;
  
  if (g_data_057aed09 == '\0') {
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff593;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff59f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5e7;
    il2cpp_runtime_helper_023445d0(&"colors");
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5f3;
    il2cpp_runtime_helper_023445d0(&"type");
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff5ff;
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed09 = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar12 == 0) {
    return (SimpleJSONFixed_JSONObject_o *)0x0;
  }
  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff62f;
  pSVar7 = (SimpleJSONFixed_JSONObject_c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff63c;
  a = (System_String_o **)pSVar7;
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pSVar7,(MethodInfo *)0x0);
  __this_00 = (System_String_o **)"enabled";
  cVar18 = (char)name;
  if (cVar18 == '\0') {
    lVar2 = *(long *)(lVar12 + 0xb0);
  }
  else {
    lVar2 = *(long *)(lVar12 + 0x80);
  }
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x11);
    unaff_RBX = (SimpleJSONFixed_JSONObject_c *)CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar1);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff68f;
      il2cpp_runtime_helper_02337ed0();
    }
    a = (System_String_o **)(ulong)bVar1;
    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff699;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
    if (pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0) {
      unaff_RBX = (pSVar7->_1).image;
      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff6bb;
      a = (System_String_o **)pSVar7;
      (*(unaff_RBX->vtable)._8_set_Item.methodPtr)
                (pSVar7,__this_00,pSVar10,(unaff_RBX->vtable)._8_set_Item.method);
      pSVar14 = "type";
      if (cVar18 == '\0') {
        lVar2 = *(long *)(lVar12 + 0xb8);
      }
      else {
        lVar2 = *(long *)(lVar12 + 0x88);
      }
      __this_00 = (System_String_o **)"type";
      if (lVar2 != 0) {
        pSVar11 = *(System_String_o **)(lVar2 + 0x18);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff707;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff711;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
        unaff_RBX = (pSVar7->_1).image;
        pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff72a;
        (*(unaff_RBX->vtable)._8_set_Item.methodPtr)
                  (pSVar7,pSVar14,pSVar10,(unaff_RBX->vtable)._8_set_Item.method);
        pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff739;
        __this_00 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff746;
        a = __this_00;
        SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,(MethodInfo *)0x0);
        if (cVar18 == '\0') {
          lVar2 = *(long *)(lVar12 + 0xc0);
        }
        else {
          lVar2 = *(long *)(lVar12 + 0x90);
        }
        if (lVar2 != 0) {
          pUVar3 = *(Utility_Color255_o **)(lVar2 + 0x18);
          if (g_data_057aed0d == '\0') {
            a = &"#";
            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff785;
            il2cpp_runtime_helper_023445d0();
            g_data_057aed0d = '\x01';
          }
          unaff_RBX = (SimpleJSONFixed_JSONObject_c *)0x0;
          if (pUVar3 != (Utility_Color255_o *)0x0) {
            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff79f;
            UVar20 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff7a6;
            pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar20,(MethodInfo *)0x0);
            unaff_R12 = &"#";
            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff7bb;
            unaff_RBX = (SimpleJSONFixed_JSONObject_c *)
                        System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff7d6;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff7e0;
            a = (System_String_o **)unaff_RBX;
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)unaff_RBX,(MethodInfo *)0x0);
            if ((SimpleJSONFixed_JSONObject_c *)__this_00 != (SimpleJSONFixed_JSONObject_c *)0x0) {
              pvVar4 = (((SimpleJSONFixed_JSONObject_c *)__this_00)->_1).image;
              pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff800;
              a = __this_00;
              (**(code **)((long)pvVar4 + 0x288))(__this_00,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290));
              if (cVar18 == '\0') {
                lVar2 = *(long *)(lVar12 + 200);
              }
              else {
                lVar2 = *(long *)(lVar12 + 0x98);
              }
              if (lVar2 != 0) {
                pUVar3 = *(Utility_Color255_o **)(lVar2 + 0x18);
                if (g_data_057aed0d == '\0') {
                  a = &"#";
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff83f;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aed0d = '\x01';
                }
                unaff_RBX = (SimpleJSONFixed_JSONObject_c *)0x0;
                if (pUVar3 != (Utility_Color255_o *)0x0) {
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff859;
                  UVar20 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff860;
                  pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar20,(MethodInfo *)0x0);
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff86e;
                  unaff_RBX = (SimpleJSONFixed_JSONObject_c *)
                              System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff889;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff893;
                  pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit
                                      ((System_String_o *)unaff_RBX,(MethodInfo *)0x0);
                  pvVar4 = (((SimpleJSONFixed_JSONObject_c *)__this_00)->_1).image;
                  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff8aa;
                  a = __this_00;
                  (**(code **)((long)pvVar4 + 0x288))(__this_00,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290))
                  ;
                  if (cVar18 == '\0') {
                    lVar2 = *(long *)(lVar12 + 0xd0);
                  }
                  else {
                    lVar2 = *(long *)(lVar12 + 0xa0);
                  }
                  if (lVar2 != 0) {
                    pUVar3 = *(Utility_Color255_o **)(lVar2 + 0x18);
                    if (g_data_057aed0d == '\0') {
                      a = &"#";
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff8e9;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057aed0d = '\x01';
                    }
                    unaff_RBX = (SimpleJSONFixed_JSONObject_c *)0x0;
                    if (pUVar3 != (Utility_Color255_o *)0x0) {
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff903;
                      UVar20 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff90a;
                      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar20,(MethodInfo *)0x0);
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff918;
                      unaff_RBX = (SimpleJSONFixed_JSONObject_c *)
                                  System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                        pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff933;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff93d;
                      pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit
                                          ((System_String_o *)unaff_RBX,(MethodInfo *)0x0);
                      pvVar4 = (((SimpleJSONFixed_JSONObject_c *)__this_00)->_1).image;
                      pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff954;
                      a = __this_00;
                      (**(code **)((long)pvVar4 + 0x288))
                                (__this_00,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290));
                      if (cVar18 == '\0') {
                        lVar2 = *(long *)(lVar12 + 0xd8);
                      }
                      else {
                        lVar2 = *(long *)(lVar12 + 0xa8);
                      }
                      if (lVar2 != 0) {
                        pUVar3 = *(Utility_Color255_o **)(lVar2 + 0x18);
                        if (g_data_057aed0d == '\0') {
                          a = &"#";
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff993;
                          il2cpp_runtime_helper_023445d0();
                          g_data_057aed0d = '\x01';
                        }
                        unaff_RBX = (SimpleJSONFixed_JSONObject_c *)0x0;
                        if (pUVar3 != (Utility_Color255_o *)0x0) {
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9ad;
                          UVar20 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9b4;
                          pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar20,(MethodInfo *)0x0);
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9c2;
                          pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                            pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9dd;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9e7;
                          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
                          pvVar4 = (((SimpleJSONFixed_JSONObject_c *)__this_00)->_1).image;
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ff9fe;
                          (**(code **)((long)pvVar4 + 0x288))
                                    (__this_00,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290));
                          pvVar4 = (pSVar7->_1).image;
                          pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ffa1e;
                          (**(code **)((long)pvVar4 + 0x1b8))
                                    (pSVar7,"colors",__this_00,*(undefined8 *)((long)pvVar4 + 0x1c0));
                          return (SimpleJSONFixed_JSONObject_o *)pSVar7;
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
  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)0x44ffa35;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = unaff_RBX;
  ppSStack_60 = unaff_R12;
  lStack_58 = lVar12;
  uStack_50 = (ulong)(uint)name;
  pSStack_48 = pSVar7;
  pSStack_40 = (SimpleJSONFixed_JSONObject_c *)__this_00;
  if (g_data_057aed04 == '\0') {
    uStack_78 = 0x44ffa63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    uStack_78 = 0x44ffa6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    uStack_78 = 0x44ffa7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    uStack_78 = 0x44ffa87;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    uStack_78 = 0x44ffa93;
    il2cpp_runtime_helper_023445d0(&"None");
    uStack_78 = 0x44ffa9f;
    il2cpp_runtime_helper_023445d0(&"colors");
    uStack_78 = 0x44ffaab;
    il2cpp_runtime_helper_023445d0(&"type");
    uStack_78 = 0x44ffab7;
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed04 = '\x01';
  }
  uStack_78 = 0x44ffacd;
  pSVar8 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  uStack_78 = 0x44ffada;
  SimpleJSONFixed_JSONObject___ctor(pSVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    uStack_78 = 0x44ffaf3;
    il2cpp_runtime_helper_02337ed0();
  }
  s_00 = (SimpleJSONFixed_JSONObject_c **)0x0;
  uStack_78 = 0x44ffb01;
  a_00 = (SimpleJSONFixed_JSONObject_o **)a;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar7 = "enabled";
  method_00 = &"enabled";
  if ((char)bVar5 == '\0') {
label_044ffb4d:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_78 = 0x44ffb5f;
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (SimpleJSONFixed_JSONObject_o **)((ulong)s_00 & 0xff);
    uStack_78 = 0x44ffb69;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((bool_conflict)a_00,(MethodInfo *)0x0);
    if (pSVar8 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      __this_00 = (System_String_o **)pSVar8->klass;
      method_00 = (SimpleJSONFixed_JSONObject_c **)
                  (((SimpleJSONFixed_JSONObject_c *)__this_00)->vtable)._8_set_Item.method;
      uStack_78 = 0x44ffb8b;
      (*(((SimpleJSONFixed_JSONObject_c *)__this_00)->vtable)._8_set_Item.methodPtr)(pSVar8,pSVar7,pSVar10);
      s_00 = &"type";
      uStack_78 = 0x44ffba7;
      a_00 = (SimpleJSONFixed_JSONObject_o **)a;
      pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__String
                          ((SimpleJSONFixed_JSONNode_o *)a,(System_String_o *)"type","None",
                           (MethodInfo *)method_00);
      if ((pSVar11 != (System_String_o *)0x0) ||
         (pSVar11 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar11 != (System_String_o *)0x0)) {
        if (0x20 < (pSVar11->fields)._stringLength) {
          uStack_78 = 0x44ffbe4;
          pSVar11 = System_String__Substring_3af8da0(pSVar11,0,0x20,(MethodInfo *)0x0);
        }
        uStack_78 = 0x44ffbee;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
        __this_00 = (System_String_o **)pSVar8->klass;
        method_00 = (SimpleJSONFixed_JSONObject_c **)
                    (((SimpleJSONFixed_JSONObject_c *)__this_00)->vtable)._8_set_Item.method;
        uStack_78 = 0x44ffc07;
        (*(((SimpleJSONFixed_JSONObject_c *)__this_00)->vtable)._8_set_Item.methodPtr)
                  (pSVar8,"type",pSVar10);
        uStack_78 = 0x44ffc16;
        pSVar7 = (SimpleJSONFixed_JSONObject_c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        uStack_78 = 0x44ffc23;
        SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pSVar7,(MethodInfo *)0x0);
        if ((SimpleJSONFixed_JSONObject_c *)a == (SimpleJSONFixed_JSONObject_c *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_78 = 0x44ffe35;
            il2cpp_runtime_helper_02337ed0();
          }
          a_00 = (SimpleJSONFixed_JSONObject_o **)0x0;
          uStack_78 = 0x44ffe40;
          bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            __this_00 = &"#FFFFFFFF";
            uStack_78 = 0x44ffe5c;
            s_00 = (SimpleJSONFixed_JSONObject_c **)
                   Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                             ((SimpleJSONFixed_JSONNode_o *)0x0,0,"#FFFFFFFF",(MethodInfo *)method_00);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffe71;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_78 = 0x44ffe7b;
            a_00 = (SimpleJSONFixed_JSONObject_o **)s_00;
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_00,(MethodInfo *)0x0);
            if (pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0) {
              method_00 = (pSVar7->_1).image;
              uStack_78 = 0x44ffe9a;
              (*(code *)((MethodInfo *)((long)method_00 + 0x268))->klass)
                        (pSVar7,pSVar10,((MethodInfo *)((long)method_00 + 0x268))->return_type);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                uStack_78 = 0x44ffeac;
                il2cpp_runtime_helper_02337ed0();
              }
              a_00 = (SimpleJSONFixed_JSONObject_o **)0x0;
              uStack_78 = 0x44ffeb7;
              bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                                ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                uStack_78 = 0x44ffecf;
                s_00 = (SimpleJSONFixed_JSONObject_c **)
                       Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                 ((SimpleJSONFixed_JSONNode_o *)0x0,1,"#FFFFFFFF",(MethodInfo *)method_00);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  uStack_78 = 0x44ffee4;
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_78 = 0x44ffeee;
                pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_00,(MethodInfo *)0x0);
                method_00 = (pSVar7->_1).image;
                uStack_78 = 0x44fff04;
                (*(code *)((MethodInfo *)((long)method_00 + 0x268))->klass)
                          (pSVar7,pSVar10,((MethodInfo *)((long)method_00 + 0x268))->return_type);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  uStack_78 = 0x44fff16;
                  il2cpp_runtime_helper_02337ed0();
                }
                a_00 = (SimpleJSONFixed_JSONObject_o **)0x0;
                uStack_78 = 0x44fff21;
                bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                                  ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  uStack_78 = 0x44fff39;
                  s_00 = (SimpleJSONFixed_JSONObject_c **)
                         Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                   ((SimpleJSONFixed_JSONNode_o *)0x0,2,"#FFFFFFFF",(MethodInfo *)method_00);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    uStack_78 = 0x44fff4e;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uStack_78 = 0x44fff58;
                  pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_00,(MethodInfo *)0x0);
                  method_00 = (pSVar7->_1).image;
                  uStack_78 = 0x44fff6e;
                  (*(code *)((MethodInfo *)((long)method_00 + 0x268))->klass)
                            (pSVar7,pSVar10,((MethodInfo *)((long)method_00 + 0x268))->return_type);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    uStack_78 = 0x44fff80;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  a_00 = (SimpleJSONFixed_JSONObject_o **)0x0;
                  uStack_78 = 0x44fff8b;
                  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                                    ((SimpleJSONFixed_JSONNode_o *)0x0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
                    goto label_044fff95;
                  }
                }
              }
            }
          }
        }
        else {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_78 = 0x44ffc3f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
          uStack_78 = 0x44ffc4d;
          bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a)->_1).image;
            uStack_78 = 0x44ffc6f;
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                      (**(code **)((long)pvVar4 + 0x1a8))
                                (a,"colors",*(undefined8 *)((long)pvVar4 + 0x1b0));
          }
          __this_00 = &"#FFFFFFFF";
          uStack_78 = 0x44ffc87;
          s_00 = (SimpleJSONFixed_JSONObject_c **)
                 Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                           (pSVar10,0,"#FFFFFFFF",(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            uStack_78 = 0x44ffc9c;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_78 = 0x44ffca6;
          a_00 = (SimpleJSONFixed_JSONObject_o **)s_00;
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s_00,(MethodInfo *)0x0);
          if (pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0) {
            pMVar16 = (pSVar7->_1).image;
            uStack_78 = 0x44ffcc5;
            (*(code *)pMVar16[7].klass)(pSVar7,pSVar10,pMVar16[7].return_type);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffcd7;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_78 = 0x44ffce5;
            bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a)->_1).image;
              uStack_78 = 0x44ffd07;
              pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                        (**(code **)((long)pvVar4 + 0x1a8))
                                  (a,"colors",*(undefined8 *)((long)pvVar4 + 0x1b0));
            }
            uStack_78 = 0x44ffd1b;
            pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                (pSVar10,1,"#FFFFFFFF",pMVar16);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffd30;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_78 = 0x44ffd3a;
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
            pMVar16 = (pSVar7->_1).image;
            uStack_78 = 0x44ffd50;
            (*(code *)pMVar16[7].klass)(pSVar7,pSVar10,pMVar16[7].return_type);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffd62;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_78 = 0x44ffd70;
            bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a)->_1).image;
              uStack_78 = 0x44ffd92;
              pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                        (**(code **)((long)pvVar4 + 0x1a8))
                                  (a,"colors",*(undefined8 *)((long)pvVar4 + 0x1b0));
            }
            uStack_78 = 0x44ffda6;
            pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                (pSVar10,2,"#FFFFFFFF",pMVar16);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffdbb;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_78 = 0x44ffdc5;
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
            method_00 = (pSVar7->_1).image;
            uStack_78 = 0x44ffddb;
            (*(code *)((MethodInfo *)((long)method_00 + 0x268))->klass)
                      (pSVar7,pSVar10,((MethodInfo *)((long)method_00 + 0x268))->return_type);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44ffded;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
            uStack_78 = 0x44ffdfb;
            bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a)->_1).image;
              uStack_78 = 0x44ffe1d;
              pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                        (**(code **)((long)pvVar4 + 0x1a8))
                                  (a,"colors",*(undefined8 *)((long)pvVar4 + 0x1b0));
            }
label_044fff95:
            uStack_78 = 0x44fff9f;
            pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                                (pSVar10,3,"#FFFFFFFF",(MethodInfo *)method_00);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              uStack_78 = 0x44fffb4;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_78 = 0x44fffbe;
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
            pvVar4 = (pSVar7->_1).image;
            uStack_78 = 0x44fffd4;
            (**(code **)((long)pvVar4 + 0x288))(pSVar7,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290));
            uStack_78 = 0x44ffff4;
            (*(pSVar8->klass->vtable)._8_set_Item.methodPtr)
                      (pSVar8,"colors",pSVar7,(pSVar8->klass->vtable)._8_set_Item.method);
            return pSVar8;
          }
        }
      }
    }
  }
  else if ((SimpleJSONFixed_JSONObject_c *)a != (SimpleJSONFixed_JSONObject_c *)0x0) {
    pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a)->_1).image;
    uStack_78 = 0x44ffb2f;
    a_00 = (SimpleJSONFixed_JSONObject_o **)a;
    plVar9 = (long *)(**(code **)((long)pvVar4 + 0x1a8))(a,"enabled",*(undefined8 *)((long)pvVar4 + 0x1b0))
    ;
    if (plVar9 != (long *)0x0) {
      method_00 = (SimpleJSONFixed_JSONObject_c **)*plVar9;
      uStack_78 = 0x44ffb4b;
      uVar6 = (*(code *)((MethodInfo *)((long)method_00 + 0x370))->field7_0x38)(plVar9);
      s_00 = (SimpleJSONFixed_JSONObject_c **)(ulong)uVar6;
      goto label_044ffb4d;
    }
  }
  uStack_78 = 0x450000b;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfd == '\0') {
    uStack_80 = 0x4500026;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    uStack_80 = 0x4500032;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a_00 = &"Normal";
    uStack_80 = 0x450003e;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfd = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar12 == 0) {
    return "Normal";
  }
  lVar12 = *(long *)(lVar12 + 0x70);
  if (lVar12 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar12 + 0x18);
  }
  uStack_80 = 0x4500082;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfe == '\0') {
    pSStack_88 = (SimpleJSONFixed_JSONObject_c *)0x45000a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_88 = (SimpleJSONFixed_JSONObject_c *)0x45000b2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    a_00 = &"Normal";
    pSStack_88 = (SimpleJSONFixed_JSONObject_c *)0x45000be;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecfe = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar12 == 0) {
    return "Normal";
  }
  lVar12 = *(long *)(lVar12 + 0x78);
  if (lVar12 != 0) {
    return *(SimpleJSONFixed_JSONObject_o **)(lVar12 + 0x18);
  }
  pSStack_88 = (SimpleJSONFixed_JSONObject_c *)0x4500102;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = (SimpleJSONFixed_JSONObject_c *)s_00;
  pSStack_98 = (SimpleJSONFixed_JSONObject_c *)a;
  pSStack_90 = pSVar8;
  pSStack_88 = pSVar7;
  if (g_data_057aecf9 == '\0') {
    uStack_b0 = 0x4500130;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    uStack_b0 = 0x450013c;
    il2cpp_runtime_helper_023445d0(&"guild");
    uStack_b0 = 0x4500148;
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aecf9 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    uStack_b0 = 0x4500167;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar17 = 0;
  uStack_b0 = 0x4500173;
  pSVar7 = (SimpleJSONFixed_JSONObject_c *)a_00;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_045001fe:
    s_00 = (SimpleJSONFixed_JSONObject_c **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500216:
    uStack_b0 = 0x4500220;
    bVar5 = System_String__IsNullOrWhiteSpace((System_String_o *)s_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pSVar8 = (SimpleJSONFixed_JSONObject_o *)
               Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                         ((System_String_o *)s_00,(MethodInfo *)0x0);
      return pSVar8;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_b0 = 0x4500239;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar17 = 0;
    uStack_b0 = 0x4500245;
    pSVar7 = (SimpleJSONFixed_JSONObject_c *)a_00;
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_045002ea:
      return (SimpleJSONFixed_JSONObject_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if ((SimpleJSONFixed_JSONObject_c *)a_00 != (SimpleJSONFixed_JSONObject_c *)0x0) {
      pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a_00)->_1).image;
      uStack_b0 = 0x4500274;
      s_00 = (SimpleJSONFixed_JSONObject_c **)
             (**(code **)((long)pvVar4 + 0x1a8))(a_00,"guild",*(undefined8 *)((long)pvVar4 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        uStack_b0 = 0x4500288;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_b0 = 0x4500294;
      bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)s_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto label_045002ea;
      pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a_00)->_1).image;
      uStack_b0 = 0x45002af;
      uVar17 = "guild";
      pSVar7 = (SimpleJSONFixed_JSONObject_c *)a_00;
      plVar9 = (long *)(**(code **)((long)pvVar4 + 0x1a8))
                                 (a_00,"guild",*(undefined8 *)((long)pvVar4 + 0x1b0));
      a = (System_String_o **)&"guild";
      if (plVar9 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar9 + 0x1c8);
        pSVar8 = (SimpleJSONFixed_JSONObject_o *)
                 (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x1d0),vtableDispatch);
        return pSVar8;
      }
    }
  }
  else if ((SimpleJSONFixed_JSONObject_c *)a_00 != (SimpleJSONFixed_JSONObject_c *)0x0) {
    pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a_00)->_1).image;
    uStack_b0 = 0x45001a2;
    s_00 = (SimpleJSONFixed_JSONObject_c **)
           (**(code **)((long)pvVar4 + 0x1a8))(a_00,"guildPresetId",*(undefined8 *)((long)pvVar4 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      uStack_b0 = 0x45001b6;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_b0 = 0x45001c2;
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)s_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    a = (System_String_o **)&"guildPresetId";
    if ((char)bVar5 == '\0') goto label_045001fe;
    pvVar4 = (((SimpleJSONFixed_JSONObject_c *)a_00)->_1).image;
    uStack_b0 = 0x45001dd;
    uVar17 = "guildPresetId";
    pSVar7 = (SimpleJSONFixed_JSONObject_c *)a_00;
    plVar9 = (long *)(**(code **)((long)pvVar4 + 0x1a8))
                               (a_00,"guildPresetId",*(undefined8 *)((long)pvVar4 + 0x1b0));
    if (plVar9 == (long *)0x0) goto label_0450030e;
    method_00 = (SimpleJSONFixed_JSONObject_c **)*plVar9;
    uStack_b0 = 0x45001f9;
    s_00 = (SimpleJSONFixed_JSONObject_c **)
           (*((MethodInfo *)((long)method_00 + 0x1b8))->invoker_method)(plVar9);
    goto label_04500216;
  }
label_0450030e:
  uStack_b0 = 0x4500313;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0) ||
     (pSVar7 = (SimpleJSONFixed_JSONObject_c *)**(long **)(g_data_057b9c00 + 0xb8),
     pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0)) {
    if (*(int *)&(pSVar7->_1).name <= (int32_t)uVar17) {
      return (SimpleJSONFixed_JSONObject_o *)pSVar7;
    }
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)
             System_String__Substring_3af8da0((System_String_o *)pSVar7,0,(int32_t)uVar17,(MethodInfo *)0x0);
    return pSVar8;
  }
  pSStack_b8 = (SimpleJSONFixed_JSONObject_c *)0x450035e;
  il2cpp_runtime_helper_022b2c90();
  plStack_c0 = &TypeInfo_JSONNode;
  uVar19 = uVar17 & 0xffffffff;
  pSStack_d8 = (SimpleJSONFixed_JSONObject_c *)s_00;
  pSStack_d0 = (SimpleJSONFixed_JSONObject_c *)a;
  pSStack_c8 = (SimpleJSONFixed_JSONObject_c *)a_00;
  pSStack_b8 = (SimpleJSONFixed_JSONObject_c *)__this_00;
  if (g_data_057aed0a == '\0') {
    pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x450038a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45003aa;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45003b6;
  pSVar14 = pSVar7;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar8 = extraout_RDX;
  if ((char)bVar5 == '\0') goto label_0450043b;
  if (pSVar7 != (SimpleJSONFixed_JSONObject_c *)0x0) {
    pvVar4 = (pSVar7->_1).image;
    pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45003dd;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)((long)pvVar4 + 0x188))(pSVar7,uVar19,*(undefined8 *)((long)pvVar4 + 400));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45003f2;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45003fe;
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x4500450;
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_e8.r = 0.0;
      UStack_e8.g = 0.0;
      UStack_e8.b = 0.0;
      UStack_e8.a = 0.0;
      pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x450046b;
      bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                        ((System_String_o *)pSVar8,(UnityEngine_Color_o *)&UStack_e8,(MethodInfo *)0x0);
      pSVar8 = extraout_RDX;
      if ((char)bVar5 != '\0') {
        UVar20.fields.b = UStack_e8.b;
        UVar20.fields.a = UStack_e8.a;
        UVar20.fields.r = UStack_e8.r;
        UVar20.fields.g = UStack_e8.g;
        pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x4500481;
        pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar20,(MethodInfo *)0x0);
        pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x4500495;
        pSVar8 = (SimpleJSONFixed_JSONObject_o *)
                 System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
      }
      return pSVar8;
    }
    pvVar4 = (pSVar7->_1).image;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)(uVar17 & 0xffffffff);
    pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x450041c;
    pSVar14 = pSVar7;
    plVar9 = (long *)(**(code **)((long)pvVar4 + 0x188))(pSVar7,pSVar10,*(undefined8 *)((long)pvVar4 + 400));
    if (plVar9 != (long *)0x0) {
      pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x4500438;
      pSVar8 = (SimpleJSONFixed_JSONObject_o *)
               (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      goto label_0450043b;
    }
  }
  pSStack_f0 = (SimpleJSONFixed_JSONObject_c *)0x45004ad;
  il2cpp_runtime_helper_022b2c90();
  plStack_108 = &TypeInfo_JSONNode;
  plStack_110 = &TypeInfo_JSONNode;
  pSStack_118 = extraout_RDX;
  uStack_100 = uVar19;
  pSStack_f8 = extraout_RDX;
  pSStack_f0 = pSVar7;
  if (g_data_057aed06 == '\0') {
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (SimpleJSONFixed_JSONObject_c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this,(MethodInfo *)0x0);
  pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar8 = TypeInfo_string;
  pSVar7 = pSVar14;
  lVar12 = il2cpp_runtime_helper_023051f0();
  if (lVar12 == 0) {
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    pSVar14 = (SimpleJSONFixed_JSONObject_c *)
              Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                        (pSVar10,0,"#FFFFFFFF",(MethodInfo *)method_00);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_00.fields.b = UStack_130.b;
      color_00.fields.a = UStack_130.a;
      color_00.fields.r = UStack_130.r;
      color_00.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      pSVar14 = (SimpleJSONFixed_JSONObject_c *)
                System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (SimpleJSONFixed_JSONObject_o *)0x0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    pSVar7 = pSVar14;
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar14,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_c *)0x0) goto label_04500b08;
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(code *)pMVar16[7].klass)(__this,pSVar13,pMVar16[7].return_type);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,1,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_01.fields.b = UStack_130.b;
      color_01.fields.a = UStack_130.a;
      color_01.fields.r = UStack_130.r;
      color_01.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(code *)pMVar16[7].klass)(__this,pSVar13,pMVar16[7].return_type);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,2,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_02.fields.b = UStack_130.b;
      color_02.fields.a = UStack_130.a;
      color_02.fields.r = UStack_130.r;
      color_02.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(code *)pMVar16[7].klass)(__this,pSVar13,pMVar16[7].return_type);
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,3,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_03.fields.b = UStack_130.b;
      color_03.fields.a = UStack_130.a;
      color_03.fields.r = UStack_130.r;
      color_03.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
    pSVar11 = (System_String_o *)0x0;
label_045007e1:
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    pSVar14 = (SimpleJSONFixed_JSONObject_c *)
              Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                        (pSVar10,0,"#FFFFFFFF",(MethodInfo *)method_00);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar11,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_04.fields.b = UStack_130.b;
      color_04.fields.a = UStack_130.a;
      color_04.fields.r = UStack_130.r;
      color_04.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      pSVar14 = (SimpleJSONFixed_JSONObject_c *)
                System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (SimpleJSONFixed_JSONObject_o *)0x0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    pSVar7 = pSVar14;
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar14,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_c *)0x0) goto label_04500b08;
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    pSVar7 = __this;
    (*(code *)pMVar16[7].klass)(__this,pSVar8,pMVar16[7].return_type);
    if ((int)*(ulong *)(lVar12 + 0x18) < 2) {
      pSVar11 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar11 = *(System_String_o **)(lVar12 + 0x28);
    }
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    pSVar14 = (SimpleJSONFixed_JSONObject_c *)
              Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,1,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar11,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_05.fields.b = UStack_130.b;
      color_05.fields.a = UStack_130.a;
      color_05.fields.r = UStack_130.r;
      color_05.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      pSVar14 = (SimpleJSONFixed_JSONObject_c *)
                System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (System_String_o *)0x0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)
             SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar14,(MethodInfo *)0x0);
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    pSVar7 = __this;
    (*(code *)pMVar16[7].klass)(__this,pSVar8,pMVar16[7].return_type);
    if (2 < (int)*(ulong *)(lVar12 + 0x18)) {
      if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar11 = *(System_String_o **)(lVar12 + 0x30);
    }
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    s = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,2,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar11,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_06.fields.b = UStack_130.b;
      color_06.fields.a = UStack_130.a;
      color_06.fields.r = UStack_130.r;
      color_06.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      s = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = (SimpleJSONFixed_JSONObject_c *)0x0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    pMVar16 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    pSVar7 = __this;
    (*(code *)pMVar16[7].klass)(__this,pSVar8,pMVar16[7].return_type);
    if (3 < (int)*(ulong *)(lVar12 + 0x18)) {
      if ((*(ulong *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      pSVar14 = *(SimpleJSONFixed_JSONObject_c **)(lVar12 + 0x38);
    }
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar10,3,"#FFFFFFFF",pMVar16);
    if (g_data_057aed0b == '\0') {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_130.r = 0.0;
    UStack_130.g = 0.0;
    UStack_130.b = 0.0;
    UStack_130.a = 0.0;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)pSVar14,(UnityEngine_Color_o *)&UStack_130,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      color_07.fields.b = UStack_130.b;
      color_07.fields.a = UStack_130.a;
      color_07.fields.r = UStack_130.r;
      color_07.fields.g = UStack_130.g;
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
    pvVar4 = (__this->_1).image;
    pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (**(code **)((long)pvVar4 + 0x288))(__this,pSVar10,*(undefined8 *)((long)pvVar4 + 0x290));
    return (SimpleJSONFixed_JSONObject_o *)__this;
  }
  if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) != 0) {
    pSVar11 = *(System_String_o **)(lVar12 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar15 = pSVar8;
label_04500b08:
  pSStack_138 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_140 = pSVar14;
  pSStack_138 = pSVar10;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_158.r = 0.0;
  UStack_158.g = 0.0;
  UStack_158.b = 0.0;
  UStack_158.a = 0.0;
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pSVar7,(UnityEngine_Color_o *)&UStack_158,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    color.fields.b = UStack_158.b;
    color.fields.a = UStack_158.a;
    color.fields.r = UStack_158.r;
    color.fields.g = UStack_158.g;
    pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar15 = (SimpleJSONFixed_JSONObject_o *)
              System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
  }
  return pSVar15;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString (SimpleJSONFixed_JSONNode_o* colors, int32_t index, System_String_o* fallback, const MethodInfo* method);
// 0x4500360

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,System_String_o *fallback,MethodInfo *method)

{
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  long lVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *s;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONArray_c *pSVar8;
  SimpleJSONFixed_JSONArray_o *htmlString;
  UnityEngine_Color_Fields UStack_a8;
  SimpleJSONFixed_JSONArray_o *pSStack_90;
  SimpleJSONFixed_JSONNode_o *pSStack_88;
  UnityEngine_Color_Fields UStack_80;
  System_String_o *pSStack_68;
  long *plStack_60;
  UnityEngine_Color_Fields local_38;
  
  if (g_data_057aed0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  s = (SimpleJSONFixed_JSONArray_o *)colors;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = fallback;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if (colors != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)
             (*(colors->klass->vtable)._5_get_Item.methodPtr)
                       (colors,(ulong)(uint)index,(colors->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      local_38.r = 0.0;
      local_38.g = 0.0;
      local_38.b = 0.0;
      local_38.a = 0.0;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar4,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        color_08.fields.b = local_38.b;
        color_08.fields.a = local_38.a;
        color_08.fields.r = local_38.r;
        color_08.fields.g = local_38.g;
        pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        fallback = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
      }
      return fallback;
    }
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)(ulong)(uint)index;
    plVar3 = (long *)(*(colors->klass->vtable)._5_get_Item.methodPtr)
                               (colors,pSVar2,(colors->klass->vtable)._5_get_Item.method);
    s = (SimpleJSONFixed_JSONArray_o *)colors;
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      goto label_0450043b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_60 = &TypeInfo_JSONNode;
  pSStack_68 = fallback;
  if (g_data_057aed06 == '\0') {
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar4 = TypeInfo_string;
  htmlString = s;
  lVar5 = il2cpp_runtime_helper_023051f0();
  if (lVar5 == 0) {
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar2,0,"#FFFFFFFF",method);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_80.b;
      color_00.fields.a = UStack_80.a;
      color_00.fields.r = UStack_80.r;
      color_00.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    htmlString = s;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar2,1,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_80.b;
      color_01.fields.a = UStack_80.a;
      color_01.fields.r = UStack_80.r;
      color_01.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar2,2,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_80.b;
      color_02.fields.a = UStack_80.a;
      color_02.fields.r = UStack_80.r;
      color_02.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar2,3,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_80.b;
      color_03.fields.a = UStack_80.a;
      color_03.fields.r = UStack_80.r;
      color_03.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
    pSVar4 = (System_String_o *)0x0;
label_045007e1:
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar2,0,"#FFFFFFFF",method);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_80.b;
      color_04.fields.a = UStack_80.a;
      color_04.fields.r = UStack_80.r;
      color_04.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    htmlString = s;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar8->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar5 + 0x18) < 2) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar4 = *(System_String_o **)(lVar5 + 0x28);
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar2,1,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar4,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_80.b;
      color_05.fields.a = UStack_80.a;
      color_05.fields.r = UStack_80.r;
      color_05.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar8->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar5 + 0x18)) {
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar7 = *(System_String_o **)(lVar5 + 0x30);
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar2,2,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar7,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_80.b;
      color_06.fields.a = UStack_80.a;
      color_06.fields.r = UStack_80.r;
      color_06.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (SimpleJSONFixed_JSONArray_o *)0x0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar4 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar4,(pSVar8->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar5 + 0x18)) {
      if ((*(ulong *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(SimpleJSONFixed_JSONArray_o **)(lVar5 + 0x38);
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar2,3,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_80.r = 0.0;
    UStack_80.g = 0.0;
    UStack_80.b = 0.0;
    UStack_80.a = 0.0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_80,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_80.b;
      color_07.fields.a = UStack_80.a;
      color_07.fields.r = UStack_80.r;
      color_07.fields.g = UStack_80.g;
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar2,(__this->klass->vtable)._21_Add.method);
    return (System_String_o *)__this;
  }
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) != 0) {
    pSVar4 = *(System_String_o **)(lVar5 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar7 = pSVar4;
label_04500b08:
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = s;
  pSStack_88 = pSVar2;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)htmlString,(UnityEngine_Color_o *)&UStack_a8,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_a8.b;
    color.fields.a = UStack_a8.a;
    color.fields.r = UStack_a8.r;
    color.fields.g = UStack_a8.g;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
  }
  return pSVar7;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorStringValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue (System_String_o* value, System_String_o* fallback, const MethodInfo* method);
// 0x4500b10

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorStringValue
          (System_String_o *value,System_String_o *fallback,MethodInfo *method)

{
  UnityEngine_Color_o color;
  bool_conflict bVar1;
  System_String_o *str1;
  UnityEngine_Color_Fields UStack_28;
  
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
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
    fallback = System_String__Concat_3ae5ba0("#",str1,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ParseColor
// il2cpp: Utility_Color255_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor (SimpleJSONFixed_JSONNode_o* colors, int32_t index, Utility_Color255_o* fallback, const MethodInfo* method);
// 0x4500ec0

Utility_Color255_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ParseColor
          (SimpleJSONFixed_JSONNode_o *colors,int32_t index,Utility_Color255_o *fallback,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t *piVar2;
  System_Collections_Generic_List_object__o *__this;
  long lVar3;
  Il2CppClass *pIVar4;
  uint16_t value;
  ushort value_00;
  bool_conflict bVar5;
  int iVar6;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar7;
  System_String_o *pSVar8;
  Utility_Color255_o *pUVar9;
  System_Object_array *pSVar10;
  System_Text_StringBuilder_o *pSVar11;
  undefined8 uVar12;
  System_Object_array *__this_00;
  System_Object_array *pSVar13;
  System_Object_array *pSVar14;
  System_Object_array *pSVar15;
  MethodInfo *pMVar16;
  undefined1 extraout_DL;
  uint uVar17;
  System_Object_array *pSVar18;
  System_String_o **text;
  long lVar19;
  undefined1 uVar20;
  undefined4 in_R8D;
  int index_00;
  int32_t index_01;
  undefined4 uVar21;
  UnityEngine_Color_o UVar22;
  System_Object_array *pSStack_a8;
  Utility_Color255_Fields *pUStack_a0;
  Utility_Color255_o *pUStack_98;
  System_Object_array *pSStack_90;
  long *plStack_88;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (g_data_057aed0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0c = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_Object_array *)colors;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(colors,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (colors == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0450101b:
      il2cpp_runtime_helper_022b2c90();
      text = (System_String_o **)pSVar10;
      if (g_data_057aed0d == '\0') {
        text = &"#";
        il2cpp_runtime_helper_023445d0();
        g_data_057aed0d = '\x01';
      }
      if (pSVar10 != (System_Object_array *)0x0) {
        UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pSVar10,(MethodInfo *)0x0);
        pSVar8 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar22,(MethodInfo *)0x0);
        pUVar9 = (Utility_Color255_o *)System_String__Concat_3ae5ba0("#",pSVar8,(MethodInfo *)0x0);
        return pUVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_88 = &TypeInfo_JSONNode;
      pSStack_90 = pSVar10;
      if (g_data_057aed62 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&"FFFFFF");
        g_data_057aed62 = '\x01';
      }
      pSStack_a8 = (System_Object_array *)0x0;
      pUVar9 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
      if (g_data_057aed6f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057aed6f = '\x01';
      }
      pSVar10 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
      piVar1 = &(pUVar9->fields).B;
      *(System_Object_array **)&(pUVar9->fields).B = pSVar10;
      il2cpp_runtime_helper_022b4080(piVar1);
      System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
      pMVar16 = method;
      if (pUVar9 != (Utility_Color255_o *)0x0) {
        uVar12 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        pUStack_a0 = &pUVar9->fields;
        (pUVar9->fields).R = (int)uVar12;
        (pUVar9->fields).G = (int)((ulong)uVar12 >> 0x20);
        il2cpp_runtime_helper_022b4080();
        pSVar11 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
        System_Text_StringBuilder___ctor(pSVar11,(MethodInfo *)0x0);
        pMVar16 = method;
        pSVar10 = "FFFFFF";
        if (((System_Object_array *)text != (System_Object_array *)0x0) ||
           (text = (System_String_o **)**(long **)(g_data_057b9c00 + 0xb8),
           (System_Object_array *)text != (System_Object_array *)0x0)) {
          pUStack_98 = pUVar9;
          if (pSVar11 == (System_Text_StringBuilder_o *)0x0) {
            if (0 < *(int *)&((System_Object_array *)text)->bounds) {
              pSVar10 = (System_Object_array *)0x0;
              do {
                bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                  ((System_String_o *)text,(int)pSVar10,(System_String_o **)&pSStack_a8,method
                                  );
                if ((char)bVar5 == '\0') goto label_0450130f;
                uVar17 = (int)pSVar10 + 8;
                pSVar10 = (System_Object_array *)(ulong)uVar17;
              } while ((int)uVar17 < *(int *)&((System_Object_array *)text)->bounds);
            }
          }
          else if (0 < *(int *)&((System_Object_array *)text)->bounds) {
            index_01 = 0;
            do {
              while (bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                       ((System_String_o *)text,index_01,(System_String_o **)&pSStack_a8,
                                        pMVar16), (char)bVar5 == '\0') {
                value = System_String__get_Chars((System_String_o *)text,index_01,(MethodInfo *)0x0);
                System_Text_StringBuilder__Append_3b048f0(pSVar11,value,(MethodInfo *)0x0);
                method = MethodInfo_Void_Add;
                __this = *(System_Collections_Generic_List_object__o **)piVar1;
                if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_0450130a;
                piVar2 = &(__this->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar18 = (__this->fields)._items;
                pMVar16 = method;
                if (pSVar18 == (System_Object_array *)0x0) goto label_0450130a;
                uVar17 = (__this->fields)._size;
                if (uVar17 < (uint)pSVar18->max_length) {
                  method = (MethodInfo *)(ulong)(uVar17 + 1);
                  (__this->fields)._size = uVar17 + 1;
                  pSVar18->m_Items[(int)uVar17] = &pSVar10->obj;
                  il2cpp_runtime_helper_022b4080(pSVar18->m_Items + (int)uVar17,pSVar10);
                  index_01 = index_01 + 1;
                  pMVar16 = method;
                  if (*(int *)&((System_Object_array *)text)->bounds <= index_01) goto label_045012c9;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this,&pSVar10->obj,(MethodInfo_362C220 *)method->klass->rgctx_data[0xe].method)
                  ;
                  index_01 = index_01 + 1;
                  pMVar16 = method;
                  if (*(int *)&((System_Object_array *)text)->bounds <= index_01) goto label_045012c9;
                }
              }
              index_01 = index_01 + 8;
              method = pMVar16;
              pSVar10 = pSStack_a8;
            } while (index_01 < *(int *)&((System_Object_array *)text)->bounds);
          }
label_045012c9:
          pMVar16 = method;
          if (pSVar11 != (System_Text_StringBuilder_o *)0x0) {
            uVar12 = (*(pSVar11->klass->vtable)._3_ToString.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
            pUVar9 = pUStack_98;
            (pUStack_98->fields).R = (int)uVar12;
            (pUStack_98->fields).G = (int)((ulong)uVar12 >> 0x20);
            il2cpp_runtime_helper_022b4080(pUStack_a0,uVar12);
            return pUVar9;
          }
        }
      }
label_0450130a:
      il2cpp_runtime_helper_022b2c90();
      method = pMVar16;
label_0450130f:
      plVar7 = (long *)((ulong)pSVar10 & 0xffffffff);
      System_String__get_Chars((System_String_o *)text,(int32_t)pSVar10,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aed64 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&"FFFFFF");
        g_data_057aed64 = '\x01';
      }
      if ((System_Object_array *)text == (System_Object_array *)0x0) {
        text = (System_String_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
      pSVar10 = (System_Object_array *)0x0;
      pSVar18 = __this_00;
      System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
      uVar20 = (undefined1)in_R8D;
      if ((System_Object_array *)text != (System_Object_array *)0x0) {
        if (0 < *(int *)&((System_Object_array *)text)->bounds) {
          pSVar13 = (System_Object_array *)0x0;
          pSVar14 = "FFFFFF";
          do {
            pSVar10 = pSVar13;
            index_00 = (int)pSVar10;
            pSVar13 = "FFFFFF";
            if (plVar7 != (long *)0x0) {
              lVar3 = *plVar7;
              if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
                lVar19 = 0;
                do {
                  if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar19) == TypeInfo_ICollection_string) {
                    method = (MethodInfo *)
                             ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar19) * 0x10 + lVar3 + 0x138);
                    goto label_04501481;
                  }
                  lVar19 = lVar19 + 0x10;
                } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar19);
              }
              method = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_ICollection_string,0);
label_04501481:
              iVar6 = (*method->methodPointer)(plVar7,method->virtualMethodPointer);
              pSVar13 = "FFFFFF";
              if (index_00 < iVar6) {
                lVar3 = *plVar7;
                if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar19) == TypeInfo_IList_string) {
                      method = (MethodInfo *)
                               ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar19) * 0x10 + lVar3 + 0x138);
                      goto label_045014ff;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar19);
                }
                method = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IList_string,0);
label_045014ff:
                pSVar18 = pSVar10;
                pSVar8 = (System_String_o *)
                         (*method->methodPointer)(plVar7,pSVar10,method->virtualMethodPointer);
                pSVar13 = (System_Object_array *)
                          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    (pSVar8,(MethodInfo *)pSVar18);
              }
            }
            pSVar15 = pSVar14;
            pSVar18 = pSVar13;
            bVar5 = System_String__op_Inequality
                              ((System_String_o *)pSVar13,(System_String_o *)pSVar14,(MethodInfo *)0x0);
            uVar20 = (undefined1)in_R8D;
            if ((char)bVar5 == '\0') {
              pSVar18 = (System_Object_array *)text;
              value_00 = System_String__get_Chars((System_String_o *)text,index_00,(MethodInfo *)0x0);
              uVar20 = (undefined1)in_R8D;
              if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
            }
            else {
              pSVar10 = pSVar15;
              if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar10 = (System_Object_array *)&g_data_0000005b;
              pSVar18 = __this_00;
              pSVar14 = (System_Object_array *)
                        System_Text_StringBuilder__Append_3b048f0
                                  ((System_Text_StringBuilder_o *)__this_00,0x5b,(MethodInfo *)0x0);
              uVar20 = (undefined1)in_R8D;
              if (pSVar13 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar10 = (System_Object_array *)0x0;
              pSVar18 = pSVar13;
              pSVar15 = (System_Object_array *)
                        System_String__ToLowerInvariant((System_String_o *)pSVar13,(MethodInfo *)0x0);
              uVar20 = (undefined1)in_R8D;
              if (pSVar14 == (System_Object_array *)0x0) goto label_045015bf;
              pSVar11 = System_Text_StringBuilder__Append_3b03f90
                                  ((System_Text_StringBuilder_o *)pSVar14,(System_String_o *)pSVar15,
                                   (MethodInfo *)0x0);
              uVar20 = (undefined1)in_R8D;
              pSVar10 = pSVar15;
              pSVar18 = pSVar14;
              if (pSVar11 == (System_Text_StringBuilder_o *)0x0) goto label_045015bf;
              System_Text_StringBuilder__Append_3b048f0(pSVar11,0x5d,(MethodInfo *)0x0);
              value_00 = System_String__get_Chars((System_String_o *)text,index_00,(MethodInfo *)0x0);
              pSVar14 = pSVar13;
            }
            pSVar10 = (System_Object_array *)(ulong)value_00;
            pSVar18 = __this_00;
            System_Text_StringBuilder__Append_3b048f0
                      ((System_Text_StringBuilder_o *)__this_00,value_00,(MethodInfo *)0x0);
            uVar20 = (undefined1)in_R8D;
            pSVar13 = (System_Object_array *)(ulong)(index_00 + 1U);
          } while ((int)(index_00 + 1U) < *(int *)&((System_Object_array *)text)->bounds);
        }
        if (__this_00 != (System_Object_array *)0x0) {
          pIVar4 = (__this_00->obj).klass;
          pUVar9 = (Utility_Color255_o *)(*pIVar4->vtable[3].methodPtr)(__this_00,pIVar4->vtable[3].method);
          return pUVar9;
        }
      }
label_045015bf:
      uVar21 = il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar18,(MethodInfo *)0x0);
      pSVar18->bounds = (Il2CppArrayBounds *)pSVar10;
      il2cpp_runtime_helper_022b4080(&pSVar18->bounds,pSVar10);
      *(undefined4 *)&pSVar18->max_length = uVar21;
      *(undefined1 *)((long)&pSVar18->max_length + 4) = extraout_DL;
      pSVar18->m_Items[0] = (Il2CppObject *)method;
      pUVar9 = (Utility_Color255_o *)il2cpp_runtime_helper_022b4080(pSVar18->m_Items,method);
      *(undefined1 *)(pSVar18->m_Items + 1) = uVar20;
      return pUVar9;
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(colors->klass->vtable)._5_get_Item.methodPtr)
                  (colors,(ulong)(uint)index,(colors->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      plVar7 = (long *)(*(colors->klass->vtable)._5_get_Item.methodPtr)
                                 (colors,(ulong)(uint)index,(colors->klass->vtable)._5_get_Item.method);
      pSVar10 = (System_Object_array *)colors;
      if (plVar7 == (long *)0x0) goto label_0450101b;
      pSVar8 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      goto label_04500fc2;
    }
  }
  pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04500fc2:
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar8,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    fallback = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    UVar22.fields.b = local_48;
    UVar22.fields.a = fStack_44;
    UVar22.fields.r = local_38.r;
    UVar22.fields.g = local_38.g;
    Utility_Color255___ctor_4388bb0(fallback,UVar22,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex (Utility_Color255_o* color, const MethodInfo* method);
// 0x4501020

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorHex(Utility_Color255_o *color,MethodInfo *method)

{
  System_String_c *__this;
  long lVar1;
  Il2CppClass *pIVar2;
  int32_t *piVar3;
  uint16_t value;
  ushort value_00;
  bool_conflict bVar4;
  int iVar5;
  System_String_o *pSVar6;
  System_Object_array *pSVar7;
  System_Text_StringBuilder_o *pSVar8;
  undefined8 uVar9;
  System_Object_array *__this_00;
  System_Object_array *pSVar10;
  System_Object_array *pSVar11;
  System_Object_array *pSVar12;
  MethodInfo *in_RCX;
  MethodInfo *pMVar13;
  undefined1 extraout_DL;
  uint uVar14;
  long *plVar15;
  System_Object_array *pSVar16;
  System_String_o **text;
  long lVar17;
  undefined1 uVar18;
  undefined4 in_R8D;
  int index;
  int32_t index_00;
  undefined4 uVar19;
  UnityEngine_Color_o color_00;
  System_Object_array *pSStack_50;
  System_String_Fields *pSStack_48;
  System_String_o *pSStack_40;
  Utility_Color255_o *pUStack_38;
  
  text = (System_String_o **)color;
  if (g_data_057aed0d == '\0') {
    text = &"#";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed0d = '\x01';
  }
  if (color != (Utility_Color255_o *)0x0) {
    color_00 = Utility_Color255__ToColor(color,(MethodInfo *)0x0);
    pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_38 = color;
  if (g_data_057aed62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed62 = '\x01';
  }
  pSStack_50 = (System_Object_array *)0x0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
  if (g_data_057aed6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  pSVar7 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
  pSVar6[1].klass = (System_String_c *)pSVar7;
  il2cpp_runtime_helper_022b4080(pSVar6 + 1);
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  pMVar13 = in_RCX;
  if (pSVar6 != (System_String_o *)0x0) {
    uVar9 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    pSStack_48 = &pSVar6->fields;
    (pSVar6->fields)._stringLength = (int)uVar9;
    (pSVar6->fields)._firstChar = (short)((ulong)uVar9 >> 0x20);
    *(short *)&(pSVar6->fields).field_0x6 = (short)((ulong)uVar9 >> 0x30);
    il2cpp_runtime_helper_022b4080();
    pSVar8 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(pSVar8,(MethodInfo *)0x0);
    pMVar13 = in_RCX;
    pSVar7 = "FFFFFF";
    if (((System_Object_array *)text != (System_Object_array *)0x0) ||
       (text = (System_String_o **)**(long **)(g_data_057b9c00 + 0xb8),
       (System_Object_array *)text != (System_Object_array *)0x0)) {
      pSStack_40 = pSVar6;
      if (pSVar8 == (System_Text_StringBuilder_o *)0x0) {
        if (0 < *(int *)&((System_Object_array *)text)->bounds) {
          pSVar7 = (System_Object_array *)0x0;
          do {
            bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                              ((System_String_o *)text,(int)pSVar7,(System_String_o **)&pSStack_50,in_RCX);
            if ((char)bVar4 == '\0') goto label_0450130f;
            uVar14 = (int)pSVar7 + 8;
            pSVar7 = (System_Object_array *)(ulong)uVar14;
          } while ((int)uVar14 < *(int *)&((System_Object_array *)text)->bounds);
        }
      }
      else if (0 < *(int *)&((System_Object_array *)text)->bounds) {
        index_00 = 0;
        do {
          while (bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                   ((System_String_o *)text,index_00,(System_String_o **)&pSStack_50,pMVar13),
                (char)bVar4 == '\0') {
            value = System_String__get_Chars((System_String_o *)text,index_00,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append_3b048f0(pSVar8,value,(MethodInfo *)0x0);
            in_RCX = MethodInfo_Void_Add;
            __this = pSVar6[1].klass;
            if (__this == (System_String_c *)0x0) goto label_0450130a;
            piVar3 = (int32_t *)((long)&(__this->_1).namespaze + 4);
            *piVar3 = *piVar3 + 1;
            pSVar16 = ((System_Collections_Generic_List_object__Fields *)&(__this->_1).name)->_items;
            pMVar13 = in_RCX;
            if (pSVar16 == (System_Object_array *)0x0) goto label_0450130a;
            uVar14 = *(uint *)&(__this->_1).namespaze;
            if (uVar14 < (uint)pSVar16->max_length) {
              in_RCX = (MethodInfo *)(ulong)(uVar14 + 1);
              *(uint *)&(__this->_1).namespaze = uVar14 + 1;
              pSVar16->m_Items[(int)uVar14] = &pSVar7->obj;
              il2cpp_runtime_helper_022b4080(pSVar16->m_Items + (int)uVar14,pSVar7);
              index_00 = index_00 + 1;
              pMVar13 = in_RCX;
              if (*(int *)&((System_Object_array *)text)->bounds <= index_00) goto label_045012c9;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,&pSVar7->obj,
                         (MethodInfo_362C220 *)in_RCX->klass->rgctx_data[0xe].method);
              index_00 = index_00 + 1;
              pMVar13 = in_RCX;
              if (*(int *)&((System_Object_array *)text)->bounds <= index_00) goto label_045012c9;
            }
          }
          index_00 = index_00 + 8;
          in_RCX = pMVar13;
          pSVar7 = pSStack_50;
        } while (index_00 < *(int *)&((System_Object_array *)text)->bounds);
      }
label_045012c9:
      pMVar13 = in_RCX;
      if (pSVar8 != (System_Text_StringBuilder_o *)0x0) {
        uVar9 = (*(pSVar8->klass->vtable)._3_ToString.methodPtr)
                          (pSVar8,(pSVar8->klass->vtable)._3_ToString.method);
        pSVar6 = pSStack_40;
        (pSStack_40->fields)._stringLength = (int)uVar9;
        (pSStack_40->fields)._firstChar = (short)((ulong)uVar9 >> 0x20);
        *(short *)&(pSStack_40->fields).field_0x6 = (short)((ulong)uVar9 >> 0x30);
        il2cpp_runtime_helper_022b4080(pSStack_48,uVar9);
        return pSVar6;
      }
    }
  }
label_0450130a:
  il2cpp_runtime_helper_022b2c90();
  in_RCX = pMVar13;
label_0450130f:
  plVar15 = (long *)((ulong)pSVar7 & 0xffffffff);
  System_String__get_Chars((System_String_o *)text,(int32_t)pSVar7,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed64 = '\x01';
  }
  if ((System_Object_array *)text == (System_Object_array *)0x0) {
    text = (System_String_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  pSVar7 = (System_Object_array *)0x0;
  pSVar16 = __this_00;
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
  uVar18 = (undefined1)in_R8D;
  if ((System_Object_array *)text != (System_Object_array *)0x0) {
    if (0 < *(int *)&((System_Object_array *)text)->bounds) {
      pSVar10 = (System_Object_array *)0x0;
      pSVar11 = "FFFFFF";
      do {
        pSVar7 = pSVar10;
        index = (int)pSVar7;
        pSVar10 = "FFFFFF";
        if (plVar15 != (long *)0x0) {
          lVar1 = *plVar15;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar17) == TypeInfo_ICollection_string) {
                in_RCX = (MethodInfo *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar17) * 0x10 + lVar1 + 0x138);
                goto label_04501481;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar17);
          }
          in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_ICollection_string,0);
label_04501481:
          iVar5 = (*in_RCX->methodPointer)(plVar15,in_RCX->virtualMethodPointer);
          pSVar10 = "FFFFFF";
          if (index < iVar5) {
            lVar1 = *plVar15;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar17) == TypeInfo_IList_string) {
                  in_RCX = (MethodInfo *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar17) * 0x10 + lVar1 + 0x138);
                  goto label_045014ff;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar17);
            }
            in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IList_string,0);
label_045014ff:
            pSVar16 = pSVar7;
            pSVar6 = (System_String_o *)(*in_RCX->methodPointer)(plVar15,pSVar7,in_RCX->virtualMethodPointer);
            pSVar10 = (System_Object_array *)
                      Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                (pSVar6,(MethodInfo *)pSVar16);
          }
        }
        pSVar12 = pSVar11;
        pSVar16 = pSVar10;
        bVar4 = System_String__op_Inequality
                          ((System_String_o *)pSVar10,(System_String_o *)pSVar11,(MethodInfo *)0x0);
        uVar18 = (undefined1)in_R8D;
        if ((char)bVar4 == '\0') {
          pSVar16 = (System_Object_array *)text;
          value_00 = System_String__get_Chars((System_String_o *)text,index,(MethodInfo *)0x0);
          uVar18 = (undefined1)in_R8D;
          if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
        }
        else {
          pSVar7 = pSVar12;
          if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar7 = (System_Object_array *)&g_data_0000005b;
          pSVar16 = __this_00;
          pSVar11 = (System_Object_array *)
                    System_Text_StringBuilder__Append_3b048f0
                              ((System_Text_StringBuilder_o *)__this_00,0x5b,(MethodInfo *)0x0);
          uVar18 = (undefined1)in_R8D;
          if (pSVar10 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar7 = (System_Object_array *)0x0;
          pSVar16 = pSVar10;
          pSVar12 = (System_Object_array *)
                    System_String__ToLowerInvariant((System_String_o *)pSVar10,(MethodInfo *)0x0);
          uVar18 = (undefined1)in_R8D;
          if (pSVar11 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar8 = System_Text_StringBuilder__Append_3b03f90
                             ((System_Text_StringBuilder_o *)pSVar11,(System_String_o *)pSVar12,
                              (MethodInfo *)0x0);
          uVar18 = (undefined1)in_R8D;
          pSVar7 = pSVar12;
          pSVar16 = pSVar11;
          if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_045015bf;
          System_Text_StringBuilder__Append_3b048f0(pSVar8,0x5d,(MethodInfo *)0x0);
          value_00 = System_String__get_Chars((System_String_o *)text,index,(MethodInfo *)0x0);
          pSVar11 = pSVar10;
        }
        pSVar7 = (System_Object_array *)(ulong)value_00;
        pSVar16 = __this_00;
        System_Text_StringBuilder__Append_3b048f0
                  ((System_Text_StringBuilder_o *)__this_00,value_00,(MethodInfo *)0x0);
        uVar18 = (undefined1)in_R8D;
        pSVar10 = (System_Object_array *)(ulong)(index + 1U);
      } while ((int)(index + 1U) < *(int *)&((System_Object_array *)text)->bounds);
    }
    if (__this_00 != (System_Object_array *)0x0) {
      pIVar2 = (__this_00->obj).klass;
      pSVar6 = (System_String_o *)(*pIVar2->vtable[3].methodPtr)(__this_00,pIVar2->vtable[3].method);
      return pSVar6;
    }
  }
label_045015bf:
  uVar19 = il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar16,(MethodInfo *)0x0);
  pSVar16->bounds = (Il2CppArrayBounds *)pSVar7;
  il2cpp_runtime_helper_022b4080(&pSVar16->bounds,pSVar7);
  *(undefined4 *)&pSVar16->max_length = uVar19;
  *(undefined1 *)((long)&pSVar16->max_length + 4) = extraout_DL;
  pSVar16->m_Items[0] = (Il2CppObject *)in_RCX;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b4080(pSVar16->m_Items,in_RCX);
  *(undefined1 *)(pSVar16->m_Items + 1) = uVar18;
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Trim
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x4500320

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Trim(System_String_o *value,int32_t max,MethodInfo *method)

{
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  long *plVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  long lVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *s;
  System_String_o *pSVar7;
  MethodInfo *in_RCX;
  SimpleJSONFixed_JSONArray_c *pSVar8;
  System_String_o *extraout_RDX;
  ulong uVar9;
  SimpleJSONFixed_JSONArray_o *htmlString;
  UnityEngine_Color_Fields UStack_b0;
  SimpleJSONFixed_JSONArray_o *pSStack_98;
  SimpleJSONFixed_JSONNode_o *pSStack_90;
  UnityEngine_Color_Fields UStack_88;
  System_String_o *pSStack_70;
  long *plStack_68;
  UnityEngine_Color_Fields UStack_40;
  
  uVar9 = (ulong)(uint)max;
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8),
     (SimpleJSONFixed_JSONArray_o *)value != (SimpleJSONFixed_JSONArray_o *)0x0)) {
    if (*(int *)&(((SimpleJSONFixed_JSONArray_o *)value)->fields).m_List <= max) {
      return (System_String_o *)(SimpleJSONFixed_JSONArray_o *)value;
    }
    pSVar2 = System_String__Substring_3af8da0(value,0,max,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aed0a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
  s = (SimpleJSONFixed_JSONArray_o *)value;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)value,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar2 = extraout_RDX;
  if ((char)bVar1 == '\0') goto label_0450043b;
  if ((SimpleJSONFixed_JSONArray_o *)value != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)
             (*(((SimpleJSONFixed_JSONArray_o *)value)->klass->vtable)._5_get_Item.methodPtr)
                       (value,uVar9 & 0xffffffff,
                        (((SimpleJSONFixed_JSONArray_o *)value)->klass->vtable)._5_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_0450043b:
      if (g_data_057aed0b == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed0b = '\x01';
      }
      UStack_40.r = 0.0;
      UStack_40.g = 0.0;
      UStack_40.b = 0.0;
      UStack_40.a = 0.0;
      bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar2,(UnityEngine_Color_o *)&UStack_40,(MethodInfo *)0x0);
      pSVar2 = extraout_RDX;
      if ((char)bVar1 != '\0') {
        color_08.fields.b = UStack_40.b;
        color_08.fields.a = UStack_40.a;
        color_08.fields.r = UStack_40.r;
        color_08.fields.g = UStack_40.g;
        pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_08,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
      }
      return pSVar2;
    }
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)(uVar9 & 0xffffffff);
    plVar4 = (long *)(*(((SimpleJSONFixed_JSONArray_o *)value)->klass->vtable)._5_get_Item.methodPtr)
                               (value,pSVar3,
                                (((SimpleJSONFixed_JSONArray_o *)value)->klass->vtable)._5_get_Item.method);
    s = (SimpleJSONFixed_JSONArray_o *)value;
    if (plVar4 != (long *)0x0) {
      pSVar2 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      goto label_0450043b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_68 = &TypeInfo_JSONNode;
  pSStack_70 = extraout_RDX;
  if (g_data_057aed06 == '\0') {
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45004d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45004e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45004f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45004fd;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aed06 = '\x01';
  }
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500513;
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500520;
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500532;
  pSVar2 = TypeInfo_string;
  htmlString = s;
  lVar5 = il2cpp_runtime_helper_023051f0();
  if (lVar5 == 0) {
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500570;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar3,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500588;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45005a2;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_00.fields.b = UStack_88.b;
      color_00.fields.a = UStack_88.a;
      color_00.fields.r = UStack_88.r;
      color_00.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45005b8;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45005cc;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45005e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45005f2;
    htmlString = s;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500611;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500622;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar3,1,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450063a;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500654;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_01.fields.b = UStack_88.b;
      color_01.fields.a = UStack_88.a;
      color_01.fields.r = UStack_88.r;
      color_01.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450066a;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450067e;
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500693;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450069d;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45006b3;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45006c4;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar3,2,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45006dc;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45006f6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_02.fields.b = UStack_88.b;
      color_02.fields.a = UStack_88.a;
      color_02.fields.r = UStack_88.r;
      color_02.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450070c;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500720;
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500735;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450073f;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500755;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar6,(pSVar8->vtable)._21_Add.method);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500766;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar3,3,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450077e;
      il2cpp_runtime_helper_023445d0();
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500798;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)0x0,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_03.fields.b = UStack_88.b;
      color_03.fields.a = UStack_88.a;
      color_03.fields.r = UStack_88.r;
      color_03.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45007ae;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45007c2;
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45007d7;
      il2cpp_runtime_helper_02337ed0();
    }
    goto label_04500ad4;
  }
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
    pSVar2 = (System_String_o *)0x0;
label_045007e1:
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45007f5;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString(pSVar3,0,"#FFFFFFFF",in_RCX);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450080d;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500828;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar2,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_04.fields.b = UStack_88.b;
      color_04.fields.a = UStack_88.a;
      color_04.fields.r = UStack_88.r;
      color_04.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450083e;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_04,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500852;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450086e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500878;
    htmlString = s;
    pSVar2 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04500b08;
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500897;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar2,(pSVar8->vtable)._21_Add.method);
    if ((int)*(ulong *)(lVar5 + 0x18) < 2) {
      pSVar2 = (System_String_o *)0x0;
    }
    else {
      if ((*(ulong *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto label_04500b03;
      pSVar2 = *(System_String_o **)(lVar5 + 0x28);
    }
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45008cc;
    s = (SimpleJSONFixed_JSONArray_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                  (pSVar3,1,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45008e4;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45008ff;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar2,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_05.fields.b = UStack_88.b;
      color_05.fields.a = UStack_88.a;
      color_05.fields.r = UStack_88.r;
      color_05.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500915;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_05,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500929;
      s = (SimpleJSONFixed_JSONArray_o *)System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450093e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x450094b;
    pSVar2 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500961;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar2,(pSVar8->vtable)._21_Add.method);
    if (2 < (int)*(ulong *)(lVar5 + 0x18)) {
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) < 3) goto label_04500b03;
      pSVar7 = *(System_String_o **)(lVar5 + 0x30);
    }
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500993;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar3,2,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45009ab;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45009c6;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar7,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_06.fields.b = UStack_88.b;
      color_06.fields.a = UStack_88.a;
      color_06.fields.r = UStack_88.r;
      color_06.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45009dc;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_06,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x45009f0;
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a0c;
      il2cpp_runtime_helper_02337ed0();
    }
    s = (SimpleJSONFixed_JSONArray_o *)0x0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a18;
    pSVar2 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    pSVar8 = __this->klass;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a2e;
    htmlString = __this;
    (*(pSVar8->vtable)._21_Add.methodPtr)(__this,pSVar2,(pSVar8->vtable)._21_Add.method);
    if (3 < (int)*(ulong *)(lVar5 + 0x18)) {
      if ((*(ulong *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto label_04500b03;
      s = *(SimpleJSONFixed_JSONArray_o **)(lVar5 + 0x38);
    }
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a5f;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ColorString
                       (pSVar3,3,"#FFFFFFFF",(MethodInfo *)pSVar8);
    if (g_data_057aed0b == '\0') {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a77;
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed0b = '\x01';
    }
    UStack_88.r = 0.0;
    UStack_88.g = 0.0;
    UStack_88.b = 0.0;
    UStack_88.a = 0.0;
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500a92;
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)s,(UnityEngine_Color_o *)&UStack_88,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      color_07.fields.b = UStack_88.b;
      color_07.fields.a = UStack_88.a;
      color_07.fields.r = UStack_88.r;
      color_07.fields.g = UStack_88.g;
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500aa8;
      pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_07,(MethodInfo *)0x0);
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500abc;
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500ad1;
      il2cpp_runtime_helper_02337ed0();
    }
label_04500ad4:
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500adb;
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500af1;
    (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar3,(__this->klass->vtable)._21_Add.method);
    return (System_String_o *)__this;
  }
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) != 0) {
    pSVar2 = *(System_String_o **)(lVar5 + 0x20);
    goto label_045007e1;
  }
label_04500b03:
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500b08;
  il2cpp_runtime_helper_022b2ca0();
  pSVar7 = pSVar2;
label_04500b08:
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x4500b0d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_98 = s;
  pSStack_90 = pSVar3;
  if (g_data_057aed0b == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed0b = '\x01';
  }
  UStack_b0.r = 0.0;
  UStack_b0.g = 0.0;
  UStack_b0.b = 0.0;
  UStack_b0.a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)htmlString,(UnityEngine_Color_o *)&UStack_b0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    color.fields.b = UStack_b0.b;
    color.fields.a = UStack_b0.a;
    color.fields.r = UStack_b0.r;
    color.fields.g = UStack_b0.g;
    pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
  }
  return pSVar7;
}


// Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$TrimColoredText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText (System_String_o* value, int32_t max, const MethodInfo* method);
// 0x44fe490

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterInfoState__TrimColoredText
          (System_String_o *value,int32_t max,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar6;
  undefined4 in_register_00000034;
  System_Collections_Generic_List_string__o *__this;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *unaff_R14;
  
  pMVar5 = (MethodInfo *)CONCAT44(in_register_00000034,max);
  if (g_data_057aed0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aed0e = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(value,pMVar5);
  if ((pGVar3 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (value = (pGVar3->fields).Text, unaff_R14 = pGVar3,
     (System_Collections_Generic_List_string__o *)value != (System_Collections_Generic_List_string__o *)0x0))
  {
    pMVar5 = extraout_RDX;
    if (*(int *)&(((System_Collections_Generic_List_string__o *)value)->fields)._items <= max)
    goto label_044fe53d;
    pGVar6 = &pGVar3->fields;
    pSVar4 = System_String__Substring_3af8da0(value,0,max,(MethodInfo *)0x0);
    (pGVar3->fields).Text = pSVar4;
    value = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(pGVar6,pSVar4);
    pSVar2 = (pGVar3->fields).Colors;
    pMVar5 = extraout_RDX_00;
    while (__this = pSVar2, __this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar4 = pGVar6->Text;
      value = (System_String_o *)0x0;
      if (pSVar4 == (System_String_o *)0x0) break;
      iVar1 = (__this->fields)._size;
      if (iVar1 <= (pSVar4->fields)._stringLength) {
        pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                           (pSVar4,(System_Collections_Generic_IList_string__o *)__this,pMVar5);
        return pSVar4;
      }
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this,iVar1 + -1,MethodInfo_Void_RemoveAt);
      pMVar5 = extraout_RDX_01;
      value = (System_String_o *)__this;
      pSVar2 = (pGVar3->fields).Colors;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = extraout_RDX_02;
label_044fe53d:
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (value,(System_Collections_Generic_IList_string__o *)(unaff_R14->fields).Colors,pMVar5);
  return pSVar4;
}


