// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteRadialMenu.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, bool stickers, const MethodInfo* method);
// 0x181a291a0

void
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___ctor(Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, bool stickers, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._stickers = param_2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e10d50

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Build
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-wheel-");
    Il2CppMethodInitialized_184344c52 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_0,(MethodInfo *)0x0)
  ;
  if (Il2CppMethodInitialized_184344c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_184344c53 = '\x01';
  }
  pSVar1 = "texts";
  if ((__this->fields)._stickers != false) {
    pSVar1 = "stickers";
  }
  pSVar1 = System_String__Concat_1969e50("profile-emote-wheel-",pSVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(780.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$get_Suffix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, const MethodInfo* method);
// 0x181e11ee0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__get_Suffix
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_184344c53 = '\x01';
  }
  pSVar1 = "texts";
  if ((__this->fields)._stickers != false) {
    pSVar1 = "stickers";
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Slot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, int32_t index, const MethodInfo* method);
// 0x181e11450

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_String_o *value;
  System_String_o *text;
  int32_t index_00;
  Settings_BaseSetting_o *pSVar3;
  void **ppvVar4;
  System_String_o *str3;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_01;
  float fVar8;
  float fVar9;
  int32_t local_res18 [4];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184344c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-slot-");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.text.open");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItem");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.sticker.open");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344c54 = '\x01';
  }
  index_00 = local_res18[0];
  if ((__this->fields)._stickers == false) {
    if (Il2CppMethodInitialized_184344c56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_184344c56 = '\x01';
    }
    if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings == (Settings_EmoteSettings_o *)0x0)
    goto label_181e116ad;
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).TextEmotes;
    if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_181e1196b;
    pSVar3 = Settings_ListSetting_object___GetItemAt
                       ((Settings_ListSetting_T__o *)pSVar2,index_00,
                        (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_181e1196b;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar3,TypeInfo_Settings_StringSetting);
    }
    ppvVar4 = &(*(uint64_t *)((char *)pSVar3 + 0x20));
  }
  else {
    if (Il2CppMethodInitialized_184344c57 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_184344c57 = '\x01';
    }
    if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings == (Settings_EmoteSettings_o *)0x0) {
label_181e116ad:
      ppvVar4 = *(void ***)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).EmojiEmotes;
      if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_181e1196b;
      pSVar3 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)pSVar2,index_00,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_181e1196b;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3,TypeInfo_Settings_StringSetting);
      }
      ppvVar4 = &(*(uint64_t *)((char *)pSVar3 + 0x20));
    }
  }
  value = *ppvVar4;
  pSVar7 = "profile.emote.text.open";
  if ((__this->fields)._stickers != false) {
    pSVar7 = "profile.emote.sticker.open";
  }
  text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (Il2CppMethodInitialized_184344c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_184344c53 = '\x01';
  }
  pSVar5 = "texts";
  if ((__this->fields)._stickers != false) {
    pSVar5 = "stickers";
  }
  str3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_1969590
                     ("profile-emote-",pSVar5,"-slot-",str3,(MethodInfo *)0x0);
  if (wheel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (wheel,5,text,pSVar7,pSVar5,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).style = "profileGridItem";
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).style,"profileGridItem");
      pSVar7 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
      (pGVar6->fields).value = pSVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value,pSVar7);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(96.0,(MethodInfo *)0x0);
      fVar8 = (float)il2cpp_runtime_helper_1804f5fc0();
      fVar9 = (float)il2cpp_runtime_helper_1804f54c0();
      value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column","Center","Center",
                            "Absolute",(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            (fVar9 * 300.0 + 390.0) - 77.0,(fVar8 * 220.0 - 280.0) + 48.0,0.0,1.0,
                            (MethodInfo *)0x0);
      (pGVar6->fields).layout = value_00;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,value_00);
      value_01 = Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
                           (__this,local_res18[0],value,(MethodInfo *)0x0);
      (pGVar6->fields).children = value_01;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).children,value_01);
      return;
    }
  }
label_181e1196b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteX
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX (float width, float xFromCenter, const MethodInfo* method);
// 0x181e10d10

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteX(float width,float xFromCenter,MethodInfo *method)

