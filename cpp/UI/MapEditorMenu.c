// Type: UI.MapEditorMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs
// --------------------------------

// UI.MapEditorMenu$$Setup
// il2cpp: void UI_MapEditorMenu__Setup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd040

void UI_MapEditorMenu__Setup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_MapEditorTopPanel_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843475a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorDragImage");
    Il2CppMethodInitialized_1843475a1 = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar1,true,
                      (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorTopPanel);
  (__this->fields)._topPanel = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topPanel,pUVar2);
  pUVar2 = (__this->fields)._topPanel;
  if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar3,1,1,(UnityEngine_Vector2_o)0x40a00000c0a00000,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/Misc/MapEditorDragImage",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
      (__this->fields).DragImage = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DragImage,pUVar4);
      pUVar4 = (__this->fields).DragImage;
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        UI_ElementFactory__SetAnchor
                  (pUVar3,6,6,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        pUVar4 = (__this->fields).DragImage;
        if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SetupPopups
// il2cpp: void UI_MapEditorMenu__SetupPopups (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cc6b0

void UI_MapEditorMenu__SetupPopups(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_MapEditorAddObjectPopup_o *pUVar7;
  UI_MapEditorAddVariantPopup_o *pUVar8;
  UI_MapEditorTexturePopup_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_MapEditorCameraPopup_o *pUVar11;
  UI_MapEditorInfoPopup_o *pUVar12;
  UI_MapEditorSettingsPopup_o *pUVar13;
  UI_MapEditorCustomLogicPopup_o *pUVar14;
  UI_MapEditorAddComponentPopup_o *pUVar15;
  UI_MapEditorMapObjectPickerPopup_o *pUVar16;
  UI_MapEditorErrorPopup_o *pUVar17;
  UI_MapEditorCustomAssetPopup_o *pUVar18;
  UI_MapEditorWeatherPopup_o *pUVar19;
  UI_MapEditorVersionConversionPopup_o *pUVar20;
  
  if (Il2CppMethodInitialized_1843475a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddComponentPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddObjectPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddVariantPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCameraPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomAssetPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomLogicPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorErrorPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorMapObjectPickerPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorTexturePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorVersionConversionPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorWeatherPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_1843475a2 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddObjectPopup);
  (__this->fields).AddObjectPopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddObjectPopup,pUVar7);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddVariantPopup);
  (__this->fields).AddVariantPopup = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddVariantPopup,pUVar8);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorTexturePopup);
  (__this->fields).TexturePopup = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TexturePopup,pUVar9);
  pUVar7 = (__this->fields).AddObjectPopup;
  if (pUVar7 != (UI_MapEditorAddObjectPopup_o *)0x0) {
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).TexturePopup;
    if (pUVar9 == (UI_MapEditorTexturePopup_o *)0x0) goto label_1822cd02a;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar11 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCameraPopup);
    (__this->fields).CameraPopup = pUVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CameraPopup,pUVar11);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar12 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorInfoPopup);
    (__this->fields).InfoPopup = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields).InfoPopup,pUVar12);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar13 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorSettingsPopup);
    (__this->fields).SettingsPopup = pUVar13;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SettingsPopup,pUVar13);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar14 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomLogicPopup);
    (__this->fields).CustomLogicPopup = pUVar14;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CustomLogicPopup,pUVar14);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar15 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddComponentPopup);
    (__this->fields).AddComponentPopup = pUVar15;
    Il2CppCodeGenWriteBarrier(&(__this->fields).AddComponentPopup,pUVar15);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar16 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorMapObjectPickerPopup);
    (__this->fields).MapObjectPickerPopup = pUVar16;
    Il2CppCodeGenWriteBarrier(&(__this->fields).MapObjectPickerPopup,pUVar16);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorErrorPopup);
    (__this->fields).ErrorPopup = pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ErrorPopup,pUVar17);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar18 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomAssetPopup);
    (__this->fields).CustomAssetsPopup = pUVar18;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAssetsPopup,pUVar18);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar19 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorWeatherPopup);
    (__this->fields).WeatherPopup = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherPopup,pUVar19);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar20 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorVersionConversionPopup);
    (__this->fields).VersionConversionPopup = pUVar20;
    Il2CppCodeGenWriteBarrier(&(__this->fields).VersionConversionPopup,pUVar20);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar7 = (__this->fields).AddObjectPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar8 = (__this->fields).AddVariantPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar9 = (__this->fields).TexturePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar11 = (__this->fields).CameraPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar11;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar11,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar12 = (__this->fields).InfoPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar12);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar12,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar13 = (__this->fields).SettingsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar13;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar13);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar13,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar14 = (__this->fields).CustomLogicPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar14;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar14);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar14,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar15 = (__this->fields).AddComponentPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar15;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar15);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar15,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar16 = (__this->fields).MapObjectPickerPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar16;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar16);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar16,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar17 = (__this->fields).ErrorPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar17;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar17);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar17,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar18 = (__this->fields).CustomAssetsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar18;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar18);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar18,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822cd02a;
    pUVar19 = (__this->fields).WeatherPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822cd02a;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822cd030;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar19;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar19);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar19,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar20 = (__this->fields).VersionConversionPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar20,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar20;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar20);
          return;
        }
