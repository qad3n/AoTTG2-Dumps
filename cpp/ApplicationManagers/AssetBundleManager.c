// Type: ApplicationManagers.AssetBundleManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/AssetBundleManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs
// --------------------------------

// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___ctor (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___ctor(ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager.<>c__DisplayClass25_0$$<IsBuiltinPipelineShader>b__0
// il2cpp: bool ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___IsBuiltinPipelineShader_b__0 (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, System_String_o* mode, const MethodInfo* method);
// 0x181e25350

bool
ApplicationManagers_AssetBundleManager___c__DisplayClass25_0___IsBuiltinPipelineShader_b__0(ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o* __this, System_String_o* mode, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550(requested,(__this->fields).lightMode,5,(MethodInfo *)0x0);
  return bVar1;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18___ctor (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18___ctor(ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_IDisposable_Dispose(ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__MoveNext (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x182358080
// eh: try 0x1823583db..0x1823583f8 -> pad 0x1833406d0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x182358640..0x1823586cc -> pad 0x183318100 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823583fa: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x182358402: mov r14, qword ptr [rsp + 0x58]
// asm:   0x182358407: mov r15d, dword ptr [rsp + 0xc0]
// asm:   0x18235840f: mov rbx, qword ptr [rsp + 0xc8]
// asm:   0x182358417: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x18235846e: nop 
// asm:   0x182358524: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x18235868b: mov rdx, qword ptr [rip + 0x1d44bbe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_Dispose
// asm:   0x182358692: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182358697: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18235869c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1823586a1: test rcx, rcx
// asm:   0x1823586a4: jne 0x1823586cc
// asm:   0x1823586cc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
// asm:   0x1833406d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833406d5: push rbx
// asm:   0x1833406d6: push rbp
// asm:   0x1833406d7: push rdi
// asm:   0x1833406d8: sub rsp, 0x20
// asm:   0x1833406dc: mov rbp, rdx
// asm:   0x1833406df: mov rdi, qword ptr [rbp + 0x70]
// asm:   0x1833406e3: mov rax, qword ptr [rdi]
// asm:   0x1833406e6: mov rbx, qword ptr [rax]
// asm:   0x1833406e9: lea rcx, [rip + 0xd38868]  ; TypeInfo_System_Exception
// asm:   0x1833406f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833406f5: mov rcx, rax
// asm:   0x1833406f8: mov rdx, rbx
// asm:   0x1833406fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340700: test al, al
// asm:   0x183340702: je 0x183340710
// asm:   0x183340704: movabs rax, 0
// asm:   0x18334070e: jmp 0x183340728
// asm:   0x183340710: mov rax, qword ptr [rdi]
// asm:   0x183340713: mov qword ptr [rbp + 0x68], rax
// asm:   0x183340717: lea rdx, [rip + 0xc9b86a]
// asm:   0x18334071e: lea rcx, [rbp + 0x68]
// asm:   0x183340722: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340728: add rsp, 0x20
// asm:   0x18334072c: pop rdi
// asm:   0x18334072d: pop rbp
// asm:   0x18334072e: pop rbx
// asm:   0x18334072f: ret 

bool ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__MoveNext
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  UI_InGameMenu_o *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this_01;
  UI_CustomAssetVideoUrlPopup_o *pUVar5;
  bool bVar6;
  int32_t iVar7;
  UI_InGameMenu_o *pUVar8;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_VideoPlayer__o *pSVar9;
  System_Collections_Generic_List_string__o *urls;
  UnityEngine_Object_o *x_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar10;
  System_String_o *pSVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_88 [16];
  UnityEngine_Video_VideoPlayer_o *local_78;
  UnityEngine_Object_o *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  System_Collections_Generic_List_string__o *local_50;
  ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *local_48;
  
  if (Il2CppMethodInitialized_184347945 == '\0') {
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
    Il2CppMethodInitialized_184347945 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 == (UI_InGameMenu_o *)0x0) {
      (__this->fields)._menu_5__2 = (UI_InGameMenu_o *)0x0;
      pUVar8 = (UI_InGameMenu_o *)0x0;
    }
    else {
      bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((UI_BaseMenu_c *)pUVar4->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pUVar8 = (UI_InGameMenu_o *)0x0;
      if (bVar6) {
        pUVar8 = pUVar4;
      }
      (__this->fields)._menu_5__2 = pUVar8;
      bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((UI_BaseMenu_c *)pUVar4->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pUVar8 = (UI_InGameMenu_o *)0x0;
      if (bVar6) {
        pUVar8 = pUVar4;
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__2,pUVar8);
    if ((__this->fields)._menu_5__2 == (UI_InGameMenu_o *)0x0) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1823586d2;
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_Dictionary_object__object___get_Item
                  (__this_00,(Il2CppObject *)(__this->fields).bundle,
                   (MethodInfo_147A5B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    local_70 = x;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return false;
    }
    pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_VideoPlayer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar9,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_VideoPlayer_ctor);
    (__this->fields)._videoPlayers_5__3 = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._videoPlayers_5__3,pSVar9);
    urls = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)urls,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823586d2;
    local_50 = urls;
    local_48 = __this;
    local_88._0_8_ =
         UnityEngine_AssetBundle__GetAllAssetNames((UnityEngine_AssetBundle_o *)x,(MethodInfo *)0x0);
    uVar13 = 0;
    if ((System_String_array *)local_88._0_8_ == (System_String_array *)0x0) goto label_1823586d2;
    for (; uVar12 = (uint)*(il2cpp_array_size_t *)(local_88._0_8_ + 0x18), (int)uVar13 < (int)uVar12;
        uVar13 = uVar13 + 1) {
      if (uVar12 <= uVar13) {
label_1823586c0:
        ThrowIndexOutOfRangeException();
      }
      pSVar11 = ((System_String_o **)(local_88._0_8_ + 0x20))[(int)uVar13];
      if (pSVar11 == (System_String_o *)0x0) goto label_1823586d2;
      bVar6 = System_String__EndsWith(pSVar11,".prefab",(MethodInfo *)0x0);
      if (bVar6) {
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_AssetBundle__LoadAsset_object_
                         ((UnityEngine_AssetBundle_o *)x,pSVar11,
                          (MethodInfo_613530 *)MethodInfo_UnityEngine_AssetBundle_LoadAsset_GameObject);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar6) {
          if (x_00 == (UnityEngine_Object_o *)0x0) goto label_1823586d2;
          pUVar10 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                              ((UnityEngine_GameObject_o *)x_00,true,
                               (MethodInfo_6F5750 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_VideoPlayer);
          uVar12 = 0;
          if (pUVar10 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)
          goto label_1823586d2;
          for (; uVar1 = (uint)pUVar10->max_length, x = local_70, (int)uVar12 < (int)uVar1;
              uVar12 = uVar12 + 1) {
            if (uVar1 <= uVar12) goto label_1823586c0;
            __this_01 = (&pUVar10->m_Items[0].klass)[(int)uVar12];
            if (__this_01 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0)
            goto label_1823586d2;
            iVar7 = UnityEngine_Video_VideoPlayer__get_source
                              ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0);
            if (iVar7 == 1) {
              pSVar11 = UnityEngine_Video_VideoPlayer__get_url
                                  ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0);
              bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
              if (!bVar6) {
                pSVar9 = (local_48->fields)._videoPlayers_5__3;
                if (pSVar9 == (System_Collections_Generic_List_VideoPlayer__o *)0x0) goto label_1823586d2;
                il2cpp_runtime_helper_180012890(pSVar9,__this_01,MethodInfo_System_Collections_Generic_List_VideoPlayer_Add);
                pSVar11 = UnityEngine_Video_VideoPlayer__get_url
                                    ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0);
                if (urls == (System_Collections_Generic_List_string__o *)0x0) goto label_1823586d2;
                bVar6 = System_Collections_Generic_List_object___Contains
                                  ((System_Collections_Generic_List_object__o *)urls,(Il2CppObject *)pSVar11,
                                   (MethodInfo_93FC70 *)
                                   MethodInfo_System_Collections_Generic_List_string_Contains);
                if (!bVar6) {
                  UnityEngine_Video_VideoPlayer__get_url
                            ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0);
                  il2cpp_runtime_helper_180012890(urls);
                }
              }
            }
          }
        }
      }
    }
    if (urls == (System_Collections_Generic_List_string__o *)0x0) goto label_1823586d2;
    if ((urls->fields)._size == 0) {
      return false;
    }
    pUVar4 = (__this->fields)._menu_5__2;
    if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
       (pUVar5 = (pUVar4->fields)._customAssetVideoUrlPopup, pUVar5 == (UI_CustomAssetVideoUrlPopup_o *)0x0))
    goto label_1823586d2;
    UI_CustomAssetVideoUrlPopup__Show(pUVar5,urls,(MethodInfo *)0x0);
  }
  else {
    if (iVar3 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pUVar4 = (__this->fields)._menu_5__2;
  if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
     (pUVar5 = (pUVar4->fields)._customAssetVideoUrlPopup, pUVar5 != (UI_CustomAssetVideoUrlPopup_o *)0x0)) {
    if ((pUVar5->fields).Done == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) && (pUVar5 != (UI_CustomAssetVideoUrlPopup_o *)0x0)) {
      if ((pUVar5->fields).Result != 1) {
        pSVar9 = (__this->fields)._videoPlayers_5__3;
        if (pSVar9 == (System_Collections_Generic_List_VideoPlayer__o *)0x0) goto label_1823586d2;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
                   (System_Collections_Generic_List_T__o *)pSVar9,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_VideoPlayer_GetEnumerator);
        local_68.fields._list = (System_Collections_Generic_List_T__o *)local_88._0_8_;
        local_68.fields._index = local_88._8_4_;
        local_68.fields._version = local_88._12_4_;
        local_68.fields._current = (Il2CppObject *)local_78;
        local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_88._8_8_ = &local_68;
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_68,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_MoveNext),
              bVar6) {
          if ((UnityEngine_Video_VideoPlayer_o *)local_68.fields._current ==
              (UnityEngine_Video_VideoPlayer_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Video_VideoPlayer__set_url
                    ((UnityEngine_Video_VideoPlayer_o *)local_68.fields._current,
                     (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                   MethodInfo_System_Collections_Generic_List_Enumerator_VideoPlayer_Dispose);
      }
      return false;
    }
  }
label_1823586d2:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, const MethodInfo* method);
// 0x1823586e0

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
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18__System_Collections_IEnumerator_get_Current(ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15___ctor (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15___ctor(ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x182358ed0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182358f3b: jmp 0x182358f51
// asm:   0x182358f3d: lea rcx, [rsp + 0x30]
// asm:   0x182358f42: call 0x1823440a0  ; il2cpp_runtime_helper_1823440a0()
// asm:   0x182358f47: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182358f4c: test rcx, rcx
// asm:   0x182358f4f: jne 0x182358f57
// asm:   0x182358f57: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184347947 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184347947 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._request_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._request_5__3);
    }
  }
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__MoveNext (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x182358970
// eh: try 0x1823589e0..0x182358e75 -> pad 0x183315930 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182358df9: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x182358e14: xor bl, bl
// asm:   0x182358e16: mov byte ptr [rsp + 0x80], bl
// asm:   0x182358e1d: jmp 0x182358e31
// asm:   0x182358e1f: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x182358e24: test rbx, rbx
// asm:   0x182358e27: jne 0x182358e75
// asm:   0x182358e29: movzx ebx, byte ptr [rsp + 0x80]
// asm:   0x182358e75: lea rcx, [rsp + 0x30]
// asm:   0x182358e7a: call 0x182344110  ; il2cpp_runtime_helper_182344110()
// asm:   0x182358e7f: mov rcx, rbx
// asm:   0x182358e82: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__MoveNext
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  bool bVar3;
  uint64_t uVar4;
  int64_t iVar5;
  System_String_o *value;
  System_Uri_o *__this_00;
  System_String_o *pSVar6;
  UnityEngine_Networking_UnityWebRequest_o *pUVar7;
  UnityEngine_Networking_DownloadHandlerFile_o *__this_01;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar8;
  System_Uri_o *local_res20;
  
  if (Il2CppMethodInitialized_184347946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_DownloadHandlerFile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Networking_UnityWebRequest);
    il2cpp_codegen_initialize_runtime_metadata(&"Location");
    Il2CppMethodInitialized_184347946 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._redirects_5__2 = 0;
    while ((__this->fields)._redirects_5__2 < 4) {
      pSVar6 = (__this->fields).url;
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Networking_UnityWebRequest);
      UnityEngine_Networking_UnityWebRequest___ctor(pUVar7,pSVar6,(MethodInfo *)0x0);
      (__this->fields)._request_5__3 = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._request_5__3,pUVar7);
      (__this->fields).__1__state = -3;
      pUVar7 = (__this->fields)._request_5__3;
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_redirectLimit(pUVar7,0,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._request_5__3;
      pSVar6 = (__this->fields).path;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_Networking_DownloadHandlerFile);
      UnityEngine_Networking_DownloadHandlerFile___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Networking_DownloadHandlerFile_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_DownloadHandlerFile__set_removeFileOnAbort(__this_01,true,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Networking_UnityWebRequest__set_downloadHandler
                (pUVar7,(UnityEngine_Networking_DownloadHandler_o *)__this_01,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._request_5__3;
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar7,(MethodInfo *)0x0);
      (__this->fields)._op_5__4 = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._op_5__4,pUVar8);
label_182358a11:
      pUVar8 = (__this->fields)._op_5__4;
      if (pUVar8 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)pUVar8,(MethodInfo *)0x0)
      ;
      pUVar7 = (__this->fields)._request_5__3;
      if (!bVar3) {
        if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar7,(MethodInfo *)0x0);
        if (uVar4 < 0x3b9aca01) {
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
          (__this->fields).__1__state = 1;
          return true;
        }
