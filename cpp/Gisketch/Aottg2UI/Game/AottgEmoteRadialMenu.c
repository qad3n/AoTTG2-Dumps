// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteRadialMenu.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, bool stickers, const MethodInfo* method);
// 0x4518a10

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,bool_conflict stickers,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._stickers = (char)stickers;
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4518a30

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  undefined8 *puVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar2;
  
  if (g_data_057aede4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__12_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheel-");
    g_data_057aede4 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  if (g_data_057aede5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"stickers");
    il2cpp_runtime_helper_023445d0(&"texts");
    g_data_057aede5 = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    puVar1 = &"texts";
  }
  else {
    puVar1 = &"stickers";
  }
  id = System_String__Concat_3ae5ba0("profile-emote-wheel-",(System_String_o *)*puVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(780.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
  pSVar2 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0
                      ,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",build,id,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aede5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"stickers");
    il2cpp_runtime_helper_023445d0(&"texts");
    g_data_057aede5 = '\x01';
  }
  if ((char)(pSVar2->fields)._stringLength == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$get_Suffix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, const MethodInfo* method);
// 0x4518bf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,MethodInfo *method)

{
  if (g_data_057aede5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"stickers");
    il2cpp_runtime_helper_023445d0(&"texts");
    g_data_057aede5 = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    return "texts";
  }
  return "stickers";
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Slot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, int32_t index, const MethodInfo* method);
// 0x4518c40

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *pSVar3;
  System_String_o *actionId;
  char cVar4;
  int32_t iVar5;
  undefined8 *puVar6;
  System_String_o *str3;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Settings_BaseSetting_o *pSVar12;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  float fVar15;
  int32_t local_44;
  float local_40;
  float local_3c;
  System_String_o *local_38;
  
  pMVar13 = (MethodInfo *)wheel;
  local_44 = index;
  if (g_data_057aede6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-emote-");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-slot-");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"profile.emote.text.open");
    il2cpp_runtime_helper_023445d0(&"profileGridItem");
    il2cpp_runtime_helper_023445d0(&"profile.emote.sticker.open");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aede6 = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(index,pMVar13);
  }
  else {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(index,pMVar13);
  }
  pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  cVar4 = (char)(__this->fields)._stickers;
  actionId = "profile.emote.sticker.open";
  if (cVar4 == '\0') {
    actionId = "profile.emote.text.open";
  }
  if (g_data_057aede5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"stickers");
    il2cpp_runtime_helper_023445d0(&"texts");
    g_data_057aede5 = '\x01';
    cVar4 = (char)(__this->fields)._stickers;
  }
  if (cVar4 == '\0') {
    puVar6 = &"texts";
  }
  else {
    puVar6 = &"stickers";
  }
  pSVar7 = (System_String_o *)*puVar6;
  str3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar14 = "profile-emote-";
  pSVar7 = System_String__Concat_3af7470("profile-emote-",pSVar7,"-slot-",str3,(MethodInfo *)0x0);
  iVar5 = (int32_t)pSVar14;
  if (wheel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (wheel,4,pSVar9,actionId,pSVar7,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    iVar5 = (int32_t)wheel;
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      local_40 = ((float)index * -45.0 + 90.0) * 0.017453292;
      (pGVar8->fields).style = "profileGridItem";
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style);
      pSVar9 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      (pGVar8->fields).value = pSVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).value,pSVar9);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(96.0,(MethodInfo *)0x0);
      fVar15 = cosf(local_40);
      local_3c = fVar15 * 300.0 + 390.0 + -77.0;
      fVar15 = sinf(local_40);
      pMVar13 = "Absolute";
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column","Center","Center",(System_String_o *)"Absolute",
                           (System_String_o *)0x0,0.0,width,height,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,local_3c
                           ,fVar15 * 220.0 + -280.0 + 48.0,0.0,1.0,(MethodInfo *)0x0);
      (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar10);
      pGVar11 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren(__this,local_44,local_38,pMVar13);
      (pGVar8->fields).deferredChildren = pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,pGVar11);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aede8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aede8 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return;
  }
  pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
  if ((pSVar3 == (Settings_ListSetting_T__o *)0x0) ||
     (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar3,iVar5,MethodInfo_BaseSetting_GetItemAt),
     pSVar12 == (Settings_BaseSetting_o *)0x0)) {
    pSVar12 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (pSVar12->klass->_2).naturalAligment) &&
       ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      return;
    }
  }
  iVar5 = (int32_t)pSVar12;
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aede9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aede9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 != 0) {
    pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
    if ((pSVar3 == (Settings_ListSetting_T__o *)0x0) ||
       (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar3,iVar5,MethodInfo_BaseSetting_GetItemAt),
       pSVar12 == (Settings_BaseSetting_o *)0x0)) {
      pSVar12 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar12->klass->_2).naturalAligment) &&
         ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pSVar12);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteX
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX (float width, float xFromCenter, const MethodInfo* method);
// 0x4519140

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX(float width,float xFromCenter,MethodInfo *method)

