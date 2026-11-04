// Type: UI.MapPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// --------------------------------

// UI.MapPopup$$get_Title
// il2cpp: System_String_o* UI_MapPopup__get_Title (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225abd0

System_String_o * UI_MapPopup__get_Title(UI_MapPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    Il2CppMethodInitialized_1843472c8 = '\x01';
  }
  return "Map";
}


// UI.MapPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_MapPopup__get_PopupAnimationType (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_MapPopup__get_PopupAnimationType(UI_MapPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.MapPopup$$get_MinFadeAlpha
// il2cpp: float UI_MapPopup__get_MinFadeAlpha (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x1821779b0

float
UI_MapPopup__get_MinFadeAlpha(UI_MapPopup_o* __this, MethodInfo* method)

{
  return 0.5;
}


// UI.MapPopup$$get_Width
// il2cpp: float UI_MapPopup__get_Width (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225ac00

float
UI_MapPopup__get_Width(UI_MapPopup_o* __this, MethodInfo* method)

{
  return 900.0;
}


// UI.MapPopup$$get_Height
// il2cpp: float UI_MapPopup__get_Height (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225abc0

float UI_MapPopup__get_Height(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1028.0;
}


// UI.MapPopup$$Setup
// il2cpp: void UI_MapPopup__Setup (UI_MapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822591a0

void UI_MapPopup__Setup(UI_MapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  UI_MapDragArea_o *pUVar6;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_02;
  System_Action_o *__this_03;
  float width;
  float height;
  UnityEngine_Transform_o *local_res8;
  
  if (Il2CppMethodInitialized_1843472c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MapDragArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapPopup_OnDrag);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapPopup_OnEndDrag);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Zoom Out");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeaderTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameMapCoordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.map.back");
    il2cpp_codegen_initialize_runtime_metadata(&"out");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"in");
    il2cpp_codegen_initialize_runtime_metadata(&"Zoom In");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.map.zoom");
    Il2CppMethodInitialized_1843472c9 = '\x01';
  }
  (__this->fields).Parent = parent;
  local_res8 = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  width = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  height = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar1,width,height,64.0,64.0,&local_res8,&(__this->fields).BottomBar,
                         "inGameHeader",(MethodInfo *)0x0);
  pUVar1 = local_res8;
  pSVar2 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                     (__this,(__this->klass->vtable)._35_get_Title.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar1,pSVar2,360.0,54.0,"inGameHeaderTitle",(MethodInfo *)0x0);
    pTVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,local_res8,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),428.0,
                        36.0,"inGameMapCoordinates",(MethodInfo *)0x0);
    (__this->fields)._label = pTVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pTVar3);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage(__this_00,pUVar1,900.0,900.0,(MethodInfo *)0x0);
    (__this->fields)._background = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._background,pUVar4);
    pUVar4 = (__this->fields)._background;
    if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar5,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
        pUVar4 = (__this->fields)._background;
        if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          Gisketch_Aottg2UI_Game_AottgInGameView__Position
                    (pUVar1,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar4 = (__this->fields)._background;
          if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar4,true,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
            pTVar3 = (__this->fields)._label;
            if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_alignment(pTVar3,0x1004,(MethodInfo *)0x0);
              pTVar3 = (__this->fields)._label;
              if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                __this_01 = TMPro_TMP_Text__get_transform(pTVar3,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar5,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_MapDragArea);
                      __this_02 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Vector2);
                      System_Action_Vector2____ctor
                                (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapPopup_OnDrag,
                                 (MethodInfo_E5A7E0 *)0x0);
                      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,
                                 (Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapPopup_OnEndDrag,
                                 (MethodInfo *)0x0);
                      if (pUVar6 != (UI_MapDragArea_o *)0x0) {
                        (pUVar6->fields)._onDrag = (System_Action_Vector2__o *)__this_02;
                        Il2CppCodeGenWriteBarrier(&(pUVar6->fields)._onDrag,__this_02);
                        (pUVar6->fields)._onEndDrag = __this_03;
                        Il2CppCodeGenWriteBarrier(&(pUVar6->fields)._onEndDrag,__this_03);
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,(__this->fields).BottomBar,"Zoom In",
                                   "ingame.map.zoom","in",200.0,44.0,3,(MethodInfo *)0x0)
                        ;
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,(__this->fields).BottomBar,"Zoom Out",
                                   "ingame.map.zoom","out",200.0,44.0,3,(MethodInfo *)0x0)
                        ;
                        pUVar1 = (__this->fields).BottomBar;
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,pUVar1,pSVar2,"ingame.map.back",(System_String_o *)0x0,200.0,
                                   44.0,3,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.MapPopup$$Show
