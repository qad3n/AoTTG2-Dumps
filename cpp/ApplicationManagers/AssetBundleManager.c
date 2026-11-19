// Type: ApplicationManagers.AssetBundleManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/AssetBundleManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs
// --------------------------------

// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___ctor (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5e0cfc0

void ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___ctor
               (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$<IsBuiltinPipelineShader>b__0
// il2cpp: bool ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___IsBuiltinPipelineShader_b__0 (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, System_String_o* mode, const MethodInfo* method);
// 0x5e0e2f0

bool ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___IsBuiltinPipelineShader_b__0
               (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *__this,System_String_o *mode,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(mode,(__this->fields).lightMode,5,(MethodInfo *)0x0);
  return bVar1;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18___ctor (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e0b1d0

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18___ctor
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x5e0e310

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__MoveNext (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x5e0e320
// eh: try 0x5e0e534..0x5e0e566 -> pad 0x5e0ea3b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e0e78d..0x5e0e79a -> pad 0x5e0e957 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e0e96e..0x5e0e989 -> pad 0x5e0ea27 cleanup
// eh: try 0x5e0e9fe..0x5e0ea03 -> pad 0x5e0ea37 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e0ea14..0x5e0ea25 -> pad 0x5e0ea25 cleanup
// eh: try 0x5e0ea2a..0x5e0ea2f -> pad 0x5e0ea99 catch (...) [compiler noexcept guard]
// eh: try 0x5e0ea53..0x5e0ea58 -> pad 0x5e0ea8a cleanup
// eh: try 0x5e0ea8d..0x5e0ea97 -> pad 0x5e0ea99 catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0e5ff: jmp 0x5e0ea6f
// asm:   0x5e0e81e: nop 
// asm:   0x5e0e957: mov r14, rax
// asm:   0x5e0e95a: cmp edx, 1
// asm:   0x5e0e95d: jne 0x5e0ea2f
// asm:   0x5e0e963: mov rdi, r14
// asm:   0x5e0e966: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0e96b: mov rbp, rax
// asm:   0x5e0e96e: lea rdi, [rip + 0x146974b]  ; TypeInfo_System_Exception
// asm:   0x5e0e975: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0e97a: mov rcx, qword ptr [rbp]
// asm:   0x5e0e97e: mov rsi, qword ptr [rcx]
// asm:   0x5e0e981: mov rdi, rax
// asm:   0x5e0e984: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e0e989: test al, al
// asm:   0x5e0e98b: je 0x5e0ea03
// asm:   0x5e0e98d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0e992: xor ebp, ebp
// asm:   0x5e0e994: lea rax, [rip + 0x146ca55]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e0e99b: mov rdi, qword ptr [rax]
// asm:   0x5e0e99e: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5e0e9a5: jne 0x5e0e7b5
// asm:   0x5e0e9ab: jmp 0x5e0e7b0
// asm:   0x5e0ea03: mov edi, 8
// asm:   0x5e0ea08: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e0ea0d: mov rcx, qword ptr [rbp]
// asm:   0x5e0ea11: mov qword ptr [rax], rcx
// asm:   0x5e0ea14: lea rsi, [rip + 0x101eae5]
// asm:   0x5e0ea1b: mov rdi, rax
// asm:   0x5e0ea1e: xor edx, edx
// asm:   0x5e0ea20: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e0ea25: jmp 0x5e0ea27
// asm:   0x5e0ea27: mov r14, rax
// asm:   0x5e0ea2a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0ea2f: mov rdi, r14
// asm:   0x5e0ea32: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0ea37: jmp 0x5e0ea3b
// asm:   0x5e0ea39: jmp 0x5e0ea3b
// asm:   0x5e0ea3b: mov r14, rax
// asm:   0x5e0ea3e: cmp edx, 1
// asm:   0x5e0ea41: jne 0x5e0ea8d
// asm:   0x5e0ea43: mov rdi, r14
// asm:   0x5e0ea46: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0ea4b: mov rbx, qword ptr [rax]
// asm:   0x5e0ea4e: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5e0ea53: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0ea58: lea rax, [rip + 0x14803c9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_Dispose
// asm:   0x5e0ea5f: mov rsi, qword ptr [rax]
// asm:   0x5e0ea62: mov rdi, rsp
// asm:   0x5e0ea65: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e0ea6a: test rbx, rbx
// asm:   0x5e0ea6d: jne 0x5e0ea82
// asm:   0x5e0ea82: mov rdi, rbx
// asm:   0x5e0ea85: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e0ea8a: mov r14, rax
// asm:   0x5e0ea8d: lea rdi, [rsp + 0x38]
// asm:   0x5e0ea92: call 0x2fe0330  ; il2cpp_runtime_helper_02fe0330()
// asm:   0x5e0ea97: jmp 0x5e0ea2f
// asm:   0x5e0ea99: mov rdi, rax
// asm:   0x5e0ea9c: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__MoveNext
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Video_VideoPlayer_o *__this_01;
  UnityEngine_Video_VideoPlayer_array *pUVar4;
  System_String_array *pSVar5;
  UI_CustomAssetVideoUrlPopup_o *pUVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  uint uVar9;
  int32_t iVar10;
  UI_InGameMenu_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  System_Collections_Generic_List_VideoPlayer__o *pSVar13;
  System_Collections_Generic_List_string__o *urls;
  System_String_array *pSVar14;
  System_Object_array *pSVar15;
  System_String_o *pSVar16;
  uint uVar17;
  UI_InGameMenu_o *pUVar18;
  uint uVar19;
  UI_InGameMenu_o **ppUVar20;
  System_Collections_Generic_List_Enumerator_T__o SStack_78;
  ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *pAStack_60;
  UI_InGameMenu_o **ppUStack_58;
  UnityEngine_Object_o *pUStack_50;
  System_Collections_Generic_List_VideoPlayer__o **ppSStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_075483ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_AssetBundle_LoadAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_VideoPlayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_VideoPlayer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_VideoPlayer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_VideoPlayer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_VideoPlayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&".prefab");
    Il2CppMethodInitialized_075483ff = '\x01';
  }
  SStack_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.fields._index = 0;
  SStack_78.fields._version = 0;
  SStack_78.fields._current = (Il2CppObject *)0x0;
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    pUVar11 = (__this->fields)._menu_5__2;
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar11 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar11 != (UI_InGameMenu_o *)0x0) goto label_05e0e487;
label_05e0e5a5:
      (__this->fields)._menu_5__2 = (UI_InGameMenu_o *)0x0;
label_05e0e5ef:
      ppUVar20 = &(__this->fields)._menu_5__2;
      Il2CppCodeGenWriteBarrier(ppUVar20);
      pUVar11 = *ppUVar20;
    }
    else {
      pUVar11 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar11 == (UI_InGameMenu_o *)0x0) goto label_05e0e5a5;
