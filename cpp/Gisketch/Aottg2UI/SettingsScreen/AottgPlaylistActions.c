// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$<RemoveSong>b__0
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___RemoveSong_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1823200c0

bool
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___RemoveSong_b__0(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, System_String_o* item, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(m,(__this->fields).song,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$OpenManagerDialog
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenManagerDialog (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182309c00

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenManagerDialog
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_1843476f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"setting-playlist-manager");
    Il2CppMethodInitialized_1843476f9 = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347705 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist
              ((Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager
              ((Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  if (x == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  root = UnityEngine_GameObject__GetComponentInParent_object_
                   ((UnityEngine_GameObject_o *)x,
                    (MethodInfo_6F53B0 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot
                   );
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,(MethodInfo *)0x0);
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._Overlays_k__BackingField,
     __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              (__this,"setting-playlist-manager",true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, const MethodInfo* method);
// 0x1823096f0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *song,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Collections_Generic_List_string__o *songs;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_1843476fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843476fa = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(song,(MethodInfo *)0x0);
    if (!bVar1) {
      songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
      if (songs == (System_Collections_Generic_List_string__o *)0x0) goto label_182309834;
      bVar1 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)song,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar1) {
        il2cpp_runtime_helper_180012890(songs);
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)0x0);
      }
    }
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347705 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
label_182309834:
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, const MethodInfo* method);
// 0x182309f00

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *song,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *object;
  System_Collections_Generic_List_string__o *songs;
  System_Predicate_T__o *match;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_1843476fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
    Il2CppMethodInitialized_1843476fb = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *)0x0) {
    (object->fields).song = song;
    Il2CppCodeGenWriteBarrier(&(object->fields).song,song);
    if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty((object->fields).song,(MethodInfo *)0x0);
      if (!bVar1) {
        songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        if (songs == (System_Collections_Generic_List_string__o *)0x0) goto label_18230a0a7;
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)songs,match,
                   (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_string_RemoveAll);
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)0x0);
      }
    }
    x = (UnityEngine_Object_o *)(context->fields).GameObject;
    if (Il2CppMethodInitialized_184347705 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184347705 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_18230a0a7;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,(MethodInfo *)0x0);
    return;
  }
