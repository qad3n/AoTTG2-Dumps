// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5dc4520

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$<RemoveSong>b__0
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___RemoveSong_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5dc4950

bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0___RemoveSong_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *__this,
               System_String_o *item,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(item,(__this->fields).song,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$OpenManagerDialog
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenManagerDialog (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc3710
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc3726: mov r14, qword ptr [rbx + 8]
// asm:   0x5dc372a: cmp byte ptr [rip + 0x1784a79], 0
// asm:   0x5dc3731: je 0x5dc37e8

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__OpenManagerDialog
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754819e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"setting-playlist-manager");
    Il2CppMethodInitialized_0754819e = '\x01';
  }
  if (Il2CppMethodInitialized_075481aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481aa = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,method_00);
  if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this = (root->fields)._Overlays_k__BackingField,
     __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
            (__this,"setting-playlist-manager",true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, const MethodInfo* method);
// 0x5dc3cc0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *song,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong_5cc3cd0(song,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,(MethodInfo *)song);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, const MethodInfo* method);
// 0x5dc3e70

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *song,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong_5cc3e80(song,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,(MethodInfo *)song);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong (System_String_o* song, const MethodInfo* method);
// 0x5dc3cd0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong_5cc3cd0
               (System_String_o *song,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *songs;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_0754819f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754819f = '\x01';
  }
  if ((TypeInfo_Settings_SettingsManager->static_fields->SoundSettings == (Settings_SoundSettings_o *)0x0) ||
     (pMVar5 = (MethodInfo *)song, bVar4 = System_String__IsNullOrEmpty(song,(MethodInfo *)0x0), bVar4)) {
    return;
  }
  songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(pMVar5);
  if (songs != (System_Collections_Generic_List_string__o *)0x0) {
    bVar4 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)song,
                       (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (bVar4) {
      return;
    }
    piVar1 = &(songs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (songs->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (songs->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (songs->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = song;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)song,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)song);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong (System_String_o* song, const MethodInfo* method);
// 0x5dc3e80

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong_5cc3e80
               (System_String_o *song,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *__this;
  System_Collections_Generic_List_string__o *songs;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
    Il2CppMethodInitialized_075481a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *)0x0) {
label_05dc3fa6:
    ThrowNullReferenceException();
  }
  (__this->fields).song = song;
  Il2CppCodeGenWriteBarrier(&(__this->fields).song);
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
    method_00 = (MethodInfo *)(__this->fields).song;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
    if (!bVar1) {
      songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method_00);
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
                 ,(MethodInfo_3DC95B0 *)0x0);
      if (songs != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)songs,match,
                   (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_string_RemoveAll);
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)match);
        return;
      }
      goto label_05dc3fa6;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CurrentSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs (const MethodInfo* method);
// 0x5dc3fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc4070: jmp 0x5dc41d0

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(MethodInfo *method)

{
  int32_t *piVar1;
  Settings_SoundSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  uint uVar7;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  uint uVar10;
  long lVar11;
  
  if (Il2CppMethodInitialized_075481a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075481a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if (pSVar2 == (Settings_SoundSettings_o *)0x0) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar3 = (pSVar2->fields).CustomPlaylist;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05dc41d0;
    pSVar9 = (pSVar3->fields)._value;
  }
  if ((pSVar9 != (System_String_o *)0x0) &&
     (pSVar8 = System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0), pSVar8 != (System_String_array *)0x0)) {
    uVar7 = (uint)pSVar8->max_length;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < (int)uVar7) {
        lVar11 = 0;
        do {
          if (uVar7 <= (uint)lVar11) goto label_05dc41d5;
          if (pSVar8->m_Items[lVar11] == (System_String_o *)0x0) goto label_05dc41d0;
          pSVar9 = System_String__Trim(pSVar8->m_Items[lVar11],(MethodInfo *)0x0);
          bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
          if (!bVar6) goto label_05dc41d0;
          uVar7 = (uint)pSVar8->max_length;
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)uVar7);
      }
    }
    else if (0 < (int)uVar7) {
      uVar10 = 0;
      do {
        if (uVar7 <= uVar10) {
label_05dc41d5:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar8->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_05dc41d0;
        pSVar9 = System_String__Trim(pSVar8->m_Items[(int)uVar10],(MethodInfo *)0x0);
        bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
        if ((!bVar6) &&
           (bVar6 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                               (MethodInfo_395D6D0 *)
                               MethodInfo_System_Collections_Generic_List_string_Contains),
           pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar6)) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_05dc41d0;
          uVar7 = (__this->fields)._size;
          if (uVar7 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar7 + 1;
            pSVar4->m_Items[(int)uVar7] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
        uVar10 = uVar10 + 1;
        uVar7 = (uint)pSVar8->max_length;
      } while ((int)uVar10 < (int)uVar7);
    }
    return __this;
  }