label_05e0e487:
      bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if ((((UI_BaseMenu_c *)pUVar11->klass)->_2).typeHierarchyDepth < bVar2) {
        pUVar18 = (UI_InGameMenu_o *)0x0;
      }
      else {
        pUVar18 = (UI_InGameMenu_o *)0x0;
        if ((((UI_BaseMenu_c *)pUVar11->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_UI_InGameMenu) {
          pUVar18 = pUVar11;
        }
      }
      ppUVar20 = &(__this->fields)._menu_5__2;
      (__this->fields)._menu_5__2 = pUVar18;
      if ((((UI_BaseMenu_c *)pUVar11->klass)->_2).typeHierarchyDepth < bVar2) goto label_05e0e5ef;
      Il2CppCodeGenWriteBarrier(ppUVar20);
      pUVar11 = *ppUVar20;
    }
    if (pUVar11 == (UI_InGameMenu_o *)0x0) {
      return false;
    }
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager)->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e0e9f4;
    pUVar12 = (UnityEngine_Object_o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_00,(Il2CppObject *)(__this->fields).bundle,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return false;
    }
    ppUStack_58 = &(__this->fields)._menu_5__2;
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_VideoPlayer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar13,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_VideoPlayer_ctor);
    ppSStack_48 = &(__this->fields)._videoPlayers_5__3;
    (__this->fields)._videoPlayers_5__3 = pSVar13;
    Il2CppCodeGenWriteBarrier(ppSStack_48);
    urls = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)urls,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((pUVar12 == (UnityEngine_Object_o *)0x0) ||
       (pAStack_60 = __this, pUStack_50 = pUVar12,
       pSVar14 = UnityEngine_AssetBundle__GetAllAssetNames
                           ((UnityEngine_AssetBundle_o *)pUVar12,(MethodInfo *)0x0),
       pSVar14 == (System_String_array *)0x0)) goto label_05e0e9f4;
    uVar9 = (uint)pSVar14->max_length;
    if (0 < (int)uVar9) {
      uVar19 = 0;
      do {
        if (uVar9 <= uVar19) {
label_05e0e9f9:
          ThrowIndexOutOfRangeException();
        }
        pSVar16 = pSVar14->m_Items[(int)uVar19];
        if (pSVar16 == (System_String_o *)0x0) goto label_05e0e9f4;
        bVar8 = System_String__EndsWith(pSVar16,".prefab",(MethodInfo *)0x0);
        if (bVar8) {
          pUVar12 = (UnityEngine_Object_o *)
                    UnityEngine_AssetBundle__LoadAsset_object_
                              ((UnityEngine_AssetBundle_o *)pUStack_50,pSVar16,
                               (MethodInfo_33FC000 *)MethodInfo_UnityEngine_AssetBundle_LoadAsset_GameObject);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar8) {
            if ((pUVar12 == (UnityEngine_Object_o *)0x0) ||
               (pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object_
                                    ((UnityEngine_GameObject_o *)pUVar12,true,
                                     (MethodInfo_353C0B0 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_VideoPlayer),
               pSVar15 == (System_Object_array *)0x0)) goto label_05e0e9f4;
            uVar9 = (uint)pSVar15->max_length;
            if (0 < (int)uVar9) {
              uVar17 = 0;
              do {
                if (uVar9 <= uVar17) goto label_05e0e9f9;
                __this_01 = (UnityEngine_Video_VideoPlayer_o *)pSVar15->m_Items[(int)uVar17];
                if (__this_01 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto label_05e0e9f4;
                iVar10 = UnityEngine_Video_VideoPlayer__get_source(__this_01,(MethodInfo *)0x0);
                if (iVar10 == 1) {
                  pSVar16 = UnityEngine_Video_VideoPlayer__get_url(__this_01,(MethodInfo *)0x0);
                  bVar8 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
                  pMVar7 = MethodInfo_System_Collections_Generic_List_VideoPlayer_Add;
                  if (!bVar8) {
                    pSVar13 = *ppSStack_48;
                    if (pSVar13 == (System_Collections_Generic_List_VideoPlayer__o *)0x0) goto label_05e0e9f4;
                    piVar1 = &(pSVar13->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar4 = (pSVar13->fields)._items;
                    if (pUVar4 == (UnityEngine_Video_VideoPlayer_array *)0x0) goto label_05e0e9f4;
                    uVar9 = (pSVar13->fields)._size;
                    if (uVar9 < (uint)pUVar4->max_length) {
                      (pSVar13->fields)._size = uVar9 + 1;
                      pUVar4->m_Items[(int)uVar9] = __this_01;
                      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar9);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar13,
                                 (Il2CppObject *)__this_01,
                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                    }
                    pSVar16 = UnityEngine_Video_VideoPlayer__get_url(__this_01,(MethodInfo *)0x0);
                    if (urls == (System_Collections_Generic_List_string__o *)0x0) goto label_05e0e9f4;
                    bVar8 = System_Collections_Generic_List_object___Contains
                                      ((System_Collections_Generic_List_object__o *)urls,
                                       (Il2CppObject *)pSVar16,
                                       (MethodInfo_395D6D0 *)
                                       MethodInfo_System_Collections_Generic_List_string_Contains);
                    if (!bVar8) {
                      pSVar16 = UnityEngine_Video_VideoPlayer__get_url(__this_01,(MethodInfo *)0x0);
                      pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
                      piVar1 = &(urls->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar5 = (urls->fields)._items;
                      if (pSVar5 == (System_String_array *)0x0) goto label_05e0e9f4;
                      uVar9 = (urls->fields)._size;
                      if (uVar9 < (uint)pSVar5->max_length) {
                        (urls->fields)._size = uVar9 + 1;
                        pSVar5->m_Items[(int)uVar9] = pSVar16;
                        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar9);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)urls,(Il2CppObject *)pSVar16,
                                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                      }
                    }
                  }
                }
                uVar17 = uVar17 + 1;
                uVar9 = (uint)pSVar15->max_length;
              } while ((int)uVar17 < (int)uVar9);
            }
          }
        }
        uVar19 = uVar19 + 1;
        uVar9 = (uint)pSVar14->max_length;
      } while ((int)uVar19 < (int)uVar9);
    }
    __this = pAStack_60;
    if (urls == (System_Collections_Generic_List_string__o *)0x0) goto label_05e0e9f4;
    if ((urls->fields)._size == 0) {
      return false;
    }
    if ((*ppUStack_58 == (UI_InGameMenu_o *)0x0) ||
       (pUVar6 = ((*ppUStack_58)->fields)._customAssetVideoUrlPopup,
       pUVar6 == (UI_CustomAssetVideoUrlPopup_o *)0x0)) goto label_05e0e9f4;
    UI_CustomAssetVideoUrlPopup__Show(pUVar6,urls,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._menu_5__2;
  }
  if (pUVar11 != (UI_InGameMenu_o *)0x0) {
    pUVar6 = (pUVar11->fields)._customAssetVideoUrlPopup;
    if (pUVar6 != (UI_CustomAssetVideoUrlPopup_o *)0x0) {
      if ((pUVar6->fields).Done == false) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      if ((pUVar6->fields).Result != 1) {
        pSVar13 = (__this->fields)._videoPlayers_5__3;
        if (pSVar13 == (System_Collections_Generic_List_VideoPlayer__o *)0x0) goto label_05e0e9f4;
        System_Collections_Generic_List_object___GetEnumerator
                  (&SStack_78,(System_Collections_Generic_List_object__o *)pSVar13,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_VideoPlayer_GetEnumerator)
        ;
        uStack_40 = 0;
        puStack_38 = (undefined1 *)&SStack_78;
        while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_78,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_MoveNext),
              bVar8) {
          if ((UnityEngine_Video_VideoPlayer_o *)SStack_78.fields._current ==
              (UnityEngine_Video_VideoPlayer_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Video_VideoPlayer__set_url
                    ((UnityEngine_Video_VideoPlayer_o *)SStack_78.fields._current,
                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_Dispose);
      }
      return false;
    }
  }
label_05e0e9f4:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x5e0eab0

Il2CppObject *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x5e0eac0

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18_System_Collections_IEnumerat
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x5e0eb00

Il2CppObject *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15___ctor (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e0af50

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15___ctor
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0eb10

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07548401 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07548401 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._request_5__3;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_05e0ebaf;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0ebaf:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__MoveNext (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0ebc0
// eh: try 0x5e0ec68..0x5e0f0b6 -> pad 0x5e0f0d6 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e0f0f2..0x5e0f0f7 -> pad 0x5e0f10e cleanup
// eh: try 0x5e0f111..0x5e0f11b -> pad 0x5e0f123 catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0ec49: jmp 0x5e0f042
// asm:   0x5e0eed4: jmp 0x5e0f042
// asm:   0x5e0efd9: nop dword ptr [rax]
// asm:   0x5e0f0b6: jmp 0x5e0f0da
// asm:   0x5e0f0b8: jmp 0x5e0f0da
// asm:   0x5e0f0ba: jmp 0x5e0f0da
// asm:   0x5e0f0bc: jmp 0x5e0f0da
// asm:   0x5e0f0be: jmp 0x5e0f0da
// asm:   0x5e0f0c0: jmp 0x5e0f0da
// asm:   0x5e0f0c2: jmp 0x5e0f0da
// asm:   0x5e0f0c4: jmp 0x5e0f0da
// asm:   0x5e0f0c6: jmp 0x5e0f0da
// asm:   0x5e0f0c8: jmp 0x5e0f0da
// asm:   0x5e0f0ca: jmp 0x5e0f0da
// asm:   0x5e0f0cc: jmp 0x5e0f0da
// asm:   0x5e0f0ce: jmp 0x5e0f0da
// asm:   0x5e0f0d0: jmp 0x5e0f0da
// asm:   0x5e0f0d2: jmp 0x5e0f0da
// asm:   0x5e0f0d4: jmp 0x5e0f0da
// asm:   0x5e0f0d6: jmp 0x5e0f0da
// asm:   0x5e0f0d8: jmp 0x5e0f0da
// asm:   0x5e0f0da: mov rbx, rax
// asm:   0x5e0f0dd: cmp edx, 1
// asm:   0x5e0f0e0: jne 0x5e0f111
// asm:   0x5e0f0e2: mov rdi, rbx
// asm:   0x5e0f0e5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0f0ea: mov rbx, qword ptr [rax]
// asm:   0x5e0f0ed: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5e0f0f2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0f0f7: test rbx, rbx
// asm:   0x5e0f0fa: je 0x5e0f085
// asm:   0x5e0f0fc: mov rdi, qword ptr [rsp + 8]
// asm:   0x5e0f101: call 0x2fe06a0  ; il2cpp_runtime_helper_02fe06a0()
// asm:   0x5e0f106: mov rdi, rbx
// asm:   0x5e0f109: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e0f10e: mov rbx, rax
// asm:   0x5e0f111: lea rdi, [rsp + 0x10]
// asm:   0x5e0f116: call 0x2fe0360  ; il2cpp_runtime_helper_02fe0360()
// asm:   0x5e0f11b: mov rdi, rbx
// asm:   0x5e0f11e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0f123: mov rdi, rax
// asm:   0x5e0f126: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__MoveNext
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *pAVar4;
  bool bVar5;
  int iVar6;
  UnityEngine_Networking_UnityWebRequest_o *pUVar7;
  UnityEngine_Networking_DownloadHandlerFile_o *__this_00;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar8;
  int64_t iVar9;
  System_String_o *location;
  VirtualInvokeData *pVVar10;
  uint64_t uVar11;
  MethodInfo *method_00;
  ulong uVar12;
  long lVar13;
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *local_30;
  undefined8 local_28;
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o **local_20;
  
  local_30 = __this;
  if (Il2CppMethodInitialized_07548400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_DownloadHandlerFile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest);
    il2cpp_codegen_initialize_runtime_metadata(&"Location");
    Il2CppMethodInitialized_07548400 = '\x01';
  }
  local_28 = 0;
  local_20 = &local_30;
  iVar6 = (__this->fields).__1__state;
  if (iVar6 == 1) {
    (__this->fields).__1__state = -3;
    goto label_05e0ed41;
  }
  if (iVar6 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  (__this->fields)._redirects_5__2 = 0;
  do {
    pSVar1 = (__this->fields).url;
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor(pUVar7,pSVar1,(MethodInfo *)0x0);
    (local_30->fields)._request_5__3 = pUVar7;
    Il2CppCodeGenWriteBarrier(&(local_30->fields)._request_5__3);
    (local_30->fields).__1__state = -3;
    pUVar7 = (local_30->fields)._request_5__3;
    if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_redirectLimit(pUVar7,0,(MethodInfo *)0x0);
    pSVar1 = (local_30->fields).path;
    pUVar7 = (local_30->fields)._request_5__3;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_DownloadHandlerFile);
    UnityEngine_Networking_DownloadHandlerFile___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    if ((__this_00 == (UnityEngine_Networking_DownloadHandlerFile_o *)0x0) ||
       (UnityEngine_Networking_DownloadHandlerFile__set_removeFileOnAbort(__this_00,true,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar7,(UnityEngine_Networking_DownloadHandler_o *)__this_00,(MethodInfo *)0x0);
    pUVar7 = (local_30->fields)._request_5__3;
    if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar7,(MethodInfo *)0x0);
    (local_30->fields)._op_5__4 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(local_30->fields)._op_5__4);
    __this = local_30;
label_05e0ed41:
    pUVar8 = (__this->fields)._op_5__4;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar5 = UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)pUVar8,(MethodInfo *)0x0);
    pUVar7 = (local_30->fields)._request_5__3;
    if (!bVar5) {
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar11 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar7,(MethodInfo *)0x0);
      if (uVar11 < 0x3b9aca01) {
        (local_30->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(local_30->fields).__2__current);
        (local_30->fields).__1__state = 1;
        return true;
      }
label_05e0ef7e:
      pAVar4 = local_30;
      if (Il2CppMethodInitialized_07548401 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_07548401 = '\x01';
      }
      (pAVar4->fields).__1__state = -1;
      pUVar7 = (pAVar4->fields)._request_5__3;
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        return false;
      }
      pIVar2 = (Il2CppClass *)pUVar7->klass;
      uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar12 == 0) goto label_05e0eff3;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      goto label_05e0efe0;
    }
    if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar9 = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar7,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(iVar9 - 300);
    if ((MethodInfo *)0xffffffffffffff9b < method_00) goto label_05e0ef7e;
    if (iVar9 - 400U < 0xffffffffffffff9c) {
label_05e0eed9:
      pAVar4 = local_30;
      if (Il2CppMethodInitialized_07548401 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_07548401 = '\x01';
      }
      (pAVar4->fields).__1__state = -1;
      pUVar7 = (pAVar4->fields)._request_5__3;
      if (pUVar7 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pIVar2 = (Il2CppClass *)pUVar7->klass;
        uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar12 == 0) goto label_05e0ef53;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        goto label_05e0ef40;
      }
      break;
    }
    pUVar7 = (local_30->fields)._request_5__3;
    if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (local_30->fields).url;
    location = UnityEngine_Networking_UnityWebRequest__GetResponseHeader
                         (pUVar7,"Location",(MethodInfo *)0x0);
    pAVar4 = local_30;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar5 = ApplicationManagers_AssetBundleManager__TryGetRedirectUrl
                      (pSVar1,location,&(pAVar4->fields).url,method_00);
    if (!bVar5) goto label_05e0eed9;
    (local_30->fields)._op_5__4 = (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_30->fields)._op_5__4);
    pAVar4 = local_30;
    if (Il2CppMethodInitialized_07548401 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07548401 = '\x01';
    }
    (pAVar4->fields).__1__state = -1;
    pUVar7 = (pAVar4->fields)._request_5__3;
    if (pUVar7 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar2 = (Il2CppClass *)pUVar7->klass;
      uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05e0ee9d;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar12 * 0x10 != lVar13);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0ee9d:
      (*pVVar10->methodPtr)((Il2CppObject *)pUVar7,pVVar10->method);
    }
    (local_30->fields)._request_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_30->fields)._request_5__3);
    iVar6 = (local_30->fields)._redirects_5__2 + 1;
    (local_30->fields)._redirects_5__2 = iVar6;
    __this = local_30;
  } while (iVar6 < 4);
  goto label_05e0f042;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_05e0efe0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_05e0f07c;
    }
  }