label_182358d6c:
        if (Il2CppMethodInitialized_184347947 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
          Il2CppMethodInitialized_184347947 = '\x01';
        }
        (__this->fields).__1__state = -1;
        if ((__this->fields)._request_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                     (Il2CppObject *)(__this->fields)._request_5__3);
          return false;
        }
        return false;
      }
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar5 = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar7,(MethodInfo *)0x0);
      if (iVar5 < 200) goto label_182358db8;
      if (iVar5 < 300) goto label_182358d6c;
      if (399 < iVar5) {
label_182358db8:
        if (Il2CppMethodInitialized_184347947 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
          Il2CppMethodInitialized_184347947 = '\x01';
        }
        (__this->fields).__1__state = -1;
        if ((__this->fields)._request_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                     (Il2CppObject *)(__this->fields)._request_5__3);
        }
        break;
      }
      pUVar7 = (__this->fields)._request_5__3;
      if (pUVar7 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (__this->fields).url;
      value = UnityEngine_Networking_UnityWebRequest__GetResponseHeader
                        (pUVar7,"Location",(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      if (Il2CppMethodInitialized_184347938 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
        Il2CppMethodInitialized_184347938 = '\x01';
      }
      local_res20 = (System_Uri_o *)0x0;
      (__this->fields).url = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).url,(void *)0x0);
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar3) goto label_182358db8;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
      System_Uri___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
      }
      bVar3 = System_Uri__TryCreate_27bd300(__this_00,value,&local_res20,(MethodInfo *)0x0);
      if (!bVar3) goto label_182358db8;
      if (local_res20 == (System_Uri_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = System_Uri__get_AbsoluteUri(local_res20,(MethodInfo *)0x0);
      (__this->fields).url = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).url,pSVar6);
      pSVar6 = (__this->fields).url;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      bVar3 = ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(pSVar6,(MethodInfo *)0x0);
      if (!bVar3) goto label_182358db8;
      (__this->fields)._op_5__4 = (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._op_5__4,(void *)0x0);
      if (Il2CppMethodInitialized_184347947 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184347947 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields)._request_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._request_5__3
                  );
      }
      (__this->fields)._request_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._request_5__3,(void *)0x0);
      piVar1 = &(__this->fields)._redirects_5__2;
      *piVar1 = *piVar1 + 1;
    }
    System_IO_File__Delete((__this->fields).path,(MethodInfo *)0x0);
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -3;
    goto label_182358a11;
  }
  return false;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$<>m__Finally1
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15____m__Finally1 (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x182358f60

void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15____m__Finally1
               (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184347947 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._request_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._request_5__3);
    return;
  }
  return;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<DownloadBundleFile>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, const MethodInfo* method);
// 0x182358e90

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
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15__System_Collections_IEnumerator_get_Current(ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14___ctor (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AssetBundleManager__LoadBundle_d__14___ctor(ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_IDisposable_Dispose(ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadBundle_d__14__MoveNext (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x18235a370

bool ApplicationManagers_AssetBundleManager__LoadBundle_d__14__MoveNext
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this_00;
  UI_CustomAssetUrlPopup_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this_01;
  UnityEngine_AssetBundle_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  Il2CppObject *pIVar9;
  UI_InGameMenu_o *pUVar10;
  
  if (Il2CppMethodInitialized_184347948 == '\0') {
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
    Il2CppMethodInitialized_184347948 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    pSVar5 = (__this->fields).bundle;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar4 = Utility_Util__IsValidFileName(pSVar5,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    __this_00 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) goto label_18235aba9;
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)(__this->fields).bundle,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235aba9;
      pUVar8 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)(__this->fields).bundle,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return false;
      }
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235aba9;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar3,(Il2CppObject *)(__this->fields).bundle,(Il2CppObject *)0x0,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
    if ((__this->fields).editor == false) {
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      pSVar5 = System_String__Concat_1969b70
                         (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,"/"
                          ,(__this->fields).bundle,(MethodInfo *)0x0);
      bVar4 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
      if (!bVar4) {
        if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
        }
        pSVar5 = System_String__Concat_1969b70
                           (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,"/"
                            ,(__this->fields).bundle,(MethodInfo *)0x0);
        (__this->fields)._path_5__2 = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._path_5__2,pSVar5);
        bVar4 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          pSVar5 = (__this->fields).bundle;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
          pUVar7 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)pUVar7,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pUVar8 = (UnityEngine_Object_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar3,(Il2CppObject *)(__this->fields).bundle,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item
                                 );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (!bVar4) {
                return false;
              }
              pSVar5 = (__this->fields).bundle;
              if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
              }
              pIVar9 = (Il2CppObject *)
                       ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls
                                 (pSVar5,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar9;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
              (__this->fields).__1__state = 2;
              return true;
            }
          }
          goto label_18235aba9;
        }
        pSVar5 = (__this->fields).url;
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        bVar4 = ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(pSVar5,(MethodInfo *)0x0);
        if (!bVar4) {
          return false;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar10 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar10 == (UI_InGameMenu_o *)0x0) {
          (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
          pUVar10 = (UI_InGameMenu_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
          }
          (__this->fields)._menu_5__3 = pUVar10;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__3,pUVar10);
        pUVar10 = (__this->fields)._menu_5__3;
        if ((pUVar10 == (UI_InGameMenu_o *)0x0) ||
           (pUVar2 = (pUVar10->fields)._customAssetUrlPopup, pUVar2 == (UI_CustomAssetUrlPopup_o *)0x0))
        goto label_18235aba9;
        UI_CustomAssetUrlPopup__Show(pUVar2,(__this->fields).url,(MethodInfo *)0x0);
        goto label_18235a94b;
      }
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar5 = (__this->fields).bundle;
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar6 = System_String__Concat_1969b70
                       (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,"/",
                        (__this->fields).bundle,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_AssetBundle__LoadFromFile(pSVar6,(MethodInfo *)0x0);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)pUVar7,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar8 = (UnityEngine_Object_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)(__this->fields).bundle,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          return false;
        }
        pSVar5 = (__this->fields).bundle;
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        pIVar9 = (Il2CppObject *)
                 ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(pSVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
label_18235aba9:
    ThrowNullReferenceException();
  case 1:
  case 2:
    (__this->fields).__1__state = -1;
    return false;
  case 3:
    (__this->fields).__1__state = -1;
label_18235a94b:
    pUVar10 = (__this->fields)._menu_5__3;
    if ((pUVar10 == (UI_InGameMenu_o *)0x0) ||
       (pUVar2 = (pUVar10->fields)._customAssetUrlPopup, pUVar2 == (UI_CustomAssetUrlPopup_o *)0x0))
    goto label_18235aba9;
    if ((pUVar2->fields).Done == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 3;
      return true;
    }
    if ((pUVar10 == (UI_InGameMenu_o *)0x0) || (pUVar2 == (UI_CustomAssetUrlPopup_o *)0x0))
    goto label_18235aba9;
    if ((pUVar2->fields).Confirmed != false) {
      pSVar5 = (__this->fields).url;
      pSVar6 = (__this->fields)._path_5__2;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      if (Il2CppMethodInitialized_184347937 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
        Il2CppMethodInitialized_184347937 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).url = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).url,pSVar5);
      (__this_01->fields).path = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).path,pSVar6);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 4;
      return true;
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    bVar4 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar5 = (__this->fields).bundle;
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    pUVar7 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235aba9;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)pUVar7,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_set_Item);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235aba9;
    pUVar8 = (UnityEngine_Object_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar3,(Il2CppObject *)(__this->fields).bundle,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar5 = (__this->fields).bundle;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pIVar9 = (Il2CppObject *)
               ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(pSVar5,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
      (__this->fields).__1__state = 5;
      return true;
    }
    System_IO_File__Delete((__this->fields)._path_5__2,(MethodInfo *)0x0);
    break;
  case 5:
    (__this->fields).__1__state = -1;
    break;
  default:
    goto switchD_18235a431_default;
  }
  (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu_5__3,(void *)0x0);
  (__this->fields)._path_5__2 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._path_5__2,(void *)0x0);