label_1822cd030:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822cd02a:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SetDrag
// il2cpp: void UI_MapEditorMenu__SetDrag (UI_MapEditorMenu_o* __this, bool active, UnityEngine_Vector2_o start, UnityEngine_Vector2_o end, const MethodInfo* method);
// 0x1822cc470
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822cc680: subss xmm6, xmm8
// asm:   0x1822cc685: xor r8d, r8d
// asm:   0x1822cc688: subss xmm7, xmm9
// asm:   0x1822cc68d: mov rcx, rax
// asm:   0x1822cc690: unpcklps xmm6, xmm7
// asm:   0x1822cc693: movq rdx, xmm6
// asm:   0x1822cc698: call 0x182f54dd0  ; UnityEngine_RectTransform__set_sizeDelta()
// asm:   0x1822cc69d: jmp 0x1822cc53e

void UI_MapEditorMenu__SetDrag
               (UI_MapEditorMenu_o *__this,bool active,UnityEngine_Vector2_o start,UnityEngine_Vector2_o end,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UI_BaseMenu_o *__this_00;
  UnityEngine_Vector2_o value;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o value_00;
  float fVar7;
  float fVar8;
  float fStack_64;
  float fStack_5c;
  
  if (Il2CppMethodInitialized_1843475a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843475a3 = '\x01';
  }
  pUVar1 = (__this->fields).DragImage;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (active) {
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          pUVar1 = (__this->fields).DragImage;
          if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_1822cc6a2;
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        }
        fStack_5c = start.fields.y;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if ((__this_00 != (UI_BaseMenu_o *)0x0) &&
           (__this_01 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_00,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas),
           __this_01 != (UnityEngine_Canvas_o *)0x0)) {
          fVar5 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).DragImage;
          fVar6 = start.fields.x;
          fVar8 = end.fields.x;
          fVar7 = fVar6;
          if (fVar8 <= fVar6) {
            fVar7 = fVar8;
          }
          if (fVar6 <= fVar8) {
            start.fields = end.fields & 0xffffffff;
          }
          fStack_64 = end.fields.y;
          fVar6 = fStack_5c;
          if (fStack_64 <= fStack_5c) {
            fVar6 = fStack_64;
          }
          if (fStack_5c <= fStack_64) {
            fStack_5c = fStack_64;
          }
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
            value.fields.y = fVar6 / fVar5;
            value.fields.x = fVar7 / fVar5;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).DragImage;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
              value_00.fields.x = start.fields.x / fVar5 - fVar7 / fVar5;
              value_00.fields.y = fStack_5c / fVar5 - fVar6 / fVar5;
              UnityEngine_RectTransform__set_sizeDelta(pUVar4,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pUVar1 = (__this->fields).DragImage;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822cc6a2:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1822cd4a0

void UI_MapEditorMenu__ShowInspector(UI_MapEditorMenu_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_MapObject__o *objs;
  
  if (Il2CppMethodInitialized_1843475a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_1843475a4 = '\x01';
  }
  objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)objs,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (objs->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (objs->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (objs->fields)._size = uVar2 + 1;
        if ((uint)pMVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pMVar3->m_Items[(int)uVar2] = obj;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,obj);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)obj,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      UI_MapEditorMenu__ShowInspector_22cd590(__this,objs,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x1822cd590

void UI_MapEditorMenu__ShowInspector_22cd590
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UI_MapEditorInspectPanel_o *pUVar1;
  UnityEngine_RectTransform_o *rt;
  
  if (Il2CppMethodInitialized_1843475a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    Il2CppMethodInitialized_1843475a5 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,(MethodInfo *)0x0);
  if ((objs != (System_Collections_Generic_List_MapObject__o *)0x0) && ((objs->fields)._size != 0)) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = UI_ElementFactory__CreateHeadedPanel_object_
                       (parent,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel);
    (__this->fields).InspectPanel = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).InspectPanel,pUVar1);
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
      rt = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar1,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).InspectPanel;
      if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__Show_22c42a0(pUVar1,objs,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.MapEditorMenu$$RebuildInspectorPreservingScroll
// il2cpp: void UI_MapEditorMenu__RebuildInspectorPreservingScroll (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x1822cc250

void UI_MapEditorMenu__RebuildInspectorPreservingScroll
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *__this_00;
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o *routine;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843475a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475a6 = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto label_1822cc46a;
    if (Il2CppMethodInitialized_184347567 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184347567 = '\x01';
    }
    pUVar3 = (pUVar1->fields).SinglePanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (pUVar1->fields).SinglePanel;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1822cc46a;
      pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1822cc46a;
      pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1822cc46a;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    }
    else {
      __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_1822cc3a7;
    if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822cc46a;
    fVar4 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
  }
  else {
label_1822cc3a7:
    fVar4 = 1.0;
  }
  UI_MapEditorMenu__ShowInspector_22cd590(__this,objs,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) {
label_1822cc46a:
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_184347568 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88);
      Il2CppMethodInitialized_184347568 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = pUVar1;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar1);
    (routine->fields).position = fVar4;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar1,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$HideInspector