label_05e0eff3:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)pUVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0f07c:
  (*pVVar10->methodPtr)((Il2CppObject *)pUVar7,pVVar10->method);
  return false;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_05e0ef40:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_05e0f039;
    }
  }
label_05e0ef53:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)pUVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0f039:
  (*pVVar10->methodPtr)((Il2CppObject *)pUVar7,pVVar10->method);
label_05e0f042:
  bVar5 = System_IO_File__Exists((local_30->fields).path,(MethodInfo *)0x0);
  if (bVar5) {
    System_IO_File__Delete((local_30->fields).path,(MethodInfo *)0x0);
    return false;
  }
  return false;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$<>m__Finally1
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15____m__Finally1 (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0f130

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15____m__Finally1
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07548401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07548401 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._request_5__3;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_05e0f1bf;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0f1bf:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0f1d0

Il2CppObject *
ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0f1e0

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x5e0f220

Il2CppObject *
ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14___ctor (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e0aeb0

void ApplicationManagers_AssetBundleManager__LoadBundle_d__14___ctor
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x5e0f230

void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadBundle_d__14__MoveNext (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x5e0f240

bool ApplicationManagers_AssetBundleManager__LoadBundle_d__14__MoveNext
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  UI_CustomAssetUrlPopup_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UI_BaseMenu_o *obj;
  bool bVar3;
  System_String_o *pSVar4;
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this_00;
  UnityEngine_AssetBundle_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this_01;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  UI_InGameMenu_o *pUVar9;
  MethodInfo *pMVar10;
  
  if (Il2CppMethodInitialized_07548402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07548402 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar4 = (__this->fields).bundle;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar3 = Utility_Util__IsValidFileName(pSVar4,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)(__this->fields).bundle,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (bVar3) {
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pUVar6 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)(__this->fields).bundle,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)(__this->fields).bundle,(Il2CppObject *)0x0,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
    if ((__this->fields).editor == false) {
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      pSVar4 = System_String__Concat_5301f10
                         (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,"/"
                          ,(__this->fields).bundle,(MethodInfo *)0x0);
      bVar3 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
      if (!bVar3) {
        if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
        }
        pSVar4 = System_String__Concat_5301f10
                           (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,"/"
                            ,(__this->fields).bundle,(MethodInfo *)0x0);
        (__this->fields)._path_5__2 = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._path_5__2);
        pMVar10 = (MethodInfo *)0x0;
        bVar3 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
          pSVar4 = (__this->fields).bundle;
          pUVar5 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)pSVar4,(Il2CppObject *)pUVar5,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pUVar6 = (UnityEngine_Object_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)(__this->fields).bundle,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item
                                 );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pMVar10 = (MethodInfo *)0x0;
              bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar3) {
                pSVar4 = (__this->fields).bundle;
                if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
                }
                pIVar8 = (Il2CppObject *)
                         ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(pSVar4,pMVar10);
                (__this->fields).__2__current = pIVar8;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 2;
                return true;
              }
              return false;
            }
          }
          break;
        }
        pSVar4 = (__this->fields).url;
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        bVar3 = ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(pSVar4,pMVar10);
        if (!bVar3) {
          return false;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        pUVar9 = (UI_InGameMenu_o *)
                 il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
        (__this->fields)._menu_5__3 = pUVar9;
        il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
        Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__3);
        pUVar9 = (__this->fields)._menu_5__3;
        if ((pUVar9 == (UI_InGameMenu_o *)0x0) ||
           (pUVar1 = (pUVar9->fields)._customAssetUrlPopup, pUVar1 == (UI_CustomAssetUrlPopup_o *)0x0)) break;
        UI_CustomAssetUrlPopup__Show(pUVar1,(__this->fields).url,(MethodInfo *)0x0);
        pUVar9 = (__this->fields)._menu_5__3;
        goto joined_r0x05e0f4d5;
      }
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    pSVar4 = (__this->fields).bundle;
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      pSVar7 = (__this->fields).bundle;
    }
    else {
      pSVar7 = pSVar4;
    }
    pSVar7 = System_String__Concat_5301f10
                       (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,"/",
                        pSVar7,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_AssetBundle__LoadFromFile(pSVar7,(MethodInfo *)0x0);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)pSVar4,(Il2CppObject *)pUVar5,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar6 = (UnityEngine_Object_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)(__this->fields).bundle,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pMVar10 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar4 = (__this->fields).bundle;
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          pIVar8 = (Il2CppObject *)
                   ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(pSVar4,pMVar10);
          (__this->fields).__2__current = pIVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 1;
          return true;
        }
        return false;
      }
    }
    break;
  case 1:
  case 2:
    (__this->fields).__1__state = -1;
    return false;
  case 3:
    (__this->fields).__1__state = -1;
    pUVar9 = (__this->fields)._menu_5__3;
joined_r0x05e0f4d5:
    if ((pUVar9 != (UI_InGameMenu_o *)0x0) &&
       (pUVar1 = (pUVar9->fields)._customAssetUrlPopup, pUVar1 != (UI_CustomAssetUrlPopup_o *)0x0)) {
      if ((pUVar1->fields).Done == false) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 3;
      }
      else {
        if ((pUVar1->fields).Confirmed == false) {
label_05e0f681:
          (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__3);
          (__this->fields)._path_5__2 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._path_5__2);
          return false;
        }
        pSVar4 = (__this->fields).url;
        pSVar7 = (__this->fields)._path_5__2;
        if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager)->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        if (Il2CppMethodInitialized_075483f1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
          Il2CppMethodInitialized_075483f1 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).__1__state = 0;
        (__this_00->fields).url = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).url);
        (__this_00->fields).path = pSVar7;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
        (__this->fields).__2__current = (Il2CppObject *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 4;
      }
      return true;
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    bVar3 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    pSVar4 = (__this->fields).bundle;
    pUVar5 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)pSVar4,(Il2CppObject *)pUVar5,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar6 = (UnityEngine_Object_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)(__this->fields).bundle,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          pSVar4 = (__this->fields).bundle;
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          if (Il2CppMethodInitialized_075483f4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18);
            Il2CppMethodInitialized_075483f4 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18)
          ;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          (__this_01->fields).__1__state = 0;
          (__this_01->fields).bundle = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).bundle);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 5;
          return true;
        }
        System_IO_File__Delete((__this->fields)._path_5__2,(MethodInfo *)0x0);
        goto label_05e0f681;
      }
    }
    break;
  case 5:
    (__this->fields).__1__state = -1;
    goto label_05e0f681;
  default:
    return false;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x5e0fa30

Il2CppObject *
ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x5e0fa40

void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x5e0fa80

Il2CppObject *
ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager$$Init
// il2cpp: void ApplicationManagers_AssetBundleManager__Init (const MethodInfo* method);
// 0x5e08e60

void ApplicationManagers_AssetBundleManager__Init(MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager_o *pAVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075483ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
    Il2CppMethodInitialized_075483ec = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
  TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance = pAVar1;
  method_00 = (MethodInfo *)TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,(MethodInfo *)0x0);
  Utility_FolderPaths__TryCreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_AssetBundleManager__OnApplicationQuit (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x5e0a9c0

void ApplicationManagers_AssetBundleManager__OnApplicationQuit
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075483ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    Il2CppMethodInitialized_075483ed = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager;
  }
  TypeInfo_ApplicationManagers_AssetBundleManager = (ApplicationManagers_AssetBundleManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    ApplicationManagers_AssetBundleManager__ClearTemp((MethodInfo *)klass);
    return;
  }
  ApplicationManagers_AssetBundleManager__ClearTemp((MethodInfo *)klass);
  return;
}