{
  return width * -0.5 + xFromCenter + 390.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteY
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY (float height, float yFromCenter, const MethodInfo* method);
// 0x4519160

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY
                (float height,float yFromCenter,MethodInfo *method)

{
  return height * 0.5 + yFromCenter + -280.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$SlotChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x4519180

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,int32_t index,System_String_o *value,
          MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  int iVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  float value_00;
  undefined8 uStackY_90;
  int32_t local_34;
  int32_t local_30;
  int32_t local_2c;
  
  local_34 = index;
  if (g_data_057aede7 == '\0') {
    uStackY_90 = 0x45191ae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStackY_90 = 0x45191ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStackY_90 = 0x45191c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    uStackY_90 = 0x45191d2;
    il2cpp_runtime_helper_023445d0(&"Text");
    uStackY_90 = 0x45191de;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStackY_90 = 0x45191ea;
    il2cpp_runtime_helper_023445d0(&"profile-emote-sticker-image-");
    uStackY_90 = 0x45191f6;
    il2cpp_runtime_helper_023445d0(&"profileEmoteSlotText");
    uStackY_90 = 0x4519202;
    il2cpp_runtime_helper_023445d0(&"profileGridItemThumbnail");
    uStackY_90 = 0x451920e;
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057aede7 = '\x01';
  }
  bVar1 = (__this->fields)._stickers;
  uStackY_90 = 0x451922d;
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
  uStackY_90 = 0x451923f;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uStackY_90 = 0x451924c;
  pGVar8 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  iVar7 = (int)pGVar8;
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((char)bVar1 == '\0') {
      (__this_00->fields).type = "Text";
      uStackY_90 = 0x45193b2;
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      (__this_00->fields).text = value;
      uStackY_90 = 0x45193c2;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).text,value);
      (__this_00->fields).style = "profileEmoteSlotText";
      uStackY_90 = 0x45193d9;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
      uStackY_90 = 0x45193e8;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      uStackY_90 = 0x45193f5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      local_30 = index;
      if (g_data_057aee97 == '\0') {
        uStackY_90 = 0x451940f;
        il2cpp_runtime_helper_023445d0(&"profile.emote.text.");
        g_data_057aee97 = '\x01';
      }
      uStackY_90 = 0x4519422;
      pSVar6 = System_Int32__ToString((int32_t)&local_30,(MethodInfo *)0x0);
      uStackY_90 = 0x4519436;
      pSVar4 = "profile.emote.text.";
      pSVar6 = System_String__Concat_3ae5ba0("profile.emote.text.",pSVar6,(MethodInfo *)0x0);
      iVar7 = (int)pSVar4;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).direction = pSVar6;
        uStackY_90 = 0x4519452;
        il2cpp_runtime_helper_022b4080(&pGVar5->fields,pSVar6);
        (__this_00->fields).contentLayout = pGVar5;
        uStackY_90 = 0x4519468;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).contentLayout,pGVar5);
        uStackY_90 = 0x4519477;
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        value_00 = 76.0;
        goto label_04519482;
      }
    }
    else {
      (__this_00->fields).type = "Image";
      uStackY_90 = 0x4519275;
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      uStackY_90 = 0x4519281;
      pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      uStackY_90 = 0x4519295;
      method_00 = (MethodInfo *)System_String__Concat_3ae5ba0("profile-emote-sticker-image-",pSVar4,(MethodInfo *)0x0);
      (__this_00->fields).id = (System_String_o *)method_00;
      uStackY_90 = 0x45192a5;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id);
      uStackY_90 = 0x45192ad;
      pSVar4 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method_00);
      (__this_00->fields).sprite = pSVar4;
      uStackY_90 = 0x45192bd;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).sprite,pSVar4);
      (__this_00->fields).style = "profileGridItemThumbnail";
      uStackY_90 = 0x45192d4;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
      uStackY_90 = 0x45192e3;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      uStackY_90 = 0x45192f0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      local_2c = local_34;
      if (g_data_057aee99 == '\0') {
        uStackY_90 = 0x451930d;
        il2cpp_runtime_helper_023445d0(&"profile.emote.sticker.");
        uStackY_90 = 0x4519319;
        il2cpp_runtime_helper_023445d0(&".sprite");
        g_data_057aee99 = '\x01';
      }
      uStackY_90 = 0x451932c;
      pSVar6 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      uStackY_90 = 0x451934a;
      pSVar4 = "profile.emote.sticker.";
      pSVar6 = System_String__Concat_3af7150("profile.emote.sticker.",pSVar6,".sprite",(MethodInfo *)0x0);
      iVar7 = (int)pSVar4;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).justify = pSVar6;
        uStackY_90 = 0x4519366;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify,pSVar6);
        (__this_00->fields).contentLayout = pGVar5;
        uStackY_90 = 0x451937c;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).contentLayout,pGVar5);
        uStackY_90 = 0x451938b;
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
        value_00 = 54.0;