label_05dc41d0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AllSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs (const MethodInfo* method);
// 0x5dc4530
// eh: try 0x5dc4559..0x5dc4591 -> pad 0x5dc4595 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5dc45ac..0x5dc4623 -> pad 0x5dc4623 (+1 call sites) cleanup
// eh: try 0x5dc4626..0x5dc462b -> pad 0x5dc4633 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc4593: jmp 0x5dc4595
// asm:   0x5dc4595: mov rbx, rax
// asm:   0x5dc4598: cmp edx, 1
// asm:   0x5dc459b: jne 0x5dc462b
// asm:   0x5dc45a1: mov rdi, rbx
// asm:   0x5dc45a4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dc45a9: mov rbx, rax
// asm:   0x5dc45ac: lea rdi, [rip + 0x14b3b0d]  ; TypeInfo_System_Exception
// asm:   0x5dc45b3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dc45b8: mov rcx, qword ptr [rbx]
// asm:   0x5dc45bb: mov rsi, qword ptr [rcx]
// asm:   0x5dc45be: mov rdi, rax
// asm:   0x5dc45c1: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dc45c6: test al, al
// asm:   0x5dc45c8: je 0x5dc4602
// asm:   0x5dc45ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc45cf: lea rdi, [rip + 0x14adc4a]  ; TypeInfo_System_Collections_Generic_List_string
// asm:   0x5dc45d6: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dc45db: mov rdi, rax
// asm:   0x5dc45de: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5dc45e3: mov rbx, rax
// asm:   0x5dc45e6: lea rdi, [rip + 0x14d2353]  ; MethodInfo_System_Collections_Generic_List_string_ctor
// asm:   0x5dc45ed: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dc45f2: mov rdi, rbx
// asm:   0x5dc45f5: mov rsi, rax
// asm:   0x5dc45f8: call 0x3a5c910  ; System_Collections_Generic_List_object____ctor()
// asm:   0x5dc45fd: mov rax, rbx
// asm:   0x5dc4600: pop rbx
// asm:   0x5dc4601: ret 
// asm:   0x5dc4602: mov edi, 8
// asm:   0x5dc4607: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dc460c: mov rcx, qword ptr [rbx]
// asm:   0x5dc460f: mov qword ptr [rax], rcx
// asm:   0x5dc4612: lea rsi, [rip + 0x1068ee7]
// asm:   0x5dc4619: mov rdi, rax
// asm:   0x5dc461c: xor edx, edx
// asm:   0x5dc461e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dc4623: mov rbx, rax
// asm:   0x5dc4626: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dc462b: mov rdi, rbx
// asm:   0x5dc462e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dc4633: mov rdi, rax
// asm:   0x5dc4636: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_075481a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075481a2 = '\x01';
  }
  __this = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  }
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AvailableSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs (const MethodInfo* method);
// 0x5dc4640
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc4687: cmp byte ptr [rip + 0x177e1f8], 0
// asm:   0x5dc468e: je 0x5dc46d7
// asm:   0x5dc469c: test rbx, rbx
// asm:   0x5dc469f: je 0x5dc4703

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_string__o *__this;
  System_StringComparer_c **ppSVar2;
  
  if (Il2CppMethodInitialized_075481a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_Sort_71969e8);
    ppSVar2 = &TypeInfo_System_StringComparer;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075481a3 = '\x01';
    method = (MethodInfo *)ppSVar2;
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs(method);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Sort_395f3e0
            ((System_Collections_Generic_List_object__o *)__this,
             *(System_Collections_Generic_IComparer_T__o **)
              ((long)((Il2CppClass *)TypeInfo_System_StringComparer)->static_fields + 0x18),
             (MethodInfo_395F3E0 *)MethodInfo_System_Collections_Generic_List_string_Sort_71969e8);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$PlaylistManagerSongs
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs (const MethodInfo* method);
// 0x5dc4710

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  int iVar7;
  MethodInfo **ppMVar8;
  
  if (Il2CppMethodInitialized_075481a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    ppMVar8 = &MethodInfo_System_Collections_Generic_List_string_get_Item;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_075481a4 = '\x01';
    method = (MethodInfo *)ppMVar8;
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs(method);
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method);
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_05dc484b:
    ThrowNullReferenceException();
  }
  iVar7 = (__this_00->fields)._size;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < iVar7) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      ThrowNullReferenceException();
    }
  }
  else if (0 < iVar7) {
    iVar7 = 0;
    do {
      pSVar6 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar7,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      bVar5 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar5) {
        pSVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar7,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05dc484b;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (__this_00->fields)._size);
  }
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CustomPlaylistText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText (const MethodInfo* method);
// 0x5dbd3c0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_array *value;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075481a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    ppSVar2 = &"Common.None";
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_075481a5 = '\x01';
    method = (MethodInfo *)ppSVar2;
  }
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size != 0) {
    value = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)__this,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar1 = System_String__Join(", ",value,(MethodInfo *)0x0);
    return pSVar1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.None",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncCustomPlaylist
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dc38b0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  System_String_o *value;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)root;
  if (Il2CppMethodInitialized_075481a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist");
    method_00 = &"settings-sound-custom-playlist";
    il2cpp_codegen_initialize_runtime_metadata(&"settings-sound-custom-playlist");
    Il2CppMethodInitialized_075481a6 = '\x01';
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText((MethodInfo *)method_00)
    ;
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
// 0x5dc3950
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc3b4e: jmp 0x5dc3b69
// asm:   0x5dc3b69: mov dword ptr [rsp + 4], ecx
// asm:   0x5dc3b6d: mov r13, qword ptr [rsp + 0x10]
// asm:   0x5dc3b72: test r13, r13
// asm:   0x5dc3b75: je 0x5dc3c8b

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_00;
  int iVar6;
  uint uVar7;
  int local_54;
  
  if (Il2CppMethodInitialized_075481a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191700);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.available.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.selected.empty");
    Il2CppMethodInitialized_075481a7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = root;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)method_00);
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)method_00)
    ;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor_4fb2fe0
              ((System_Collections_Generic_HashSet_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)__this,
               (MethodInfo_4FB2FE0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191700);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar6 = (__this_00->fields)._size;
      if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        local_54 = 0;
        if (0 < iVar6) {
          pMVar5 = (MethodInfo *)0x0;
          pSVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
          Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId(pSVar3,pMVar5);
          ThrowNullReferenceException();
        }
      }
      else if (iVar6 < 1) {
        local_54 = 0;
      }
      else {
        pMVar5 = (MethodInfo *)0x0;
        local_54 = 0;
        do {
          iVar6 = (int)pMVar5;
          pSVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar6,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
          pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId(pSVar3,pMVar5);
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pSVar3,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          pGVar1 = (root->fields)._State_k__BackingField;
          pSVar3 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                             (pSVar4,(MethodInfo *)0x0);
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dc3c8b;
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar3,!bVar2,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          pSVar3 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                             (pSVar4,(MethodInfo *)0x0);
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dc3c8b;
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar3,bVar2,(MethodInfo *)0x0);
          local_54 = local_54 + (uint)!bVar2;
          uVar7 = iVar6 + 1;
          pMVar5 = (MethodInfo *)(ulong)uVar7;
        } while ((int)uVar7 < (__this_00->fields)._size);
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (__this->fields)._size) {
          pMVar5 = (MethodInfo *)0x0;
          do {
            iVar6 = (int)pMVar5;
            pSVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this,iVar6,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId(pSVar3,pMVar5);
            pGVar1 = (root->fields)._State_k__BackingField;
            pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                               (pSVar3,(MethodInfo *)0x0);
            if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dc3c8b;
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar4,false,(MethodInfo *)0x0);
            pGVar1 = (root->fields)._State_k__BackingField;
            pSVar3 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                               (pSVar3,(MethodInfo *)0x0);
            if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dc3c8b;
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar3,true,(MethodInfo *)0x0);
            uVar7 = iVar6 + 1;
            pMVar5 = (MethodInfo *)(ulong)uVar7;
          } while ((int)uVar7 < (__this->fields)._size);
        }
        pGVar1 = (root->fields)._State_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar1,"settings.sound.customPlaylist.available.empty",local_54 == 0,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar1,"settings.sound.customPlaylist.selected.empty",(__this->fields)._size == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05dc3c8b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SongStateId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId (System_String_o* song, const MethodInfo* method);