// ApplicationManagers.AssetBundleManager$$ClearTemp
// il2cpp: void ApplicationManagers_AssetBundleManager__ClearTemp (const MethodInfo* method);
// 0x5e0a860
// eh: try 0x5e0a8ba..0x5e0a8d9 -> pad 0x5e0a8db (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e0a8f4..0x5e0a99a -> pad 0x5e0a99f (+1 call sites) cleanup
// eh: try 0x5e0a9a2..0x5e0a9a7 -> pad 0x5e0a9af catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0a8db: jmp 0x5e0a8dd
// asm:   0x5e0a8dd: mov rbx, rax
// asm:   0x5e0a8e0: cmp edx, 1
// asm:   0x5e0a8e3: jne 0x5e0a9a7
// asm:   0x5e0a8e9: mov rdi, rbx
// asm:   0x5e0a8ec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0a8f1: mov rbx, rax
// asm:   0x5e0a8f4: lea rdi, [rip + 0x146d7c5]  ; TypeInfo_System_Exception
// asm:   0x5e0a8fb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a900: mov rcx, qword ptr [rbx]
// asm:   0x5e0a903: mov rsi, qword ptr [rcx]
// asm:   0x5e0a906: mov rdi, rax
// asm:   0x5e0a909: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e0a90e: test al, al
// asm:   0x5e0a910: je 0x5e0a979
// asm:   0x5e0a912: mov rbx, qword ptr [rbx]
// asm:   0x5e0a915: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0a91a: test rbx, rbx
// asm:   0x5e0a91d: je 0x5e0a99a
// asm:   0x5e0a91f: mov rax, qword ptr [rbx]
// asm:   0x5e0a922: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e0a929: mov rdi, rbx
// asm:   0x5e0a92c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e0a932: mov rbx, rax
// asm:   0x5e0a935: lea rdi, [rip + 0x14d05cc]  ; "Error deleting custom asset web folder: {0}"
// asm:   0x5e0a93c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a941: mov rdi, rax
// asm:   0x5e0a944: mov rsi, rbx
// asm:   0x5e0a947: xor edx, edx
// asm:   0x5e0a949: call 0x53f51c0  ; System_String__Format()
// asm:   0x5e0a94e: mov rbx, rax
// asm:   0x5e0a951: lea rdi, [rip + 0x146ccf0]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e0a958: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0a95d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e0a964: jne 0x5e0a96e
// asm:   0x5e0a966: mov rdi, rax
// asm:   0x5e0a969: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e0a96e: mov rdi, rbx
// asm:   0x5e0a971: xor esi, esi
// asm:   0x5e0a973: pop rbx
// asm:   0x5e0a974: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e0a979: mov edi, 8
// asm:   0x5e0a97e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e0a983: mov rcx, qword ptr [rbx]
// asm:   0x5e0a986: mov qword ptr [rax], rcx
// asm:   0x5e0a989: lea rsi, [rip + 0x1022b70]
// asm:   0x5e0a990: mov rdi, rax
// asm:   0x5e0a993: xor edx, edx
// asm:   0x5e0a995: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e0a99a: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e0a99f: mov rbx, rax
// asm:   0x5e0a9a2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0a9a7: mov rdi, rbx
// asm:   0x5e0a9aa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0a9af: mov rdi, rax
// asm:   0x5e0a9b2: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AssetBundleManager__ClearTemp(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075483ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_075483ee = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    System_IO_Directory__Delete
              (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,true,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AssetBundleManager$$Clear
// il2cpp: void ApplicationManagers_AssetBundleManager__Clear (const MethodInfo* method);
// 0x5e0aa20
// eh: try 0x5e0abd4..0x5e0ad5d -> pad 0x5e0ad6a (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e0ad82..0x5e0ad87 -> pad 0x5e0ada6 cleanup
// eh: try 0x5e0ada9..0x5e0adb3 -> pad 0x5e0ae0e catch (...) [compiler noexcept guard]
// eh: try 0x5e0adcf..0x5e0add4 -> pad 0x5e0adf9 cleanup
// eh: try 0x5e0adfc..0x5e0ae06 -> pad 0x5e0ae0e catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0abcd: nop dword ptr [rax]
// asm:   0x5e0ad62: jmp 0x5e0ad6a
// asm:   0x5e0ad64: jmp 0x5e0ad6a
// asm:   0x5e0ad66: jmp 0x5e0ad6a
// asm:   0x5e0ad68: jmp 0x5e0ad6a
// asm:   0x5e0ad6a: mov rbx, rax
// asm:   0x5e0ad6d: cmp edx, 1
// asm:   0x5e0ad70: jne 0x5e0ada9
// asm:   0x5e0ad72: mov rdi, rbx
// asm:   0x5e0ad75: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0ad7a: mov rbx, qword ptr [rax]
// asm:   0x5e0ad7d: mov qword ptr [rsp + 8], rbx
// asm:   0x5e0ad82: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0ad87: lea rax, [rip + 0x1485042]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_Dispose
// asm:   0x5e0ad8e: mov rsi, qword ptr [rax]
// asm:   0x5e0ad91: lea rdi, [rsp + 0x20]
// asm:   0x5e0ad96: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e0ad9b: test rbx, rbx
// asm:   0x5e0ad9e: je 0x5e0ac35
// asm:   0x5e0ada4: jmp 0x5e0adf1
// asm:   0x5e0ada6: mov rbx, rax
// asm:   0x5e0ada9: lea rdi, [rsp + 8]
// asm:   0x5e0adae: call 0x2fe0200  ; il2cpp_runtime_helper_02fe0200()
// asm:   0x5e0adb3: jmp 0x5e0ae06
// asm:   0x5e0adb5: jmp 0x5e0adb7
// asm:   0x5e0adb7: mov rbx, rax
// asm:   0x5e0adba: cmp edx, 1
// asm:   0x5e0adbd: jne 0x5e0adfc
// asm:   0x5e0adbf: mov rdi, rbx
// asm:   0x5e0adc2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0adc7: mov rbx, qword ptr [rax]
// asm:   0x5e0adca: mov qword ptr [rsp + 8], rbx
// asm:   0x5e0adcf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0add4: lea rax, [rip + 0x1484ddd]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x5e0addb: mov rsi, qword ptr [rax]
// asm:   0x5e0adde: lea rdi, [rsp + 0x40]
// asm:   0x5e0ade3: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e0ade8: test rbx, rbx
// asm:   0x5e0adeb: je 0x5e0ad17
// asm:   0x5e0adf1: mov rdi, rbx
// asm:   0x5e0adf4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e0adf9: mov rbx, rax
// asm:   0x5e0adfc: lea rdi, [rsp + 8]
// asm:   0x5e0ae01: call 0x2fe0230  ; il2cpp_runtime_helper_02fe0230()
// asm:   0x5e0ae06: mov rdi, rbx
// asm:   0x5e0ae09: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0ae0e: mov rdi, rax
// asm:   0x5e0ae11: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AssetBundleManager__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *x;
  Il2CppObject *obj;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar3;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075483ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AssetBundle_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_075483ef = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_cache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar1,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_Clear);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Values
                         (pSVar1,(MethodInfo_4AAD2A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Values
                         );
      if (pSVar3 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_80,pSVar3,
                   (MethodInfo_43F93D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AssetBundle_GetEnumerator
                  );
        local_58 = local_70;
        local_68 = (undefined1  [8])local_80._0_8_;
        pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_80._8_8_;
        local_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_80._8_8_ =
             (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_68;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_68,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_MoveNext
                            );
          x = local_58;
          if (!bVar2) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (x == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)x,true,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_68,(MethodInfo_4CE71F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_Dispose
                  );
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Clear
                    (pSVar1,(MethodInfo_4AAD690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_Clear);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Values
                               (pSVar1,(MethodInfo_4AAD2A0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values
                               );
            if (pSVar3 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                        (&local_48,pSVar3,
                         (MethodInfo_43F93D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                        );
              local_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_80._8_8_ = &local_48;
              while( true ) {
                bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                  (&local_48,
                                   (MethodInfo_4CE7200 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                                  );
                obj = local_48.fields._currentValue;
                if (!bVar2) break;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                        (&local_48,
                         (MethodInfo_4CE71F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                        );
              if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Clear
                          (pSVar1,(MethodInfo_4AAD690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Clear);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$LoadBundle
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__LoadBundle (System_String_o* bundle, System_String_o* url, bool editor, const MethodInfo* method);
// 0x5e0ae20

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__LoadBundle
          (System_String_o *bundle,System_String_o *url,bool editor,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this;
  
  if (Il2CppMethodInitialized_075483f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14);
    Il2CppMethodInitialized_075483f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bundle);
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url);
  (__this->fields).editor = editor;
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$DownloadBundleFile
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__DownloadBundleFile (System_String_o* url, System_String_o* path, const MethodInfo* method);
// 0x5e0aed0

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__DownloadBundleFile
          (System_String_o *url,System_String_o *path,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this;
  
  if (Il2CppMethodInitialized_075483f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
    Il2CppMethodInitialized_075483f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15)
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url);
  (__this->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this->fields).path);
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$TryGetRedirectUrl
// il2cpp: bool ApplicationManagers_AssetBundleManager__TryGetRedirectUrl (System_String_o* url, System_String_o* location, System_String_o** redirectUrl, const MethodInfo* method);
// 0x5e0af70

bool ApplicationManagers_AssetBundleManager__TryGetRedirectUrl
               (System_String_o *url,System_String_o *location,System_String_o **redirectUrl,
               MethodInfo *method)

{
  System_String_o *url_00;
  bool bVar1;
  bool bVar2;
  System_Uri_o *__this;
  MethodInfo *method_00;
  System_Uri_o *local_30;
  
  if (Il2CppMethodInitialized_075483f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_075483f2 = '\x01';
  }
  local_30 = (System_Uri_o *)0x0;
  *redirectUrl = (System_String_o *)0x0;
  bVar2 = false;
  Il2CppCodeGenWriteBarrier(redirectUrl);
  bVar1 = System_String__IsNullOrEmpty(location,(MethodInfo *)0x0);
  if (!bVar1) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
    System_Uri___ctor(__this,url,(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar2 = false;
    bVar1 = System_Uri__TryCreate_617c2b0(__this,location,&local_30,(MethodInfo *)0x0);
    if (bVar1) {
      if (local_30 == (System_Uri_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = (MethodInfo *)System_Uri__get_AbsoluteUri(local_30,(MethodInfo *)0x0);
      *redirectUrl = (System_String_o *)method_00;
      Il2CppCodeGenWriteBarrier(redirectUrl);
      url_00 = *redirectUrl;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      bVar2 = ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(url_00,method_00);
    }
  }
  return bVar2;
}


// ApplicationManagers.AssetBundleManager$$IsValidRemoteBundleUrl
// il2cpp: bool ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl (System_String_o* url, const MethodInfo* method);
// 0x5e0b080

bool ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Uri_o *local_20;
  
  if (Il2CppMethodInitialized_075483f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_075483f3 = '\x01';
  }
  local_20 = (System_Uri_o *)0x0;
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  bVar2 = false;
  bVar1 = System_Uri__TryCreate(url,1,&local_20,(MethodInfo *)0x0);
  if (bVar1) {
    if (local_20 == (System_Uri_o *)0x0) {
label_05e0b152:
      ThrowNullReferenceException();
    }
    pSVar3 = System_Uri__get_Scheme(local_20,(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar2 = false;
    bVar1 = System_String__op_Equality
                      (pSVar3,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
    if (bVar1) {
      if (local_20 == (System_Uri_o *)0x0) goto label_05e0b152;
      pSVar3 = System_Uri__get_Host(local_20,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      bVar2 = !bVar2;
    }
  }
  return bVar2;
}


// ApplicationManagers.AssetBundleManager$$ConfirmVideoPlayerUrls
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls (System_String_o* bundle, const MethodInfo* method);
// 0x5e0b160

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(System_String_o *bundle,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this;
  
  if (Il2CppMethodInitialized_075483f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18);
    Il2CppMethodInitialized_075483f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bundle);
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$GetAssetListFromBundle
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetListFromBundle (System_String_o* bundle, const MethodInfo* method);
// 0x5e0b1f0

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(System_String_o *bundle,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint uVar5;
  System_Collections_Generic_List_string__o *__this;
  UnityEngine_Object_o *x;
  UnityEngine_AssetBundle_o *__this_00;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_075483f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/");
    il2cpp_codegen_initialize_runtime_metadata(&".prefab");
    Il2CppMethodInitialized_075483f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)bundle,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar4) {
      return __this;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,(Il2CppObject *)bundle,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return __this;
      }
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)bundle,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item
                                 ), __this_00 != (UnityEngine_AssetBundle_o *)0x0)) &&
         (pSVar6 = UnityEngine_AssetBundle__GetAllAssetNames(__this_00,(MethodInfo *)0x0),
         pSVar6 != (System_String_array *)0x0)) {
        uVar5 = (uint)pSVar6->max_length;
        if ((int)uVar5 < 1) {
          return __this;
        }
        uVar9 = 0;
        do {
          if (uVar5 <= uVar9) {
label_05e0b52b:
            ThrowIndexOutOfRangeException();
          }
          if ((pSVar6->m_Items[(int)uVar9] == (System_String_o *)0x0) ||
             (pSVar7 = System_String__Trim(pSVar6->m_Items[(int)uVar9],(MethodInfo *)0x0),
             pSVar7 == (System_String_o *)0x0)) break;
          bVar4 = System_String__EndsWith(pSVar7,".prefab",(MethodInfo *)0x0);
          if (bVar4) {
            bVar4 = System_String__Contains_53072c0(pSVar7,0x2f,(MethodInfo *)0x0);
            if (bVar4) {
              pSVar8 = System_String__Split(pSVar7,0x2f,0,(MethodInfo *)0x0);
              if (pSVar8 == (System_String_array *)0x0) break;
              uVar5 = (uint)pSVar8->max_length;
              if (uVar5 == 0) goto label_05e0b52b;
              pSVar7 = *(System_String_o **)
                        ((long)pSVar8->m_Items + ((long)(((ulong)uVar5 << 0x20) + -0x100000000) >> 0x1d));
              if (pSVar7 == (System_String_o *)0x0) break;
            }
            pSVar7 = System_String__Substring_53042f0
                               (pSVar7,0,(pSVar7->fields)._stringLength + -7,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_5302810
                               ("Custom/",bundle,"/",pSVar7,(MethodInfo *)0x0);
            pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this->fields)._items;
            if (pSVar8 == (System_String_array *)0x0) break;
            uVar5 = (__this->fields)._size;
            if (uVar5 < (uint)pSVar8->max_length) {
              (__this->fields)._size = uVar5 + 1;
              pSVar8->m_Items[(int)uVar5] = pSVar7;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                         (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
            }
          }
          uVar9 = uVar9 + 1;
          uVar5 = (uint)pSVar6->max_length;
          if ((int)uVar5 <= (int)uVar9) {
            return __this;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$GetAssetList
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetList (const MethodInfo* method);
// 0x5e0b530
// eh: try 0x5e0b684..0x5e0b723 -> pad 0x5e0b72d (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e0b747..0x5e0b74c -> pad 0x5e0b76b cleanup
// eh: try 0x5e0b76e..0x5e0b778 -> pad 0x5e0b780 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0b662: lea r13, [rip + 0x1484757]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
// asm:   0x5e0b669: mov r14, rsp
// asm:   0x5e0b66c: lea rbp, [rip + 0x148b2ed]  ; MethodInfo_System_Collections_Generic_List_string_AddRange
// asm:   0x5e0b673: nop word ptr cs:[rax + rax]
// asm:   0x5e0b723: jmp 0x5e0b72f
// asm:   0x5e0b725: jmp 0x5e0b72f
// asm:   0x5e0b727: jmp 0x5e0b72f
// asm:   0x5e0b729: jmp 0x5e0b72f
// asm:   0x5e0b72b: jmp 0x5e0b72f
// asm:   0x5e0b72d: jmp 0x5e0b72f
// asm:   0x5e0b72f: mov r14, rax
// asm:   0x5e0b732: cmp edx, 1
// asm:   0x5e0b735: jne 0x5e0b76e
// asm:   0x5e0b737: mov rdi, r14
// asm:   0x5e0b73a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0b73f: mov rbx, qword ptr [rax]
// asm:   0x5e0b742: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e0b747: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0b74c: lea rax, [rip + 0x1484665]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_Dispose
// asm:   0x5e0b753: mov rsi, qword ptr [rax]
// asm:   0x5e0b756: mov rdi, rsp
// asm:   0x5e0b759: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5e0b75e: test rbx, rbx
// asm:   0x5e0b761: je 0x5e0b6e8
// asm:   0x5e0b763: mov rdi, rbx
// asm:   0x5e0b766: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e0b76b: mov r14, rax
// asm:   0x5e0b76e: lea rdi, [rsp + 0x18]
// asm:   0x5e0b773: call 0x2fe0260  ; il2cpp_runtime_helper_02fe0260()
// asm:   0x5e0b778: mov rdi, r14
// asm:   0x5e0b77b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0b780: mov rdi, rax
// asm:   0x5e0b783: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetList(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_List_string__o *collection;
  MethodInfo *pMVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075483f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_AssetBundle_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075483f6 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (__this,(MethodInfo_4AAD0F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Keys
                          );
    local_38 = (undefined1 *)&local_58;
    if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                (&local_58,__this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_AssetBundle_GetEnumerator
                );
      local_40 = 0;
      pSVar2 = &local_58;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        pMVar4 = 
        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext;
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (&local_58,
                           (MethodInfo_4CE7080 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
                          );
        pIVar1 = local_58.fields._currentKey;
        if (bVar3) {
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          ApplicationManagers_AssetBundleManager__GetAssetListFromBundle((System_String_o *)pIVar1,pMVar4);
          ThrowNullReferenceException();
        }
      }
      else {
        while (local_38 = (undefined1 *)pSVar2,
              pMVar4 = 
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
              , bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                  (&local_58,
                                   (MethodInfo_4CE7080 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
                                  ), pIVar1 = local_58.fields._currentKey, bVar3) {
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          collection = ApplicationManagers_AssetBundleManager__GetAssetListFromBundle
                                 ((System_String_o *)pIVar1,pMVar4);
          System_Collections_Generic_List_object___AddRange
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
          pSVar2 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_38;
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (&local_58,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_Dispose
                );
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$LoadedBundle
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadedBundle (System_String_o* bundle, const MethodInfo* method);
// 0x5e0b790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0b7c3: jmp 0x5e0b8b2

bool ApplicationManagers_AssetBundleManager__LoadedBundle(System_String_o *bundle,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_075483f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075483f7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager)->static_fields + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)bundle,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,(Il2CppObject *)bundle,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_AssetBundleManager__LoadAsset (System_String_o* bundle, System_String_o* name, const MethodInfo* method);
// 0x5e0b8c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0b906: jmp 0x5e0bb13

UnityEngine_Object_o *
ApplicationManagers_AssetBundleManager__LoadAsset
          (System_String_o *bundle,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_AssetBundle_o *__this;
  UnityEngine_Rendering_Volume_o *x;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_075483f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Volume);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_075483f8 = '\x01';
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e0b97e;
label_05e0b8f2:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e0b8f2;
label_05e0b97e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)bundle,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar2) {
label_05e0bb18:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Custom bundle not loaded: ");
      pSVar4 = System_String__Concat_52f0320(pSVar4,bundle,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_54fa440(__this_00,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AssetBundleManager_LoadAsset);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)bundle,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) goto label_05e0bb18;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)bundle,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item),
         __this != (UnityEngine_AssetBundle_o *)0x0)) {
        pUVar3 = UnityEngine_AssetBundle__LoadAsset(__this,name,(MethodInfo *)0x0);
        if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
           (name = (System_String_o *)TypeInfo_UnityEngine_GameObject,
           pUVar3->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
        }
        ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
                  ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)name);
        ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials
                  ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)name);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        ApplicationManagers_ResourceManager__HideUnsupportedMeshParticles
                  ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)name);
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          x = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                        ((UnityEngine_GameObject_o *)pUVar3,true,
                         (MethodInfo_353B9A0 *)MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Volume
                        );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            PostProcessingManager__EnableCustomVolumes((MethodInfo *)0x0);
          }
          return pUVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterials
// il2cpp: void ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x5e0c200
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0c3bb: jmp 0x5e0c2d0
// asm:   0x5e0c4c5: jmp 0x5e0c4e0
// asm:   0x5e0c4dc: nop dword ptr [rax]

void ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Terrain_o *__this_00;
  bool bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  UnityEngine_Material_array *value;
  ulong uVar5;
  MethodInfo *pMVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Shader_o *shader;
  uint uVar9;
  MethodInfo *in_R8;
  ulong uVar10;
  long lVar11;
  
  if (Il2CppMethodInitialized_075483f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Terrain);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    il2cpp_codegen_initialize_runtime_metadata(&"TerrainMaterial");
    Il2CppMethodInitialized_075483f9 = '\x01';
  }
  if ((prefab != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         (prefab,true,
                          (MethodInfo_353C0B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218),
     pSVar4 != (System_Object_array *)0x0)) {
    uVar3 = (uint)pSVar4->max_length;
    if (0 < (int)uVar3) {
      uVar9 = 0;
      do {
        if (uVar3 <= uVar9) goto label_05e0c560;
        __this = (UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar9];
        if (__this == (UnityEngine_Renderer_o *)0x0) goto label_05e0c574;
        pMVar6 = (MethodInfo *)0x0;
        value = UnityEngine_Renderer__get_sharedMaterials(__this,(MethodInfo *)0x0);
        if (value == (UnityEngine_Material_array *)0x0) goto label_05e0c574;
        if (0 < (int)value->max_length) {
          uVar5 = value->max_length & 0xffffffff;
          lVar11 = 0x20;
          uVar10 = 0;
          do {
            if (uVar5 <= uVar10) goto label_05e0c560;
            pUVar8 = value->m_Items[uVar10];
            if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
            }
            pMVar6 = (MethodInfo *)
                     ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial(pUVar8,pMVar6);
            if ((pMVar6 != (MethodInfo *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pMVar6,(((value->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
            if ((uint)value->max_length <= uVar10) goto label_05e0c560;
            value->m_Items[uVar10] = (UnityEngine_Material_o *)pMVar6;
            Il2CppCodeGenWriteBarrier((void **)((long)value->m_Items + lVar11 + -0x20));
            uVar10 = uVar10 + 1;
            uVar3 = (uint)value->max_length;
            uVar5 = (ulong)uVar3;
            lVar11 = lVar11 + 8;
          } while ((long)uVar10 < (long)(int)uVar3);
        }
        UnityEngine_Renderer__set_sharedMaterials(__this,value,(MethodInfo *)0x0);
        uVar9 = uVar9 + 1;
        uVar3 = (uint)pSVar4->max_length;
      } while ((int)uVar9 < (int)uVar3);
    }
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (prefab,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Terrain);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (uint)pSVar4->max_length;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        do {
          if (uVar3 <= uVar9) {
label_05e0c560:
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Terrain_o *)pSVar4->m_Items[(int)uVar9];
          if (__this_00 == (UnityEngine_Terrain_o *)0x0) goto label_05e0c574;
          pUVar8 = UnityEngine_Terrain__get_materialTemplate(__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
label_05e0c4e0:
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar8 = (UnityEngine_Material_o *)
                     ApplicationManagers_ResourceManager__LoadAsset
                               ("Map/Materials","TerrainMaterial",true,false,in_R8);
            if (pUVar8 != (UnityEngine_Material_o *)0x0) {
              bVar1 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
              if (((pUVar8->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
              }
            }
            UnityEngine_Terrain__set_materialTemplate(__this_00,pUVar8,(MethodInfo *)0x0);
            UnityEngine_Terrain__set_drawInstanced(__this_00,false,(MethodInfo *)0x0);
          }
          else {
            pUVar8 = UnityEngine_Terrain__get_materialTemplate(__this_00,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Material_o *)0x0) goto label_05e0c574;
            pMVar6 = (MethodInfo *)0x0;
            shader = UnityEngine_Material__get_shader(pUVar8,(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
              bVar2 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,pMVar6);
              if (bVar2) goto label_05e0c4e0;
            }
            else {
              bVar2 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,pMVar6);
              if (bVar2) goto label_05e0c4e0;
            }
          }
          uVar9 = uVar9 + 1;
          uVar3 = (uint)pSVar4->max_length;
        } while ((int)uVar9 < (int)uVar3);
      }
      return;
    }
  }
label_05e0c574:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterial
// il2cpp: UnityEngine_Material_o* ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5e0c640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0c743: jmp 0x5e0c9a7

UnityEngine_Material_o *
ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial
          (UnityEngine_Material_o *material,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Shader_o *shader;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *value;
  MethodInfo *pMVar6;
  MethodInfo *in_R8;
  float value_00;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Color_o value_01;
  UnityEngine_Material_o *local_30;
  
  if (Il2CppMethodInitialized_075483fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"_Cutoff");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    Il2CppMethodInitialized_075483fa = '\x01';
  }
  local_30 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return material;
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    shader = UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      bVar3 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,pMVar6);
    }
    else {
      bVar3 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,pMVar6);
    }
    if (!bVar3) {
      return material;
    }
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager)->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar6 = (MethodInfo *)material;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)material,(Il2CppObject **)&local_30,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
      if (!bVar3) {
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        pSVar4 = ApplicationManagers_AssetBundleManager__GetBasicMaterialName(material,pMVar6);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar5 = (UnityEngine_Material_o *)
                 ApplicationManagers_ResourceManager__LoadAsset("Map/Materials",pSVar4,true,false,in_R8)
        ;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
          if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
          }
        }
        UnityEngine_Material___ctor_68dcfd0(__this,pUVar5,(MethodInfo *)0x0);
        local_30 = __this;
        pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,pSVar4,(MethodInfo *)0x0);
        bVar3 = UnityEngine_Material__HasProperty_68dd940(material,"_Color",(MethodInfo *)0x0);
        pUVar5 = local_30;
        if (bVar3) {
          value_01 = UnityEngine_Material__GetColor(material,"_Color",(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
          UnityEngine_Material__set_color(pUVar5,value_01,(MethodInfo *)0x0);
        }
        bVar3 = UnityEngine_Material__HasProperty_68dd940(material,"_MainTex",(MethodInfo *)0x0);
        pUVar5 = local_30;
        if (bVar3) {
          value = UnityEngine_Material__get_mainTexture(material,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
          UnityEngine_Material__set_mainTexture(pUVar5,value,(MethodInfo *)0x0);
          pUVar5 = local_30;
          UVar7 = UnityEngine_Material__get_mainTextureScale(material,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
          UnityEngine_Material__set_mainTextureScale(pUVar5,UVar7,(MethodInfo *)0x0);
          pUVar5 = local_30;
          UVar7 = UnityEngine_Material__get_mainTextureOffset(material,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
          UnityEngine_Material__set_mainTextureOffset(pUVar5,UVar7,(MethodInfo *)0x0);
        }
        bVar3 = UnityEngine_Material__HasProperty_68dd940(material,"_Cutoff",(MethodInfo *)0x0);
        pUVar5 = local_30;
        if (bVar3) {
          value_00 = UnityEngine_Material__GetFloat(material,"_Cutoff",(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05e0c9b8;
          UnityEngine_Material__SetFloat(pUVar5,"_Cutoff",value_00,(MethodInfo *)0x0);
        }
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e0c9b8;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)material,(Il2CppObject *)local_30,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
      }
      return local_30;
    }
  }
label_05e0c9b8:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$IsBuiltinPipelineShader
// il2cpp: bool ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader (UnityEngine_Shader_o* shader, const MethodInfo* method);
// 0x5e0c9d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0ca95: lea rbp, [rip + 0x1468ec4]  ; TypeInfo_ApplicationManagers_AssetBundleManager
// asm:   0x5e0ca9c: nop dword ptr [rax]

bool ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader
               (UnityEngine_Shader_o *shader,MethodInfo *method)

{
  System_String_array *array;
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Rendering_ShaderTagId_o UVar4;
  undefined8 in_RAX;
  System_String_o *pSVar5;
  ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *__this;
  System_Predicate_T__o *match;
  int passIndex;
  undefined8 local_38;
  
  local_38._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  if (Il2CppMethodInitialized_075483fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Exists_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0_IsBuiltinPipelineShader_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden/InternalErrorShader");
    Il2CppMethodInitialized_075483fb = '\x01';
  }
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if (shader == (UnityEngine_Shader_o *)0x0) {
label_05e0cbc9:
    ThrowNullReferenceException();
  }
  pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar5,"Hidden/InternalErrorShader",(MethodInfo *)0x0);
  bVar2 = true;
  if ((!bVar1) && (bVar1 = UnityEngine_Shader__get_isSupported(shader,(MethodInfo *)0x0), bVar1)) {
    passIndex = 0;
    iVar3 = UnityEngine_Shader__get_passCount(shader,(MethodInfo *)0x0);
    if (0 < iVar3) {
      do {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0
                           );
        System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        UVar4 = UnityEngine_Shader__FindPassTagValue
                          (shader,passIndex,
                           (UnityEngine_Rendering_ShaderTagId_o)
                           (TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->LightModeTag).
                           fields.m_Id,(MethodInfo *)0x0);
        local_38 = CONCAT44(local_38._4_4_,UVar4.fields.m_Id);
        pSVar5 = UnityEngine_Rendering_ShaderTagId__get_name
                           ((UnityEngine_Rendering_ShaderTagId_o *)&local_38,(MethodInfo *)0x0);
        if (__this == (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *)0x0)
        goto label_05e0cbc9;
        (__this->fields).lightMode = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).lightMode);
        bVar2 = System_String__IsNullOrEmpty((__this->fields).lightMode,(MethodInfo *)0x0);
        if (bVar2) {
          return false;
        }
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        array = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->UniversalLightModes;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0_IsBuiltinPipelineShader_b__0
                   ,(MethodInfo_3DC95B0 *)0x0);
        bVar2 = System_Array__Exists_object_
                          ((System_Object_array *)array,match,
                           (MethodInfo_3600CB0 *)MethodInfo_System_Array_Exists_string);
        if (bVar2) {
          return false;
        }
        passIndex = passIndex + 1;
        iVar3 = UnityEngine_Shader__get_passCount(shader,(MethodInfo *)0x0);
      } while (passIndex < iVar3);
    }
    iVar3 = UnityEngine_Shader__get_passCount(shader,(MethodInfo *)0x0);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}