{
  return (xFromCenter + 390.0) - width * 0.5;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$AbsoluteY
// il2cpp: float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY (float height, float yFromCenter, const MethodInfo* method);
// 0x181e10d30

float Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__AbsoluteY
                (float height,float yFromCenter,MethodInfo *method)

{
  return height * 0.5 + (yFromCenter - 280.0);
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$SlotChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x181e10f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1143f: jmp 0x181e1122d

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__SlotChildren
          (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,int32_t index,System_String_o *value,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  int32_t local_res8 [2];
  int32_t local_res10 [2];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184344c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-sticker-image-");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_184344c55 = '\x01';
  }
  if ((__this->fields)._stickers == false) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Text";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Text");
      (__this_00->fields).text = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,value);
      (__this_00->fields).style = "profileEmoteSlotText";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"profileEmoteSlotText");
      pGVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      local_res8[0] = local_res10[0];
      if (Il2CppMethodInitialized_184344d07 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.text.");
        Il2CppMethodInitialized_184344d07 = '\x01';
      }
      pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("profile.emote.text.",pSVar3,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar4->fields).text = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text,pSVar3);
        (__this_00->fields).bind = pGVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind,pGVar4);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(76.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (__this_00->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar7);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          iVar1 = (int)pGVar2->max_length;
          goto joined_r0x000181e1143d;
        }
      }
    }
  }
  else {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Image";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Image");
      pSVar3 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("profile-emote-sticker-image-",pSVar3,(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar3);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,(MethodInfo *)0x0);
      (__this_00->fields).sprite = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,pSVar3);
      (__this_00->fields).style = "profileGridItemThumbnail";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"profileGridItemThumbnail");
      pGVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      local_res8[0] = local_res10[0];
      if (Il2CppMethodInitialized_184344d09 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.sticker.");
        il2cpp_codegen_initialize_runtime_metadata(&".sprite");
        Il2CppMethodInitialized_184344d09 = '\x01';
      }
      pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70
                         ("profile.emote.sticker.",pSVar3,".sprite",(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar4->fields).sprite = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).sprite,pSVar3);
        (__this_00->fields).bind = pGVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind,pGVar4);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (__this_00->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar7);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          iVar1 = (int)pGVar2->max_length;
joined_r0x000181e1143d:
          if (iVar1 != 0) {
            pGVar2->m_Items[0] = __this_00;
            Il2CppCodeGenWriteBarrier(pGVar2->m_Items,__this_00);
            return pGVar2;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text (int32_t index, const MethodInfo* method);
// 0x181e11a90

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Text(int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_StringSetting__o *__this;
  Settings_BaseSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344c56 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings != (Settings_EmoteSettings_o *)0x0) {
    __this = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).TextEmotes;
    if (__this != (Settings_ListSetting_StringSetting__o *)0x0) {
      pSVar2 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)__this,index,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar2->klass->_2).typeHierarchyDepth) &&
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          return (*(uint64_t *)((char *)pSVar2 + 0x20));
        }
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2,TypeInfo_Settings_StringSetting);
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$Sticker
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker (int32_t index, const MethodInfo* method);
// 0x181e119a0

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Sticker(int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_StringSetting__o *__this;
  Settings_BaseSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344c57 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings != (Settings_EmoteSettings_o *)0x0) {
    __this = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).EmojiEmotes;
    if (__this != (Settings_ListSetting_StringSetting__o *)0x0) {
      pSVar2 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)__this,index,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar2->klass->_2).typeHierarchyDepth) &&
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          return (*(uint64_t *)((char *)pSVar2 + 0x20));
        }
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2,TypeInfo_Settings_StringSetting);
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$StickerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite (System_String_o* value, const MethodInfo* method);
// 0x181e11990

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__StickerSprite(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* wheel, const MethodInfo* method);
// 0x181e11b80

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_0
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *wheel,
               MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t index;
  
  if (Il2CppMethodInitialized_184344c58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-emote-wheel-center-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344c58 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_Build_b__12_1,(MethodInfo *)0x0)
  ;
  if (Il2CppMethodInitialized_184344c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"texts");
    Il2CppMethodInitialized_184344c53 = '\x01';
  }
  pSVar1 = "texts";
  if ((__this->fields)._stickers != false) {
    pSVar1 = "stickers";
  }
  pSVar1 = System_String__Concat_1969e50("profile-emote-wheel-center-",pSVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
  index = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center","Absolute",
                      (System_String_o *)0x0,2.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,260.0,-214.0,
                      0.0,1.0,(MethodInfo *)0x0);
  if (wheel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (wheel,"clear",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    do {
      Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu__Slot(__this,wheel,index,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < 8);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu$$<Build>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1 (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* center, const MethodInfo* method);
// 0x181e11dd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e11e66: mov rdx, qword ptr [rip + 0x22688bb]  ; "Common.Text"
// asm:   0x181e11e6d: mov r8, qword ptr [rip + 0x22b260c]  ; "TEXT"

void Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu___Build_b__12_1
               (Gisketch_Aottg2UI_Game_AottgEmoteRadialMenu_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *center
               ,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *fallback;
  
  if (Il2CppMethodInitialized_184344c59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.EmoteEditHint");
    il2cpp_codegen_initialize_runtime_metadata(&"STICKERS");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stickers");
    il2cpp_codegen_initialize_runtime_metadata(&"Press any slot to edit");
    il2cpp_codegen_initialize_runtime_metadata(&"TEXT");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Text");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelTitle");
    Il2CppMethodInitialized_184344c59 = '\x01';
  }
  key = "Common.Text";
  fallback = "TEXT";
  if ((__this->fields)._stickers != false) {
    key = "MainMenu.Profile.Stickers";
    fallback = "STICKERS";
  }
  if (center == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (center,key,fallback,"profileEmoteWheelTitle",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (center,"MainMenu.Profile.EmoteEditHint","Press any slot to edit","profileEmoteWheelSubtext",(System_String_o *)0x0,
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


