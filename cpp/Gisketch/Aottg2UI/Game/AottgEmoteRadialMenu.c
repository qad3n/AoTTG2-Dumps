// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteRadialMenu.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, bool stickers, const MethodInfo* method);
// 0x58f5c10

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,bool stickers,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._stickers = stickers;
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58f5c30

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o **ppSVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-wheel-");
    Il2CppMethodInitialized_075455c5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_0,
             (MethodInfo_4A81BE0 *)0x0);
  if (Il2CppMethodInitialized_075455c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_075455c6 = '\x01';
  }
  if ((__this->fields)._stickers == false) {
    ppSVar1 = &"texts";
  }
  else {
    ppSVar1 = &"stickers";
  }
  id = System_String__Concat_52f0320("profile-emote-wheel-",*ppSVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(780.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"default",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$get_Suffix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, const MethodInfo* method);
// 0x58f5df0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075455c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_075455c6 = '\x01';
  }
  if ((__this->fields)._stickers == false) {
    return "texts";
  }
  return "stickers";
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Slot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, int32_t index, const MethodInfo* method);
// 0x58f5e40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f5f1d: jmp 0x58f5f59

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               int32_t index,MethodInfo *method)

{
  System_String_o *actionId;
  char cVar1;
  System_String_o **ppSVar2;
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
  if (Il2CppMethodInitialized_075455c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-slot-");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.text.open");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItem");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.sticker.open");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_075455c7 = '\x01';
  }
  if ((__this->fields)._stickers == false) {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(index,pMVar8);
  }
  else {
    local_38 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(index,pMVar8);
  }
  cVar1 = (__this->fields)._stickers;
  if ((bool)cVar1 == false) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    actionId = "profile.emote.text.open";
  }
  else {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    actionId = "profile.emote.sticker.open";
  }
  if (Il2CppMethodInitialized_075455c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_075455c6 = '\x01';
    cVar1 = (__this->fields)._stickers;
  }
  if (cVar1 == '\0') {
    ppSVar2 = &"texts";
  }
  else {
    ppSVar2 = &"stickers";
  }
  pSVar3 = *ppSVar2;
  str3 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_5302810
                     ("profile-emote-",pSVar3,"-slot-",str3,(MethodInfo *)0x0);
  if ((wheel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
     (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (wheel,5,pSVar5,actionId,pSVar3,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0), pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0
     )) {
    ThrowNullReferenceException();
  }
  local_40 = ((float)index * -45.0 + 90.0) * 0.017453292;
  (pGVar4->fields).style = "profileGridItem";
  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
  pSVar5 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
  (pGVar4->fields).value = pSVar5;
  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(96.0,(MethodInfo *)0x0);
  fVar9 = cosf(local_40);
  local_3c = fVar9 * 300.0 + 390.0 + -77.0;
  fVar9 = sinf(local_40);
  pMVar8 = (MethodInfo *)"Absolute";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center","Absolute",
                      (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,local_3c,
                      fVar9 * 220.0 + -280.0 + 48.0,0.0,1.0,(MethodInfo *)0x0);
  (pGVar4->fields).layout = pGVar6;
  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
  pGVar7 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren(__this,local_44,local_38,pMVar8);
  (pGVar4->fields).children = pGVar7;
  Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteX
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX (float width, float xFromCenter, const MethodInfo* method);
// 0x58f6340

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX(float width,float xFromCenter,MethodInfo *method)

{
  return width * -0.5 + xFromCenter + 390.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteY
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY (float height, float yFromCenter, const MethodInfo* method);
// 0x58f6360

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY
                (float height,float yFromCenter,MethodInfo *method)

{
  return height * 0.5 + yFromCenter + -280.0;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$SlotChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x58f6380

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,int32_t index,System_String_o *value,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  float value_00;
  int32_t local_2c;
  
  local_2c = index;
  if (Il2CppMethodInitialized_075455c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-sticker-image-");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_075455c8 = '\x01';
  }
  bVar1 = (__this->fields)._stickers;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (bVar1 == false) {
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058f66ca;
    (__this_00->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).text = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (__this_00->fields).style = "profileEmoteSlotText";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    pGVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteText(index,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_058f66ca;
    (pGVar4->fields).text = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
    (__this_00->fields).bind = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
    value_00 = 76.0;
  }
  else {
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058f66ca;
    (__this_00->fields).type = "Image";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar3 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Concat_52f0320("profile-emote-sticker-image-",pSVar3,(MethodInfo *)0x0);
    (__this_00->fields).id = (System_String_o *)method_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method_00);
    (__this_00->fields).sprite = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
    (__this_00->fields).style = "profileGridItemThumbnail";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    pGVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteStickerSprite(local_2c,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_058f66ca;
    (pGVar4->fields).sprite = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).sprite);
    (__this_00->fields).bind = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
    value_00 = 54.0;
  }
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (__this_00->fields).layout = pGVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar2->m_Items[0] = __this_00;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
    return pGVar2;
  }
label_058f66ca:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text (int32_t index, const MethodInfo* method);
// 0x58f6180

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_EmoteSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this;
  Settings_BaseSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_075455c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075455c9 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
  if (pSVar2 == (Settings_EmoteSettings_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this = (pSVar2->fields).TextEmotes;
  if (__this != (Settings_ListSetting_StringSetting__o *)0x0) {
    pSVar3 = Settings_ListSetting_object___GetItemAt
                       ((Settings_ListSetting_T__o *)__this,index,
                        (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
      }
      return (*(uint64_t *)((char *)pSVar3 + 0x20));
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Sticker
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker (int32_t index, const MethodInfo* method);
// 0x58f6260

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_EmoteSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this;
  Settings_BaseSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_075455ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075455ca = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
  if (pSVar2 == (Settings_EmoteSettings_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this = (pSVar2->fields).EmojiEmotes;
  if (__this != (Settings_ListSetting_StringSetting__o *)0x0) {
    pSVar3 = Settings_ListSetting_object___GetItemAt
                       ((Settings_ListSetting_T__o *)__this,index,
                        (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
      }
      return (*(uint64_t *)((char *)pSVar3 + 0x20));
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$StickerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite (System_String_o* value, const MethodInfo* method);
// 0x58f66e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, const MethodInfo* method);
// 0x58f66f0

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o **ppSVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-wheel-center-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_075455cb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_1,
             (MethodInfo_4A81BE0 *)0x0);
  if (Il2CppMethodInitialized_075455c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_075455c6 = '\x01';
  }
  if ((__this->fields)._stickers == false) {
    ppSVar1 = &"texts";
  }
  else {
    ppSVar1 = &"stickers";
  }
  method_00 = (MethodInfo *)System_String__Concat_52f0320("profile-emote-wheel-center-",*ppSVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center","Absolute",
                      (System_String_o *)0x0,2.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,260.0,-214.0,
                      0.0,1.0,(MethodInfo *)0x0);
  if (wheel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (wheel,"clear",__this_00,(System_String_o *)method_00,layout,
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


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* center, const MethodInfo* method);
// 0x58f6950

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *center
               ,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075455cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.EmoteEditHint");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Text");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelTitle");
    Il2CppMethodInitialized_075455cc = '\x01';
  }
  if (center == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._stickers == false) {
    ppSVar1 = &"Common.Text";
  }
  else {
    ppSVar1 = &"MainMenu.Profile.Stickers";
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (center,*ppSVar1,"profileEmoteWheelTitle",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (center,"MainMenu.Profile.EmoteEditHint","profileEmoteWheelSubtext",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