// ApplicationManagers.AssetBundleManager$$GetBasicMaterialName
// il2cpp: System_String_o* ApplicationManagers_AssetBundleManager__GetBasicMaterialName (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5e0ce30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0cf9c: jmp 0x5e0cf2d

System_String_o *
ApplicationManagers_AssetBundleManager__GetBasicMaterialName
          (UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_075483fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"TransparentMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"BasicMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"Particle");
    il2cpp_codegen_initialize_runtime_metadata(&"CutoutMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"_DstBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"ParticleMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"ParticleAdditiveMaterial");
    Il2CppMethodInitialized_075483fc = '\x01';
  }
  if (((material == (UnityEngine_Material_o *)0x0) ||
      (pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Object_o *)0x0)) ||
     (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0)) {
label_05e0cfae:
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Contains(pSVar4,"Particle",(MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0);
    if (iVar2 < 0x9c5) {
      iVar2 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0);
      if (iVar2 < 0x992) {
        ppSVar5 = &"BasicMaterial";
      }
      else {
        ppSVar5 = &"CutoutMaterial";
      }
    }
    else {
      ppSVar5 = &"TransparentMaterial";
    }
    goto label_05e0cfa5;
  }
  pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
  if ((pUVar3 == (UnityEngine_Object_o *)0x0) ||
     (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0))
  goto label_05e0cfae;
  bVar1 = System_String__Contains(pSVar4,"Add",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = UnityEngine_Material__HasProperty_68dd940(material,"_DstBlend",(MethodInfo *)0x0);
    ppSVar5 = &"ParticleMaterial";
    if (!bVar1) goto label_05e0cfa5;
    fVar6 = UnityEngine_Material__GetFloat(material,"_DstBlend",(MethodInfo *)0x0);
    if ((fVar6 != 1.0) || (NAN(fVar6))) goto label_05e0cfa5;
  }
  ppSVar5 = &"ParticleAdditiveMaterial";
