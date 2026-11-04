// Type: UI.EditProfileEmotePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileEmotePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileEmotePanel.cs
// --------------------------------

// UI.EditProfileEmotePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileEmotePanel__get_ScrollBar (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfileEmotePanel__get_ScrollBar(UI_EditProfileEmotePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfileEmotePanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileEmotePanel__get_VerticalSpacing (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_EditProfileEmotePanel__get_VerticalSpacing(UI_EditProfileEmotePanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.EditProfileEmotePanel$$Setup
// il2cpp: void UI_EditProfileEmotePanel__Setup (UI_EditProfileEmotePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182279760
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822798aa: movss xmm6, dword ptr [rip + 0x10dfe2a]
// asm:   0x1822798b2: movss xmm7, dword ptr [rip + 0x10e0066]
// asm:   0x1822798ba: nop word ptr [rax + rax]

void UI_EditProfileEmotePanel__Setup
               (UI_EditProfileEmotePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_EmoteSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_BaseMenu_o *pUVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  Settings_BaseSetting_o *pSVar6;
  System_String_o *pSVar7;
  int index;
  int index_00;
  int32_t local_res8 [2];
  System_String_array *local_res10;
  
  if (Il2CppMethodInitialized_1843473f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843473f6 = '\x01';
  }
  index = 0;
  local_res8[0] = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar5,(MethodInfo *)0x0);
  options = UI_EditProfileEmotePanel__GetAvailableEmotes(__this,(MethodInfo *)0x0);
  local_res10 = UI_EditProfileEmotePanel__GetEmotePaths(__this,options,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_EmoteSettings_o *)0x0) {
    do {
      pSVar2 = (pSVar1->fields).TextEmotes;
      if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_182279adb;
      pUVar3 = (__this->fields).SinglePanel;
      pSVar6 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)pSVar2,index,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocaleCommon("Text",(MethodInfo *)0x0);
      local_res8[0] = index + 1;
      pSVar7 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969b70(pSVar5," ",pSVar7,(MethodInfo *)0x0);
      index_00 = 0;
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar6,pSVar5,"",260.0,40.0,false,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < 8);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    while (pSVar2 = (pSVar1->fields).EmojiEmotes, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) {
      pUVar3 = (__this->fields).SinglePanel;
      pSVar6 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)pSVar2,index_00,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocaleCommon("Emoji",(MethodInfo *)0x0);
      local_res8[0] = index_00 + 1;
      pSVar7 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969b70(pSVar5," ",pSVar7,(MethodInfo *)0x0);
      pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar4 == (UI_BaseMenu_o *)0x0) break;
      UI_ElementFactory__CreateIconPickSetting
                (pUVar3,__this_00,pSVar6,pSVar5,options,local_res10,(pUVar4->fields).IconPickPopup,
                 "",(System_String_array *)0x0,180.0,40.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
                 (MethodInfo *)0x0);
      index_00 = index_00 + 1;
      if (7 < index_00) {
        return;
      }
    }
  }
label_182279adb:
  ThrowNullReferenceException();
}


// UI.EditProfileEmotePanel$$GetAvailableEmotes
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetAvailableEmotes (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x1822791a0
// eh: try 0x1822792e0..0x1822794e6 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822792d9: nop dword ptr [rax]
// asm:   0x182279376: mov rdx, qword ptr [rip + 0x1e1e59b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18227937d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182279382: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182279387: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18227938c: test rcx, rcx
// asm:   0x18227938f: jne 0x1822794d5
// asm:   0x182279395: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x182279477: mov rdx, qword ptr [rip + 0x1e1e49a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18227947e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182279483: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182279488: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18227948d: test rcx, rcx
// asm:   0x182279490: jne 0x1822794e6
// asm:   0x182279492: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1822794d5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822794e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_String_array *
UI_EditProfileEmotePanel__GetAvailableEmotes(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *pSVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  undefined1 local_38 [16];
  System_String_o *local_28;
  undefined1 local_20 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_18;
  System_String_o *local_10;
  
  if (Il2CppMethodInitialized_1843473f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_1843473f7 = '\x01';
  }
  local_20 = (undefined1  [8])0x0;
  pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_10 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableEmojis;
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_20 = (undefined1  [8])local_38._0_8_;
    pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
    local_10 = local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (!bVar7) break;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar2] = local_10;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,local_10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)local_10,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_T__o *)pSVar3,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_20 = (undefined1  [8])local_38._0_8_;
      pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
      local_10 = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pSVar6 = local_10;
        if (!bVar7) break;
        if (local_10 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__StartsWith(local_10,"Emoji",(MethodInfo *)0x0);
        if (!bVar7) {
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_00,pSVar6);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar8 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileEmotePanel$$GetEmotePaths
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetEmotePaths (UI_EditProfileEmotePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x1822794f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182279635: mov r9, qword ptr [rip + 0x1e252f4]  ; "Icon"
// asm:   0x18227963c: mov rdx, qword ptr [rip + 0x1e6dacd]  ; "/Icons/Profile/"
// asm:   0x182279643: jmp 0x1822796eb
// asm:   0x1822796dd: mov r9, qword ptr [rip + 0x1e5f0a4]  ; "_0"
// asm:   0x1822796e4: mov rdx, qword ptr [rip + 0x1e6d86d]  ; "/Icons/Emotes/"

System_String_array *
UI_EditProfileEmotePanel__GetEmotePaths
          (UI_EditProfileEmotePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar3;
  System_String_o *str1;
  uint uVar4;
  System_String_o *str3;
  
  if (Il2CppMethodInitialized_1843473f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Emotes/");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Profile/");
    Il2CppMethodInitialized_1843473f8 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    for (uVar4 = 0; (int)uVar4 < (int)options->max_length; uVar4 = uVar4 + 1) {
      if ((uint)options->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = options->m_Items[(int)uVar4];
      if (pSVar2 == (System_String_o *)0x0) goto label_18227974f;
      bVar1 = System_String__StartsWith(pSVar2,"Emoji",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)
                    TypeInfo_UI_UIManager->static_fields->AnimatedEmojis;
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18227974f;
        bVar1 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)pSVar2,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar1) {
          str1 = "/Icons/Emotes/";
          str3 = "_0";
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            str1 = "/Icons/Emotes/";
            str3 = "_0";
          }
          goto label_1822796eb;
        }
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = System_String__Concat_1969b70
                           (TypeInfo_Utility_ResourcePaths->static_fields->UI,"/Icons/Emotes/",pSVar2,
                            (MethodInfo *)0x0);
      }
      else {
        str1 = "/Icons/Profile/";
        str3 = "Icon";
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          str1 = "/Icons/Profile/";
          str3 = "Icon";
        }
label_1822796eb:
        pSVar2 = System_String__Concat_1969590
                           (TypeInfo_Utility_ResourcePaths->static_fields->UI,str1,pSVar2,str3,
                            (MethodInfo *)0x0);
      }
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_18227974f;
      il2cpp_runtime_helper_180012890(__this_01,pSVar2);
    }
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar3 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_01,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar3;
    }
  }
label_18227974f:
  ThrowNullReferenceException();
}


// UI.EditProfileEmotePanel$$.ctor
// il2cpp: void UI_EditProfileEmotePanel___ctor (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_EditProfileEmotePanel___ctor(UI_EditProfileEmotePanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


