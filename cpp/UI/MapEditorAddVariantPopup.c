// Type: UI.MapEditorAddVariantPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddVariantPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs
// --------------------------------

// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor(UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0 (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1822b9050

void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddVariantPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddVariantPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._63_OnSelectObject.methodPtr)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._63_OnSelectObject.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__get_Title (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1822a17c0

System_String_o *
UI_MapEditorAddVariantPopup__get_Title(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Choose Variant");
    Il2CppMethodInitialized_1843474c1 = '\x01';
  }
  return "Choose Variant";
}


// UI.MapEditorAddVariantPopup$$get_Width
// il2cpp: float UI_MapEditorAddVariantPopup__get_Width (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1822a0680

float UI_MapEditorAddVariantPopup__get_Width(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddVariantPopup$$get_Height
// il2cpp: float UI_MapEditorAddVariantPopup__get_Height (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1822a0670

float UI_MapEditorAddVariantPopup__get_Height(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddVariantPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddVariantPopup__get_TopBarHeight (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1821c3380

float
UI_MapEditorAddVariantPopup__get_TopBarHeight(UI_MapEditorAddVariantPopup_o* __this, MethodInfo* method)

{
  return 65.0;
}


// UI.MapEditorAddVariantPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddVariantPopup__get_ScrollBar (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorAddVariantPopup__get_ScrollBar(UI_MapEditorAddVariantPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorAddVariantPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddVariantPopup__get_VerticalSpacing (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1821c0c80

float UI_MapEditorAddVariantPopup__get_VerticalSpacing
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddVariantPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_MapEditorAddVariantPopup__get_HorizontalPadding(UI_MapEditorAddVariantPopup_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.MapEditorAddVariantPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_MapEditorAddVariantPopup__get_VerticalPadding(UI_MapEditorAddVariantPopup_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.MapEditorAddVariantPopup$$Setup
// il2cpp: void UI_MapEditorAddVariantPopup__Setup (UI_MapEditorAddVariantPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822a10b0

void UI_MapEditorAddVariantPopup__Setup
               (UI_MapEditorAddVariantPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843474c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorAddVariantPopup_Setup_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843474c2 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_Setup_b__18_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822a0e40

void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_TooltipPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843474c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843474c3 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
    if (pUVar3 != (UI_TooltipPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$Show
// il2cpp: void UI_MapEditorAddVariantPopup__Show (UI_MapEditorAddVariantPopup_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x1822a11f0
// eh: try 0x1822a1370..0x1822a15d7 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822a136e: nop 
// asm:   0x1822a13bc: mov rdx, qword ptr [rip + 0x1ddf125]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1822a13c3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822a13c8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822a13cd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822a13d2: test rcx, rcx
// asm:   0x1822a13d5: jne 0x1822a162f
// asm:   0x1822a13db: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x1822a13e3: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1822a15ac: nop dword ptr [rax]
// asm:   0x1822a15e8: mov rdx, qword ptr [rip + 0x1dcf069]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose
// asm:   0x1822a15ef: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822a15f4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822a15f9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822a15fe: test rcx, rcx
// asm:   0x1822a1601: jne 0x1822a163b
// asm:   0x1822a1603: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1822a162f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822a163b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_MapEditorAddVariantPopup__Show
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *prefab,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_string__List_string___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_02;
  undefined1 local_68 [16];
  System_Collections_Generic_List_string__o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  System_Collections_Generic_List_string__o *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  System_Collections_Generic_List_string__o *local_28;
  
  if (Il2CppMethodInitialized_1843474c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_GroupItems_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843474c4 = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (System_Collections_Generic_List_string__o *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (System_Collections_Generic_List_string__o *)0x0;
  pSVar3 = (__this->fields)._rows;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_50 = (undefined1  [8])local_68._0_8_;
    pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
    local_40 = local_58;
    local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_50,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      pSVar7 = local_40;
      if (!bVar6) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar3 = (__this->fields)._rows;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar7->fields)._items;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = prefab;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,prefab);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)prefab,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          __this_00 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
          if (__this_00 != (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
            bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)prefab,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey
                              );
            if (bVar6) {
              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
              }
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
              if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1822a1629;
              collection = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (__this_01,(Il2CppObject *)prefab,
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item
                                     );
              System_Collections_Generic_List_object___AddRange
                        ((System_Collections_Generic_List_object__o *)pSVar7,
                         (System_Collections_Generic_IEnumerable_T__o *)collection,
                         (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
            }
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            __this_02 = Utility_Util__GroupItems_object_
                                  ((System_Collections_Generic_List_T__o *)pSVar7,8,
                                   (MethodInfo_86AC50 *)MethodInfo_Utility_Util_GroupItems_string);
            if (__this_02 != (System_Collections_Generic_List_List_T___o *)0x0) {
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                         (System_Collections_Generic_List_T__o *)__this_02,
                         (MethodInfo_91F180 *)
                         MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
              local_38 = (undefined1  [8])local_68._0_8_;
              uStack_30 = local_68._8_8_;
              local_28 = local_58;
              local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
              while( true ) {
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext)
                ;
                if (!bVar6) break;
                UI_MapEditorAddVariantPopup__CreateRow(__this,local_28,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                         MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
              UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1822a1629:
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$CreateRow
// il2cpp: void UI_MapEditorAddVariantPopup__CreateRow (UI_MapEditorAddVariantPopup_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x1822a0690
// eh: try 0x1822a0874..0x1822a0d26 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822a087c: nop dword ptr [rax]
// asm:   0x1822a0c04: mov rdx, qword ptr [rip + 0x1df6d0d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1822a0c0b: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822a0c10: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822a0c15: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822a0c1a: test rcx, rcx
// asm:   0x1822a0c1d: jne 0x1822a0d26
// asm:   0x1822a0c23: mov r12, qword ptr [rsp + 0xd0]
// asm:   0x1822a0c2b: mov r13, qword ptr [rsp + 0xd8]
// asm:   0x1822a0d26: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_MapEditorAddVariantPopup__CreateRow
               (UI_MapEditorAddVariantPopup_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_02;
  UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *object;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityAction_o *__this_04;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *x;
  UnityEngine_UI_RawImage_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_Color_o *pUVar11;
  UnityEngine_Texture_o *value;
  float spacing;
  UnityEngine_Color_Fields local_78;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_object__o local_50;
  
  if (Il2CppMethodInitialized_1843474c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0_CreateRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_1843474c5 = '\x01';
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pUVar6 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_02 = UI_ElementFactory__CreateHorizontalGroup(pUVar6,spacing,3,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_68,(System_Collections_Generic_List_T__o *)items,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_50.fields._list = local_68.fields._list;
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_50,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar5) break;
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      (object->fields).item = (System_String_o *)local_50.fields._current;
      Il2CppCodeGenWriteBarrier(&(object->fields).item,local_50.fields._current);
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      __this_03 = UI_ElementFactory__InstantiateAndBind(pUVar6,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (__this_03,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                         );
      if (pUVar7 == (UnityEngine_UI_Button_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_04,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0_CreateRow_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
      pSVar8 = (*(__this->klass->vtable)._62_GetPreviewName.methodPtr)
                         (__this,(object->fields).item,(__this->klass->vtable)._62_GetPreviewName.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
      pSVar8 = System_String__Concat_1969e50("Previews/",pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      x = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(path,pSVar8,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Icon",(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar6,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        value = (UnityEngine_Texture_o *)0x0;
        if (x != (UnityEngine_Texture_o *)0x0) {
          if (x->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            value = x;
          }
          if (value == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(x,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(pUVar9,value,(MethodInfo *)0x0);
      }
      else {
        pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Icon",(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar6,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_78.r = 0.32;
        local_78.g = 0.32;
        local_78.b = 0.32;
        local_78.a = 1.0;
        (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                  (pUVar9,(UnityEngine_Color_o *)&local_78,(pUVar9->klass->vtable)._23_set_color.method);
      }
      pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar10 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar6,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,(object->fields).item,(pUVar10->klass->vtable)._75_set_text.method);
      pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar10 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar6,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar11 = UI_UIManager__GetThemeColor
                          ((UnityEngine_Color_o *)&local_68,"DefaultPanel","DefaultLabel",
                           "TextColor","DefaultPanel",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_78.r = (pUVar11->fields).r;
      local_78.g = (pUVar11->fields).g;
      local_78.b = (pUVar11->fields).b;
      local_78.a = (pUVar11->fields).a;
      (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                (pUVar10,(UnityEngine_Color_o *)&local_78,(pUVar10->klass->vtable)._23_set_color.method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_50,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    __this_01 = (__this->fields)._rows;
    if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar3->m_Items[(int)uVar2] = __this_02;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,__this_02);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__GetPreviewName (UI_MapEditorAddVariantPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1822a0d40

System_String_o *
UI_MapEditorAddVariantPopup__GetPreviewName
          (UI_MapEditorAddVariantPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843474c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    Il2CppMethodInitialized_1843474c6 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
  }
  __this_00 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)item
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    if (!bVar1) {
      pSVar2 = System_String__Concat_1969e50(item,"Preview",(MethodInfo *)0x0);
      return pSVar2;
    }
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)item,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      pSVar2 = System_String__Concat_1969e50(pSVar2,"Preview",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$OnSelectObject
// il2cpp: void UI_MapEditorAddVariantPopup__OnSelectObject (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822a0f10

void UI_MapEditorAddVariantPopup__OnSelectObject
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_1843474c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843474c7 = '\x01';
  }
  __this_00 = (GameManagers_MapEditorGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    if (((__this_00->fields).Brush == (MapEditor_MapEditorBrush_o *)0x0) ||
       (pMVar2 = (__this_00->fields).Brush, (pMVar2->fields).AssetSelectMode == false)) {
      GameManagers_MapEditorGameManager__AddObject(__this_00,name,(MethodInfo *)0x0);
label_1822a106f:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
      MapEditor_MapEditorBrush__AddEntry(pMVar2,name,(MethodInfo *)0x0);
      pMVar2 = (__this_00->fields).Brush;
      if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
        (pMVar2->fields).AssetSelectMode = false;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
          bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_MapEditorMenu);
          }
          UI_MapEditorMenu__SyncBrushPanel(__this_01,(MethodInfo *)0x0);
          goto label_1822a106f;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___ctor (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1822a1740

void UI_MapEditorAddVariantPopup___ctor(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_1843474c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843474c8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._rows = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,__this_00);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddVariantPopup___Setup_b__18_0 (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x1822a1650

void UI_MapEditorAddVariantPopup___Setup_b__18_0(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_TooltipPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843474c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843474c9 = '\x01';
  }
  if (Il2CppMethodInitialized_1843474c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843474c3 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
    if (pUVar3 != (UI_TooltipPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