// il2cpp: void UI_MapEditorMenu__HideInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cbfb0

void UI_MapEditorMenu__HideInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843475a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475a7 = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$ShowBrushPanel
// il2cpp: void UI_MapEditorMenu__ShowBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd200

void UI_MapEditorMenu__ShowBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *parent;
  UI_MapEditorBrushPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_1843475a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorBrushPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475a8 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                       (parent,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorBrushPanel);
    (__this->fields).BrushPanel = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).BrushPanel,pUVar2);
    pUVar2 = (__this->fields).BrushPanel;
    if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_1822cd317;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).BrushPanel;
  if (pUVar2 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Show(pUVar2,(MethodInfo *)0x0);
    return;
  }
label_1822cd317:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$HideBrushPanel
// il2cpp: void UI_MapEditorMenu__HideBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cbef0

void UI_MapEditorMenu__HideBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843475a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475a9 = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    (__this->fields).BrushPanel = (UI_MapEditorBrushPanel_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).BrushPanel,(void *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$ShowRulerPanel
// il2cpp: void UI_MapEditorMenu__ShowRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd670

void UI_MapEditorMenu__ShowRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *parent;
  UI_MapEditorRulerPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_1843475aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorRulerPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475aa = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                       (parent,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorRulerPanel);
    (__this->fields).RulerPanel = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RulerPanel,pUVar2);
    pUVar2 = (__this->fields).RulerPanel;
    if (pUVar2 == (UI_MapEditorRulerPanel_o *)0x0) goto label_1822cd794;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).RulerPanel;
  if (pUVar2 != (UI_MapEditorRulerPanel_o *)0x0) {
    UI_BasePanel__Show((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
    UI_MapEditorRulerPanel__Rebuild(pUVar2,(MethodInfo *)0x0);
    return;
  }
label_1822cd794:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$HideRulerPanel
// il2cpp: void UI_MapEditorMenu__HideRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cc050

void UI_MapEditorMenu__HideRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorRulerPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843475ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475ab = '\x01';
  }
  pUVar1 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).RulerPanel;
    if (pUVar1 == (UI_MapEditorRulerPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    (__this->fields).RulerPanel = (UI_MapEditorRulerPanel_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RulerPanel,(void *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$SyncRulerPanel
// il2cpp: void UI_MapEditorMenu__SyncRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd960

void UI_MapEditorMenu__SyncRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorRulerPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475ac = '\x01';
  }
  pUVar1 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).RulerPanel;
    if (pUVar1 == (UI_MapEditorRulerPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorRulerPanel__Rebuild(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanel
// il2cpp: void UI_MapEditorMenu__SyncBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd820

void UI_MapEditorMenu__SyncBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475ad = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorBrushPanel__Rebuild(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanelValues
// il2cpp: void UI_MapEditorMenu__SyncBrushPanelValues (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd7a0

void UI_MapEditorMenu__SyncBrushPanelValues(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475ae = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorBrushPanel__SyncValues(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$SyncInspector
// il2cpp: void UI_MapEditorMenu__SyncInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd8d0

void UI_MapEditorMenu__SyncInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843475af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475af = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorMenu__ShowInspector_22cd590(__this,(pUVar1->fields)._mapObjects,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorMenu$$ShowHierarchyPanel
// il2cpp: void UI_MapEditorMenu__ShowHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd320

void UI_MapEditorMenu__ShowHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent;
  UI_MapEditorHierarchyPanel_o *pUVar3;
  UnityEngine_RectTransform_o *rt;
  
  if (Il2CppMethodInitialized_1843475b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b0 = '\x01';
  }
  pUVar3 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (__this->fields).HierarchyPanel;
    if (pUVar3 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_1822cd48c;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHeadedPanel_object_
                     (parent,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel);
  (__this->fields).HierarchyPanel = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HierarchyPanel,pUVar3);
  pUVar3 = (__this->fields).HierarchyPanel;
  if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    rt = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar3,
                    (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,true,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).HierarchyPanel;
    if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      pUVar1 = (__this->fields)._topPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._topPanel;
        if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) goto label_1822cd48c;
        UI_MapEditorTopPanel__RefreshSideToolbarPosition(pUVar1,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1822cd48c:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ApplyStretchAnchor
// il2cpp: void UI_MapEditorMenu__ApplyStretchAnchor (UI_MapEditorMenu_o* __this, UnityEngine_RectTransform_o* rt, bool isLeft, const MethodInfo* method);
// 0x1822cb9c0

void UI_MapEditorMenu__ApplyStretchAnchor
               (UI_MapEditorMenu_o *__this,UnityEngine_RectTransform_o *rt,bool isLeft,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fStackX_c;
  float fStack_54;
  
  if (Il2CppMethodInitialized_1843475b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b1 = '\x01';
  }
  pUVar1 = (__this->fields)._topPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar5 = 55.0;
  if (bVar2) {
    pUVar1 = (__this->fields)._topPanel;
    if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) goto label_1822cbbce;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_1822cbbce;
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    UVar4 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    fStackX_c = UVar3.fields.y;
    fStack_54 = UVar4.fields.y;
    fVar5 = 0.0;
    if (0.0 <= fStackX_c - fStack_54) {
      fVar5 = fStackX_c - fStack_54;
    }
  }
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(rt,(MethodInfo *)0x0);
    if (isLeft) {
      UnityEngine_RectTransform__set_anchorMin(rt,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax(rt,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
      ;
      UnityEngine_RectTransform__set_offsetMin(rt,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_offsetMax
                (rt,(UnityEngine_Vector2_o)(CONCAT44(fVar5,UVar3.fields.x) ^ 0x8000000000000000),
                 (MethodInfo *)0x0);
    }
    else {
      UnityEngine_RectTransform__set_anchorMin(rt,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax(rt,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0)
      ;
      UnityEngine_RectTransform__set_offsetMin
                (rt,(UnityEngine_Vector2_o)(((ulonglong)UVar3.fields ^ 0x80000000) & 0xffffffff),
                 (MethodInfo *)0x0);
      UnityEngine_RectTransform__set_offsetMax
                (rt,(UnityEngine_Vector2_o)((ulonglong)(uint)fVar5 << 0x20 ^ 0x8000000000000000),
                 (MethodInfo *)0x0);
    }
    return;
  }
label_1822cbbce:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SyncHierarchyPanel
// il2cpp: void UI_MapEditorMenu__SyncHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd8a0

void UI_MapEditorMenu__SyncHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).HierarchyPanel;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__Sync(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$RebuildPanels
// il2cpp: void UI_MapEditorMenu__RebuildPanels (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MapEditorMenu__RebuildPanels(UI_MapEditorMenu_o* __this, MethodInfo* method)

{
  return;
}


// UI.MapEditorMenu$$ApplyHUDScale
// il2cpp: void UI_MapEditorMenu__ApplyHUDScale (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cb830

void UI_MapEditorMenu__ApplyHUDScale(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843475b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_1843475b2 = '\x01';
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_1822cb99b;
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar5 = pUVar4;
      }
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_RectTransform);
      }
    }
    UI_MapEditorMenu__ApplyStretchAnchor(__this,pUVar5,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_1822cb99b;
    (*(pUVar1->klass->vtable)._45_RefreshContentScale.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._45_RefreshContentScale.method);
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_1822cb99b;
    UI_MapEditorHierarchyPanel__Sync(pUVar1,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar2 = (__this->fields).InspectPanel;
  if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar5 = pUVar4;
      }
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_RectTransform);
      }
    }
    UI_MapEditorMenu__ApplyStretchAnchor(__this,pUVar5,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).InspectPanel;
    if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
      (*(pUVar2->klass->vtable)._45_RefreshContentScale.methodPtr)
                (pUVar2,(pUVar2->klass->vtable)._45_RefreshContentScale.method);
      return;
    }
  }
label_1822cb99b:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$GetMinMouseX
// il2cpp: float UI_MapEditorMenu__GetMinMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cbe60

float UI_MapEditorMenu__GetMinMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843475b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b3 = '\x01';
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return 0.0;
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if (pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    fVar3 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
    return fVar3 + 10.0;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$GetMaxMouseX
// il2cpp: float UI_MapEditorMenu__GetMaxMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cbbe0

float UI_MapEditorMenu__GetMaxMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorBrushPanel_o *pUVar2;
  UI_MapEditorRulerPanel_o *pUVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *pUVar6;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_1843475b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b4 = '\x01';
  }
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar1 = (__this->fields).InspectPanel;
  fVar8 = (float)iVar5;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields).InspectPanel;
    if ((pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_1822cbd9d;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar1 = (__this->fields).InspectPanel;
      if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto label_1822cbd9d;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
      fVar8 = fVar8 - (fVar7 + 10.0);
    }
  }
  pUVar2 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields).BrushPanel;
    if ((pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_1822cbd9d;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields).BrushPanel;
      if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_1822cbd9d;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
      fVar8 = fVar8 - (fVar7 + 10.0);
    }
  }
  pUVar3 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return fVar8;
  }
  pUVar3 = (__this->fields).RulerPanel;
  if ((pUVar3 != (UI_MapEditorRulerPanel_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields).RulerPanel;
      if (pUVar3 == (UI_MapEditorRulerPanel_o *)0x0) goto label_1822cbd9d;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar3,(MethodInfo *)0x0);
      fVar8 = fVar8 - (fVar7 + 10.0);
    }
    return fVar8;
  }