// il2cpp: void UI_MapPopup__Show (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x182259700

void UI_MapPopup__Show(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Cameras_BaseCamera_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843472ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843472ca = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    pUVar4 = (pCVar3->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pUVar6 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
      fVar5 = (pUVar6->fields).y;
      fVar2 = (pUVar6->fields).z;
      (__this->fields)._center.fields.x = (pUVar6->fields).x;
      (__this->fields)._center.fields.y = fVar5;
      (__this->fields)._center.fields.z = fVar2;
      (__this->fields)._needSync = true;
      (__this->fields)._syncCooldownLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapPopup$$Update
// il2cpp: void UI_MapPopup__Update (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225a6d0

void UI_MapPopup__Update(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  Cameras_BaseCamera_c *x;
  Il2CppClass *pIVar5;
  TMPro_TMP_Text_o *pTVar6;
  Settings_InputSettings_o *pSVar7;
  Settings_GeneralInputSettings_o *pSVar8;
  Settings_KeybindSetting_o *pSVar9;
  bool bVar10;
  UnityEngine_Vector3_o *pUVar11;
  System_String_array *values;
  System_String_o *pSVar12;
  float fVar13;
  float fVar14;
  undefined8 local_38;
  float local_30 [2];
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843472cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"F0");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    Il2CppMethodInitialized_1843472cb = '\x01';
  }
  local_38 = 0;
  local_30[0] = 0.0;
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 == (Cameras_BaseCamera_o *)0x0) {
label_18225aa5a:
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
     ) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
  }
  pUVar3 = (pCVar2->fields).Cache;
  if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar4 = (pUVar3->fields).Transform, pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_18225aa5a;
  pUVar11 = UnityEngine_Transform__get_position(local_28,pUVar4,(MethodInfo *)0x0);
  local_38._0_4_ = (pUVar11->fields).x;
  local_38._4_4_ = (pUVar11->fields).y;
  local_30[0] = (pUVar11->fields).z;
  x = (*(uint64_t *)((char *)pCVar2 + 0x38));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    if ((((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
        (pIVar5 = (((*(Il2CppClass **)((char *)pCVar2 + 0x38)))->_1).klass, pIVar5 == (Il2CppClass *)0x0)) ||
       (pUVar4 = (UnityEngine_Transform_o *)(pIVar5->_1).name, pUVar4 == (UnityEngine_Transform_o *)0x0))
    goto label_18225aa5a;
    pUVar11 = UnityEngine_Transform__get_position(local_28,pUVar4,(MethodInfo *)0x0);
    local_38._0_4_ = (pUVar11->fields).x;
    local_38._4_4_ = (pUVar11->fields).y;
    local_30[0] = (pUVar11->fields).z;
  }
  pTVar6 = (__this->fields)._label;
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar12 = System_Single__ToString_1b49f60((float *)&local_38,"F0",(MethodInfo *)0x0);
  if (values == (System_String_array *)0x0) goto label_18225aa5a;
  if ((int)values->max_length == 0) {
label_18225aa60:
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[0] = pSVar12;
  Il2CppCodeGenWriteBarrier(values->m_Items,pSVar12);
  pSVar12 = ", ";
  if ((uint)values->max_length < 2) goto label_18225aa60;
  values->m_Items[1] = ", ";
  Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar12);
  pSVar12 = System_Single__ToString_1b49f60
                      ((float *)((longlong)&local_38 + 4),"F0",(MethodInfo *)0x0);
  if ((uint)values->max_length < 3) goto label_18225aa60;
  values->m_Items[2] = pSVar12;
  Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar12);
  pSVar12 = ", ";
  if ((uint)values->max_length < 4) goto label_18225aa60;
  values->m_Items[3] = ", ";
  Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar12);
  pSVar12 = System_Single__ToString_1b49f60(local_30,"F0",(MethodInfo *)0x0);
  if ((uint)values->max_length < 5) goto label_18225aa60;
  values->m_Items[4] = pSVar12;
  Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar12);
  pSVar12 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
  if (pTVar6 == (TMPro_TMP_Text_o *)0x0) goto label_18225aa5a;
  (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
            (pTVar6,pSVar12,(pTVar6->klass->vtable)._66_set_text.method);
  if (Il2CppMethodInitialized_1843472cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843472cc = '\x01';
  }
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar7 == (Settings_InputSettings_o *)0x0) ||
      (pSVar8 = (pSVar7->fields).General, pSVar8 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (pSVar9 = (pSVar8->fields).ZoomIn, pSVar9 == (Settings_KeybindSetting_o *)0x0)) goto label_18225aa5a;
  bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
  if (bVar10) {
    fVar13 = (__this->fields)._height - 500.0;
  }
  else {
    pSVar9 = (pSVar8->fields).ZoomOut;
    if (pSVar9 == (Settings_KeybindSetting_o *)0x0) goto label_18225aa5a;
    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
    if (!bVar10) goto label_18225aa07;
    fVar13 = (__this->fields)._height + 500.0;
  }
  if (fVar13 <= 100.0) {
    fVar13 = 100.0;
  }
  (__this->fields)._needSync = true;
  (__this->fields)._height = fVar13;