// 0x5dc4870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc48ff: jmp 0x5dc4906

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId(System_String_o *song,MethodInfo *method)

{
  uint16_t uVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  int index;
  uint uVar3;
  uint local_1c;
  
  if (Il2CppMethodInitialized_075481a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"x8");
    Il2CppMethodInitialized_075481a8 = '\x01';
  }
  if ((song == (System_String_o *)0x0) &&
     (song = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), song == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((song->fields)._stringLength < 1) {
    uVar3 = 0x811c9dc5;
  }
  else {
    index = 0;
    uVar3 = 0x811c9dc5;
    do {
      uVar1 = System_String__get_Chars(song,index,(MethodInfo *)0x0);
      uVar3 = (uVar1 ^ uVar3) * 0x1000193;
      index = index + 1;
    } while (index < (song->fields)._stringLength);
  }
  local_1c = uVar3;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar2 = System_UInt32__ToString_54dca60
                     (&local_1c,"x8",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SetSongs
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs (System_Collections_Generic_List_string__o* songs, const MethodInfo* method);
// 0x5dc41e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc42df: lea r13, [rip + 0x14d2692]  ; MethodInfo_System_Collections_Generic_List_string_Contains
// asm:   0x5dc42e6: jmp 0x5dc431c
// asm:   0x5dc43f5: lea r12, [rip + 0x17922cc]
// asm:   0x5dc43fc: nop dword ptr [rax]
// asm:   0x5dc4442: jmp 0x5dc4514

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs
               (System_Collections_Generic_List_string__o *songs,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_SoundSettings_o *pSVar3;
  Settings_StringSetting_o *__this;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  int32_t index;
  
  if (Il2CppMethodInitialized_075481a9 == '\0') {
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
    Il2CppMethodInitialized_075481a9 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings == (Settings_SoundSettings_o *)0x0) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((songs != (System_Collections_Generic_List_string__o *)0x0) && (0 < (songs->fields)._size)) {
    index = 0;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        pSVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)songs,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar6 == (System_String_o *)0x0) {
          bVar5 = System_String__IsNullOrEmpty
                            ((System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        }
        else {
          pSVar6 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)songs,index,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
          if (pSVar6 == (System_String_o *)0x0) goto label_05dc4514;
          pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
          bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        }
        if (!bVar5) goto label_05dc4514;
        index = index + 1;
      } while (index < (songs->fields)._size);
    }
    else {
      do {
        pSVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)songs,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar6 == (System_String_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          pSVar6 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)songs,index,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
          if (pSVar6 == (System_String_o *)0x0) goto label_05dc4514;
          pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
        }
        bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if ((!bVar5) &&
           (bVar5 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                               (MethodInfo_395D6D0 *)
                               MethodInfo_System_Collections_Generic_List_string_Contains),
           pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar5)) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_05dc4514;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        index = index + 1;
      } while (index < (songs->fields)._size);
    }
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    __this = (pSVar3->fields).CustomPlaylist;
    if ((__this_00->fields)._size == 0) {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join(",",pSVar7,(MethodInfo *)0x0);
    }
    if (__this != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pSVar6,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
  }
label_05dc4514:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncAfterChange
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc3dd0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481aa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc3830

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_075481aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481aa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    return pGVar2;
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


