// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSoundCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e51960

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (g_data_07548656 == '\0') {
    method_00 = &"sound";
    il2cpp_codegen_initialize_runtime_metadata(&"sound");
    g_data_07548656 = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups((MethodInfo *)method_00);
  categoryId = "sound";
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e52bc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups (const MethodInfo* method);
// 0x5e51a30

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Groups(MethodInfo *method)

{
  uint uVar1;
  Settings_SoundSettings_o *settings;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  System_String_o *pSVar2;
  System_String_o *id;
  System_String_o *id_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar8;
  System_Func_string__o *pSVar9;
  System_String_o *pSVar10;
  Settings_StringSetting_o *setting;
  System_String_array *values;
  Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this_00;
  Settings_FloatSetting_o *pSVar11;
  Settings_BoolSetting_o *pSVar12;
  MethodInfo *pMVar13;
  Settings_IntSetting_o *setting_00;
  MethodInfo *method_00;
  ulong uVar14;
  MethodInfo *in_stack_ffffffffffffffa8;
  MethodInfo *pMVar15;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_07548657 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.currentSong");
    il2cpp_codegen_initialize_runtime_metadata(&"Menu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-hook-retract-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-crash-land-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteMinimized");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-hook-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-current-song");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-gas-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-legacy-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-nape-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-input");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatInput");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatAudioVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-titan-grab-music");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseSoundEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-music-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-hook-impact-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanGrabMusic");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-mute-minimized");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume-music");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentSong");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-mic-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-titan-vocal-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLandEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatMicVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Ambient");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-force-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-reel-in-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-reel-out-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-audio-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-old-blade-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Peaceful");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-custom-playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcePlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanVocalEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Battle");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-horse-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-volume-master");
    Il2CppMethodInitialized_07548657 = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,5);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
  pSVar10 = "settings-sound-volume";
  if (settings == (Settings_SoundSettings_o *)0x0) {
    pSVar11 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar11 = (settings->fields).Volume;
  }
  pIVar5 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-sound-volume-master","Sound","Volume",pSVar11,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffa8);
  if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e52ba4;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) {
label_05e52bae:
    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
  }
  if ((int)pGVar4->max_length != 0) {
    pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
    Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
    if (settings == (Settings_SoundSettings_o *)0x0) {
      pSVar11 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar11 = (settings->fields).Music;
    }
    pIVar5 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-sound-volume-music","Sound","Music",pSVar11,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffa8);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
       pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
    if ((pGVar4->max_length & 0xfffffffe) != 0) {
      pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
      if (settings == (Settings_SoundSettings_o *)0x0) {
        pMVar15 = (MethodInfo *)0x0;
      }
      else {
        pMVar15 = (MethodInfo *)(settings->fields).MuteMinimized;
      }
      pIVar5 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         ("settings-sound-mute-minimized","Sound","MuteMinimized",
                          (Settings_BoolSetting_o *)pMVar15,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffa8);
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
      if (2 < (uint)pGVar4->max_length) {
        pGVar4->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
        Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
        pGVar7 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar7,pSVar10,pGVar4,pMVar15);
        if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e52ba4:
          ThrowNullReferenceException();
        }
        if ((int)pGVar3->max_length != 0) {
          pGVar3->m_Items[0] = pGVar7;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
          pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9);
          pSVar10 = "settings-sound-effects";
          if (settings == (Settings_SoundSettings_o *)0x0) {
            pSVar12 = (Settings_BoolSetting_o *)0x0;
          }
          else {
            pSVar12 = (settings->fields).TitanGrabMusic;
          }
          pIVar5 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-sound-titan-grab-music","Sound","TitanGrabMusic",pSVar12,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                              in_stack_ffffffffffffffa8);
          if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e52ba4;
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
          if ((int)pGVar4->max_length != 0) {
            pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
            Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
            if (settings == (Settings_SoundSettings_o *)0x0) {
              pSVar12 = (Settings_BoolSetting_o *)0x0;
            }
            else {
              pSVar12 = (settings->fields).TitanVocalEffect;
            }
            pIVar5 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-sound-titan-vocal-effect","Sound","TitanVocalEffect",pSVar12,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffa8);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
            if ((pGVar4->max_length & 0xfffffffe) != 0) {
              pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
              Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
              if (settings == (Settings_SoundSettings_o *)0x0) {
                pSVar12 = (Settings_BoolSetting_o *)0x0;
              }
              else {
                pSVar12 = (settings->fields).GasEffect;
              }
              pIVar5 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-sound-gas-effect","Sound","GasEffect",pSVar12,
                                  (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                  in_stack_ffffffffffffffa8);
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                 pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
              if (2 < (uint)pGVar4->max_length) {
                pGVar4->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
                if (settings == (Settings_SoundSettings_o *)0x0) {
                  pSVar12 = (Settings_BoolSetting_o *)0x0;
                }
                else {
                  pSVar12 = (settings->fields).ReelInEffect;
                }
                pIVar5 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                   ("settings-sound-reel-in-effect","Sound","ReelInEffect",pSVar12,
                                    (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                    in_stack_ffffffffffffffa8);
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                if ((pGVar4->max_length & 0xfffffffc) != 0) {
                  pGVar4->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 3);
                  if (settings == (Settings_SoundSettings_o *)0x0) {
                    pSVar12 = (Settings_BoolSetting_o *)0x0;
                  }
                  else {
                    pSVar12 = (settings->fields).ReelOutEffect;
                  }
                  pIVar5 = (Il2CppObject *)
                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                     ("settings-sound-reel-out-effect","Sound","ReelOutEffect",
                                      pSVar12,(System_String_o *)0x0,
                                      (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffa8)
                  ;
                  if ((pIVar5 != (Il2CppObject *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                  if (4 < (uint)pGVar4->max_length) {
                    pGVar4->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                    Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 4);
                    if (settings == (Settings_SoundSettings_o *)0x0) {
                      pSVar12 = (Settings_BoolSetting_o *)0x0;
                    }
                    else {
                      pSVar12 = (settings->fields).HookRetractEffect;
                    }
                    pIVar5 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                       ("settings-sound-hook-retract-effect","Sound","HookRetractEffect",
                                        pSVar12,(System_String_o *)0x0,
                                        (System_Action_GisketchActionContext__o *)0x0,
                                        in_stack_ffffffffffffffa8);
                    if ((pIVar5 != (Il2CppObject *)0x0) &&
                       (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                       pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                    if (5 < (uint)pGVar4->max_length) {
                      pGVar4->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 5);
                      if (settings == (Settings_SoundSettings_o *)0x0) {
                        pSVar12 = (Settings_BoolSetting_o *)0x0;
                      }
                      else {
                        pSVar12 = (settings->fields).HookImpactEffect;
                      }
                      pIVar5 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                         ("settings-sound-hook-impact-effect","Sound","HookImpactEffect",
                                          pSVar12,(System_String_o *)0x0,
                                          (System_Action_GisketchActionContext__o *)0x0,
                                          in_stack_ffffffffffffffa8);
                      if ((pIVar5 != (Il2CppObject *)0x0) &&
                         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                         pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                      if (6 < (uint)pGVar4->max_length) {
                        pGVar4->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                        Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 6);
                        if (settings == (Settings_SoundSettings_o *)0x0) {
                          pSVar12 = (Settings_BoolSetting_o *)0x0;
                        }
                        else {
                          pSVar12 = (settings->fields).CrashLandEffect;
                        }
                        pIVar5 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                           ("settings-sound-crash-land-effect","Sound","CrashLandEffect",
                                            pSVar12,(System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,
                                            in_stack_ffffffffffffffa8);
                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pGVar4->obj).klass)->_1).element_class)
                           , pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                        if ((pGVar4->max_length & 0xfffffff8) != 0) {
                          pGVar4->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                          Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 7);
                          if (settings == (Settings_SoundSettings_o *)0x0) {
                            pMVar15 = (MethodInfo *)0x0;
                          }
                          else {
                            pMVar15 = (MethodInfo *)(settings->fields).HorseSoundEffect;
                          }
                          pIVar5 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                             ("settings-sound-horse-effect","Sound",
                                              "HorseSoundEffect",(Settings_BoolSetting_o *)pMVar15,
                                              (System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,
                                              in_stack_ffffffffffffffa8);
                          if ((pIVar5 != (Il2CppObject *)0x0) &&
                             (pIVar6 = il2cpp_vm_Object_IsInst
                                                 (pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                             pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                          if (8 < (uint)pGVar4->max_length) {
                            pGVar4->m_Items[8] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                            Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 8);
                            pGVar7 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)
                                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
                                      (pGVar7,pSVar10,pGVar4,pMVar15);
                            if ((pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) &&
                               (pGVar8 = (pGVar7->fields)._blocks,
                               pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0))
                            {
                              uVar14 = 0;
                              do {
                                uVar1 = (uint)pGVar8->max_length;
                                if ((long)(int)uVar1 <= (long)uVar14) {
                                  if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e52ba9;
                                  pGVar3->m_Items[1] = pGVar7;
                                  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
                                  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
                                  pSVar9 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_System_Func_string);
                                  System_Func_object____ctor
                                            ((System_Func_object__o *)pSVar9,(Il2CppObject *)0x0,
                                             (intptr_t)
                                             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CurrentSong
                                             ,(MethodInfo_4F0C6A0 *)0x0);
                                  if (Il2CppMethodInitialized_07548658 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                                    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
                                    Il2CppMethodInitialized_07548658 = '\x01';
                                  }
                                  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                                      cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)
                                               TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                                  }
                                  pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                                      ("Common.None",(MethodInfo *)0x0);
                                  pIVar5 = (Il2CppObject *)
                                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic
                                                     ("settings-sound-current-song","Sound",
                                                      "CurrentSong",pSVar9,pSVar10,
                                                      "settings.sound.currentSong",(System_Func_string__o *)0x0,
                                                      in_stack_ffffffffffffffb0);
                                  if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
                                    if ((pIVar5 != (Il2CppObject *)0x0) &&
                                       (pIVar6 = il2cpp_vm_Object_IsInst
                                                           (pIVar5,(((pGVar4->obj).klass)->_1).element_class),
                                       pIVar6 == (Il2CppObject *)0x0)) goto label_05e52bae;
                                    if ((int)pGVar4->max_length == 0) goto label_05e52ba9;
                                    pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                                    Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
                                    id_00 = "settings-sound-music-playlist";
                                    id = "settings-sound-force-playlist";
                                    pSVar2 = "Sound";
                                    pSVar10 = "ForcePlaylist";
                                    if (settings == (Settings_SoundSettings_o *)0x0) {
                                      setting = (Settings_StringSetting_o *)0x0;
                                    }
                                    else {
                                      setting = (settings->fields).ForcePlaylist;
                                    }
                                    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
                                    if (values != (System_String_array *)0x0) {
                                      if ((int)values->max_length == 0) goto label_05e52ba9;
                                      values->m_Items[0] = "Default";
                                      Il2CppCodeGenWriteBarrier(values->m_Items);
                                      if ((values->max_length & 0xfffffffe) == 0) goto label_05e52ba9;
                                      values->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
                                      if ((uint)values->max_length < 3) goto label_05e52ba9;
                                      values->m_Items[2] = "Custom";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 2);
                                      if ((values->max_length & 0xfffffffc) == 0) goto label_05e52ba9;
                                      values->m_Items[3] = "Menu";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                                      if ((uint)values->max_length < 5) goto label_05e52ba9;
                                      values->m_Items[4] = "Ambient";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                                      if ((uint)values->max_length < 6) goto label_05e52ba9;
                                      values->m_Items[5] = "Peaceful";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                                      if ((uint)values->max_length < 7) goto label_05e52ba9;
                                      values->m_Items[6] = "Battle";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                                      if ((values->max_length & 0xfffffff8) == 0) goto label_05e52ba9;
                                      values->m_Items[7] = "Racing";
                                      Il2CppCodeGenWriteBarrier(values->m_Items + 7);
                                      pMVar15 = (MethodInfo *)0x0;
                                      pIVar5 = (Il2CppObject *)
                                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d4a940
                                                         (id,pSVar2,pSVar10,setting,values,
                                                          (System_String_o *)0x0,
                                                          (System_Action_GisketchActionContext__o *)0x0,
                                                          in_stack_ffffffffffffffb0);
                                      if ((pIVar5 != (Il2CppObject *)0x0) &&
                                         (pIVar6 = il2cpp_vm_Object_IsInst
                                                             (pIVar5,(((pGVar4->obj).klass)->_1).element_class
                                                             ), pIVar6 == (Il2CppObject *)0x0))
                                      goto label_05e52bae;
                                      if ((pGVar4->max_length & 0xfffffffe) == 0) goto label_05e52ba9;
                                      pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar5;
                                      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
                                      pSVar2 = "Sound";
                                      pSVar10 = "CustomPlaylist";
                                      if (Il2CppMethodInitialized_0754862d == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
                                        il2cpp_codegen_initialize_runtime_metadata(&".");
                                        Il2CppMethodInitialized_0754862d = '\x01';
                                      }
                                      pSVar10 = System_String__Concat_5302810
                                                          ("SettingsPopup.",pSVar2,".",
                                                           pSVar10,(MethodInfo *)0x0);
                                      pSVar9 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_System_Func_string);
                                      System_Func_object____ctor
                                                ((System_Func_object__o *)pSVar9,(Il2CppObject *)0x0,
                                                 (intptr_t)
                                                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CustomPlaylistDirtyValue
                                                 ,(MethodInfo_4F0C6A0 *)0x0);
                                      __this_00 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow
                                                       );
                                      pMVar13 = (MethodInfo *)"settings.sound.customPlaylist";
                                      Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___ctor
                                                (__this_00,"settings-sound-custom-playlist",pSVar10,"settings.sound.customPlaylist"
                                                 ,pSVar9,(MethodInfo *)0x0);
                                      if ((__this_00 !=
                                           (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *)0x0)
                                         && (pIVar5 = il2cpp_vm_Object_IsInst
                                                                ((Il2CppObject *)__this_00,
                                                                 (((pGVar4->obj).klass)->_1).element_class),
                                            pIVar5 == (Il2CppObject *)0x0)) goto label_05e52bae;
                                      if ((uint)pGVar4->max_length < 3) goto label_05e52ba9;
                                      pGVar4->m_Items[2] =
                                           (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
                                      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
                                      pGVar7 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                                                                                    
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
                                                (pGVar7,id_00,pGVar4,pMVar13);
                                      if ((uint)pGVar3->max_length < 3) goto label_05e52ba9;
                                      pGVar3->m_Items[2] = pGVar7;
                                      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
                                      pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array
                                                          ,4);
                                      pSVar10 = "settings-sound-voice-chat";
                                      if (settings == (Settings_SoundSettings_o *)0x0) {
                                        setting_00 = (Settings_IntSetting_o *)0x0;
                                      }
                                      else {
                                        setting_00 = (settings->fields).VoiceChatInput;
                                      }
                                      pIVar5 = (Il2CppObject *)
                                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                         ("settings-sound-voice-chat-input","Sound",
                                                          "VoiceChatInput",setting_00,
                                                          (System_String_o *)0x0,
                                                          (System_Action_GisketchActionContext__o *)0x0,
                                                          pMVar15);
                                      if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
                                        il2cpp_codegen_array_element_type_check
                                                  ((System_Array_o *)pGVar4,pIVar5);
                                        pMVar13 = (MethodInfo *)0x0;
                                        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,0,pIVar5);
                                        pIVar5 = (Il2CppObject *)
                                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__MicrophoneDropdown
                                                           (settings,pMVar13);
                                        il2cpp_codegen_array_element_type_check
                                                  ((System_Array_o *)pGVar4,pIVar5);
                                        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,1,pIVar5);
                                        if (settings == (Settings_SoundSettings_o *)0x0) {
                                          pMVar13 = (MethodInfo *)0x0;
                                          pIVar5 = (Il2CppObject *)
                                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                             ("settings-sound-voice-chat-mic-volume","Sound",
                                                              "VoiceChatMicVolume",
                                                              (Settings_FloatSetting_o *)0x0,
                                                              (System_String_o *)0x0,
                                                              (System_Action_GisketchActionContext__o *)0x0,
                                                              pMVar15);
                                          il2cpp_codegen_array_element_type_check
                                                    ((System_Array_o *)pGVar4,pIVar5);
                                          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,2,pIVar5);
                                        }
                                        else {
                                          pIVar5 = (Il2CppObject *)
                                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                             ("settings-sound-voice-chat-mic-volume","Sound",
                                                              "VoiceChatMicVolume",
                                                              (settings->fields).VoiceChatMicVolume,
                                                              (System_String_o *)0x0,
                                                              (System_Action_GisketchActionContext__o *)0x0,
                                                              pMVar15);
                                          il2cpp_codegen_array_element_type_check
                                                    ((System_Array_o *)pGVar4,pIVar5);
                                          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,2,pIVar5);
                                          pMVar13 = (MethodInfo *)(settings->fields).VoiceChatAudioVolume;
                                        }
                                        pSVar12 = (Settings_BoolSetting_o *)0x0;
                                        pIVar5 = (Il2CppObject *)
                                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                           ("settings-sound-voice-chat-audio-volume","Sound",
                                                            "VoiceChatAudioVolume",
                                                            (Settings_FloatSetting_o *)pMVar13,
                                                            (System_String_o *)0x0,
                                                            (System_Action_GisketchActionContext__o *)0x0,
                                                            pMVar15);
                                        il2cpp_codegen_array_element_type_check
                                                  ((System_Array_o *)pGVar4,pIVar5);
                                        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,3,pIVar5);
                                        pGVar7 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)
                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
                                                  (pGVar7,pSVar10,pGVar4,pMVar13);
                                        il2cpp_runtime_helper_02fe1060(pGVar3,3,pGVar7);
                                        pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                 SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3)
                                        ;
                                        pMVar13 = (MethodInfo *)"settings-sound-legacy-effects";
                                        if (settings != (Settings_SoundSettings_o *)0x0) {
                                          pSVar12 = (settings->fields).OldHookEffect;
                                        }
                                        pIVar5 = (Il2CppObject *)
                                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                           ("settings-sound-old-hook-effect","Sound",
                                                            "OldHookEffect",pSVar12,
                                                            (System_String_o *)0x0,
                                                            (System_Action_GisketchActionContext__o *)0x0,
                                                            pMVar15);
                                        if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
                                          il2cpp_codegen_array_element_type_check
                                                    ((System_Array_o *)pGVar4,pIVar5);
                                          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,0,pIVar5);
                                          if (settings == (Settings_SoundSettings_o *)0x0) {
                                            method_00 = (MethodInfo *)0x0;
                                            pIVar5 = (Il2CppObject *)
                                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                               ("settings-sound-old-blade-effect","Sound",
                                                                "OldBladeEffect",
                                                                (Settings_BoolSetting_o *)0x0,
                                                                (System_String_o *)0x0,
                                                                (System_Action_GisketchActionContext__o *)0x0,
                                                                pMVar15);
                                            il2cpp_codegen_array_element_type_check
                                                      ((System_Array_o *)pGVar4,pIVar5);
                                            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,1,pIVar5);
                                          }
                                          else {
                                            pIVar5 = (Il2CppObject *)
                                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                               ("settings-sound-old-blade-effect","Sound",
                                                                "OldBladeEffect",
                                                                (settings->fields).OldBladeEffect,
                                                                (System_String_o *)0x0,
                                                                (System_Action_GisketchActionContext__o *)0x0,
                                                                pMVar15);
                                            il2cpp_codegen_array_element_type_check
                                                      ((System_Array_o *)pGVar4,pIVar5);
                                            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,1,pIVar5);
                                            method_00 = (MethodInfo *)(settings->fields).OldNapeEffect;
                                          }
                                          pIVar5 = (Il2CppObject *)
                                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                             ("settings-sound-old-nape-effect","Sound",
                                                              "OldNapeEffect",
                                                              (Settings_BoolSetting_o *)method_00,
                                                              (System_String_o *)0x0,
                                                              (System_Action_GisketchActionContext__o *)0x0,
                                                              pMVar15);
                                          il2cpp_codegen_array_element_type_check
                                                    ((System_Array_o *)pGVar4,pIVar5);
                                          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar4,2,pIVar5);
                                          pGVar7 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
                                                    (pGVar7,(System_String_o *)pMVar13,pGVar4,method_00);
                                          if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o
                                                         *)0x0) {
                                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout
                                                      (pGVar7,pMVar13);
                                            il2cpp_runtime_helper_02fe1060(pGVar3,4,pGVar7);
                                            return pGVar3;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  break;
                                }
                                if (uVar1 <= uVar14) goto label_05e52ba9;
                                __this = pGVar8->m_Items[uVar14];
                                if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0)
                                {
                                  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)
                                                0x0) break;
                                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
                                            (__this,0,(MethodInfo *)(long)(int)uVar1);
                                  pGVar8 = (pGVar7->fields)._blocks;
                                }
                                uVar14 = uVar14 + 1;
                              } while (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array
                                                  *)0x0);
                            }
                            goto label_05e52ba4;
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
label_05e52ba9:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CurrentSong
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CurrentSong (const MethodInfo* method);
// 0x5e52df0
// eh: try 0x5e52df1..0x5e52df8 -> pad 0x5e52dfa catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e52e1e..0x5e52e53 -> pad 0x5e52e53 (+1 call sites) cleanup
// eh: try 0x5e52e56..0x5e52e5b -> pad 0x5e52e63 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e52dfa: mov rbx, rax
// asm:   0x5e52dfd: cmp edx, 1
// asm:   0x5e52e00: jne 0x5e52e5b
// asm:   0x5e52e02: mov rdi, rbx
// asm:   0x5e52e05: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e52e0a: mov rbx, rax
// asm:   0x5e52e0d: lea rax, [rip + 0x17038b4]
// asm:   0x5e52e14: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e52e18: mov rax, qword ptr [rbx]
// asm:   0x5e52e1b: mov rsi, qword ptr [rax]
// asm:   0x5e52e1e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e52e23: test al, al
// asm:   0x5e52e25: je 0x5e52e32
// asm:   0x5e52e27: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e52e2c: pop rbx
// asm:   0x5e52e2d: jmp 0x5e52be0  ; Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__NoneText()
// asm:   0x5e52e32: mov edi, 8
// asm:   0x5e52e37: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e52e3c: mov rcx, qword ptr [rbx]
// asm:   0x5e52e3f: mov qword ptr [rax], rcx
// asm:   0x5e52e42: lea rsi, [rip + 0xfda6b7]
// asm:   0x5e52e49: mov rdi, rax
// asm:   0x5e52e4c: xor edx, edx
// asm:   0x5e52e4e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e52e53: mov rbx, rax
// asm:   0x5e52e56: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e52e5b: mov rdi, rbx
// asm:   0x5e52e5e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e52e63: mov rdi, rax
// asm:   0x5e52e66: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CurrentSong(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$NoneText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__NoneText (const MethodInfo* method);
// 0x5e52be0

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__NoneText(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_07548658 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.None",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistText (const MethodInfo* method);
// 0x5e52e70

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistText(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistDirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistDirtyValue (const MethodInfo* method);
// 0x5e52e80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__CustomPlaylistDirtyValue(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07548659 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if (pSVar1 == (Settings_SoundSettings_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar2 = (pSVar1->fields).CustomPlaylist;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$MicrophoneDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__MicrophoneDropdown (Settings_SoundSettings_o* settings, const MethodInfo* method);
// 0x5e52c40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e52cee: nop 

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__MicrophoneDropdown
          (Settings_SoundSettings_o *settings,MethodInfo *method)

{
  uint uVar1;
  System_String_array *values;
  System_String_array *labels;
  ulong uVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar4;
  System_String_o **ppSVar5;
  System_String_o **ppSVar6;
  Settings_StringSetting_o *setting;
  ulong uVar7;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  ppSVar6 = (System_String_o **)settings;
  if (Il2CppMethodInitialized_0754865a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatDevice");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-voice-chat-device");
    ppSVar6 = &"Sound";
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    Il2CppMethodInitialized_0754865a = '\x01';
  }
  values = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones((MethodInfo *)ppSVar6)
  ;
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  labels = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)values->max_length);
  if (0 < (int)values->max_length) {
    if (labels == (System_String_array *)0x0) {
      pSVar3 = values->m_Items[0];
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      ApplicationManagers_VoiceChatManager__GetDeviceLabel(pSVar3,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
    uVar2 = values->max_length & 0xffffffff;
    ppSVar6 = labels->m_Items;
    ppSVar5 = values->m_Items;
    uVar7 = 0;
    do {
      if (uVar2 <= uVar7) {
label_05e52db0:
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = *ppSVar5;
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      pSVar3 = ApplicationManagers_VoiceChatManager__GetDeviceLabel(pSVar3,(MethodInfo *)0x0);
      if ((uint)labels->max_length <= uVar7) goto label_05e52db0;
      *ppSVar6 = pSVar3;
      Il2CppCodeGenWriteBarrier(ppSVar6);
      uVar7 = uVar7 + 1;
      uVar1 = (uint)values->max_length;
      uVar2 = (ulong)uVar1;
      ppSVar5 = ppSVar5 + 1;
      ppSVar6 = ppSVar6 + 1;
    } while ((long)uVar7 < (long)(int)uVar1);
  }
  if (settings == (Settings_SoundSettings_o *)0x0) {
    setting = (Settings_StringSetting_o *)0x0;
  }
  else {
    setting = (settings->fields).VoiceChatDevice;
  }
  pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice
                     ("settings-sound-voice-chat-device","Sound","VoiceChatDevice",1,setting,values,
                      labels,(System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffc0);
  return pGVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SafeMicrophones
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones (const MethodInfo* method);
// 0x5e52f00
// eh: try 0x5e52f30..0x5e52f3c -> pad 0x5e52f44 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e52f6e..0x5e52fdc -> pad 0x5e52fe1 (+1 call sites) cleanup
// eh: try 0x5e52fe4..0x5e52fe9 -> pad 0x5e52ff1 catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e52f44: jmp 0x5e52f46
// asm:   0x5e52f46: mov rbx, rax
// asm:   0x5e52f49: cmp edx, 1
// asm:   0x5e52f4c: jne 0x5e52fe9
// asm:   0x5e52f52: mov rdi, rbx
// asm:   0x5e52f55: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e52f5a: mov rbx, rax
// asm:   0x5e52f5d: lea rax, [rip + 0x1703764]
// asm:   0x5e52f64: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e52f68: mov rax, qword ptr [rbx]
// asm:   0x5e52f6b: mov rsi, qword ptr [rax]
// asm:   0x5e52f6e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e52f73: test al, al
// asm:   0x5e52f75: je 0x5e52fbb
// asm:   0x5e52f77: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e52f7c: lea rdi, [rip + 0x14219b5]  ; TypeInfo_string_array
// asm:   0x5e52f83: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e52f88: mov rdi, rax
// asm:   0x5e52f8b: mov esi, 1
// asm:   0x5e52f90: call 0x30d6180  ; SZArrayNew()
// asm:   0x5e52f95: test rax, rax
// asm:   0x5e52f98: je 0x5e52fdc
// asm:   0x5e52f9a: mov rbx, rax
// asm:   0x5e52f9d: lea rdi, [rip + 0x147aa84]  ; ""
// asm:   0x5e52fa4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e52fa9: mov rdi, rbx
// asm:   0x5e52fac: xor esi, esi
// asm:   0x5e52fae: mov rdx, rax
// asm:   0x5e52fb1: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e52fb6: mov rax, rbx
// asm:   0x5e52fb9: pop rbx
// asm:   0x5e52fba: ret 
// asm:   0x5e52fbb: mov edi, 8
// asm:   0x5e52fc0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e52fc5: mov rcx, qword ptr [rbx]
// asm:   0x5e52fc8: mov qword ptr [rax], rcx
// asm:   0x5e52fcb: lea rsi, [rip + 0xfda52e]
// asm:   0x5e52fd2: mov rdi, rax
// asm:   0x5e52fd5: xor edx, edx
// asm:   0x5e52fd7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e52fdc: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e52fe1: mov rbx, rax
// asm:   0x5e52fe4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e52fe9: mov rdi, rbx
// asm:   0x5e52fec: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e52ff1: mov rdi, rax
// asm:   0x5e52ff4: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SafeMicrophones(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_0754865b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_0754865b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pSVar1 = ApplicationManagers_VoiceChatManager__get_MicrophoneDevices((MethodInfo *)0x0);
  return pSVar1;
}