label_18225aa07:
  fVar13 = (__this->fields)._syncCooldownLeft;
  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._syncCooldownLeft = fVar13 - fVar14;
  UI_MapPopup__SyncIfNeeded(__this,(MethodInfo *)0x0);
  UI_MapPopup__SyncIcons(__this,(MethodInfo *)0x0);
  UI_MapPopup__UpdateIcons(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$UpdateZoomInput
// il2cpp: void UI_MapPopup__UpdateZoomInput (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225a600

void UI_MapPopup__UpdateZoomInput(UI_MapPopup_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843472cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843472cc = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).ZoomIn, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
    if (bVar4) {
      fVar5 = (__this->fields)._height - 500.0;
    }
    else {
      pSVar3 = (pSVar2->fields).ZoomOut;
      if (pSVar3 == (Settings_KeybindSetting_o *)0x0) goto label_18225a6c5;
      bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      fVar5 = (__this->fields)._height + 500.0;
    }
    if (fVar5 <= 100.0) {
      fVar5 = 100.0;
    }
    (__this->fields)._needSync = true;
    (__this->fields)._height = fVar5;
    return;
  }
label_18225a6c5:
  ThrowNullReferenceException();
}


// UI.MapPopup$$SetHeight
// il2cpp: void UI_MapPopup__SetHeight (UI_MapPopup_o* __this, float height, const MethodInfo* method);
// 0x182259180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182259180: nop 

void UI_MapPopup__SetHeight(UI_MapPopup_o *__this,float height,MethodInfo *method)

{
  if (height <= 100.0) {
    height = 100.0;
  }
  (__this->fields)._needSync = true;
  (__this->fields)._height = height;
  return;
}


// UI.MapPopup$$OnDrag
// il2cpp: void UI_MapPopup__OnDrag (UI_MapPopup_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
// 0x1822590d0

void UI_MapPopup__OnDrag(UI_MapPopup_o *__this,UnityEngine_Vector2_o delta,MethodInfo *method)

{
  float fVar1;
  float fStackX_c;
  
  fVar1 = (__this->fields)._height / 900.0;
  (__this->fields)._needSync = true;
  fStackX_c = delta.fields.y;
  (__this->fields)._center.fields.x = (__this->fields)._center.fields.x - delta.fields.x * fVar1;
  (__this->fields)._center.fields.y = (__this->fields)._center.fields.y - fVar1 * 0.0;
  (__this->fields)._center.fields.z = (__this->fields)._center.fields.z - fStackX_c * fVar1;
  return;
}


// UI.MapPopup$$OnEndDrag
// il2cpp: void UI_MapPopup__OnEndDrag (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x182259150

void UI_MapPopup__OnEndDrag(UI_MapPopup_o *__this,MethodInfo *method)