label_1822cbd9d:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$GetMinMouseY
// il2cpp: float UI_MapEditorMenu__GetMinMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorMenu__GetMinMouseY(UI_MapEditorMenu_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorMenu$$GetMaxMouseY
// il2cpp: float UI_MapEditorMenu__GetMaxMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cbdb0

float UI_MapEditorMenu__GetMaxMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843475b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b5 = '\x01';
  }
  pUVar1 = (__this->fields)._topPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._topPanel;
    if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar4 = UI_BasePanel__GetPhysicalHeight((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
  }
  else {
    fVar4 = 60.0;
  }
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return (float)iVar3 - fVar4;
}


// UI.MapEditorMenu$$Update
// il2cpp: void UI_MapEditorMenu__Update (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cdc70

void UI_MapEditorMenu__Update(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843475b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475b6 = '\x01';
  }
  UI_MapEditorMenu__UpdateMouseUI(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).IsInputFocused = bVar1;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ToggleAddObjectPopup
// il2cpp: void UI_MapEditorMenu__ToggleAddObjectPopup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cd9e0

void UI_MapEditorMenu__ToggleAddObjectPopup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup_o *pUVar1;
  UI_MapEditorAddVariantPopup_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields).AddObjectPopup;
  if (pUVar1 == (UI_MapEditorAddObjectPopup_o *)0x0) goto label_1822cda88;
  if ((pUVar1->fields).IsActive == false) {
    pUVar2 = (__this->fields).AddVariantPopup;
    if (pUVar2 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_1822cda88;
    if ((pUVar2->fields).IsActive == false) {
      bVar3 = UI_MapEditorMenu__IsPopupActive(__this,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      pUVar1 = (__this->fields).AddObjectPopup;
      if (pUVar1 != (UI_MapEditorAddObjectPopup_o *)0x0) {
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
        return;
      }
      goto label_1822cda88;
    }
  }
  pUVar1 = (__this->fields).AddObjectPopup;
  if (pUVar1 != (UI_MapEditorAddObjectPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    pUVar2 = (__this->fields).AddVariantPopup;
    if (pUVar2 != (UI_MapEditorAddVariantPopup_o *)0x0) {
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_1822cda88:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$IsPopupActive
// il2cpp: bool UI_MapEditorMenu__IsPopupActive (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cc110
// eh: try 0x1822cc1b3..0x1822cc249 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822cc20e: mov rdx, qword ptr [rip + 0x1da9ae3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x1822cc215: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822cc21a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822cc21f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822cc224: test rcx, rcx
// asm:   0x1822cc227: jne 0x1822cc249
// asm:   0x1822cc229: movzx edi, byte ptr [rsp + 0x70]
// asm:   0x1822cc249: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool UI_MapEditorMenu__IsPopupActive(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  bool bVar2;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843475b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_1843475b7 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    bVar2 = false;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return bVar2;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      if (*(char *)&local_28.fields._current[9].klass != '\0') {
        bVar2 = true;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$UpdateMouseUI
// il2cpp: void UI_MapEditorMenu__UpdateMouseUI (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1822cda90

void UI_MapEditorMenu__UpdateMouseUI(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  float fVar1;
  UI_MapEditorTopPanel_o *pUVar2;
  UI_MapEditorHierarchyPanel_o *pUVar3;
  UnityEngine_Vector2_Fields screenPosition;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Vector2_Fields *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o local_48 [5];
  
  pUVar6 = (UnityEngine_Vector2_Fields *)UnityEngine_Input__get_mousePosition(local_48,(MethodInfo *)0x0);
  fVar8 = pUVar6->x;
  fVar1 = pUVar6->y;
  screenPosition = *pUVar6;
  bVar4 = UI_MapEditorMenu__IsPopupActive(__this,(MethodInfo *)0x0);
  if (bVar4) goto label_1822cdc39;
  pUVar2 = (__this->fields)._topPanel;
  if (pUVar2 == (UI_MapEditorTopPanel_o *)0x0) goto label_1822cdc64;
  bVar4 = UI_MapEditorTopPanel__IsDropdownOpen(pUVar2,(MethodInfo *)0x0);
  if (bVar4) goto label_1822cdc39;
  pUVar2 = (__this->fields)._topPanel;
  if (pUVar2 == (UI_MapEditorTopPanel_o *)0x0) goto label_1822cdc64;
  bVar4 = UI_MapEditorTopPanel__IsPointerOverSideToolbar
                    (pUVar2,(UnityEngine_Vector2_o)screenPosition,(MethodInfo *)0x0);
  if (bVar4) {
label_1822cdc39:
    bVar4 = true;
  }
  else {
    if (Il2CppMethodInitialized_1843475b3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843475b3 = '\x01';
    }
    pUVar3 = (__this->fields).HierarchyPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields).HierarchyPanel;
      if (pUVar3 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_1822cdc64;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar3,(MethodInfo *)0x0);
      fVar7 = fVar7 + 10.0;
    }
    else {
      fVar7 = 0.0;
    }
    if (fVar8 < fVar7) goto label_1822cdc39;
    fVar7 = UI_MapEditorMenu__GetMaxMouseX(__this,(MethodInfo *)0x0);
    if ((fVar7 < fVar8) || (fVar1 < 0.0)) goto label_1822cdc39;
    if (Il2CppMethodInitialized_1843475b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843475b5 = '\x01';
    }
    pUVar2 = (__this->fields)._topPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._topPanel;
      if (pUVar2 == (UI_MapEditorTopPanel_o *)0x0) goto label_1822cdc64;
      fVar8 = UI_BasePanel__GetPhysicalHeight((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
    }
    else {
      fVar8 = 60.0;
    }
    iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    bVar4 = (float)iVar5 - fVar8 < fVar1;
  }
  if (__this != (UI_MapEditorMenu_o *)0x0) {
    (__this->fields).IsMouseUI = bVar4;
    return;
  }
label_1822cdc64:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$.ctor
// il2cpp: void UI_MapEditorMenu___ctor (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void
UI_MapEditorMenu___ctor(UI_MapEditorMenu_o* __this, MethodInfo* method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