label_04519482:
        uStackY_90 = 0x4519489;
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
        uStackY_90 = 0x4519502;
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        iVar7 = (int)__this_00 + 0xd8;
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        uStackY_90 = 0x451951b;
        il2cpp_runtime_helper_022b4080();
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar3->max_length != 0) {
            pGVar3->m_Items[0] = __this_00;
            uStackY_90 = 0x451953a;
            il2cpp_runtime_helper_022b4080(pGVar3->m_Items,__this_00);
            return pGVar3;
          }
          goto label_0451954f;
        }
      }
    }
  }
  uStackY_90 = 0x451954f;
  il2cpp_runtime_helper_022b2c90();
label_0451954f:
  uStackY_90 = 0x4519554;
  uVar2 = il2cpp_runtime_helper_022b2ca0();
  uStackY_90 = CONCAT44(iVar7,uVar2);
  if (g_data_057aee97 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.emote.text.");
    g_data_057aee97 = '\x01';
  }
  pSVar4 = System_Int32__ToString((int)&uStackY_90 + 4,(MethodInfo *)0x0);
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           System_String__Concat_3ae5ba0("profile.emote.text.",pSVar4,(MethodInfo *)0x0);
  return pGVar3;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text (int32_t index, const MethodInfo* method);
// 0x4518f80

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *pSVar3;
  int32_t index_00;
  Settings_BaseSetting_o *pSVar4;
  System_String_o *pSVar5;
  
  if (g_data_057aede8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aede8 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
  if (pSVar3 == (Settings_ListSetting_T__o *)0x0) {
label_0451904c:
    pSVar4 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar4 = Settings_ListSetting_object___GetItemAt(pSVar3,index,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto label_0451904c;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      return pSVar4[1].monitor;
    }
  }
  index_00 = (int32_t)pSVar4;
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aede9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aede9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
  if (pSVar3 != (Settings_ListSetting_T__o *)0x0) {
    pSVar4 = Settings_ListSetting_object___GetItemAt(pSVar3,index_00,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
         ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        return pSVar4[1].monitor;
      }
      goto label_04519131;
    }
  }
  pSVar4 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2c90();