label_05e0cfa5:
  return *ppSVar5;
}


// ApplicationManagers.AssetBundleManager$$ValidateCustomPrefab
// il2cpp: void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x5e0bb80
// eh: try 0x5e0bdef..0x5e0c0dc -> pad 0x5e0c0eb (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e0c10e..0x5e0c113 -> pad 0x5e0c1d9 cleanup
// eh: try 0x5e0c1dc..0x5e0c1e6 -> pad 0x5e0c1ee catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0bd0f: nop 
// asm:   0x5e0bd57: jmp 0x5e0c135
// asm:   0x5e0bdb3: nop word ptr cs:[rax + rax]
// asm:   0x5e0bddf: nop 
// asm:   0x5e0bf6f: nop 
// asm:   0x5e0bfa6: test rbp, rbp
// asm:   0x5e0bfa9: jne 0x5e0c1d1
// asm:   0x5e0bfaf: cmp r15d, 0xe
// asm:   0x5e0bfb3: je 0x5e0bca0
// asm:   0x5e0bfb9: test r15d, r15d
// asm:   0x5e0bfbc: jne 0x5e0c118
// asm:   0x5e0bfc2: mov rax, qword ptr [r12]
// asm:   0x5e0c0b1: jmp 0x5e0bca0
// asm:   0x5e0c0e1: jmp 0x5e0c0ef
// asm:   0x5e0c0e3: jmp 0x5e0c0ef
// asm:   0x5e0c0e5: jmp 0x5e0c0ef
// asm:   0x5e0c0e7: jmp 0x5e0c0ef
// asm:   0x5e0c0e9: jmp 0x5e0c0ef
// asm:   0x5e0c0eb: jmp 0x5e0c0ef
// asm:   0x5e0c0ed: jmp 0x5e0c0ef
// asm:   0x5e0c0ef: mov r15, rax
// asm:   0x5e0c0f2: cmp edx, 1
// asm:   0x5e0c0f5: jne 0x5e0c1dc
// asm:   0x5e0c0fb: mov rdi, r15
// asm:   0x5e0c0fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0c103: mov rbp, qword ptr [rax]
// asm:   0x5e0c106: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5e0c10b: xor r15d, r15d
// asm:   0x5e0c10e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0c113: jmp 0x5e0bf28
// asm:   0x5e0c1d1: mov rdi, rbp
// asm:   0x5e0c1d4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e0c1d9: mov r15, rax
// asm:   0x5e0c1dc: lea rdi, [rsp + 0x20]
// asm:   0x5e0c1e1: call 0x2fe0290  ; il2cpp_runtime_helper_02fe0290()
// asm:   0x5e0c1e6: mov rdi, r15
// asm:   0x5e0c1e9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0c1ee: mov rdi, rax
// asm:   0x5e0c1f1: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Animation_o *__this;
  System_Type_array *pSVar2;
  UnityEngine_Animation_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppType *handle;
  bool bVar5;
  char cVar6;
  uint uVar7;
  System_Type_o *pSVar8;
  UnityEngine_Component_array *pUVar9;
  ulong uVar10;
  System_Type_o *pSVar11;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  UnityEngine_AnimationState_o *__this_00;
  UnityEngine_AnimationClip_o *pUVar14;
  UnityEngine_AnimationEvent_array *pUVar15;
  UnityEngine_Object_o *x;
  UnityEngine_RuntimeAnimatorController_o *__this_01;
  UnityEngine_AnimationClip_array *pUVar16;
  System_String_o *pSVar17;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *pIVar18;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  UnityEngine_Component_array *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075483fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationEvent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Component);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075483fd = '\x01';
  }
  handle = TypeRef_UnityEngine_Component;
  local_60 = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((prefab == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar9 = UnityEngine_GameObject__GetComponentsInChildren_6915b10(prefab,pSVar8,true,(MethodInfo *)0x0),
     pUVar9 == (UnityEngine_Component_array *)0x0)) {
label_05e0c130:
    ThrowNullReferenceException();
  }
  if ((int)pUVar9->max_length < 1) {
    return;
  }
  uVar10 = pUVar9->max_length & 0xffffffff;
  uVar21 = 0;
  local_50 = pUVar9;
