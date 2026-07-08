// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteRadialMenu.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, bool stickers, const MethodInfo* method);
// 0x41e7a10

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
// 0x41e7a30

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  undefined8 *puVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__12_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-emote-wheel-");
    DAT_05704f0c = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  if (DAT_05704f0d == '\0') {
    il2cpp_init_method_metadata(&"stickers");
    il2cpp_init_method_metadata(&"texts");
    DAT_05704f0d = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    puVar1 = &"texts";
  }
  else {
    puVar1 = &"stickers";
  }
  id = System_String__Concat("profile-emote-wheel-",(System_String_o *)*puVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(780.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",build,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$get_Suffix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, const MethodInfo* method);
// 0x41e7bf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,MethodInfo *method)

{
  if (DAT_05704f0d == '\0') {
    il2cpp_init_method_metadata(&"stickers");
    il2cpp_init_method_metadata(&"texts");
    DAT_05704f0d = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    return "texts";
  }
  return "stickers";
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Slot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, int32_t index, const MethodInfo* method);
// 0x41e7c40

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *wheel,int32_t index,MethodInfo *method)

{
  System_String_o *actionId;
  char cVar1;
  undefined8 *puVar2;
  System_String_o *str3;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  MethodInfo *pMVar8;
  float fVar9;
  int32_t local_44;
  float local_40;
  float local_3c;
  System_String_o *local_38;
  
  pMVar8 = (MethodInfo *)wheel;
  local_44 = index;
  if (DAT_05704f0e == '\0') {
    il2cpp_init_method_metadata(&"profile-emote-");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-slot-");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"profile.emote.text.open");
    il2cpp_init_method_metadata(&"profileGridItem");
    il2cpp_init_method_metadata(&"profile.emote.sticker.open");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05704f0e = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(index,pMVar8);
  }
  else {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(index,pMVar8);
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  cVar1 = (char)(__this->fields)._stickers;
  actionId = "profile.emote.sticker.open";
  if (cVar1 == '\0') {
    actionId = "profile.emote.text.open";
  }
  if (DAT_05704f0d == '\0') {
    il2cpp_init_method_metadata(&"stickers");
    il2cpp_init_method_metadata(&"texts");
    DAT_05704f0d = '\x01';
    cVar1 = (char)(__this->fields)._stickers;
  }
  if (cVar1 == '\0') {
    puVar2 = &"texts";
  }
  else {
    puVar2 = &"stickers";
  }
  pSVar3 = (System_String_o *)*puVar2;
  str3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat("profile-emote-",pSVar3,"-slot-",str3,(MethodInfo *)0x0);
  if ((wheel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (wheel,4,pSVar5,actionId,pSVar3,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)0x0,(MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    local_40 = ((float)index * -45.0 + 90.0) * 0.017453292;
    (pGVar4->fields).style = "profileGridItem";
    il2cpp_runtime_glue(&(pGVar4->fields).style);
    pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
    (pGVar4->fields).value = pSVar5;
    il2cpp_runtime_glue(&(pGVar4->fields).value,pSVar5);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(96.0,(MethodInfo *)0x0);
    fVar9 = cosf(local_40);
    local_3c = fVar9 * 300.0 + 390.0 + -77.0;
    fVar9 = sinf(local_40);
    pMVar8 = "Absolute";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",(System_String_o *)"Absolute",
                        (System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        local_3c,fVar9 * 220.0 + -280.0 + 48.0,0.0,1.0,(MethodInfo *)0x0);
    (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
    il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar6);
    pGVar7 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
                       (__this,local_44,local_38,pMVar8);
    (pGVar4->fields).deferredChildren = pGVar7;
    il2cpp_runtime_glue(&(pGVar4->fields).deferredChildren,pGVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteX
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX (float width, float xFromCenter, const MethodInfo* method);
// 0x41e8140

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX
                (float width,float xFromCenter,MethodInfo *method)

{
  return width * -0.5 + xFromCenter + 390.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteY
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY (float height, float yFromCenter, const MethodInfo* method);
// 0x41e8160

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY
                (float height,float yFromCenter,MethodInfo *method)

{
  return height * 0.5 + yFromCenter + -280.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$SlotChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x41e8180

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,int32_t index,
          System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  float value_00;
  int32_t local_2c;
  
  local_2c = index;
  if (DAT_05704f0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-emote-sticker-image-");
    il2cpp_init_method_metadata(&"profileEmoteSlotText");
    il2cpp_init_method_metadata(&"profileGridItemThumbnail");
    il2cpp_init_method_metadata(&"Image");
    DAT_05704f0f = '\x01';
  }
  bVar1 = (__this->fields)._stickers;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((char)bVar1 == '\0') {
      (__this_00->fields).type = "Text";
      il2cpp_runtime_glue(&__this_00->fields);
      (__this_00->fields).text = value;
      il2cpp_runtime_glue(&(__this_00->fields).text,value);
      (__this_00->fields).style = "profileEmoteSlotText";
      il2cpp_runtime_glue(&(__this_00->fields).style);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteText(index,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_041e84c4;
      (pGVar4->fields).direction = pSVar3;
      il2cpp_runtime_glue(&pGVar4->fields,pSVar3);
      (__this_00->fields).contentLayout = pGVar4;
      il2cpp_runtime_glue(&(__this_00->fields).contentLayout,pGVar4);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
      value_00 = 76.0;
    }
    else {
      (__this_00->fields).type = "Image";
      il2cpp_runtime_glue(&__this_00->fields);
      pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)System_String__Concat("profile-emote-sticker-image-",pSVar3,(MethodInfo *)0x0);
      (__this_00->fields).id = (System_String_o *)method_00;
      il2cpp_runtime_glue(&(__this_00->fields).id);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method_00);
      (__this_00->fields).sprite = pSVar3;
      il2cpp_runtime_glue(&(__this_00->fields).sprite,pSVar3);
      (__this_00->fields).style = "profileGridItemThumbnail";
      il2cpp_runtime_glue(&(__this_00->fields).style);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteStickerSprite
                         (local_2c,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_041e84c4;
      (pGVar4->fields).justify = pSVar3;
      il2cpp_runtime_glue(&(pGVar4->fields).justify,pSVar3);
      (__this_00->fields).contentLayout = pGVar4;
      il2cpp_runtime_glue(&(__this_00->fields).contentLayout,pGVar4);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
      value_00 = 54.0;
    }
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
    il2cpp_runtime_glue(&(__this_00->fields).search,pGVar4);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar2->max_length != 0) {
        pGVar2->m_Items[0] = __this_00;
        il2cpp_runtime_glue(pGVar2->m_Items,__this_00);
        return pGVar2;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_041e84c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text (int32_t index, const MethodInfo* method);
// 0x41e7f80

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this;
  Settings_BaseSetting_o *pSVar3;
  
  if (DAT_05704f10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704f10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 != 0) {
    __this = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      pSVar3 = Settings_ListSetting<object>__GetItemAt(__this,index,MethodInfo_BaseSetting_GetItemAt);
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          return pSVar3[1].monitor;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Sticker
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker (int32_t index, const MethodInfo* method);
// 0x41e8060

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this;
  Settings_BaseSetting_o *pSVar3;
  
  if (DAT_05704f11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704f11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 != 0) {
    __this = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      pSVar3 = Settings_ListSetting<object>__GetItemAt(__this,index,MethodInfo_BaseSetting_GetItemAt);
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          return pSVar3[1].monitor;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$StickerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite (System_String_o* value, const MethodInfo* method);
// 0x41e84d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite
          (System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, const MethodInfo* method);
// 0x41e84e0

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__<Build>b__12_0
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *wheel,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  undefined8 *puVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704f12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__12_1);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"profile-emote-wheel-center-");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05704f12 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  if (DAT_05704f0d == '\0') {
    il2cpp_init_method_metadata(&"stickers");
    il2cpp_init_method_metadata(&"texts");
    DAT_05704f0d = '\x01';
  }
  if ((char)(__this->fields)._stickers == '\0') {
    puVar1 = &"texts";
  }
  else {
    puVar1 = &"stickers";
  }
  method_00 = (MethodInfo *)
              System_String__Concat("profile-emote-wheel-center-",(System_String_o *)*puVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center","Absolute",(System_String_o *)0x0,2.0
                      ,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      260.0,-214.0,0.0,1.0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* center, const MethodInfo* method);
// 0x41e8740

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__<Build>b__12_1
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *center,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704f13 == '\0') {
    il2cpp_init_method_metadata(&"STICKERS");
    il2cpp_init_method_metadata(&"Press any slot to edit");
    il2cpp_init_method_metadata(&"TEXT");
    il2cpp_init_method_metadata(&"profileEmoteWheelSubtext");
    il2cpp_init_method_metadata(&"profileEmoteWheelTitle");
    DAT_05704f13 = '\x01';
  }
  if (center != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if ((char)(__this->fields)._stickers == '\0') {
      puVar1 = &"TEXT";
    }
    else {
      puVar1 = &"STICKERS";
    }
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (center,(System_String_o *)*puVar1,"profileEmoteWheelTitle",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (center,"Press any slot to edit","profileEmoteWheelSubtext",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