label_04519131:
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b2fd0(pSVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Sticker
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker (int32_t index, const MethodInfo* method);
// 0x4519060

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *pSVar4;
  
  if (g_data_057aede9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aede9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
  if (__this != (Settings_ListSetting_T__o *)0x0) {
    pSVar3 = Settings_ListSetting_object___GetItemAt(__this,index,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        return pSVar3[1].monitor;
      }
      goto label_04519131;
    }
  }
  pSVar3 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2c90();
label_04519131:
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2fd0(pSVar3);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$StickerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite (System_String_o* value, const MethodInfo* method);
// 0x45195b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, const MethodInfo* method);
// 0x4519620

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  undefined8 *puVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t iVar2;
  void *extraout_RDX;
  System_String_c *__this_00;
  System_String_c *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_c *pSVar6;
  undefined4 uVar7;
  
  if (g_data_057aedea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__12_1);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"profile-emote-wheel-center-");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aedea = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  if (g_data_057aede5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"stickers");
    il2cpp_runtime_helper_023445d0(&"texts");
    g_data_057aede5 = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    puVar1 = &"texts";
  }
  else {
    puVar1 = &"stickers";
  }
  method_00 = (MethodInfo *)
              System_String__Concat_3ae5ba0("profile-emote-wheel-center-",(System_String_o *)*puVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
  pSVar6 = (System_String_c *)0x0;
  pSVar5 = "Absolute";
  __this_00 = "Center";
  pSVar4 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)"Center",(System_String_o *)"Center",
                      "Absolute",(System_String_o *)0x0,2.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,260.0,-214.0,
                      0.0,1.0,(MethodInfo *)0x0);
  iVar2 = (int32_t)pSVar5;
  if (wheel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (wheel,"clear",build,(System_String_o *)method_00,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,0,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,1,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,2,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,3,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,4,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,5,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,6,method_00);
    Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,7,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = __this_00;
  pSVar5 = pSVar4;
  if (g_data_057aedeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"STICKERS");
    il2cpp_runtime_helper_023445d0(&"Press any slot to edit");
    il2cpp_runtime_helper_023445d0(&"TEXT");
    il2cpp_runtime_helper_023445d0(&"profileEmoteWheelSubtext");
    pSVar5 = (System_String_o *)&"profileEmoteWheelTitle";
    il2cpp_runtime_helper_023445d0();
    g_data_057aedeb = '\x01';
  }
  if (__this_00 != (System_String_c *)0x0) {
    if ((char)(pSVar4->fields)._stringLength == '\0') {
      puVar1 = &"TEXT";
    }
    else {
      puVar1 = &"STICKERS";
    }
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)*puVar1,"profileEmoteWheelTitle",
               (System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,"Press any slot to edit","profileEmoteWheelSubtext",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  pSVar5->klass = pSVar3;
  il2cpp_runtime_helper_022b4080();
  pSVar5->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pSVar5->monitor,extraout_RDX);
  (pSVar5->fields)._stringLength = iVar2;
  pSVar5[1].klass = pSVar6;
  il2cpp_runtime_helper_022b4080(pSVar5 + 1,pSVar6);
  *(undefined4 *)&pSVar5[1].monitor = uVar7;
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* center, const MethodInfo* method);
// 0x4519880

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *center
               ,MethodInfo *method)

{
  undefined8 *puVar1;
  bool_conflict in_ECX;
  void *extraout_RDX;
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_c *pGVar2;
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_c *in_R8;
  undefined4 uVar4;
  
  pGVar2 = (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_c *)center;
  pGVar3 = __this;
  if (g_data_057aedeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"STICKERS");
    il2cpp_runtime_helper_023445d0(&"Press any slot to edit");
    il2cpp_runtime_helper_023445d0(&"TEXT");
    il2cpp_runtime_helper_023445d0(&"profileEmoteWheelSubtext");
    pGVar3 = (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *)&"profileEmoteWheelTitle";
    il2cpp_runtime_helper_023445d0();
    g_data_057aedeb = '\x01';
  }
  if (center != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((char)(__this->fields)._stickers == '\0') {
      puVar1 = &"TEXT";
    }
    else {
      puVar1 = &"STICKERS";
    }
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (center,(System_String_o *)*puVar1,"profileEmoteWheelTitle",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (center,"Press any slot to edit","profileEmoteWheelSubtext",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  pGVar3->klass = pGVar2;
  il2cpp_runtime_helper_022b4080();
  pGVar3->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pGVar3->monitor,extraout_RDX);
  (pGVar3->fields)._stickers = in_ECX;
  pGVar3[1].klass = in_R8;
  il2cpp_runtime_helper_022b4080(pGVar3 + 1,in_R8);
  *(undefined4 *)&pGVar3[1].monitor = uVar4;
  return;
}