label_05e0bcb7:
  if (uVar10 <= uVar21) {
label_05e0c127:
    ThrowIndexOutOfRangeException();
  }
  __this = (UnityEngine_Animation_o *)local_50->m_Items[uVar21];
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->AllowedComponents;
  if (pSVar2 == (System_Type_array *)0x0) goto label_05e0c130;
  uVar7 = (uint)pSVar2->max_length;
  if (__this == (UnityEngine_Animation_o *)0x0) {
    if ((int)uVar7 < 1) {
label_05e0c135:
      NullCheck(__this);
      pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
      NullCheck(pSVar8);
      pSVar17 = (System_String_o *)
                (*(pSVar8->klass->vtable)._8_unknown.methodPtr)
                          (pSVar8,(pSVar8->klass->vtable)._8_unknown.method);
      str0 = il2cpp_codegen_get_runtime_metadata(&"Disallowed component (");
      str2 = il2cpp_codegen_get_runtime_metadata(&")");
      pSVar17 = System_String__Concat_5301f10(str0,pSVar17,str2,(MethodInfo *)0x0);
      pIVar18 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar18);
      System_Exception___ctor_54fa440(__this_02,pSVar17,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_ApplicationManagers_AssetBundleManager_ValidateCustomPrefab);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    goto label_05e0c130;
  }
  if ((int)uVar7 < 1) goto label_05e0c135;
  uVar19 = 0;
  while( true ) {
    if (uVar7 <= uVar19) goto label_05e0c127;
    pSVar8 = pSVar2->m_Items[(int)uVar19];
    pSVar11 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (pSVar8 == (System_Type_o *)0x0) goto label_05e0c130;
    bVar5 = (*(pSVar8->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar8,pSVar11,(pSVar8->klass->vtable)._22_IsAssignableFrom.method);
    if (bVar5) break;
    uVar19 = uVar19 + 1;
    uVar7 = (uint)pSVar2->max_length;
    if ((int)uVar7 <= (int)uVar19) goto label_05e0c135;
  }
  pUVar3 = __this->klass;
  if (pUVar3 == TypeInfo_UnityEngine_Animation) {
    pIVar12 = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(__this,(MethodInfo *)0x0);
    local_48 = 0;
    local_40 = &local_60;
    local_38 = &local_58;
    do {
      local_60 = pIVar12;
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar18 = pIVar12->klass;
      uVar10 = (ulong)(pIVar18->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar4 = (pIVar18->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar20) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = (VirtualInvokeData *)
                      &pIVar18->vtable[*(int *)((long)&pIVar4->offset + lVar20)].methodPtr;
            goto label_05e0be13;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar10 * 0x10 != lVar20);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e0be13:
      cVar6 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
      pIVar12 = local_60;
      if (cVar6 == '\0') goto label_05e0bf20;
      if (local_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar18 = local_60->klass;
      uVar10 = (ulong)(pIVar18->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar4 = (pIVar18->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar20) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = (VirtualInvokeData *)
                      &pIVar18->vtable[*(int *)((long)&pIVar4->offset + lVar20) + 1].methodPtr;
            goto label_05e0bea7;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar10 * 0x10 != lVar20);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e0bea7:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar13->methodPtr)(pIVar12,pVVar13->method);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00->klass != TypeInfo_UnityEngine_AnimationState) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      pUVar14 = UnityEngine_AnimationState__get_clip(__this_00,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_AnimationEvent_array *)SZArrayNew(TypeInfo_UnityEngine_AnimationEvent_array,0);
      if (pUVar14 == (UnityEngine_AnimationClip_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_AnimationClip__set_events(pUVar14,pUVar15,(MethodInfo *)0x0);
      pIVar12 = local_60;
    } while( true );
  }
  bVar1 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
  if ((bVar1 <= (pUVar3->_2).typeHierarchyDepth) &&
     ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Animator)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Animator__get_runtimeAnimatorController
                  ((UnityEngine_Animator_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      __this_01 = UnityEngine_Animator__get_runtimeAnimatorController
                            ((UnityEngine_Animator_o *)__this,(MethodInfo *)0x0);
      if ((__this_01 != (UnityEngine_RuntimeAnimatorController_o *)0x0) &&
         (pUVar16 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_01,(MethodInfo *)0x0),
         pUVar16 != (UnityEngine_AnimationClip_array *)0x0)) {
        uVar7 = (uint)pUVar16->max_length;
        if (0 < (int)uVar7) {
          uVar19 = 0;
          do {
            if (uVar7 <= uVar19) goto label_05e0c127;
            pUVar14 = pUVar16->m_Items[(int)uVar19];
            pUVar15 = (UnityEngine_AnimationEvent_array *)
                      SZArrayNew(TypeInfo_UnityEngine_AnimationEvent_array,0);
            if (pUVar14 == (UnityEngine_AnimationClip_o *)0x0) goto label_05e0c130;
            UnityEngine_AnimationClip__set_events(pUVar14,pUVar15,(MethodInfo *)0x0);
            uVar19 = uVar19 + 1;
            uVar7 = (uint)pUVar16->max_length;
          } while ((int)uVar19 < (int)uVar7);
        }
        goto label_05e0bca0;
      }
      goto label_05e0c130;
    }
  }
label_05e0bca0:
  uVar21 = uVar21 + 1;
  uVar7 = (uint)local_50->max_length;
  uVar10 = (ulong)uVar7;
  if ((long)(int)uVar7 <= (long)uVar21) {
    return;
  }
  goto label_05e0bcb7;
label_05e0bf20:
  pIVar12 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
  local_58 = pIVar12;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar18 = pIVar12->klass;
    uVar10 = (ulong)(pIVar18->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar4 = (pIVar18->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar20) == TypeInfo_System_IDisposable)
        {
          pVVar13 = (VirtualInvokeData *)&pIVar18->vtable[*(int *)((long)&pIVar4->offset + lVar20)].methodPtr;
          goto label_05e0bf9d;
        }
        lVar20 = lVar20 + 0x10;
      } while (uVar10 * 0x10 != lVar20);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e0bf9d:
    (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  }
  goto label_05e0bca0;
}