switchD_18235a431_default:
  return false;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, const MethodInfo* method);
// 0x18235abd0

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
// 0x180573e90

Il2CppObject*
ApplicationManagers_AssetBundleManager__LoadBundle_d__14__System_Collections_IEnumerator_get_Current(ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager$$Init
// il2cpp: void ApplicationManagers_AssetBundleManager__Init (const MethodInfo* method);
// 0x182346de0

void ApplicationManagers_AssetBundleManager__Init(MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_AssetBundleManager_o *value;
  
  if (Il2CppMethodInitialized_184347932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
    Il2CppMethodInitialized_184347932 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance
                     ,(MethodInfo_798ED0 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
  TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance,value);
  ApplicationManagers_AssetBundleManager__ClearTemp((MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.AssetBundleManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_AssetBundleManager__OnApplicationQuit (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x1823475e0

void ApplicationManagers_AssetBundleManager__OnApplicationQuit
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    Il2CppMethodInitialized_184347933 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  ApplicationManagers_AssetBundleManager__ClearTemp((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$ClearTemp
// il2cpp: void ApplicationManagers_AssetBundleManager__ClearTemp (const MethodInfo* method);
// 0x182345970
// eh: try 0x1823459cb..0x182345a00 -> pad 0x1833197a0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182345a02: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182345a07: test rcx, rcx
// asm:   0x182345a0a: je 0x182345a6e
// asm:   0x182345a0c: mov rax, qword ptr [rcx]
// asm:   0x182345a0f: mov rdx, qword ptr [rax + 0x190]
// asm:   0x182345a16: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x182345a1c: mov rbx, rax
// asm:   0x182345a1f: lea rcx, [rip + 0x1d8828a]  ; "Error deleting custom asset web folder: {0}"
// asm:   0x182345a26: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182345a2b: mov rcx, rax
// asm:   0x182345a2e: xor r8d, r8d
// asm:   0x182345a31: mov rdx, rbx
// asm:   0x182345a34: call 0x18196d190  ; System_String__Format()
// asm:   0x182345a39: mov rbx, rax
// asm:   0x182345a3c: lea rcx, [rip + 0x1db59f5]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182345a43: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182345a48: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182345a4f: jne 0x182345a59
// asm:   0x182345a51: mov rcx, rax
// asm:   0x182345a54: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182345a59: xor edx, edx
// asm:   0x182345a5b: mov rcx, rbx
// asm:   0x182345a5e: add rsp, 0x40
// asm:   0x182345a62: pop rbx
// asm:   0x182345a63: jmp 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x182345a6e: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_AssetBundleManager__ClearTemp(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347934 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_184347934 = '\x01';
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
// 0x182345a80
// eh: try 0x182345c20..0x182345e13 -> pad 0x183317f30 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182345c1d: nop dword ptr [rax]
// asm:   0x182345c89: mov rdx, qword ptr [rip + 0x1d724f0]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_Dispose
// asm:   0x182345c90: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182345c95: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182345c9a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182345c9f: test rcx, rcx
// asm:   0x182345ca2: jne 0x182345e13
// asm:   0x182345da0: mov rdx, qword ptr [rip + 0x1d6e939]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x182345da7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182345dac: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182345db1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182345db6: test rcx, rcx
// asm:   0x182345db9: jne 0x182345e19
// asm:   0x182345e13: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182345e19: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void ApplicationManagers_AssetBundleManager__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__Object___o *__this;
  System_Collections_Generic_Dictionary_string__AssetBundle__o *pSVar1;
  System_Collections_Generic_Dictionary_Material__Material__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar5;
  undefined1 local_58 [16];
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184347935 == '\0') {
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
    Il2CppMethodInitialized_184347935 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (UnityEngine_Object_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_cache;
  if (__this != (System_Collections_Generic_Dictionary_string__Dictionary_string__Object___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_Clear);
    pSVar1 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
      pSVar5 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                          (MethodInfo_13C65A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Values);
      if (pSVar5 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_58,pSVar5,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AssetBundle_GetEnumerator
                  );
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_40,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_MoveNext
                            );
          pUVar3 = local_30;
          if (!bVar4) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)pUVar3,true,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AssetBundle_Dispose
                  );
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        pSVar1 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
        if (pSVar1 != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_Clear);
          pSVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
          if (pSVar2 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
            pSVar5 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                     System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                (MethodInfo_13C65A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values)
            ;
            if (pSVar5 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_58,pSVar5,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                        );
              local_28 = (undefined1  [8])local_58._0_8_;
              pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
              local_18 = local_48;
              local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
              while( true ) {
                bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                    *)local_28,
                                   (MethodInfo_155CFB0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                                  );
                pUVar3 = local_18;
                if (!bVar4) break;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                        );
              if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
              }
              pSVar2 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
              if (pSVar2 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (MethodInfo_13BF1C0 *)
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
// 0x182347450

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__LoadBundle
          (System_String_o *bundle,System_String_o *url,bool editor,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__LoadBundle_d__14_o *__this;
  
  if (Il2CppMethodInitialized_184347936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14);
    Il2CppMethodInitialized_184347936 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_LoadBundle_d__14);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bundle,bundle);
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url,url);
  (__this->fields).editor = editor;
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$DownloadBundleFile
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__DownloadBundleFile (System_String_o* url, System_String_o* path, const MethodInfo* method);
// 0x1823466d0

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__DownloadBundleFile
          (System_String_o *url,System_String_o *path,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__DownloadBundleFile_d__15_o *__this;
  
  if (Il2CppMethodInitialized_184347937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15);
    Il2CppMethodInitialized_184347937 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_DownloadBundleFile_d__15)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url,url);
  (__this->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this->fields).path,path);
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$TryGetRedirectUrl
// il2cpp: bool ApplicationManagers_AssetBundleManager__TryGetRedirectUrl (System_String_o* url, System_String_o* location, System_String_o** redirectUrl, const MethodInfo* method);
// 0x182347620

bool ApplicationManagers_AssetBundleManager__TryGetRedirectUrl
               (System_String_o *url,System_String_o *location,System_String_o **redirectUrl,
               MethodInfo *method)

{
  bool bVar1;
  System_Uri_o *__this;
  System_String_o *pSVar2;
  System_Uri_o *local_res10;
  
  if (Il2CppMethodInitialized_184347938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_184347938 = '\x01';
  }
  local_res10 = (System_Uri_o *)0x0;
  *redirectUrl = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(redirectUrl,(void *)0x0);
  bVar1 = System_String__IsNullOrEmpty(location,(MethodInfo *)0x0);
  if (!bVar1) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
    System_Uri___ctor(__this,url,(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar1 = System_Uri__TryCreate_27bd300(__this,location,&local_res10,(MethodInfo *)0x0);
    if (bVar1) {
      if (local_res10 != (System_Uri_o *)0x0) {
        pSVar2 = System_Uri__get_AbsoluteUri(local_res10,(MethodInfo *)0x0);
        *redirectUrl = pSVar2;
        Il2CppCodeGenWriteBarrier(redirectUrl,pSVar2);
        pSVar2 = *redirectUrl;
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        bVar1 = ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(pSVar2,(MethodInfo *)0x0);
        return bVar1;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// ApplicationManagers.AssetBundleManager$$IsValidRemoteBundleUrl
// il2cpp: bool ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl (System_String_o* url, const MethodInfo* method);
// 0x182347150

bool ApplicationManagers_AssetBundleManager__IsValidRemoteBundleUrl(System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Uri_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184347939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    Il2CppMethodInitialized_184347939 = '\x01';
  }
  local_res8[0] = (System_Uri_o *)0x0;
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  bVar1 = System_Uri__TryCreate(url,1,local_res8,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (local_res8[0] != (System_Uri_o *)0x0) {
    pSVar2 = System_Uri__get_Scheme(local_res8[0],(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar1 = System_String__op_Equality
                      (pSVar2,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (local_res8[0] != (System_Uri_o *)0x0) {
      pSVar2 = System_Uri__get_Host(local_res8[0],(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ConfirmVideoPlayerUrls
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls (System_String_o* bundle, const MethodInfo* method);
// 0x182345e20

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(System_String_o *bundle,MethodInfo *method)

{
  ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__18_o *__this;
  
  if (Il2CppMethodInitialized_18434793a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18);
    Il2CppMethodInitialized_18434793a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_AssetBundleManager_ConfirmVideoPlayerUrls_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).bundle = bundle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bundle,bundle);
  return (System_Collections_IEnumerator_o *)__this;
}


// ApplicationManagers.AssetBundleManager$$GetAssetListFromBundle
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetListFromBundle (System_String_o* bundle, const MethodInfo* method);
// 0x182346760

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(System_String_o *bundle,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_AssetBundle_o *__this_01;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_18434793b == '\0') {
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
    Il2CppMethodInitialized_18434793b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (__this != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)bundle,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar3) {
      return __this_00;
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
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return __this_00;
      }
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)bundle,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item
                                 ), __this_01 != (UnityEngine_AssetBundle_o *)0x0)) &&
         (pSVar4 = UnityEngine_AssetBundle__GetAllAssetNames(__this_01,(MethodInfo *)0x0),
         pSVar4 != (System_String_array *)0x0)) {
        uVar7 = 0;
        do {
          if ((int)pSVar4->max_length <= (int)uVar7) {
            return __this_00;
          }
          if ((uint)pSVar4->max_length <= uVar7) {
label_182346a57:
            ThrowIndexOutOfRangeException();
          }
          if ((pSVar4->m_Items[(int)uVar7] == (System_String_o *)0x0) ||
             (pSVar5 = System_String__Trim(pSVar4->m_Items[(int)uVar7],(MethodInfo *)0x0),
             pSVar5 == (System_String_o *)0x0)) break;
          bVar3 = System_String__EndsWith(pSVar5,".prefab",(MethodInfo *)0x0);
          if (bVar3) {
            bVar3 = System_String__Contains_196a7f0(pSVar5,0x2f,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar6 = System_String__Split(pSVar5,0x2f,0,(MethodInfo *)0x0);
              if (pSVar6 == (System_String_array *)0x0) break;
              iVar1 = (int)pSVar6->max_length;
              if ((uint)pSVar6->max_length <= iVar1 - 1U) goto label_182346a57;
              pSVar5 = pSVar6->m_Items[(longlong)iVar1 + -1];
              if (pSVar5 == (System_String_o *)0x0) break;
            }
            pSVar5 = System_String__Substring_1972740
                               (pSVar5,0,(pSVar5->fields)._stringLength + -7,(MethodInfo *)0x0);
            System_String__Concat_1969590
                      ("Custom/",bundle,"/",pSVar5,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
            il2cpp_runtime_helper_180012890(__this_00);
          }
          uVar7 = uVar7 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$GetAssetList
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetList (const MethodInfo* method);
// 0x182346a60
// eh: try 0x182346ba2..0x182346c47 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182346c05: mov rdx, qword ptr [rip + 0x1d712d4]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_Dispose
// asm:   0x182346c0c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182346c11: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182346c16: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182346c1b: test rcx, rcx
// asm:   0x182346c1e: jne 0x182346c47
// asm:   0x182346c20: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x182346c47: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetList(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this;
  Il2CppObject *bundle;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_List_string__o *collection;
  undefined1 local_40 [16];
  System_String_o *local_30;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_18434793c == '\0') {
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
    Il2CppMethodInitialized_18434793c = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (__this != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Keys);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_AssetBundle_GetEnumerator
                );
      local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._currentKey = (Il2CppObject *)local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_28,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_MoveNext
                          );
        bundle = local_28.fields._currentKey;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_AssetBundle_Dispose
                    );
          return __this_00;
        }
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        collection = ApplicationManagers_AssetBundleManager__GetAssetListFromBundle
                               ((System_String_o *)bundle,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$LoadedBundle
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadedBundle (System_String_o* bundle, const MethodInfo* method);
// 0x1823474d0

bool ApplicationManagers_AssetBundleManager__LoadedBundle(System_String_o *bundle,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_18434793d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434793d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (__this != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)bundle,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar1) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (__this_00,(Il2CppObject *)bundle,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_AssetBundleManager__LoadAsset (System_String_o* bundle, System_String_o* name, const MethodInfo* method);
// 0x182347230

UnityEngine_Object_o *
ApplicationManagers_AssetBundleManager__LoadAsset
          (System_String_o *bundle,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_AssetBundle_o *__this_00;
  UnityEngine_Object_o *pUVar4;
  System_String_o *pSVar5;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434793e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434793e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  __this = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
  if (__this != (System_Collections_Generic_Dictionary_string__AssetBundle__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)bundle,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ContainsKey);
    if (!bVar2) {
label_1823473eb:
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Custom bundle not loaded: ");
      pSVar5 = System_String__Concat_1969e50(pSVar5,bundle,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar5,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AssetBundleManager_LoadAsset);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
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
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) goto label_1823473eb;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar1,(Il2CppObject *)bundle,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_get_Item);
        if (__this_00 != (UnityEngine_AssetBundle_o *)0x0) {
          pUVar4 = UnityEngine_AssetBundle__LoadAsset(__this_00,name,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Object_o *)0x0;
          if (pUVar4 != (UnityEngine_Object_o *)0x0) {
            if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
              pUVar3 = pUVar4;
            }
            if (pUVar3 == (UnityEngine_Object_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
            }
          }
          ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
                    ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
          ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials
                    ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
          return pUVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterials
// il2cpp: void ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x1823463b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823464ae: nop 

void ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterials
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar3;
  bool bVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar5;
  UnityEngine_Material_array *value;
  UnityEngine_Material_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Shader_o *shader;
  uint uVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_18434793f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Terrain);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    il2cpp_codegen_initialize_runtime_metadata(&"TerrainMaterial");
    Il2CppMethodInitialized_18434793f = '\x01';
  }
  if (prefab != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (prefab,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    if (pUVar5 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      for (uVar8 = 0; (int)uVar8 < (int)pUVar5->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pUVar5->max_length <= uVar8) goto label_1823466bc;
        pUVar3 = (&pUVar5->m_Items[0].klass)[(int)uVar8];
        if (pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_1823466c2;
        value = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)pUVar3,(MethodInfo *)0x0);
        uVar9 = 0;
        if (value == (UnityEngine_Material_array *)0x0) goto label_1823466c2;
        for (; uVar1 = (uint)value->max_length, (int)uVar9 < (int)uVar1; uVar9 = uVar9 + 1) {
          if (uVar1 <= uVar9) goto label_1823466bc;
          pUVar6 = value->m_Items[(int)uVar9];
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          pUVar6 = ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial
                             (pUVar6,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Material_o *)0x0) {
            pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar6,(((value->obj).klass)->_1).element_class);
            if (pIVar7 == (Il2CppObject *)0x0) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
          }
          if ((uint)value->max_length <= uVar9) goto label_1823466bc;
          value->m_Items[(int)uVar9] = pUVar6;
          Il2CppCodeGenWriteBarrier(value->m_Items + (int)uVar9,pUVar6);
        }
        UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)pUVar3,value,(MethodInfo *)0x0);
      }
      pUVar5 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         (prefab,true,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Terrain);
      if (pUVar5 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
        uVar8 = 0;
        do {
          if ((int)pUVar5->max_length <= (int)uVar8) {
            return;
          }
          if ((uint)pUVar5->max_length <= uVar8) {
label_1823466bc:
            ThrowIndexOutOfRangeException();
          }
          pUVar3 = (&pUVar5->m_Items[0].klass)[(int)uVar8];
          if (pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
          pUVar6 = UnityEngine_Terrain__get_materialTemplate
                             ((UnityEngine_Terrain_o *)pUVar3,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
label_1823465fb:
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar6 = (UnityEngine_Material_o *)
                     ApplicationManagers_ResourceManager__LoadAsset
                               ("Map/Materials","TerrainMaterial",true,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Material_o *)0x0) {
              bVar2 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
              if (((pUVar6->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
            }
            UnityEngine_Terrain__set_materialTemplate
                      ((UnityEngine_Terrain_o *)pUVar3,pUVar6,(MethodInfo *)0x0);
            UnityEngine_Terrain__set_drawInstanced((UnityEngine_Terrain_o *)pUVar3,false,(MethodInfo *)0x0);
          }
          else {
            pUVar6 = UnityEngine_Terrain__get_materialTemplate
                               ((UnityEngine_Terrain_o *)pUVar3,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_Material_o *)0x0) break;
            shader = UnityEngine_Material__get_shader(pUVar6,(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
            }
            bVar4 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,(MethodInfo *)0x0);
            if (bVar4) goto label_1823465fb;
          }
          uVar8 = uVar8 + 1;
        } while( true );
      }
    }
  }
label_1823466c2:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ConvertBuiltinPipelineMaterial
// il2cpp: UnityEngine_Material_o* ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x182345e90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823460da: jmp 0x182346162
// asm:   0x1823460df: mov rdi, qword ptr [rip + 0x1d366fa]  ; "TransparentMaterial"
// asm:   0x1823460e6: jmp 0x182346162
// asm:   0x18234615b: mov rdi, qword ptr [rip + 0x1d7fec6]  ; "ParticleAdditiveMaterial"

UnityEngine_Material_o *
ApplicationManagers_AssetBundleManager__ConvertBuiltinPipelineMaterial
          (UnityEngine_Material_o *material,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Shader_o *shader;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Material_o *__this;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2_o UVar9;
  float fVar10;
  UnityEngine_Material_o *local_res8;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347940 == '\0') {
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
    Il2CppMethodInitialized_184347940 = '\x01';
  }
  local_res8 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return material;
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    shader = UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar3 = ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader(shader,(MethodInfo *)0x0);
    if (!bVar3) {
      return material;
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)material,(Il2CppObject **)&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
      if (bVar3) {
        return local_res8;
      }
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      if (Il2CppMethodInitialized_184347942 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Add");
        il2cpp_codegen_initialize_runtime_metadata(&"TransparentMaterial");
        il2cpp_codegen_initialize_runtime_metadata(&"BasicMaterial");
        il2cpp_codegen_initialize_runtime_metadata(&"Particle");
        il2cpp_codegen_initialize_runtime_metadata(&"CutoutMaterial");
        il2cpp_codegen_initialize_runtime_metadata(&"_DstBlend");
        il2cpp_codegen_initialize_runtime_metadata(&"ParticleMaterial");
        il2cpp_codegen_initialize_runtime_metadata(&"ParticleAdditiveMaterial");
        Il2CppMethodInitialized_184347942 = '\x01';
      }
      pUVar5 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
      if ((pUVar5 != (UnityEngine_Object_o *)0x0) &&
         (pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0), pSVar6 != (System_String_o *)0x0))
      {
        bVar3 = System_String__Contains(pSVar6,"Particle",(MethodInfo *)0x0);
        if (bVar3) {
          pUVar5 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
          if ((pUVar5 == (UnityEngine_Object_o *)0x0) ||
             (pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0),
             pSVar6 == (System_String_o *)0x0)) goto label_1823463a4;
          bVar3 = System_String__Contains(pSVar6,"Add",(MethodInfo *)0x0);
          pSVar6 = "ParticleAdditiveMaterial";
          if ((!bVar3) &&
             ((bVar3 = UnityEngine_Material__HasProperty_2ee2c00
                                 (material,"_DstBlend",(MethodInfo *)0x0), !bVar3 ||
              (fVar10 = UnityEngine_Material__GetFloat(material,"_DstBlend",(MethodInfo *)0x0),
              pSVar6 = "ParticleAdditiveMaterial", fVar10 != 1.0)))) {
            pSVar6 = "ParticleMaterial";
          }
        }
        else {
          iVar4 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0);
          pSVar6 = "TransparentMaterial";
          if ((iVar4 < 0x9c5) &&
             (iVar4 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0),
             pSVar6 = "CutoutMaterial", iVar4 < 0x992)) {
            pSVar6 = "BasicMaterial";
          }
        }
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar7 = (UnityEngine_Material_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           ("Map/Materials",pSVar6,true,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        if (pUVar7 != (UnityEngine_Material_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
          if (((pUVar7->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
          }
        }
        UnityEngine_Material___ctor_2ee55e0(__this,pUVar7,(MethodInfo *)0x0);
        local_res8 = __this;
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,pSVar6,(MethodInfo *)0x0);
          bVar3 = UnityEngine_Material__HasProperty_2ee2c00(material,"_Color",(MethodInfo *)0x0);
          pUVar7 = local_res8;
          if (bVar3) {
            pUVar8 = UnityEngine_Material__GetColor
                               ((UnityEngine_Color_o *)&local_18,material,"_Color",
                                (MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_1823463a4;
            local_18.r = (pUVar8->fields).r;
            local_18.g = (pUVar8->fields).g;
            local_18.b = (pUVar8->fields).b;
            local_18.a = (pUVar8->fields).a;
            UnityEngine_Material__set_color(pUVar7,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
          }
          bVar3 = UnityEngine_Material__HasProperty_2ee2c00(material,"_MainTex",(MethodInfo *)0x0);
          pUVar7 = local_res8;
          if (bVar3) {
            value = UnityEngine_Material__get_mainTexture(material,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_1823463a4;
            UnityEngine_Material__set_mainTexture(pUVar7,value,(MethodInfo *)0x0);
            pUVar7 = local_res8;
            UVar9 = UnityEngine_Material__get_mainTextureScale(material,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_1823463a4;
            UnityEngine_Material__set_mainTextureScale(pUVar7,UVar9,(MethodInfo *)0x0);
            pUVar7 = local_res8;
            UVar9 = UnityEngine_Material__get_mainTextureOffset(material,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_1823463a4;
            UnityEngine_Material__set_mainTextureOffset(pUVar7,UVar9,(MethodInfo *)0x0);
          }
          bVar3 = UnityEngine_Material__HasProperty_2ee2c00(material,"_Cutoff",(MethodInfo *)0x0);
          pUVar7 = local_res8;
          if (bVar3) {
            fVar10 = UnityEngine_Material__GetFloat(material,"_Cutoff",(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_1823463a4;
            UnityEngine_Material__SetFloat(pUVar7,"_Cutoff",fVar10,(MethodInfo *)0x0);
          }
          if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar2,(Il2CppObject *)material,(Il2CppObject *)local_res8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
            return local_res8;
          }
        }
      }
    }
  }
label_1823463a4:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$IsBuiltinPipelineShader
// il2cpp: bool ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader (UnityEngine_Shader_o* shader, const MethodInfo* method);
// 0x182346f50

bool ApplicationManagers_AssetBundleManager__IsBuiltinPipelineShader
               (UnityEngine_Shader_o *shader,MethodInfo *method)

{
  System_String_array *array;
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *object;
  System_Predicate_T__o *match;
  int32_t iVar4;
  UnityEngine_Rendering_ShaderTagId_o local_res8 [2];
  
  if (Il2CppMethodInitialized_184347941 == '\0') {
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
    Il2CppMethodInitialized_184347941 = '\x01';
  }
  local_res8[0].fields.m_Id = (UnityEngine_Rendering_ShaderTagId_Fields)0;
  if (shader != (UnityEngine_Shader_o *)0x0) {
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,"Hidden/InternalErrorShader",(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = UnityEngine_Shader__get_isSupported(shader,(MethodInfo *)0x0), !bVar1)) {
      return true;
    }
    iVar4 = 0;
    while( true ) {
      iVar2 = UnityEngine_Shader__get_passCount(shader,(MethodInfo *)0x0);
      if (iVar2 <= iVar4) {
        iVar4 = UnityEngine_Shader__get_passCount(shader,(MethodInfo *)0x0);
        return 0 < iVar4;
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      local_res8[0] =
           UnityEngine_Shader__FindPassTagValue
                     (shader,iVar4,
                      (UnityEngine_Rendering_ShaderTagId_o)
                      (TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->LightModeTag).fields.
                      m_Id,(MethodInfo *)0x0);
      pSVar3 = UnityEngine_Rendering_ShaderTagId__get_name(local_res8,(MethodInfo *)0x0);
      if (object == (ApplicationManagers_AssetBundleManager___c__DisplayClass25_0_o *)0x0) break;
      (object->fields).lightMode = pSVar3;
      Il2CppCodeGenWriteBarrier(&(object->fields).lightMode,pSVar3);
      bVar1 = System_String__IsNullOrEmpty((object->fields).lightMode,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      array = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->UniversalLightModes;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AssetBundleManager_c__DisplayClass25_0_IsBuiltinPipelineShader_b__0
                 ,(MethodInfo_B61EB0 *)0x0);
      bVar1 = System_Array__Exists_object_
                        ((System_Object_array *)array,match,
                         (MethodInfo_75C450 *)MethodInfo_System_Array_Exists_string);
      if (bVar1) {
        return false;
      }
      iVar4 = iVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$GetBasicMaterialName
// il2cpp: System_String_o* ApplicationManagers_AssetBundleManager__GetBasicMaterialName (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x182346c50

System_String_o *
ApplicationManagers_AssetBundleManager__GetBasicMaterialName
          (UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184347942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"TransparentMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"BasicMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"Particle");
    il2cpp_codegen_initialize_runtime_metadata(&"CutoutMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"_DstBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"ParticleMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"ParticleAdditiveMaterial");
    Il2CppMethodInitialized_184347942 = '\x01';
  }
  if (((material != (UnityEngine_Material_o *)0x0) &&
      (pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Object_o *)0x0)) &&
     (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 != (System_String_o *)0x0)) {
    bVar1 = System_String__Contains(pSVar4,"Particle",(MethodInfo *)0x0);
    if (!bVar1) {
      iVar2 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0);
      if (0x9c4 < iVar2) {
        return "TransparentMaterial";
      }
      iVar2 = UnityEngine_Material__get_renderQueue(material,(MethodInfo *)0x0);
      pSVar4 = "CutoutMaterial";
      if (iVar2 < 0x992) {
        pSVar4 = "BasicMaterial";
      }
      return pSVar4;
    }
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material,(MethodInfo *)0x0);
    if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
       (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 != (System_String_o *)0x0)) {
      bVar1 = System_String__Contains(pSVar4,"Add",(MethodInfo *)0x0);
      if ((!bVar1) &&
         ((bVar1 = UnityEngine_Material__HasProperty_2ee2c00(material,"_DstBlend",(MethodInfo *)0x0)
          , !bVar1 ||
          (fVar5 = UnityEngine_Material__GetFloat(material,"_DstBlend",(MethodInfo *)0x0),
          fVar5 != 1.0)))) {
        return "ParticleMaterial";
      }
      return "ParticleAdditiveMaterial";
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$ValidateCustomPrefab
// il2cpp: void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x182347750
// eh: try 0x182347970..0x182347b91 -> pad 0x183333410 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823478ac: nop dword ptr [rax]
// asm:   0x18234796d: nop dword ptr [rax]
// asm:   0x182347a29: lea rcx, [rsp + 0x50]
// asm:   0x182347a2e: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x182347a33: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182347a38: test rcx, rcx
// asm:   0x182347a3b: jne 0x182347b91
// asm:   0x182347a41: xor r15d, r15d
// asm:   0x182347a44: mov r12d, dword ptr [rsp + 0xa0]
// asm:   0x182347a4c: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x182347a51: mov r8, rdi
// asm:   0x182347a54: mov r13, rdi
// asm:   0x182347b0f: mov ebx, r15d
// asm:   0x182347b91: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183333410: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333415: push rbp
// asm:   0x183333416: sub rsp, 0x20
// asm:   0x18333341a: mov rbp, rdx
// asm:   0x18333341d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183333421: mov rcx, qword ptr [rax]
// asm:   0x183333424: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183333428: movabs rax, 0
// asm:   0x183333432: add rsp, 0x20
// asm:   0x183333436: pop rbp
// asm:   0x183333437: ret 

void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  System_Type_array *pSVar3;
  UnityEngine_Animation_c *pUVar4;
  Il2CppType *handle;
  bool bVar5;
  System_Type_o *pSVar6;
  UnityEngine_Component_array *pUVar7;
  System_Type_o *pSVar8;
  UnityEngine_Animation_o *pUVar9;
  void *pvVar10;
  UnityEngine_Animation_o *pUVar11;
  UnityEngine_AnimationClip_o *pUVar12;
  UnityEngine_AnimationEvent_array *pUVar13;
  UnityEngine_Object_o *x;
  UnityEngine_RuntimeAnimatorController_o *__this;
  UnityEngine_AnimationClip_array *pUVar14;
  System_String_o *pSVar15;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  uint uVar16;
  uint uVar17;
  UnityEngine_Animation_o *pUVar18;
  Il2CppObject *local_res18;
  undefined8 local_res20;
  Il2CppObject **local_48;
  undefined8 *local_40;
  
  if (Il2CppMethodInitialized_184347943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationEvent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Component);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347943 = '\x01';
  }
  handle = TypeRef_UnityEngine_Component;
  pUVar18 = (UnityEngine_Animation_o *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = 0;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((prefab != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar7 = UnityEngine_GameObject__GetComponentsInChildren_2f19e70(prefab,pSVar6,true,(MethodInfo *)0x0),
     pUVar11 = pUVar18, pUVar7 != (UnityEngine_Component_array *)0x0)) {
    do {
      uVar1 = (uint)pUVar7->max_length;
      uVar17 = (uint)pUVar11;
      if ((int)uVar1 <= (int)uVar17) {
        return;
      }
      if (uVar1 <= uVar17) {
label_182347c42:
        ThrowIndexOutOfRangeException();
      }
      pUVar11 = (UnityEngine_Animation_o *)pUVar7->m_Items[(int)uVar17];
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar3 = TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->AllowedComponents;
      pUVar9 = pUVar18;
      if (pSVar3 == (System_Type_array *)0x0) break;
      while( true ) {
        uVar1 = (uint)pSVar3->max_length;
        uVar16 = (uint)pUVar9;
        if ((int)uVar1 <= (int)uVar16) {
          NullCheck(pUVar11);
          pSVar6 = System_Object__GetType((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
          NullCheck(pSVar6);
          pSVar15 = (System_String_o *)il2cpp_runtime_helper_180003110(8,pSVar6);
          str2 = il2cpp_codegen_get_runtime_metadata(&")");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Disallowed component (");
          pSVar15 = System_String__Concat_1969b70(str0,pSVar15,str2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_00,pSVar15,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_ApplicationManagers_AssetBundleManager_ValidateCustomPrefab);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
        }
        if (uVar1 <= uVar16) goto label_182347c42;
        if (pUVar11 == (UnityEngine_Animation_o *)0x0) goto label_182347c48;
        pSVar6 = pSVar3->m_Items[(int)uVar16];
        pSVar8 = System_Object__GetType((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
        if (pSVar6 == (System_Type_o *)0x0) goto label_182347c48;
        bVar5 = (*(pSVar6->klass->vtable)._22_IsAssignableFrom.methodPtr)
                          (pSVar6,pSVar8,(pSVar6->klass->vtable)._22_IsAssignableFrom.method);
        if (bVar5) break;
        pUVar9 = (UnityEngine_Animation_o *)(ulonglong)(uVar16 + 1);
      }
      pUVar9 = pUVar18;
      if (pUVar11->klass == TypeInfo_UnityEngine_Animation) {
        pUVar9 = pUVar11;
      }
      if (pUVar9 == (UnityEngine_Animation_o *)0x0) {
        pUVar4 = pUVar11->klass;
        bVar2 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
        if ((bVar2 <= (pUVar4->_2).typeHierarchyDepth) &&
           ((pUVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Animator))
        {
          bVar2 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
          if (((pUVar4->_2).typeHierarchyDepth < bVar2) ||
             ((pUVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Animator
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
          }
          x = (UnityEngine_Object_o *)
              UnityEngine_Animator__get_runtimeAnimatorController
                        ((UnityEngine_Animator_o *)pUVar11,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            __this = UnityEngine_Animator__get_runtimeAnimatorController
                               ((UnityEngine_Animator_o *)pUVar11,(MethodInfo *)0x0);
            if ((__this == (UnityEngine_RuntimeAnimatorController_o *)0x0) ||
               (pUVar14 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this,(MethodInfo *)0x0),
               pUVar11 = pUVar18, pUVar14 == (UnityEngine_AnimationClip_array *)0x0)) break;
            while( true ) {
              uVar1 = (uint)pUVar14->max_length;
              uVar16 = (uint)pUVar11;
              if ((int)uVar1 <= (int)uVar16) break;
              if (uVar1 <= uVar16) goto label_182347c42;
              pUVar12 = pUVar14->m_Items[(int)uVar16];
              pUVar13 = (UnityEngine_AnimationEvent_array *)
                        SZArrayNew(TypeInfo_UnityEngine_AnimationEvent_array,0);
              if (pUVar12 == (UnityEngine_AnimationClip_o *)0x0) goto label_182347c48;
              UnityEngine_AnimationClip__set_events(pUVar12,pUVar13,(MethodInfo *)0x0);
              pUVar11 = (UnityEngine_Animation_o *)(ulonglong)(uVar16 + 1);
            }
          }
        }
      }
      else {
        pUVar9 = pUVar18;
        if (pUVar11->klass == TypeInfo_UnityEngine_Animation) {
          pUVar9 = pUVar11;
        }
        if (pUVar9 == (UnityEngine_Animation_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
        }
        pUVar9 = pUVar18;
        if (pUVar11->klass == TypeInfo_UnityEngine_Animation) {
          pUVar9 = pUVar11;
        }
        local_res18 = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(pUVar9,(MethodInfo *)0x0);
        local_48 = &local_res18;
        local_40 = &local_res20;
        while( true ) {
          if (local_res18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar10 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
          if ((char)pvVar10 == '\0') break;
          if (local_res18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = InterfaceInvoker0_Invoke
                              (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
          if (pUVar11 == (UnityEngine_Animation_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar9 = pUVar18;
          if (pUVar11->klass == (UnityEngine_Animation_c *)TypeInfo_UnityEngine_AnimationState) {
            pUVar9 = pUVar11;
          }
          if (pUVar9 == (UnityEngine_Animation_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
          }
          pUVar9 = pUVar18;
          if (pUVar11->klass == (UnityEngine_Animation_c *)TypeInfo_UnityEngine_AnimationState) {
            pUVar9 = pUVar11;
          }
          pUVar12 = UnityEngine_AnimationState__get_clip
                              ((UnityEngine_AnimationState_o *)pUVar9,(MethodInfo *)0x0);
          pUVar13 = (UnityEngine_AnimationEvent_array *)
                    SZArrayNew(TypeInfo_UnityEngine_AnimationEvent_array,0);
          if (pUVar12 == (UnityEngine_AnimationClip_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_AnimationClip__set_events(pUVar12,pUVar13,(MethodInfo *)0x0);
        }
        il2cpp_runtime_helper_1806aa210(&local_48);
      }
      pUVar11 = (UnityEngine_Animation_o *)(ulonglong)(uVar17 + 1);
    } while( true );
  }
label_182347c48:
  ThrowNullReferenceException();
}


// ApplicationManagers.AssetBundleManager$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___ctor (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_AssetBundleManager___ctor(ApplicationManagers_AssetBundleManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$.cctor
// il2cpp: void ApplicationManagers_AssetBundleManager___cctor (const MethodInfo* method);
// 0x182347c50

void ApplicationManagers_AssetBundleManager___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppType *handle;
  System_Collections_Generic_Dictionary_string__Dictionary_string__Object___o *__this;
  System_Collections_Generic_Dictionary_string__AssetBundle__o *__this_00;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_01;
  System_String_array *value;
  System_Type_array *value_00;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Rendering_ShaderTagId_o local_res10 [6];
  
  if (Il2CppMethodInitialized_184347944 == '\0') {
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
    Il2CppMethodInitialized_184347944 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Object_ctor);
  TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_cache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_cache,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AssetBundle);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_AssetBundle_ctor);
  TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_bundles,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials = __this_01;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_convertedMaterials,__this_01);
  local_res10[0].fields.m_Id = (UnityEngine_Rendering_ShaderTagId_Fields)0;
  UnityEngine_Rendering_ShaderTagId___ctor(local_res10,"LightMode",(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->LightModeTag).fields.m_Id =
       (int32_t)local_res10[0].fields.m_Id;
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "SRPDefaultUnlit";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "SRPDefaultUnlit";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "UniversalForward";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "UniversalForward";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "UniversalForwardOnly";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "UniversalForwardOnly";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "UniversalGBuffer";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "UniversalGBuffer";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "Universal2D";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "Universal2D";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->UniversalLightModes = value;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->UniversalLightModes,
                         value);
              value_00 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,0x2c);
              handle = TypeRef_UnityEngine_Transform;
              if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354ea0);
              }
              pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if (value_00 == (System_Type_array *)0x0) goto label_182348ead;
              if (pSVar2 != (System_Type_o *)0x0) {
                pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar2,(((value_00->obj).klass)->_1).element_class);
                if (pIVar3 == (Il2CppObject *)0x0) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
              }
              if ((int)value_00->max_length != 0) {
                value_00->m_Items[0] = pSVar2;
                Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar2);
                pSVar2 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Collider,(MethodInfo *)0x0
                                   );
                if (pSVar2 != (System_Type_o *)0x0) {
                  pIVar3 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)pSVar2,(((value_00->obj).klass)->_1).element_class);
                  if (pIVar3 == (Il2CppObject *)0x0) {
                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                  }
                }
                if (1 < (uint)value_00->max_length) {
                  value_00->m_Items[1] = pSVar2;
                  Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar2);
                  pSVar2 = System_Type__GetTypeFromHandle
                                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_MeshFilter,
                                      (MethodInfo *)0x0);
                  if (pSVar2 != (System_Type_o *)0x0) {
                    pIVar3 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar2,(((value_00->obj).klass)->_1).element_class);
                    if (pIVar3 == (Il2CppObject *)0x0) {
                      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                    }
                  }
                  if (2 < (uint)value_00->max_length) {
                    value_00->m_Items[2] = pSVar2;
                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar2);
                    pSVar2 = System_Type__GetTypeFromHandle
                                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Animation,
                                        (MethodInfo *)0x0);
                    if (pSVar2 != (System_Type_o *)0x0) {
                      pIVar3 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar2,(((value_00->obj).klass)->_1).element_class);
                      if (pIVar3 == (Il2CppObject *)0x0) {
                        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                      }
                    }
                    if (3 < (uint)value_00->max_length) {
                      value_00->m_Items[3] = pSVar2;
                      Il2CppCodeGenWriteBarrier(value_00->m_Items + 3,pSVar2);
                      pSVar2 = System_Type__GetTypeFromHandle
                                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Animator,
                                          (MethodInfo *)0x0);
                      if (pSVar2 != (System_Type_o *)0x0) {
                        pIVar3 = il2cpp_vm_Object_IsInst
                                           ((Il2CppObject *)pSVar2,(((value_00->obj).klass)->_1).element_class
                                           );
                        if (pIVar3 == (Il2CppObject *)0x0) {
                          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                        }
                      }
                      if (4 < (uint)value_00->max_length) {
                        value_00->m_Items[4] = pSVar2;
                        Il2CppCodeGenWriteBarrier(value_00->m_Items + 4,pSVar2);
                        pSVar2 = System_Type__GetTypeFromHandle
                                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioSource,
                                            (MethodInfo *)0x0);
                        if (pSVar2 != (System_Type_o *)0x0) {
                          pIVar3 = il2cpp_vm_Object_IsInst
                                             ((Il2CppObject *)pSVar2,
                                              (((value_00->obj).klass)->_1).element_class);
                          if (pIVar3 == (Il2CppObject *)0x0) {
                            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                          }
                        }
                        if (5 < (uint)value_00->max_length) {
                          value_00->m_Items[5] = pSVar2;
                          Il2CppCodeGenWriteBarrier(value_00->m_Items + 5,pSVar2);
                          pSVar2 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_AudioClip,
                                              (MethodInfo *)0x0);
                          if (pSVar2 != (System_Type_o *)0x0) {
                            pIVar3 = il2cpp_vm_Object_IsInst
                                               ((Il2CppObject *)pSVar2,
                                                (((value_00->obj).klass)->_1).element_class);
                            if (pIVar3 == (Il2CppObject *)0x0) {
                              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                            }
                          }
                          if (6 < (uint)value_00->max_length) {
                            value_00->m_Items[6] = pSVar2;
                            Il2CppCodeGenWriteBarrier(value_00->m_Items + 6,pSVar2);
                            pSVar2 = System_Type__GetTypeFromHandle
                                               ((System_RuntimeTypeHandle_o)
                                                TypeRef_UnityEngine_AudioChorusFilter,(MethodInfo *)0x0);
                            if (pSVar2 != (System_Type_o *)0x0) {
                              pIVar3 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)pSVar2,
                                                  (((value_00->obj).klass)->_1).element_class);
                              if (pIVar3 == (Il2CppObject *)0x0) {
                                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                              }
                            }
                            if (7 < (uint)value_00->max_length) {
                              value_00->m_Items[7] = pSVar2;
                              Il2CppCodeGenWriteBarrier(value_00->m_Items + 7,pSVar2);
                              pSVar2 = System_Type__GetTypeFromHandle
                                                 ((System_RuntimeTypeHandle_o)
                                                  TypeRef_UnityEngine_AudioDistortionFilter,(MethodInfo *)0x0)
                              ;
                              if (pSVar2 != (System_Type_o *)0x0) {
                                pIVar3 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)pSVar2,
                                                    (((value_00->obj).klass)->_1).element_class);
                                if (pIVar3 == (Il2CppObject *)0x0) {
                                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                }
                              }
                              if (8 < (uint)value_00->max_length) {
                                value_00->m_Items[8] = pSVar2;
                                Il2CppCodeGenWriteBarrier(value_00->m_Items + 8,pSVar2);
                                pSVar2 = System_Type__GetTypeFromHandle
                                                   ((System_RuntimeTypeHandle_o)
                                                    TypeRef_UnityEngine_AudioEchoFilter,(MethodInfo *)0x0);
                                if (pSVar2 != (System_Type_o *)0x0) {
                                  pIVar3 = il2cpp_vm_Object_IsInst
                                                     ((Il2CppObject *)pSVar2,
                                                      (((value_00->obj).klass)->_1).element_class);
                                  if (pIVar3 == (Il2CppObject *)0x0) {
                                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                  }
                                }
                                if (9 < (uint)value_00->max_length) {
                                  value_00->m_Items[9] = pSVar2;
                                  Il2CppCodeGenWriteBarrier(value_00->m_Items + 9,pSVar2);
                                  pSVar2 = System_Type__GetTypeFromHandle
                                                     ((System_RuntimeTypeHandle_o)
                                                      TypeRef_UnityEngine_AudioHighPassFilter,
                                                      (MethodInfo *)0x0);
                                  if (pSVar2 != (System_Type_o *)0x0) {
                                    pIVar3 = il2cpp_vm_Object_IsInst
                                                       ((Il2CppObject *)pSVar2,
                                                        (((value_00->obj).klass)->_1).element_class);
                                    if (pIVar3 == (Il2CppObject *)0x0) {
                                      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                    }
                                  }
                                  if (10 < (uint)value_00->max_length) {
                                    value_00->m_Items[10] = pSVar2;
                                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 10,pSVar2);
                                    pSVar2 = System_Type__GetTypeFromHandle
                                                       ((System_RuntimeTypeHandle_o)
                                                        TypeRef_UnityEngine_AudioListener,(MethodInfo *)0x0);
                                    if (pSVar2 != (System_Type_o *)0x0) {
                                      pIVar3 = il2cpp_vm_Object_IsInst
                                                         ((Il2CppObject *)pSVar2,
                                                          (((value_00->obj).klass)->_1).element_class);
                                      if (pIVar3 == (Il2CppObject *)0x0) {
                                        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                      }
                                    }
                                    if (0xb < (uint)value_00->max_length) {
                                      value_00->m_Items[0xb] = pSVar2;
                                      Il2CppCodeGenWriteBarrier(value_00->m_Items + 0xb,pSVar2);
                                      pSVar2 = System_Type__GetTypeFromHandle
                                                         ((System_RuntimeTypeHandle_o)
                                                          TypeRef_UnityEngine_AudioLowPassFilter,
                                                          (MethodInfo *)0x0);
                                      if (pSVar2 != (System_Type_o *)0x0) {
                                        pIVar3 = il2cpp_vm_Object_IsInst
                                                           ((Il2CppObject *)pSVar2,
                                                            (((value_00->obj).klass)->_1).element_class);
                                        if (pIVar3 == (Il2CppObject *)0x0) {
                                          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                        }
                                      }
                                      if (0xc < (uint)value_00->max_length) {
                                        value_00->m_Items[0xc] = pSVar2;
                                        Il2CppCodeGenWriteBarrier(value_00->m_Items + 0xc,pSVar2);
                                        pSVar2 = System_Type__GetTypeFromHandle
                                                           ((System_RuntimeTypeHandle_o)
                                                            TypeRef_UnityEngine_AudioReverbFilter,
                                                            (MethodInfo *)0x0);
                                        if (pSVar2 != (System_Type_o *)0x0) {
                                          pIVar3 = il2cpp_vm_Object_IsInst
                                                             ((Il2CppObject *)pSVar2,
                                                              (((value_00->obj).klass)->_1).element_class);
                                          if (pIVar3 == (Il2CppObject *)0x0) {
                                            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                          }
                                        }
                                        if (0xd < (uint)value_00->max_length) {
                                          value_00->m_Items[0xd] = pSVar2;
                                          Il2CppCodeGenWriteBarrier(value_00->m_Items + 0xd,pSVar2);
                                          pSVar2 = System_Type__GetTypeFromHandle
                                                             ((System_RuntimeTypeHandle_o)
                                                              TypeRef_UnityEngine_AudioReverbZone,
                                                              (MethodInfo *)0x0);
                                          if (pSVar2 != (System_Type_o *)0x0) {
                                            pIVar3 = il2cpp_vm_Object_IsInst
                                                               ((Il2CppObject *)pSVar2,
                                                                (((value_00->obj).klass)->_1).element_class);
                                            if (pIVar3 == (Il2CppObject *)0x0) {
                                              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                            }
                                          }
                                          if (0xe < (uint)value_00->max_length) {
                                            value_00->m_Items[0xe] = pSVar2;
                                            Il2CppCodeGenWriteBarrier(value_00->m_Items + 0xe,pSVar2);
                                            pSVar2 = System_Type__GetTypeFromHandle
                                                               ((System_RuntimeTypeHandle_o)
                                                                TypeRef_UnityEngine_ParticleSystem,
                                                                (MethodInfo *)0x0);
                                            if (pSVar2 != (System_Type_o *)0x0) {
                                              pIVar3 = il2cpp_vm_Object_IsInst
                                                                 ((Il2CppObject *)pSVar2,
                                                                  (((value_00->obj).klass)->_1).element_class)
                                              ;
                                              if (pIVar3 == (Il2CppObject *)0x0) {
                                                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                              }
                                            }
                                            if (0xf < (uint)value_00->max_length) {
                                              value_00->m_Items[0xf] = pSVar2;
                                              Il2CppCodeGenWriteBarrier(value_00->m_Items + 0xf,pSVar2);
                                              pSVar2 = System_Type__GetTypeFromHandle
                                                                 ((System_RuntimeTypeHandle_o)
                                                                  TypeRef_UnityEngine_ParticleSystemForceField
                                                                  ,(MethodInfo *)0x0);
                                              if (pSVar2 != (System_Type_o *)0x0) {
                                                pIVar3 = il2cpp_vm_Object_IsInst
                                                                   ((Il2CppObject *)pSVar2,
                                                                    (((value_00->obj).klass)->_1).
                                                                    element_class);
                                                if (pIVar3 == (Il2CppObject *)0x0) {
                                                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                                }
                                              }
                                              if (0x10 < (uint)value_00->max_length) {
                                                value_00->m_Items[0x10] = pSVar2;
                                                Il2CppCodeGenWriteBarrier(value_00->m_Items + 0x10,pSVar2);
                                                pSVar2 = System_Type__GetTypeFromHandle
                                                                   ((System_RuntimeTypeHandle_o)
                                                                    TypeRef_UnityEngine_LensFlare,
                                                                    (MethodInfo *)0x0);
                                                if (pSVar2 != (System_Type_o *)0x0) {
                                                  pIVar3 = il2cpp_vm_Object_IsInst
                                                                     ((Il2CppObject *)pSVar2,
                                                                      (((value_00->obj).klass)->_1).
                                                                      element_class);
                                                  if (pIVar3 == (Il2CppObject *)0x0) {
                                                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                       ();
                                                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                                                  }
                                                }
                                                if (0x11 < (uint)value_00->max_length) {
                                                  value_00->m_Items[0x11] = pSVar2;
                                                  Il2CppCodeGenWriteBarrier(value_00->m_Items + 0x11,pSVar2);
                                                  pSVar2 = System_Type__GetTypeFromHandle
                                                                     ((System_RuntimeTypeHandle_o)
                                                                                                                                            
                                                       TypeRef_UnityEngine_Rendering_LensFlareComponentSRP,
                                                       (MethodInfo *)0x0);
                                                  if (pSVar2 != (System_Type_o *)0x0) {
                                                    pIVar3 = il2cpp_vm_Object_IsInst
                                                                       ((Il2CppObject *)pSVar2,
                                                                        (((value_00->obj).klass)->_1).
                                                                        element_class);
                                                    if (pIVar3 == (Il2CppObject *)0x0) {
                                                      pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0)
                                                      ;
                                                    }
                                                  }
                                                  if (0x12 < (uint)value_00->max_length) {
                                                    value_00->m_Items[0x12] = pSVar2;
                                                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 0x12,pSVar2)
                                                    ;
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        TypeRef_UnityEngine_Rendering_Volume,
                                                                        (MethodInfo *)0x0);
                                                    if (pSVar2 != (System_Type_o *)0x0) {
                                                      pIVar3 = il2cpp_vm_Object_IsInst
                                                                         ((Il2CppObject *)pSVar2,
                                                                          (((value_00->obj).klass)->_1).
                                                                          element_class);
                                                      if (pIVar3 == (Il2CppObject *)0x0) {
                                                        pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                      }
                                                    }
                                                    if (0x13 < (uint)value_00->max_length) {
                                                      value_00->m_Items[0x13] = pSVar2;
                                                      Il2CppCodeGenWriteBarrier
                                                                (value_00->m_Items + 0x13,pSVar2);
                                                      pSVar2 = System_Type__GetTypeFromHandle
                                                                         ((System_RuntimeTypeHandle_o)
                                                                          TypeRef_UnityEngine_LineRenderer,
                                                                          (MethodInfo *)0x0);
                                                      if (pSVar2 != (System_Type_o *)0x0) {
                                                        pIVar3 = il2cpp_vm_Object_IsInst
                                                                           ((Il2CppObject *)pSVar2,
                                                                            (((value_00->obj).klass)->_1).
                                                                            element_class);
                                                        if (pIVar3 == (Il2CppObject *)0x0) {
                                                          pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                      }
                                                      if (0x14 < (uint)value_00->max_length) {
                                                        value_00->m_Items[0x14] = pSVar2;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (value_00->m_Items + 0x14,pSVar2);
                                                        pSVar2 = System_Type__GetTypeFromHandle
                                                                           ((System_RuntimeTypeHandle_o)
                                                                            TypeRef_UnityEngine_Projector,
                                                                            (MethodInfo *)0x0);
                                                        if (pSVar2 != (System_Type_o *)0x0) {
                                                          pIVar3 = il2cpp_vm_Object_IsInst
                                                                             ((Il2CppObject *)pSVar2,
                                                                              (((value_00->obj).klass)->_1).
                                                                              element_class);
                                                          if (pIVar3 == (Il2CppObject *)0x0) {
                                                            pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x15 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x15] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x15,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_TrailRenderer
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x16 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x16] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x16,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Renderer,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x17 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x17] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x17,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Terrain,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x18 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x18] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x18,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_ArticulationBody,(MethodInfo *)0x0)
                                                       ;
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x19 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x19] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x19,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_CharacterController,
                                                       (MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1a < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1a] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1a,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Cloth,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1b < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1b] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1b,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_ConstantForce
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1c < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1c] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1c,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Joint,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1d < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1d] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1d,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Rigidbody,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1e < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1e] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1e,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Light,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x1f < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x1f] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x1f,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_Rendering_Universal_UniversalAdditionalLightData
                                                       ,(MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x20 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x20] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x20,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_LODGroup,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x21 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x21] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x21,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_Video_VideoPlayer,(MethodInfo *)0x0
                                                       );
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x22 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x22] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x22,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_WindZone,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x23 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x23] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x23,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_ReflectionProbe,(MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x24 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x24] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x24,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_Skybox,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x25 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x25] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x25,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_LightProbeGroup,(MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x26 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x26] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x26,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_LightProbeProxyVolume,
                                                       (MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x27 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x27] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x27,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_OcclusionArea
                                                                             ,(MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x28 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x28] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x28,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_OcclusionPortal,(MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x29 < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x29] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x29,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                                                                                                          
                                                       TypeRef_UnityEngine_Rendering_SortingGroup,
                                                       (MethodInfo *)0x0);
                                                       if (pSVar2 != (System_Type_o *)0x0) {
                                                         pIVar3 = il2cpp_vm_Object_IsInst
                                                                            ((Il2CppObject *)pSVar2,
                                                                             (((value_00->obj).klass)->_1).
                                                                             element_class);
                                                         if (pIVar3 == (Il2CppObject *)0x0) {
                                                           pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x2a < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x2a] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x2a,pSVar2);
                                                         pSVar2 = System_Type__GetTypeFromHandle
                                                                            ((System_RuntimeTypeHandle_o)
                                                                             TypeRef_UnityEngine_TextMesh,
                                                                             (MethodInfo *)0x0);
                                                         if (pSVar2 != (System_Type_o *)0x0) {
                                                           pIVar3 = il2cpp_vm_Object_IsInst
                                                                              ((Il2CppObject *)pSVar2,
                                                                               (((value_00->obj).klass)->_1).
                                                                               element_class);
                                                           if (pIVar3 == (Il2CppObject *)0x0) {
                                                             pIVar3 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar3,(MethodInfo *)0x0);
                                                       }
                                                       }
                                                       if (0x2b < (uint)value_00->max_length) {
                                                         value_00->m_Items[0x2b] = pSVar2;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (value_00->m_Items + 0x2b,pSVar2);
                                                         TypeInfo_ApplicationManagers_AssetBundleManager->
                                                         static_fields->AllowedComponents = value_00;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&
                                                       TypeInfo_ApplicationManagers_AssetBundleManager->
                                                       static_fields->AllowedComponents,value_00);
                                                       return;
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
label_182348ead:
  ThrowNullReferenceException();
}