{
  (__this->fields)._syncCooldownLeft = 0.0;
  UI_MapPopup__SyncIfNeeded(__this,(MethodInfo *)0x0);
  UI_MapPopup__UpdateIcons(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$SyncIfNeeded
// il2cpp: void UI_MapPopup__SyncIfNeeded (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x182259d20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182259e8c: mov rdi, qword ptr [rsp + 0x40]

void UI_MapPopup__SyncIfNeeded(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  Photon_Realtime_AppSettings_o *__this_00;
  Cameras_MinimapCamera_o *__this_01;
  UnityEngine_UI_RawImage_o *__this_02;
  float fVar2;
  bool bVar3;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843472cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843472cd = '\x01';
  }
  if (((__this->fields)._needSync != false) && ((__this->fields)._syncCooldownLeft <= 0.0)) {
    __this_00 = (Photon_Realtime_AppSettings_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
    if (__this_00 == (Photon_Realtime_AppSettings_o *)0x0) {
label_182259e97:
      ThrowNullReferenceException();
    }
    bVar3 = Photon_Realtime_AppSettings__get_IsMasterServerAddress(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      if (Il2CppMethodInitialized_1843472cf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_1843472cf = '\x01';
      }
      (__this->fields)._syncCooldownLeft = 0.1;
      __this_01 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
      if (__this_01 == (Cameras_MinimapCamera_o *)0x0) goto label_182259e97;
      local_18.fields.y = (__this->fields)._height;
      local_18.fields.x = (__this->fields)._center.fields.x;
      local_18.fields.z = (__this->fields)._center.fields.z;
      value = (UnityEngine_Texture_o *)
              Cameras_MinimapCamera__RenderMap(__this_01,&local_18,(__this->fields)._height,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        __this_02 = (__this->fields)._background;
        if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) goto label_182259e97;
        UnityEngine_UI_RawImage__set_texture(__this_02,value,(MethodInfo *)0x0);
        fVar1 = (__this->fields)._center.fields.z;
        fVar2 = (__this->fields)._center.fields.y;
        (__this->fields)._renderedCenter.fields.x = (__this->fields)._center.fields.x;
        (__this->fields)._renderedCenter.fields.y = fVar2;
        (__this->fields)._renderedCenter.fields.z = fVar1;
        (__this->fields)._renderedHeight = (__this->fields)._height;
        (__this->fields)._needSync = false;
      }
    }
  }
  return;
}


// UI.MapPopup$$UpdateIcons
// il2cpp: void UI_MapPopup__UpdateIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x182259fc0
// eh: try 0x18225a178..0x18225a5f1 -> pad 0x183324460 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225a48c: mov rdx, qword ptr [rip + 0x1e6752d]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x18225a493: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18225a498: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225a49d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18225a4a2: test rcx, rcx
// asm:   0x18225a4a5: jne 0x18225a5e5
// asm:   0x18225a4ab: mov r15, qword ptr [rsp + 0x150]
// asm:   0x18225a54c: mov rdx, qword ptr [rip + 0x1e405a5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose
// asm:   0x18225a553: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18225a558: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225a55d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18225a562: test rcx, rcx
// asm:   0x18225a565: jne 0x18225a5f1
// asm:   0x18225a5e5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18225a5f1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 

void UI_MapPopup__UpdateIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  Il2CppObject *__this_01;
  bool bVar5;
  bool bVar6;
  char cVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  UnityEngine_Transform_o *__this_03;
  Characters_BaseCharacter_o *x;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Object_o *obj;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o local_118;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_108;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_e8;
  System_Collections_Generic_List_Enumerator_object__o local_d0;
  UnityEngine_Vector3_o local_a8;
  UnityEngine_Vector3_o local_98 [10];
  
  if (Il2CppMethodInitialized_1843472ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472ce = '\x01';
  }
  local_e8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.fields._index = 0;
  local_e8.fields._version = 0;
  local_e8.fields._currentKey = (Il2CppObject *)0x0;
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._iconsToRemove;
  if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._icons;
    if (__this_00 != (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  (&local_108,__this_02,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                  );
        local_e8.fields._dictionary = local_108.fields._dictionary;
        local_e8.fields._index = local_108.fields._index;
        local_e8.fields._version = local_108.fields._version;
        local_e8.fields._currentKey = local_108.fields._currentValue;
        while( true ) {
          bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                            (&local_e8,
                             (MethodInfo_156BDD0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                            );
          __this_01 = local_e8.fields._currentKey;
          if (!bVar5) break;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar3,local_e8.fields._currentKey,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item
                                );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = false;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((UnityEngine_Transform_o *)__this_01 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            x = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_01,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              if (x == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
              cVar7 = (x->fields).Dead;
            }
            else {
              cVar7 = '\0';
            }
            bVar5 = cVar7 != '\0';
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6 || bVar5) {
            pSVar2 = (__this->fields)._iconsToRemove;
            if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar2,__this_01,MethodInfo_System_Collections_Generic_List_Transform_Add);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            obj = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
          }
          else {
            if ((UnityEngine_Transform_o *)__this_01 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar8 = UnityEngine_Transform__get_position
                               (&local_a8,(UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            fVar12 = (pUVar8->fields).x;
            fVar10 = (__this->fields)._renderedCenter.fields.x;
            pUVar8 = UnityEngine_Transform__get_position
                               (local_98,(UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            fVar11 = 900.0 / (__this->fields)._renderedHeight;
            fVar12 = (fVar12 - fVar10) * fVar11;
            if ((450.0 < ABS(fVar12)) ||
               (fVar10 = ((pUVar8->fields).z - (__this->fields)._renderedCenter.fields.z) * fVar11,
               450.0 < ABS(fVar10))) {
              if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
              if (bVar5) {
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              }
            }
            else {
              if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
              if (!bVar5) {
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              }
              local_118.fields.z = fVar11 * 0.0;
              local_118.fields.x = fVar12;
              local_118.fields.y = fVar10;
              UnityEngine_Transform__set_localPosition(__this_03,&local_118,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433de5b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_18433de5b = '\x01';
              }
              pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
              local_108.fields._dictionary =
                   *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                    &(pUVar4->identityQuaternion).fields;
              local_108.fields._index = (int32_t)(pUVar4->identityQuaternion).fields.z;
              local_108.fields._version = (int32_t)(pUVar4->identityQuaternion).fields.w;
              UnityEngine_Transform__set_rotation
                        (__this_03,(UnityEngine_Quaternion_o *)&local_108,(MethodInfo *)0x0);
            }
          }
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_e8,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                  );
        pSVar2 = (__this->fields)._iconsToRemove;
        if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_108,
                     (System_Collections_Generic_List_T__o *)pSVar2,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
          local_d0.fields._list = (System_Collections_Generic_List_T__o *)local_108.fields._dictionary;
          local_d0.fields._index = local_108.fields._index;
          local_d0.fields._version = local_108.fields._version;
          local_d0.fields._current = local_108.fields._currentValue;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_d0,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
            if (!bVar5) {
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d0,
                         MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
              return;
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar3,local_d0.fields._current,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapPopup$$Sync
// il2cpp: void UI_MapPopup__Sync (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x182259ea0

void UI_MapPopup__Sync(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  float fVar2;
  bool bVar3;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843472cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843472cf = '\x01';
  }
  (__this->fields)._syncCooldownLeft = 0.1;
  __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
  if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
    local_18.fields.y = (__this->fields)._height;
    local_18.fields.x = (__this->fields)._center.fields.x;
    local_18.fields.z = (__this->fields)._center.fields.z;
    value = (UnityEngine_Texture_o *)
            Cameras_MinimapCamera__RenderMap(__this_00,&local_18,(__this->fields)._height,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      __this_01 = (__this->fields)._background;
      if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) goto label_182259fb4;
      UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
      fVar1 = (__this->fields)._center.fields.z;
      fVar2 = (__this->fields)._center.fields.y;
      (__this->fields)._renderedCenter.fields.x = (__this->fields)._center.fields.x;
      (__this->fields)._renderedCenter.fields.y = fVar2;
      (__this->fields)._renderedCenter.fields.z = fVar1;
      (__this->fields)._renderedHeight = (__this->fields)._height;
      (__this->fields)._needSync = false;
    }
    return;
  }
label_182259fb4:
  ThrowNullReferenceException();
}


// UI.MapPopup$$SyncIcons
// il2cpp: void UI_MapPopup__SyncIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x1822597e0
// eh: try 0x1822599e0..0x182259d08 -> pad 0x183315ba0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182259ca3: mov rdx, qword ptr [rip + 0x1e67d16]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x182259caa: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x182259caf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182259cb4: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182259cb9: test rcx, rcx
// asm:   0x182259cbc: jne 0x182259d08
// asm:   0x182259d08: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void UI_MapPopup__SyncIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  UI_MinimapHandler_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_01;
  UnityEngine_UI_RawImage_o *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  Il2CppObject *x;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  Characters_BaseCharacter_o *x_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *p;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  undefined8 local_88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_80;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_1843472d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472d0 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  if (Il2CppMethodInitialized_1843472d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472d7 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
    if (pUVar1 == (UI_MinimapHandler_o *)0x0) {
label_182259d0e:
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._icons;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_04 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
      if (__this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      goto label_182259d0e;
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_78,__this_04,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                );
      local_58.fields._dictionary = local_78.fields._dictionary;
      local_58.fields._index = local_78.fields._index;
      local_58.fields._version = local_78.fields._version;
      local_58.fields._currentKey = local_78.fields._currentValue;
      local_88 = 0;
      local_80 = &local_58;
label_1822599e0:
      bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                        (&local_58,
                         (MethodInfo_156BDD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                        );
      x = local_58.fields._currentKey;
      if (bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          __this_01 = (__this->fields)._icons;
          if (__this_01 == (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,x,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ContainsKey)
          ;
          if (!bVar4) {
            if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            x_00 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)x,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter
                             );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar4) {
              if (x_00 == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((x_00->fields).Dead != false) goto label_1822599e0;
            }
            pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (__this_00,x,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item)
            ;
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar6 = UnityEngine_Object__Instantiate_object__746ba0
                               ((Il2CppObject *)pUVar6,
                                (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject);
            if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._background;
            if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) {
              ThrowNullReferenceException();
            }
            p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_a8.x = (pUVar2->zeroVector).fields.x;
            local_a8.y = (pUVar2->zeroVector).fields.y;
            local_a8.z = (pUVar2->zeroVector).fields.z;
            UnityEngine_Transform__set_localPosition
                      (pUVar5,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_98.x = (pUVar2->oneVector).fields.x;
            local_98.y = (pUVar2->oneVector).fields.y;
            local_98.z = (pUVar2->oneVector).fields.z;
            UnityEngine_Transform__set_localScale(pUVar5,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0)
            ;
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433de5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_18433de5b = '\x01';
            }
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
            local_78.fields._dictionary =
                 *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                  &(pUVar3->identityQuaternion).fields;
            local_78.fields._index = (int32_t)(pUVar3->identityQuaternion).fields.z;
            local_78.fields._version = (int32_t)(pUVar3->identityQuaternion).fields.w;
            UnityEngine_Transform__set_rotation
                      (pUVar5,(UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0);
            UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
            __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_03,x,(Il2CppObject *)pUVar5,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
          }
        }
        goto label_1822599e0;
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                );
    }
  }
  return;
}


// UI.MapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapPopup__OnBottomBarButtonClick (UI_MapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182258f60

void UI_MapPopup__OnBottomBarButtonClick(UI_MapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843472d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Minus");
    Il2CppMethodInitialized_1843472d1 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = System_String__op_Equality(name,"Plus",(MethodInfo *)0x0);
    if (bVar2) {
      fVar3 = (__this->fields)._height - 500.0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"Minus",(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      fVar3 = (__this->fields)._height + 500.0;
    }
    if (fVar3 <= 100.0) {
      fVar3 = 100.0;
    }
    (__this->fields)._needSync = true;
    (__this->fields)._height = fVar3;
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    UI_InGameMenu__SetMapMenu(__this_00,false,true,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
}


// UI.MapPopup$$.ctor
// il2cpp: void UI_MapPopup___ctor (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x18225aa70

void UI_MapPopup___ctor(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_00;
  System_Collections_Generic_List_Transform__o *__this_01;
  
  if (Il2CppMethodInitialized_1843472d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"MapPopup");
    Il2CppMethodInitialized_1843472d2 = '\x01';
  }
  (__this->fields).LocaleCategory = "MapPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"MapPopup");
  (__this->fields)._height = 2000.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
  (__this->fields)._icons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icons,__this_00);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._center.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._center.fields.y = fVar3;
  (__this->fields)._center.fields.z = fVar1;
  (__this->fields)._renderedHeight = 2000.0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._iconsToRemove = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconsToRemove,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