label_18230a0a7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong (System_String_o* song, const MethodInfo* method);
// 0x182309630
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823096d9: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong_2309630
               (System_String_o *song,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *songs;
  
  if (Il2CppMethodInitialized_1843476fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843476fa = '\x01';
  }
  if ((TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) &&
     (bVar1 = System_String__IsNullOrEmpty(song,(MethodInfo *)0x0), !bVar1)) {
    songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
    if (songs == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)song,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar1) {
      il2cpp_runtime_helper_180012890(songs,song,MethodInfo_System_Collections_Generic_List_string_Add);
      Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong (System_String_o* song, const MethodInfo* method);
// 0x182309de0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong_2309de0
               (System_String_o *song,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *object;
  System_Collections_Generic_List_string__o *songs;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_1843476fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
    Il2CppMethodInitialized_1843476fb = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *)0x0) {
    (object->fields).song = song;
    Il2CppCodeGenWriteBarrier(&(object->fields).song,song);
    if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty((object->fields).song,(MethodInfo *)0x0);
      if (!bVar1) {
        songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        if (songs == (System_Collections_Generic_List_string__o *)0x0) goto label_182309ef6;
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)songs,match,
                   (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_string_RemoveAll);
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_182309ef6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CurrentSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs (const MethodInfo* method);
// 0x1823099a0

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o **ppSVar3;
  System_String_array *pSVar4;
  System_String_o *value;
  uint uVar5;
  
  if (Il2CppMethodInitialized_1843476fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843476fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings == (Settings_SoundSettings_o *)0x0) {
    ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).CustomPlaylist;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_182309b1a;
    ppSVar3 = &(pSVar1->fields)._value;
  }
  if (*ppSVar3 != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(*ppSVar3,0x2c,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      uVar5 = 0;
      do {
        if ((int)pSVar4->max_length <= (int)uVar5) {
          return __this;
        }
        if ((uint)pSVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if (pSVar4->m_Items[(int)uVar5] == (System_String_o *)0x0) break;
        value = System_String__Trim(pSVar4->m_Items[(int)uVar5],(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar2) {
          if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
          bVar2 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)value,
                             (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
          if (!bVar2) {
            il2cpp_runtime_helper_180012890(__this,value,MethodInfo_System_Collections_Generic_List_string_Add);
          }
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
  }
label_182309b1a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AllSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs (const MethodInfo* method);
// 0x182309840
// eh: try 0x18230986e..0x18230989c -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230989b: nop 
// asm:   0x18230989e: lea rcx, [rip + 0x1df5563]  ; TypeInfo_System_Collections_Generic_List_string
// asm:   0x1823098a5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823098aa: mov rcx, rax
// asm:   0x1823098ad: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1823098b2: mov rbx, rax
// asm:   0x1823098b5: lea rcx, [rip + 0x1dd25e4]  ; MethodInfo_System_Collections_Generic_List_string_ctor
// asm:   0x1823098bc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823098c1: mov rdx, rax
// asm:   0x1823098c4: mov rcx, rbx
// asm:   0x1823098c7: call 0x18092a240  ; System_Collections_Generic_List_KeyValuePair_int__object_____ctor()
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_1843476fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843476fd = '\x01';
  }
  __this = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  }
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AvailableSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs (const MethodInfo* method);
// 0x1823098e0

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_1843476fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_Sort_40dce18);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_1843476fe = '\x01';
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs((MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___Sort_948660
              ((System_Collections_Generic_List_object__o *)__this,
               (System_Collections_Generic_IComparer_T__o *)
               TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
               (MethodInfo_948660 *)MethodInfo_System_Collections_Generic_List_string_Sort_40dce18);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$PlaylistManagerSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs (const MethodInfo* method);
// 0x182309cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182309d5c: nop dword ptr [rax]

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  int index;
  
  if (Il2CppMethodInitialized_1843476ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_1843476ff = '\x01';
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
  index = 0;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    while( true ) {
      if ((__this_00->fields)._size <= index) {
        return __this;
      }
      pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
      bVar1 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar2,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar1) {
        pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        il2cpp_runtime_helper_180012890(__this,pSVar2,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CustomPlaylistText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText (const MethodInfo* method);
// 0x182309b30

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  
  if (Il2CppMethodInitialized_184347700 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_184347700 = '\x01';
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size == 0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.None","None",(MethodInfo *)0x0);
      return pSVar1;
    }
    value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                      ((System_Collections_Generic_List_T__o *)__this,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar1 = System_String__Join(", ",(System_String_array *)value,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncCustomPlaylist
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18230a4e0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *value;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_00;
  
  if (Il2CppMethodInitialized_184347701 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-custom-playlist");
    Il2CppMethodInitialized_184347701 = '\x01';
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    if (Il2CppMethodInitialized_184347700 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      il2cpp_codegen_initialize_runtime_metadata(&", ");
      il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
      Il2CppMethodInitialized_184347700 = '\x01';
    }
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((__this_00->fields)._size == 0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      value = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.None","None",(MethodInfo *)0x0);
    }
    else {
      value_00 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      value = System_String__Join(", ",(System_String_array *)value_00,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"settings.sound.customPlaylist",value,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
            (root,"settings-sound-custom-playlist",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncPlaylistManager
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18230a650
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230a7d5: mov rdi, rbp
// asm:   0x18230a7d8: jmp 0x18230a7eb
// asm:   0x18230a7fb: nop dword ptr [rax + rax]
// asm:   0x18230a96f: nop 

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  uint32_t uVar2;
  bool bVar3;
  uint16_t uVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  System_String_o *pSVar8;
  int iVar9;
  int iVar10;
  int local_res8;
  uint32_t local_res18 [2];
  System_Collections_Generic_List_string__o *local_res20;
  
  if (Il2CppMethodInitialized_184347702 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3938);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.available.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.selected.empty");
    Il2CppMethodInitialized_184347702 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
    local_res20 = pSVar5;
    __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor_176d720
              ((System_Collections_Generic_HashSet_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               (MethodInfo_176D720 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3938);
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      local_res8 = 0;
      for (iVar10 = 0; iVar10 < (__this->fields)._size; iVar10 = iVar10 + 1) {
        pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this,iVar10,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (Il2CppMethodInitialized_184347703 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
          il2cpp_codegen_initialize_runtime_metadata(&"x8");
          Il2CppMethodInitialized_184347703 = '\x01';
        }
        local_res18[0] = 0x811c9dc5;
        pSVar8 = pSVar6;
        if (pSVar6 == (System_String_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        iVar9 = 0;
        if (pSVar8 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        for (; uVar2 = local_res18[0], iVar9 < (pSVar8->fields)._stringLength; iVar9 = iVar9 + 1) {
          uVar4 = System_String__get_Chars(pSVar8,iVar9,(MethodInfo *)0x0);
          local_res18[0] = (uVar4 ^ uVar2) * 0x1000193;
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar8 = System_UInt32__ToString_1b56840
                           (local_res18,"x8",(System_IFormatProvider_o *)pSVar7,
                            (MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18230aaa0;
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar6,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        pGVar1 = (root->fields)._State_k__BackingField;
        pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                           (pSVar8,(MethodInfo *)0x0);
        if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18230aaa0;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar6,!bVar3,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._State_k__BackingField;
        pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                           (pSVar8,(MethodInfo *)0x0);
        if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18230aaa0;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar6,bVar3,(MethodInfo *)0x0);
        local_res8 = local_res8 + (uint)!bVar3;
      }
      if (local_res20 != (System_Collections_Generic_List_string__o *)0x0) {
        for (iVar10 = 0; pSVar5 = local_res20, iVar10 < (local_res20->fields)._size; iVar10 = iVar10 + 1) {
          pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)local_res20,iVar10,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          if (Il2CppMethodInitialized_184347703 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
            il2cpp_codegen_initialize_runtime_metadata(&"x8");
            Il2CppMethodInitialized_184347703 = '\x01';
          }
          local_res18[0] = 0x811c9dc5;
          if (pSVar6 == (System_String_o *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          iVar9 = 0;
          if (pSVar6 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          for (; uVar2 = local_res18[0], iVar9 < (pSVar6->fields)._stringLength; iVar9 = iVar9 + 1) {
            uVar4 = System_String__get_Chars(pSVar6,iVar9,(MethodInfo *)0x0);
            local_res18[0] = (uVar4 ^ uVar2) * 0x1000193;
          }
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar6 = System_UInt32__ToString_1b56840
                             (local_res18,"x8",(System_IFormatProvider_o *)pSVar7,
                              (MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          pSVar8 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                             (pSVar6,(MethodInfo *)0x0);
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18230aaa0;
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar8,false,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                             (pSVar6,(MethodInfo *)0x0);
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_18230aaa0;
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar6,true,(MethodInfo *)0x0);
        }
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"settings.sound.customPlaylist.available.empty",local_res8 == 0,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"settings.sound.customPlaylist.selected.empty",(pSVar5->fields)._size == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_18230aaa0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SongStateId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId (System_String_o* song, const MethodInfo* method);
// 0x18230a350
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230a398: mov rbp, rbx
// asm:   0x18230a39b: jmp 0x18230a3b6
// asm:   0x18230a3bf: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId(System_String_o *song,MethodInfo *method)

{
  uint32_t uVar1;
  uint16_t uVar2;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar3;
  int index;
  uint32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347703 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"x8");
    Il2CppMethodInitialized_184347703 = '\x01';
  }
  local_res8[0] = 0x811c9dc5;
  if ((song == (System_String_o *)0x0) &&
     (song = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), song == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  for (index = 0; uVar1 = local_res8[0], index < (song->fields)._stringLength; index = index + 1) {
    uVar2 = System_String__get_Chars(song,index,(MethodInfo *)0x0);
    local_res8[0] = (uVar2 ^ uVar1) * 0x1000193;
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar3 = System_UInt32__ToString_1b56840
                     (local_res8,"x8",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
  ;
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SetSongs
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs (System_Collections_Generic_List_string__o* songs, const MethodInfo* method);
// 0x18230a130

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs
               (System_Collections_Generic_List_string__o *songs,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_StringSetting_o *__this;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  int32_t index;
  
  if (Il2CppMethodInitialized_184347704 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184347704 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings == (Settings_SoundSettings_o *)0x0) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (songs != (System_Collections_Generic_List_string__o *)0x0) {
    for (index = 0; index < (songs->fields)._size; index = index + 1) {
      pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)songs,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (pSVar3 == (System_String_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)songs,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar3 == (System_String_o *)0x0) goto label_18230a344;
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
      }
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18230a344;
        bVar2 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar3,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (!bVar2) {
          il2cpp_runtime_helper_180012890(__this_00,pSVar3);
        }
      }
    }
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    __this = (pSVar1->fields).CustomPlaylist;
    if ((__this_00->fields)._size == 0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      value = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar3 = System_String__Join(",",(System_String_array *)value,(MethodInfo *)0x0);
    }
    if (__this != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pSVar3,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
  }
label_18230a344:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncAfterChange
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18230a440

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347705 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18230a0b0

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347705 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      return pGVar2;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


