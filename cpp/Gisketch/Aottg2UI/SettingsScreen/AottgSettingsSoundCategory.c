// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSoundCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x182398da0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"sound");
    Il2CppMethodInitialized_184347b36 = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups((MethodInfo *)0x0);
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual
            (content,&local_28,"sound",groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18239a7b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups (const MethodInfo* method);
// 0x182398f00
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182399416: mov r9, r12
// asm:   0x1823994a5: mov r9, r12
// asm:   0x182399520: mov r9, r12
// asm:   0x18239960c: mov r9, r12
// asm:   0x182399697: mov r9, r12
// asm:   0x182399719: mov r9, r12
// asm:   0x18239979b: mov r9, r12
// asm:   0x18239981d: mov r9, r12
// asm:   0x18239989f: mov r9, r12
// asm:   0x182399924: mov r9, r12
// asm:   0x1823999a9: mov r9, r12
// asm:   0x182399a2e: mov r9, r12
// asm:   0x182399f99: mov r14, r12
// asm:   0x18239a0bb: mov rdi, r13
// asm:   0x18239a158: mov r9, r13
// asm:   0x18239a1dd: mov r9, r13
// asm:   0x18239a2cd: mov r9, r13
// asm:   0x18239a35b: mov r9, r13
// asm:   0x18239a3e0: mov r9, r13

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar11;
  DG_Tweening_Core_DOGetter_Vector2__o *pDVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this;
  System_String_array *pSVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this_00;
  Settings_StringSetting_o *pSVar15;
  Settings_StringSetting_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_FloatSetting_o *setting;
  Settings_IntSetting_o *setting_00;
  
  if (Il2CppMethodInitialized_184347b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CurrentSong);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CustomPlaylistDirtyValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.currentSong");
    il2cpp_codegen_initialize_runtime_metadata(&"Menu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-hook-retract-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-crash-land-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteMinimized");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-hook-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Old blade sound");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-current-song");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-gas-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-legacy-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Input volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-nape-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-input");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatInput");
    il2cpp_codegen_initialize_runtime_metadata(&"Crash land");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatAudioVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-titan-grab-music");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseSoundEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook retract");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-music-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-hook-impact-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"PushToTalk");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanGrabMusic");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-mute-minimized");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume-music");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentSong");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-mic-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"Force playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook impact");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-titan-vocal-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatDevice");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan vocals");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan grab music");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-device");
    il2cpp_codegen_initialize_runtime_metadata(&"Horse sound effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel in");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLandEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatMicVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"Music Playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Ambient");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-force-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-reel-in-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Old nape sound");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-reel-out-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice chat device");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice chat");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-audio-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"Output volume");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute on minimize");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoDetect");
    il2cpp_codegen_initialize_runtime_metadata(&"Current song");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-blade-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Peaceful");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-custom-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcePlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanVocalEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Battle");
    il2cpp_codegen_initialize_runtime_metadata(&"Old hook sound");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel out");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-horse-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume-master");
    Il2CppMethodInitialized_184347b37 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  pGVar7 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,5);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
  pSVar13 = "settings-sound-volume";
  pSVar3 = "Volume";
  setting = (Settings_FloatSetting_o *)0x0;
  pSVar17 = setting;
  if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
    pSVar17 = (pSVar1->fields).Volume;
  }
  pIVar9 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-sound-volume-master","Sound","Volume",pSVar17,
                      "Volume",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_18239a4b0;
  if ((pIVar9 != (Il2CppObject *)0x0) &&
     (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
     pIVar10 == (Il2CppObject *)0x0)) {
    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
  }
  if ((int)pGVar8->max_length != 0) {
    pGVar8->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
    Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
    pSVar17 = setting;
    if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
      pSVar17 = (pSVar1->fields).Music;
    }
    pIVar9 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-sound-volume-music","Sound","Music",pSVar17,
                        "Music",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
       pIVar10 == (Il2CppObject *)0x0)) {
      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    if (1 < (uint)pGVar8->max_length) {
      pGVar8->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
      Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9);
      pSVar17 = setting;
      if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
        pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).MuteMinimized;
      }
      pIVar9 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         ("settings-sound-mute-minimized","Sound","MuteMinimized",
                          (Settings_BoolSetting_o *)pSVar17,"Mute on minimize",(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          (MethodInfo *)0x0);
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if (2 < (uint)pGVar8->max_length) {
        pGVar8->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9);
        pGVar11 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                  (pGVar11,pSVar13,pSVar3,pGVar8,(MethodInfo *)0x0);
        if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_18239a4b0:
          ThrowNullReferenceException();
        }
        if ((int)pGVar7->max_length != 0) {
          pGVar7->m_Items[0] = pGVar11;
          Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar11);
          pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9);
          pSVar13 = "settings-sound-effects";
          pSVar3 = "Effects";
          pSVar17 = setting;
          if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
            pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).TitanGrabMusic;
          }
          pIVar9 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-sound-titan-grab-music","Sound","TitanGrabMusic",
                              (Settings_BoolSetting_o *)pSVar17,"Titan grab music",(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                              (MethodInfo *)0x0);
          if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_18239a4b0;
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)pGVar8->max_length != 0) {
            pGVar8->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
            Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
            pSVar17 = setting;
            if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
              pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).TitanVocalEffect;
            }
            pIVar9 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-sound-titan-vocal-effect","Sound","TitanVocalEffect",
                                (Settings_BoolSetting_o *)pSVar17,"Titan vocals",(System_String_o *)0x0
                                ,(System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                (MethodInfo *)0x0);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if (1 < (uint)pGVar8->max_length) {
              pGVar8->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
              Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9);
              pSVar17 = setting;
              if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).GasEffect;
              }
              pIVar9 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-sound-gas-effect","Sound","GasEffect",
                                  (Settings_BoolSetting_o *)pSVar17,"Gas",
                                  (System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                 pIVar10 == (Il2CppObject *)0x0)) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if (2 < (uint)pGVar8->max_length) {
                pGVar8->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9);
                pSVar17 = setting;
                if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                  pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).ReelInEffect;
                }
                pIVar9 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                   ("settings-sound-reel-in-effect","Sound","ReelInEffect",
                                    (Settings_BoolSetting_o *)pSVar17,"Reel in",
                                    (System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                if ((pIVar9 != (Il2CppObject *)0x0) &&
                   (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                   pIVar10 == (Il2CppObject *)0x0)) {
                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                }
                if (3 < (uint)pGVar8->max_length) {
                  pGVar8->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                  Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9);
                  pSVar17 = setting;
                  if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                    pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).ReelOutEffect;
                  }
                  pIVar9 = (Il2CppObject *)
                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                     ("settings-sound-reel-out-effect","Sound","ReelOutEffect",
                                      (Settings_BoolSetting_o *)pSVar17,"Reel out",
                                      (System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                  if ((pIVar9 != (Il2CppObject *)0x0) &&
                     (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                     pIVar10 == (Il2CppObject *)0x0)) {
                    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                  }
                  if (4 < (uint)pGVar8->max_length) {
                    pGVar8->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                    Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9);
                    pSVar17 = setting;
                    if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                      pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).HookRetractEffect;
                    }
                    pIVar9 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                       ("settings-sound-hook-retract-effect","Sound","HookRetractEffect",
                                        (Settings_BoolSetting_o *)pSVar17,"Hook retract",
                                        (System_String_o *)0x0,(System_String_o *)0x0,
                                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                       (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                       pIVar10 == (Il2CppObject *)0x0)) {
                      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                    }
                    if (5 < (uint)pGVar8->max_length) {
                      pGVar8->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                      Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,pIVar9);
                      pSVar17 = setting;
                      if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                        pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).HookImpactEffect;
                      }
                      pIVar9 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                         ("settings-sound-hook-impact-effect","Sound","HookImpactEffect",
                                          (Settings_BoolSetting_o *)pSVar17,"Hook impact",
                                          (System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                         pIVar10 == (Il2CppObject *)0x0)) {
                        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                      }
                      if (6 < (uint)pGVar8->max_length) {
                        pGVar8->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9);
                        pSVar17 = setting;
                        if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                          pSVar17 = (Settings_FloatSetting_o *)(pSVar1->fields).CrashLandEffect;
                        }
                        pIVar9 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                           ("settings-sound-crash-land-effect","Sound","CrashLandEffect",
                                            (Settings_BoolSetting_o *)pSVar17,"Crash land",
                                            (System_String_o *)0x0,(System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                           (pIVar10 = il2cpp_vm_Object_IsInst
                                                (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                           pIVar10 == (Il2CppObject *)0x0)) {
                          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                        }
                        if (7 < (uint)pGVar8->max_length) {
                          pGVar8->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                          Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 7,pIVar9);
                          if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                            setting = (Settings_FloatSetting_o *)(pSVar1->fields).HorseSoundEffect;
                          }
                          pIVar9 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                             ("settings-sound-horse-effect","Sound",
                                              "HorseSoundEffect",(Settings_BoolSetting_o *)setting,
                                              "Horse sound effects",(System_String_o *)0x0,
                                              (System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0)
                          ;
                          if ((pIVar9 != (Il2CppObject *)0x0) &&
                             (pIVar10 = il2cpp_vm_Object_IsInst
                                                  (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                             pIVar10 == (Il2CppObject *)0x0)) {
                            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                          }
                          if (8 < (uint)pGVar8->max_length) {
                            pGVar8->m_Items[8] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                            Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 8,pIVar9);
                            pGVar11 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)
                                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup)
                            ;
                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                      (pGVar11,pSVar13,pSVar3,pGVar8,(MethodInfo *)0x0);
                            if (pGVar11 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0)
                            goto label_18239a4b0;
                            pGVar11 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout
                                                (pGVar11,(MethodInfo *)0x0);
                            if (1 < (uint)pGVar7->max_length) {
                              pGVar7->m_Items[1] = pGVar11;
                              Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar11);
                              pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
                              pDVar12 = (DG_Tweening_Core_DOGetter_Vector2__o *)
                                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
                              System_Func_object____ctor
                                        (pDVar12,(Il2CppObject *)0x0,
                                         (intptr_t)
                                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CurrentSong
                                         ,(MethodInfo_1387740 *)0x0);
                              pSVar2 = "settings.sound.currentSong";
                              pSVar6 = "settings-sound-current-song";
                              pSVar5 = "Sound";
                              pSVar4 = "None";
                              pSVar13 = "CurrentSong";
                              pSVar3 = "Current song";
                              if (Il2CppMethodInitialized_184347b04 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow);
                                Il2CppMethodInitialized_184347b04 = '\x01';
                              }
                              if (Il2CppMethodInitialized_184347b0d == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
                                il2cpp_codegen_initialize_runtime_metadata(&".");
                                Il2CppMethodInitialized_184347b0d = '\x01';
                              }
                              pSVar13 = System_String__Concat_1969590
                                                  ("SettingsPopup.",pSVar5,".",pSVar13,
                                                   (MethodInfo *)0x0);
                              __this = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow
                                                 );
                              Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
                                        (__this,pSVar6,pSVar3,(System_Func_string__o *)pDVar12,
                                         (System_String_o *)0x0,pSVar4,pSVar13,(System_String_o *)0x0,pSVar2,
                                         (System_Func_string__o *)0x0,(MethodInfo *)0x0);
                              if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                              goto label_18239a4b0;
                              if ((__this != (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *)0x0) &&
                                 (pIVar9 = il2cpp_vm_Object_IsInst
                                                     ((Il2CppObject *)__this,
                                                      (((pGVar8->obj).klass)->_1).element_class),
                                 pIVar9 == (Il2CppObject *)0x0)) {
                                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                              }
                              if ((int)pGVar8->max_length != 0) {
                                pGVar8->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
                                Il2CppCodeGenWriteBarrier(pGVar8->m_Items,__this);
                                pSVar6 = "ForcePlaylist";
                                pSVar5 = "settings-sound-music-playlist";
                                pSVar4 = "settings-sound-force-playlist";
                                pSVar13 = "Sound";
                                pSVar3 = "Music Playlist";
                                if (pSVar1 == (Settings_SoundSettings_o *)0x0) {
                                  pSVar15 = (Settings_StringSetting_o *)0x0;
                                }
                                else {
                                  pSVar15 = (pSVar1->fields).ForcePlaylist;
                                }
                                pSVar14 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
                                pSVar2 = "Default";
                                if (pSVar14 == (System_String_array *)0x0) goto label_18239a4b0;
                                if ((int)pSVar14->max_length != 0) {
                                  pSVar14->m_Items[0] = "Default";
                                  Il2CppCodeGenWriteBarrier(pSVar14->m_Items,pSVar2);
                                  pSVar2 = "None";
                                  if (1 < (uint)pSVar14->max_length) {
                                    pSVar14->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 1,pSVar2);
                                    pSVar2 = "Custom";
                                    if (2 < (uint)pSVar14->max_length) {
                                      pSVar14->m_Items[2] = "Custom";
                                      Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 2,pSVar2);
                                      pSVar2 = "Menu";
                                      if (3 < (uint)pSVar14->max_length) {
                                        pSVar14->m_Items[3] = "Menu";
                                        Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 3,pSVar2);
                                        pSVar2 = "Ambient";
                                        if (4 < (uint)pSVar14->max_length) {
                                          pSVar14->m_Items[4] = "Ambient";
                                          Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 4,pSVar2);
                                          pSVar2 = "Peaceful";
                                          if (5 < (uint)pSVar14->max_length) {
                                            pSVar14->m_Items[5] = "Peaceful";
                                            Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 5,pSVar2);
                                            pSVar2 = "Battle";
                                            if (6 < (uint)pSVar14->max_length) {
                                              pSVar14->m_Items[6] = "Battle";
                                              Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 6,pSVar2);
                                              pSVar2 = "Racing";
                                              if (7 < (uint)pSVar14->max_length) {
                                                pSVar14->m_Items[7] = "Racing";
                                                Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 7,pSVar2);
                                                pIVar9 = (Il2CppObject *)
                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_2391710
                                                                 (pSVar4,pSVar13,pSVar6,pSVar15,
                                                                  "Force playlist",pSVar14,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                   (pIVar10 = il2cpp_vm_Object_IsInst
                                                                        (pIVar9,(((pGVar8->obj).klass)->_1).
                                                                                element_class),
                                                   pIVar10 == (Il2CppObject *)0x0)) {
                                                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                                }
                                                if (1 < (uint)pGVar8->max_length) {
                                                  pGVar8->m_Items[1] =
                                                       (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                                  Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9);
                                                  pSVar4 = "Sound";
                                                  pSVar13 = "CustomPlaylist";
                                                  if (Il2CppMethodInitialized_184347b0d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup.");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&".");
                                                    Il2CppMethodInitialized_184347b0d = '\x01';
                                                  }
                                                  setting_00 = (Settings_IntSetting_o *)0x0;
                                                  pSVar13 = System_String__Concat_1969590
                                                                      ("SettingsPopup.",pSVar4,
                                                                       ".",pSVar13,
                                                                       (MethodInfo *)0x0);
                                                  pDVar12 = (DG_Tweening_Core_DOGetter_Vector2__o *)
                                                            il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_System_Func_string);
                                                  System_Func_object____ctor
                                                            (pDVar12,(Il2CppObject *)0x0,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CustomPlaylistDirtyValue
                                                       ,(MethodInfo_1387740 *)0x0);
                                                  __this_00 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow
                                                       );
                                                  Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor
                                                            ((Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o
                                                              *)__this_00,"settings-sound-custom-playlist",
                                                             "Custom playlist",pSVar13,
                                                             (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                             "settings.sound.customPlaylist",(System_String_o *)pDVar12,
                                                             (MethodInfo *)0x0);
                                                  if ((__this_00 !=
                                                       (
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o
                                                       *)0x0) &&
                                                     (pIVar9 = il2cpp_vm_Object_IsInst
                                                                         ((Il2CppObject *)__this_00,
                                                                          (((pGVar8->obj).klass)->_1).
                                                                          element_class),
                                                     pIVar9 == (Il2CppObject *)0x0)) {
                                                    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                       ();
                                                    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                                  }
                                                  if (2 < (uint)pGVar8->max_length) {
                                                    pGVar8->m_Items[2] =
                                                         (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
                                                    Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,__this_00);
                                                    pGVar11 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                              (pGVar11,pSVar5,pSVar3,pGVar8,(MethodInfo *)0x0)
                                                    ;
                                                    if (2 < (uint)pGVar7->max_length) {
                                                      pGVar7->m_Items[2] = pGVar11;
                                                      Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 2,pGVar11);
                                                      pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                               SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,4)
                                                      ;
                                                      pSVar6 = "settings-sound-voice-chat-input";
                                                      pSVar5 = "settings-sound-voice-chat";
                                                      pSVar4 = "VoiceChatInput";
                                                      pSVar13 = "Voice Chat";
                                                      pSVar3 = "Sound";
                                                      if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                        setting_00 = (pSVar1->fields).VoiceChatInput;
                                                      }
                                                      pSVar14 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,3);
                                                      pSVar2 = "PushToTalk";
                                                      if (pSVar14 == (System_String_array *)0x0)
                                                      goto label_18239a4b0;
                                                      if ((int)pSVar14->max_length != 0) {
                                                        pSVar14->m_Items[0] = "PushToTalk";
                                                        Il2CppCodeGenWriteBarrier(pSVar14->m_Items,pSVar2);
                                                        pSVar2 = "AutoDetect";
                                                        if (1 < (uint)pSVar14->max_length) {
                                                          pSVar14->m_Items[1] = "AutoDetect";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar14->m_Items + 1,pSVar2);
                                                          pSVar2 = "Off";
                                                          if (2 < (uint)pSVar14->max_length) {
                                                            pSVar14->m_Items[2] = "Off";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar14->m_Items + 2,pSVar2);
                                                            pIVar9 = (Il2CppObject *)
                                                                                                                                          
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar3,pSVar4,setting_00,
                                                                  "Voice chat",pSVar14,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239a4b0;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         pSVar6 = "settings-sound-voice-chat-device";
                                                         pSVar4 = "VoiceChatDevice";
                                                         pSVar3 = "Sound";
                                                         pSVar15 = (Settings_StringSetting_o *)0x0;
                                                         pSVar16 = pSVar15;
                                                         if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                           pSVar16 = (pSVar1->fields).VoiceChatDevice;
                                                         }
                                                         pSVar14 = 
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones
                                                                 ((MethodInfo *)0x0);
                                                       pIVar9 = (Il2CppObject *)
                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_2391710
                                                                 (pSVar6,pSVar3,pSVar4,pSVar16,
                                                                  "Voice chat device",pSVar14,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         pSVar16 = pSVar15;
                                                         if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (pSVar1->fields).VoiceChatMicVolume;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                                 ("settings-sound-voice-chat-mic-volume","Sound",
                                                                  "VoiceChatMicVolume",
                                                                  (Settings_FloatSetting_o *)pSVar16,
                                                                  "Input volume",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         pSVar16 = pSVar15;
                                                         if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (pSVar1->fields).VoiceChatAudioVolume;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                                 ("settings-sound-voice-chat-audio-volume","Sound",
                                                                  "VoiceChatAudioVolume",
                                                                  (Settings_FloatSetting_o *)pSVar16,
                                                                  "Output volume",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar5,pSVar13,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (3 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[3] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 3,pGVar11);
                                                         pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array
                                                                   *)SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3)
                                                       ;
                                                       pSVar13 = "Legacy Effects";
                                                       pSVar3 = "settings-sound-legacy-effects";
                                                       pSVar16 = pSVar15;
                                                       if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                         pSVar16 = (Settings_StringSetting_o *)
                                                                   (pSVar1->fields).OldHookEffect;
                                                       }
                                                       pIVar9 = (Il2CppObject *)
                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-sound-old-hook-effect","Sound",
                                                                  "OldHookEffect",
                                                                  (Settings_BoolSetting_o *)pSVar16,
                                                                  "Old hook sound",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239a4b0;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         pSVar16 = pSVar15;
                                                         if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (pSVar1->fields).OldBladeEffect;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-sound-old-blade-effect","Sound",
                                                                  "OldBladeEffect",
                                                                  (Settings_BoolSetting_o *)pSVar16,
                                                                  "Old blade sound",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         if (pSVar1 != (Settings_SoundSettings_o *)0x0) {
                                                           pSVar15 = (Settings_StringSetting_o *)
                                                                     (pSVar1->fields).OldNapeEffect;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-sound-old-nape-effect","Sound",
                                                                  "OldNapeEffect",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Old nape sound",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar3,pSVar13,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (pGVar11 ==
                                                           (
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
                                                       )0x0) goto label_18239a4b0;
                                                       pGVar11 = 
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout
                                                                 (pGVar11,(MethodInfo *)0x0);
                                                       if (4 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[4] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 4,pGVar11);
                                                         return pGVar7;
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
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CurrentSong
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CurrentSong (const MethodInfo* method);
// 0x182398e10
// eh: try 0x182398e18..0x182398e27 -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182398e20: lea rcx, [rip + 0x1d26d31]  ; TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale
// asm:   0x182398e27: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182398e2c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182398e33: jne 0x182398e3d
// asm:   0x182398e35: mov rcx, rax
// asm:   0x182398e38: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182398e3d: lea rcx, [rip + 0x1d04b84]  ; "None"
// asm:   0x182398e44: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182398e49: mov rbx, rax
// asm:   0x182398e4c: lea rcx, [rip + 0x1ce0915]  ; "Common.None"
// asm:   0x182398e53: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182398e58: mov rcx, rax
// asm:   0x182398e5b: xor r8d, r8d
// asm:   0x182398e5e: mov rdx, rbx
// asm:   0x182398e61: call 0x1818c0020  ; Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text()
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

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CurrentSong(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistText (const MethodInfo* method);
// 0x182398ef0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistText(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistDirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistDirtyValue (const MethodInfo* method);
// 0x182398e70

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistDirtyValue(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347b38 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).CustomPlaylist;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SafeMicrophones
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones (const MethodInfo* method);
// 0x18239a620
// eh: try 0x18239a676..0x18239a7a3 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239a703: nop 
// asm:   0x18239a706: lea rcx, [rip + 0x1d138d3]  ; TypeInfo_string_array
// asm:   0x18239a70d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18239a712: mov rcx, rax
// asm:   0x18239a715: mov edx, 1
// asm:   0x18239a71a: call 0x180416200  ; SZArrayNew()
// asm:   0x18239a71f: mov rdi, rax
// asm:   0x18239a722: lea rcx, [rip + 0x1d2542f]  ; TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale
// asm:   0x18239a729: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18239a72e: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18239a735: jne 0x18239a73f
// asm:   0x18239a737: mov rcx, rax
// asm:   0x18239a73a: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18239a73f: lea rcx, [rip + 0x1d03282]  ; "None"
// asm:   0x18239a746: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18239a74b: mov rbx, rax
// asm:   0x18239a74e: lea rcx, [rip + 0x1cdf013]  ; "Common.None"
// asm:   0x18239a755: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18239a75a: mov rcx, rax
// asm:   0x18239a75d: xor r8d, r8d
// asm:   0x18239a760: mov rdx, rbx
// asm:   0x18239a763: call 0x1818c0020  ; Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text()
// asm:   0x18239a768: test rdi, rdi
// asm:   0x18239a76b: je 0x18239a791
// asm:   0x18239a76d: cmp dword ptr [rdi + 0x18], 0
// asm:   0x18239a771: jbe 0x18239a7a3
// asm:   0x18239a773: mov qword ptr [rdi + 0x20], rax
// asm:   0x18239a777: lea rcx, [rdi + 0x20]
// asm:   0x18239a77b: mov rdx, rax
// asm:   0x18239a77e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18239a791: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18239a7a3: call 0x180417110  ; ThrowIndexOutOfRangeException()
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

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_184347b39 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pSVar1 = ApplicationManagers_VoiceChatManager__get_MicrophoneDevices((MethodInfo *)0x0);
  if ((pSVar1 == (System_String_array *)0x0) || (pSVar1->max_length == 0)) {
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    value = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                      ("Common.None","None",(MethodInfo *)0x0);
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = value;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,value);
  }
  return pSVar1;
}