// ApplicationManagers.AssetBundleManager$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___ctor (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x5e0cfd0

void ApplicationManagers_AssetBundleManager___ctor
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$.cctor
// il2cpp: void ApplicationManagers_AssetBundleManager___cctor (const MethodInfo* method);
// 0x5e0cfe0

void ApplicationManagers_AssetBundleManager___cctor(MethodInfo *method)

{
  il2cpp_array_size_t *piVar1;
  ApplicationManagers_AssetBundleManager_StaticFields *pAVar2;
  Il2CppType *handle;
  undefined8 in_RAX;
  System_Collections_Generic_Dictionary_string__Dictionary_string__Object___o *__this;
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this_00;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_01;
  System_String_array *pSVar3;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  undefined8 local_28;
  
  local_28._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  if (Il2CppMethodInitialized_075483fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ArticulationBody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioChorusFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioDistortionFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioEchoFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioHighPassFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioListener);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioLowPassFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioReverbFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioReverbZone);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CharacterController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AssetBundle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Joint);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LODGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_LensFlareComponentSRP);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LensFlare);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LightProbeGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LightProbeProxyVolume);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_OcclusionArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_OcclusionPortal);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ParticleSystemForceField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Projector);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ReflectionProbe);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Skybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_SortingGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Terrain);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_TextMesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_TrailRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeRef_UnityEngine_Rendering_Universal_UniversalAdditionalLightData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Video_VideoPlayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Rendering_Volume);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_WindZone);
    il2cpp_codegen_initialize_runtime_metadata(&"UniversalGBuffer");
    il2cpp_codegen_initialize_runtime_metadata(&"LightMode");
    il2cpp_codegen_initialize_runtime_metadata(&"UniversalForward");
    il2cpp_codegen_initialize_runtime_metadata(&"SRPDefaultUnlit");
    il2cpp_codegen_initialize_runtime_metadata(&"Universal2D");
    il2cpp_codegen_initialize_runtime_metadata(&"UniversalForwardOnly");
    Il2CppMethodInitialized_075483fe = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
  pAVar2->_cache = __this;
  Il2CppCodeGenWriteBarrier(&pAVar2->_cache);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AssetBundle);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
  pAVar2->_bundles = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar2->_bundles);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
  pAVar2->_convertedMaterials = __this_01;
  Il2CppCodeGenWriteBarrier(&pAVar2->_convertedMaterials);
  local_28 = (ulong)local_28._4_4_ << 0x20;
  UnityEngine_Rendering_ShaderTagId___ctor
            ((UnityEngine_Rendering_ShaderTagId_o *)&local_28,"LightMode",(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->LightModeTag).fields.m_Id =
       (int32_t)local_28._0_4_;
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar3 == (System_String_array *)0x0) {
label_05e0e2eb:
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = "SRPDefaultUnlit";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    if ((pSVar3->max_length & 0xfffffffe) == 0) goto label_05e0e2d7;
    pSVar3->m_Items[1] = "UniversalForward";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
    if ((uint)pSVar3->max_length < 3) goto label_05e0e2d7;
    pSVar3->m_Items[2] = "UniversalForwardOnly";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
    if ((pSVar3->max_length & 0xfffffffc) == 0) goto label_05e0e2d7;
    pSVar3->m_Items[3] = "UniversalGBuffer";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3);
    if ((uint)pSVar3->max_length < 5) goto label_05e0e2d7;
    pSVar3->m_Items[4] = "Universal2D";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4);
    pAVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
    pAVar2->UniversalLightModes = pSVar3;
    Il2CppCodeGenWriteBarrier(&pAVar2->UniversalLightModes);
    pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,0x2c);
    handle = TypeRef_UnityEngine_Transform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar4 == (System_Type_array *)0x0) goto label_05e0e2eb;
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((int)pSVar4->max_length == 0) goto label_05e0e2d7;
    pSVar4->m_Items[0] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Collider,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    piVar1 = &pSVar4->max_length;
    if ((*piVar1 & 0xfffffffe) == 0) goto label_05e0e2d7;
    pSVar4->m_Items[1] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_MeshFilter,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 3) goto label_05e0e2d7;
    pSVar4->m_Items[2] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Animation,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((*piVar1 & 0xfffffffc) == 0) goto label_05e0e2d7;
    pSVar4->m_Items[3] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Animator,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 5) goto label_05e0e2d7;
    pSVar4->m_Items[4] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioSource,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 6) goto label_05e0e2d7;
    pSVar4->m_Items[5] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioClip,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 7) goto label_05e0e2d7;
    pSVar4->m_Items[6] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 6);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioChorusFilter,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((*piVar1 & 0xfffffff8) == 0) goto label_05e0e2d7;
    pSVar4->m_Items[7] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 7);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioDistortionFilter,
                        (MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 9) goto label_05e0e2d7;
    pSVar4->m_Items[8] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 8);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioEchoFilter,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 10) goto label_05e0e2d7;
    pSVar4->m_Items[9] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 9);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioHighPassFilter,(MethodInfo *)0x0)
    ;
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0xb) goto label_05e0e2d7;
    pSVar4->m_Items[10] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 10);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioListener,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0xc) goto label_05e0e2d7;
    pSVar4->m_Items[0xb] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0xb);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioLowPassFilter,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0xd) goto label_05e0e2d7;
    pSVar4->m_Items[0xc] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0xc);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioReverbFilter,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0xe) goto label_05e0e2d7;
    pSVar4->m_Items[0xd] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0xd);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioReverbZone,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0xf) goto label_05e0e2d7;
    pSVar4->m_Items[0xe] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0xe);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_ParticleSystem,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((*piVar1 & 0xfffffff0) == 0) goto label_05e0e2d7;
    pSVar4->m_Items[0xf] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0xf);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_ParticleSystemForceField,
                        (MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x11) goto label_05e0e2d7;
    pSVar4->m_Items[0x10] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x10);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_LensFlare,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x12) goto label_05e0e2d7;
    pSVar4->m_Items[0x11] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x11);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Rendering_LensFlareComponentSRP,
                        (MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x13) goto label_05e0e2d7;
    pSVar4->m_Items[0x12] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x12);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Rendering_Volume,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x14) goto label_05e0e2d7;
    pSVar4->m_Items[0x13] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x13);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_LineRenderer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x15) goto label_05e0e2d7;
    pSVar4->m_Items[0x14] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x14);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Projector,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x16) goto label_05e0e2d7;
    pSVar4->m_Items[0x15] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x15);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_TrailRenderer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x17) goto label_05e0e2d7;
    pSVar4->m_Items[0x16] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x16);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Renderer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x18) goto label_05e0e2d7;
    pSVar4->m_Items[0x17] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x17);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Terrain,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x19) goto label_05e0e2d7;
    pSVar4->m_Items[0x18] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x18);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_ArticulationBody,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1a) goto label_05e0e2d7;
    pSVar4->m_Items[0x19] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x19);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CharacterController,(MethodInfo *)0x0)
    ;
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1b) goto label_05e0e2d7;
    pSVar4->m_Items[0x1a] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1a);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Cloth,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1c) goto label_05e0e2d7;
    pSVar4->m_Items[0x1b] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1b);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_ConstantForce,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1d) goto label_05e0e2d7;
    pSVar4->m_Items[0x1c] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1c);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Joint,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1e) goto label_05e0e2d7;
    pSVar4->m_Items[0x1d] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1d);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Rigidbody,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x1f) goto label_05e0e2d7;
    pSVar4->m_Items[0x1e] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1e);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Light,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((*piVar1 & 0xffffffe0) == 0) goto label_05e0e2d7;
    pSVar4->m_Items[0x1f] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x1f);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)
                        TypeRef_UnityEngine_Rendering_Universal_UniversalAdditionalLightData,(MethodInfo *)0x0
                       );
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x21) goto label_05e0e2d7;
    pSVar4->m_Items[0x20] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x20);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_LODGroup,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x22) goto label_05e0e2d7;
    pSVar4->m_Items[0x21] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x21);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Video_VideoPlayer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x23) goto label_05e0e2d7;
    pSVar4->m_Items[0x22] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x22);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_WindZone,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x24) goto label_05e0e2d7;
    pSVar4->m_Items[0x23] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x23);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_ReflectionProbe,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x25) goto label_05e0e2d7;
    pSVar4->m_Items[0x24] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x24);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Skybox,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x26) goto label_05e0e2d7;
    pSVar4->m_Items[0x25] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x25);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_LightProbeGroup,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x27) goto label_05e0e2d7;
    pSVar4->m_Items[0x26] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x26);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_LightProbeProxyVolume,
                        (MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x28) goto label_05e0e2d7;
    pSVar4->m_Items[0x27] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x27);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_OcclusionArea,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x29) goto label_05e0e2d7;
    pSVar4->m_Items[0x28] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x28);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_OcclusionPortal,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if ((uint)*piVar1 < 0x2a) goto label_05e0e2d7;
    pSVar4->m_Items[0x29] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x29);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Rendering_SortingGroup,
                        (MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e0e2dc;
    }
    if (0x2a < (uint)*piVar1) {
      pSVar4->m_Items[0x2a] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x2a);
      pSVar5 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_TextMesh,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
label_05e0e2dc:
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if (0x2b < (uint)*piVar1) {
        pSVar4->m_Items[0x2b] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 0x2b);
        pAVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields;
        pAVar2->AllowedComponents = pSVar4;
        Il2CppCodeGenWriteBarrier(&pAVar2->AllowedComponents);
        return;
      }
    }
  }
label_05e0e2d7:
  ThrowIndexOutOfRangeException();
}


